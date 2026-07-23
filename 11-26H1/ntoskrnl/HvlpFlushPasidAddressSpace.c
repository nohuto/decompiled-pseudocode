/*
 * XREFs of HvlpFlushPasidAddressSpace @ 0x1405C121C
 * Callers:
 *     HvlFlushPasid @ 0x1404D39A0 (HvlFlushPasid.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1405C1330 (HvlpSlowFlushPasidAddressList.c)
 * Callees:
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlpFlushPasidAddressSpace(int a1, int a2)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v4; // [rsp+38h] [rbp-10h]

  v3[1] = a1;
  v3[0] = a2;
  v4 = 0LL;
  return HvcallFastExtended(65696LL, (unsigned __int64)v3, 0x10u, 0LL, 0);
}
