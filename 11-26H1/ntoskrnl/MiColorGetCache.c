/*
 * XREFs of MiColorGetCache @ 0x140289A00
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402844A0 (MiDemoteLocalLargePage.c)
 *     MiGetBestPageFromNode @ 0x140288750 (MiGetBestPageFromNode.c)
 *     MiUpdateZeroFreeBitmap @ 0x1402897F0 (MiUpdateZeroFreeBitmap.c)
 *     MiFreeZeroPageSlistSufficient @ 0x1402898A0 (MiFreeZeroPageSlistSufficient.c)
 *     MiGetPerfectColorHeadPage @ 0x140289A30 (MiGetPerfectColorHeadPage.c)
 *     MiRemovePageAnyColor @ 0x14028A000 (MiRemovePageAnyColor.c)
 *     MiReplenishPageSlist @ 0x14028A710 (MiReplenishPageSlist.c)
 *     MiGetPageSlist @ 0x14028B310 (MiGetPageSlist.c)
 *     MiPageFreeToZero @ 0x14028C220 (MiPageFreeToZero.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028C8F4 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFreeZeroPageToColorHead @ 0x14028DDE0 (MiFreeZeroPageToColorHead.c)
 *     MiInsertFreeZeroPage @ 0x1402DCE70 (MiInsertFreeZeroPage.c)
 *     MiGetBestPageToZero @ 0x1403C497C (MiGetBestPageToZero.c)
 *     MiSetPageZeroInProgress @ 0x1403C4C00 (MiSetPageZeroInProgress.c)
 *     MiDrainZeroLookasides @ 0x14045E180 (MiDrainZeroLookasides.c)
 *     MiInsertHugeRangeInList @ 0x14048E66C (MiInsertHugeRangeInList.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404F2E34 (MiGetSingleHugeRangeToZero.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140532364 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x1406EBC70 (MiGetPerfectColorHeadHugeRange.c)
 *     MiRemoveHugeRangeAnyColor @ 0x1406ED810 (MiRemoveHugeRangeAnyColor.c)
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x1406EDE8C (MiUpdateHugeRangeZeroFreeBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiColorGetCache(unsigned int a1)
{
  return (unsigned __int8)a1 % (unsigned int)dword_140E2D780[HIWORD(a1) & 3];
}
