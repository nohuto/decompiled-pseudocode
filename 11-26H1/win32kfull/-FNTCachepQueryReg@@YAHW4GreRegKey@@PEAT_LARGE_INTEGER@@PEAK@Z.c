/*
 * XREFs of ?FNTCachepQueryReg@@YAHW4GreRegKey@@PEAT_LARGE_INTEGER@@PEAK@Z @ 0x1401C6574
 * Callers:
 *     ?FNTCachepInit@@YAXPEBG@Z @ 0x1401C5E88 (-FNTCachepInit@@YAXPEBG@Z.c)
 * Callees:
 *     ?GrepGetRegKey@@YAJPEAPEAXKW4GreRegKey@@@Z @ 0x1401C6450 (-GrepGetRegKey@@YAJPEAPEAXKW4GreRegKey@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall FNTCachepQueryReg(int a1, _QWORD *a2, _DWORD *a3)
{
  int RegKey; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  _OWORD KeyInformation[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+60h] [rbp-20h]

  *a3 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v10 = 0LL;
  RegKey = GrepGetRegKey(&KeyHandle, 0x20019u, a1);
  if ( RegKey >= 0 )
  {
    RegKey = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( RegKey >= 0 )
    {
      *a3 = v10;
      *a2 = *(_QWORD *)&KeyInformation[0];
    }
    ZwClose(KeyHandle);
  }
  return RegKey >= 0;
}
