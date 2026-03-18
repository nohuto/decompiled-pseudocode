/*
 * XREFs of HvlFlushPasid @ 0x1404DA2C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpFastFlushPasidAddressList @ 0x1404DA2FC (HvlpFastFlushPasidAddressList.c)
 *     HvlpFlushPasidAddressSpace @ 0x1405BE9AC (HvlpFlushPasidAddressSpace.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1405BEAC0 (HvlpSlowFlushPasidAddressList.c)
 */

__int64 __fastcall HvlFlushPasid(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 - 1 > 0x1FD )
    return HvlpFlushPasidAddressSpace();
  if ( a3 > 0xC )
    return HvlpSlowFlushPasidAddressList(a1);
  return HvlpFastFlushPasidAddressList(a1);
}
