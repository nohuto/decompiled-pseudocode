/*
 * XREFs of MiCacheAttributeHasValue @ 0x14046AEA0
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140283A10 (MiDemoteLocalLargePage.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCacheAttributeHasValue(int a1)
{
  return a1 == 1 || a1 == 2;
}
