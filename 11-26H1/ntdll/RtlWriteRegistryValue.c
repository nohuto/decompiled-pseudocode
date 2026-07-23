/*
 * XREFs of RtlWriteRegistryValue @ 0x1801063C0
 * Callers:
 *     RtlpSetTimeZoneInformationWorker @ 0x18012398C (RtlpSetTimeZoneInformationWorker.c)
 *     RtlSetPortableOperatingSystem @ 0x180141B70 (RtlSetPortableOperatingSystem.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180044C38 (RtlpGetRegistryHandle.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwSetValueKey @ 0x18015FA30 (ZwSetValueKey.c)
 */

NTSTATUS __cdecl RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS result; // eax
  ULONG v10; // ebx
  size_t v11; // rax
  NTSTATUS v12; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING ValueNamea; // [rsp+38h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    v10 = ValueType & 0xFFFFFF;
    *(_QWORD *)&ValueNamea.Length = 0LL;
    ValueNamea.Buffer = (wchar_t *)ValueName;
    if ( ValueName )
    {
      v11 = 2 * wcslen(ValueName);
      if ( v11 >= 0xFFFE )
        LOWORD(v11) = -4;
      ValueNamea.Length = v11;
      ValueNamea.MaximumLength = v11 + 2;
    }
    v12 = ZwSetValueKey(KeyHandle, &ValueNamea, 0, v10, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      NtClose(KeyHandle);
    return v12;
  }
  return result;
}
