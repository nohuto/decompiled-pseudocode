/*
 * XREFs of VslVerifyPage @ 0x1405C4380
 * Callers:
 *     CcBcbProfiler @ 0x140540030 (CcBcbProfiler.c)
 *     sub_14077F830 @ 0x14077F830 (sub_14077F830.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslVerifyPage(__int64 a1, int a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  int v7; // [rsp+30h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  v6 = a1;
  v7 = (a2 & 1) != 0;
  if ( a2 >= 0 )
    return VslpEnterIumSecureMode(2u, 0x114u, 0, (__int64)v5);
  v7 = ((a2 & 1) != 0) | 2;
  if ( a1 )
    return VslpEnterIumSecureMode(2u, 0x114u, 0, (__int64)v5);
  else
    return 0LL;
}
