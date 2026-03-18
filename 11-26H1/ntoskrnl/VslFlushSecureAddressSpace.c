/*
 * XREFs of VslFlushSecureAddressSpace @ 0x1404A28FC
 * Callers:
 *     HvlFlushRangeListTb @ 0x14032B100 (HvlFlushRangeListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1403E7DF8 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 VslFlushSecureAddressSpace()
{
  _BYTE v1[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v2; // [rsp+28h] [rbp-80h]

  memset_0(v1, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
    return 255LL;
  v2 = KeGetCurrentThread()->ApcState.Process->SecureState.EntireField & 0xFFFFFFFFFFFFFFFCuLL;
  return VslpEnterIumSecureMode(2u, 0x100u, 0, (__int64)v1);
}
