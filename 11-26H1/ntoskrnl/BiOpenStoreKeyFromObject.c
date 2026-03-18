/*
 * XREFs of BiOpenStoreKeyFromObject @ 0x1409D49B8
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1409D496C (BiSetFirmwareModifiedFromObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x1407236B0 (ZwQueryKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     BiOpenKey @ 0x1409D5F14 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409D6368 (BiCloseKey.c)
 */

__int64 __fastcall BiOpenStoreKeyFromObject(HANDLE KeyHandle, HANDLE *a2)
{
  NTSTATUS v4; // ebx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int KeyInformation; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v8[58]; // [rsp+44h] [rbp-B4h] BYREF
  __int16 v9; // [rsp+7Eh] [rbp-7Ah]

  memset_0(&KeyInformation, 0, 0xA0uLL);
  ResultLength[0] = 160;
  *a2 = 0LL;
  if ( ((unsigned __int8)KeyHandle & 1) != 0 )
  {
    v4 = -1073741822;
  }
  else
  {
    v4 = ZwQueryKey(KeyHandle, KeyNameInformation, &KeyInformation, 0xA0u, ResultLength);
    if ( v4 >= 0 )
    {
      if ( KeyInformation < 0x4C )
        return (unsigned int)v4;
      v9 = 0;
      v4 = BiOpenKey(0LL, v8, 131103LL, a2);
      if ( v4 >= 0 )
        return (unsigned int)v4;
    }
  }
  if ( *a2 )
  {
    BiCloseKey(*a2);
    *a2 = 0LL;
  }
  return (unsigned int)v4;
}
