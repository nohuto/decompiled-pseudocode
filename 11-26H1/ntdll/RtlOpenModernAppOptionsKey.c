/*
 * XREFs of RtlOpenModernAppOptionsKey @ 0x180108040
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 */

NTSTATUS __fastcall RtlOpenModernAppOptionsKey(_UNICODE_STRING *a1, void *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( RtlpModernAppKey )
  {
    *a3 = RtlpModernAppKey;
    return 0;
  }
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&RtlpModernAppKey, (signed __int64)KeyHandle, 0LL) )
      NtClose(KeyHandle);
    *a3 = RtlpModernAppKey;
    return 0;
  }
  return result;
}
