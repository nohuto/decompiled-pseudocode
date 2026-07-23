/*
 * XREFs of MiColorGetCache @ 0x140288F60
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140283A10 (MiDemoteLocalLargePage.c)
 *     MiGetBestPageFromNode @ 0x140287CB0 (MiGetBestPageFromNode.c)
 *     MiUpdateZeroFreeBitmap @ 0x140288D50 (MiUpdateZeroFreeBitmap.c)
 *     MiFreeZeroPageSlistSufficient @ 0x140288E00 (MiFreeZeroPageSlistSufficient.c)
 *     MiGetPerfectColorHeadPage @ 0x140288F90 (MiGetPerfectColorHeadPage.c)
 *     MiRemovePageAnyColor @ 0x140289560 (MiRemovePageAnyColor.c)
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiGetPageSlist @ 0x14028A870 (MiGetPageSlist.c)
 *     MiPageFreeToZero @ 0x14028B780 (MiPageFreeToZero.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFreeZeroPageToColorHead @ 0x14028D340 (MiFreeZeroPageToColorHead.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MiGetBestPageToZero @ 0x1403CE888 (MiGetBestPageToZero.c)
 *     MiSetPageZeroInProgress @ 0x1403CEB0C (MiSetPageZeroInProgress.c)
 *     MiDrainZeroLookasides @ 0x140457D20 (MiDrainZeroLookasides.c)
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404EC414 (MiGetSingleHugeRangeToZero.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140534804 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x1406F0910 (MiGetPerfectColorHeadHugeRange.c)
 *     MiRemoveHugeRangeAnyColor @ 0x1406F24B0 (MiRemoveHugeRangeAnyColor.c)
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x1406F2B2C (MiUpdateHugeRangeZeroFreeBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiColorGetCache(unsigned int a1)
{
  return (unsigned __int8)a1 % (unsigned int)dword_140E2D900[HIWORD(a1) & 3];
}
