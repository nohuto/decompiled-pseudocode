/*
 * XREFs of ExpReadComPlusPackage @ 0x140B461F0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 */

__int64 ExpReadComPlusPackage()
{
  signed __int32 v0; // edi
  NTSTATUS v1; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+40h] [rbp-20h] BYREF
  int v6; // [rsp+50h] [rbp-10h]

  v6 = 0;
  ResultLength = 0;
  KeyValueInformation = 0LL;
  KeyHandle = 0LL;
  v0 = 0;
  v1 = ZwOpenKey(&KeyHandle, 1u, &stru_140E090D0);
  if ( v1 >= 0 )
  {
    v1 = ZwQueryValueKey(
           KeyHandle,
           &stru_140E090B0,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength);
    if ( v1 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      v0 = HIDWORD(KeyValueInformation);
    ZwClose(KeyHandle);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(MmWriteableSharedUserData + 736), v0, -1);
  if ( (int)(v1 + 0x80000000) < 0 || v1 == -1073741772 )
    return 0;
  return (unsigned int)v1;
}
