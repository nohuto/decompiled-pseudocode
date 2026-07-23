/*
 * XREFs of MiColorHasSlists @ 0x14041CE00
 * Callers:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiPageFreeToZero @ 0x14028B780 (MiPageFreeToZero.c)
 *     MiTradePageMarkedBad @ 0x14028DD80 (MiTradePageMarkedBad.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiColorHasSlists(int a1)
{
  return (a1 & 0x30000) == 0x30000 && (a1 & 0xC0000) == 0x40000;
}
