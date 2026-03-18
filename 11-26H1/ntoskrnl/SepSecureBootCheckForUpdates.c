/*
 * XREFs of SepSecureBootCheckForUpdates @ 0x140CDE0A4
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140CDDE10 (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     NtUpdateWnfStateData @ 0x14094A860 (NtUpdateWnfStateData.c)
 */

NTSTATUS SepSecureBootCheckForUpdates()
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+40h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  int v5; // [rsp+90h] [rbp+47h]

  KeyHandle = 0LL;
  v5 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ResultLength = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyValueInformation = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_14000D6F0,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL && HIDWORD(KeyValueInformation) )
      result = NtUpdateWnfStateData(&WNF_SBS_UPDATE_AVAILABLE, 0LL, 0LL, 0LL, 0LL, 0, 0);
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
