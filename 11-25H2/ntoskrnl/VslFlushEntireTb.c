/*
 * XREFs of VslFlushEntireTb @ 0x140589948
 * Callers:
 *     HvlFlushTbAllPartitions @ 0x140270B80 (HvlFlushTbAllPartitions.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 VslFlushEntireTb()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(3u, 0, 0, (__int64)v1);
}
