/*
 * XREFs of MiCacheAttributeHasValue @ 0x140471720
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402844A0 (MiDemoteLocalLargePage.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCacheAttributeHasValue(int a1)
{
  return a1 == 1 || a1 == 2;
}
