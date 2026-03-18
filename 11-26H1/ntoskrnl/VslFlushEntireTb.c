/*
 * XREFs of VslFlushEntireTb @ 0x140251968
 * Callers:
 *     HvlFlushTbAllPartitions @ 0x14024FE70 (HvlFlushTbAllPartitions.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 VslFlushEntireTb()
{
  __int64 v0; // rcx
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v2, 0, 0x68uLL);
  LOBYTE(v0) = 3;
  return VslpEnterIumSecureMode(v0, 0LL, 0LL, v2);
}
