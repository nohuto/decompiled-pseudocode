/*
 * XREFs of VslVerifyPage @ 0x14058B220
 * Callers:
 *     CcBcbProfiler @ 0x140505560 (CcBcbProfiler.c)
 *     sub_1406F0690 @ 0x1406F0690 (sub_1406F0690.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
    return VslpEnterIumSecureMode(2u, 0x105u, 0, (__int64)v5);
  v7 = ((a2 & 1) != 0) | 2;
  if ( a1 )
    return VslpEnterIumSecureMode(2u, 0x105u, 0, (__int64)v5);
  else
    return 0LL;
}
