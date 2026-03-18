/*
 * XREFs of MiColorHasSlists @ 0x14042FDD0
 * Callers:
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiPageFreeToZero @ 0x14028C220 (MiPageFreeToZero.c)
 *     MiTradePageMarkedBad @ 0x14028E820 (MiTradePageMarkedBad.c)
 *     MiInsertFreeZeroPage @ 0x1402DCE70 (MiInsertFreeZeroPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiColorHasSlists(int a1)
{
  return (a1 & 0x30000) == 0x30000 && (a1 & 0xC0000) == 0x40000;
}
