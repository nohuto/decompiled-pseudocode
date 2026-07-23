/*
 * XREFs of RtlpSetTimeZoneInformationWorker @ 0x18012398C
 * Callers:
 *     RtlSetDynamicTimeZoneInformation @ 0x180141C20 (RtlSetDynamicTimeZoneInformation.c)
 *     RtlSetTimeZoneInformation @ 0x180141C30 (RtlSetTimeZoneInformation.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180044C38 (RtlpGetRegistryHandle.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1800FC048 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlWriteRegistryValue @ 0x1801063C0 (RtlWriteRegistryValue.c)
 *     wcsnlen @ 0x18012DAB0 (wcsnlen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwSetValueKey @ 0x18015FA30 (ZwSetValueKey.c)
 */

int __fastcall RtlpSetTimeZoneInformationWorker(wchar_t *ValueData, unsigned int a2)
{
  char *v2; // r14
  size_t v5; // rax
  int v6; // r15d
  size_t v7; // rax
  int v8; // r13d
  size_t v9; // rax
  int v10; // ebx
  int result; // eax
  int RegistryHandle; // ebx
  HANDLE *p_KeyHandle; // rax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+80h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+50h] BYREF
  PCWSTR Path; // [rsp+98h] [rbp+58h] BYREF

  v2 = (char *)(ValueData + 2);
  Path = 0LL;
  v5 = wcsnlen(ValueData + 2, 0x20uLL);
  v6 = v5;
  if ( v5 >= 0x20 )
    return -1073741811;
  v7 = wcsnlen(ValueData + 44, 0x20uLL);
  v8 = v7;
  if ( v7 >= 0x20 )
    return -1073741811;
  if ( a2 < 0x1B0 )
  {
    v10 = 0;
  }
  else
  {
    v9 = wcsnlen(ValueData + 86, 0x80uLL);
    v10 = v9;
    if ( v9 >= 0x80 )
      return -1073741811;
  }
  result = RtlpGetTimeZoneInfoHandle(1, (HANDLE *)&Path);
  if ( result >= 0 )
  {
    if ( RtlWriteRegistryValue(0x40000000u, Path, L"Bias", 4u, ValueData, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardName", 1u, v2, 2 * v6 + 2) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardBias", 4u, ValueData + 42, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardStart", 3u, ValueData + 34, 0x10u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightName", 1u, ValueData + 44, 2 * v8 + 2) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightBias", 4u, ValueData + 84, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightStart", 3u, ValueData + 76, 0x10u) < 0
      || a2 < 0x1B0 )
    {
      LOWORD(Data) = 0;
      KeyHandle = 0LL;
      DestinationString = 0LL;
      RegistryHandle = RtlpGetRegistryHandle(0x40000000, Path, 1, &KeyHandle);
      if ( RegistryHandle < 0 )
        goto LABEL_23;
      RtlInitUnicodeString(&DestinationString, L"TimeZoneKeyName");
      RegistryHandle = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, &Data, 2u);
      if ( RegistryHandle < 0 )
        goto LABEL_23;
      LODWORD(KeyHandle) = *((unsigned __int8 *)ValueData + 428);
      p_KeyHandle = &KeyHandle;
    }
    else
    {
      RegistryHandle = RtlWriteRegistryValue(0x40000000u, Path, L"TimeZoneKeyName", 1u, ValueData + 86, 2 * v10 + 2);
      if ( RegistryHandle < 0 )
      {
LABEL_23:
        NtClose((HANDLE)Path);
        return RegistryHandle;
      }
      Data = *((unsigned __int8 *)ValueData + 428);
      p_KeyHandle = (HANDLE *)&Data;
    }
    RegistryHandle = RtlWriteRegistryValue(0x40000000u, Path, L"DynamicDaylightTimeDisabled", 4u, p_KeyHandle, 4u);
    goto LABEL_23;
  }
  return result;
}
