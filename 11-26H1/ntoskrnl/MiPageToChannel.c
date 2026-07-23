/*
 * XREFs of MiPageToChannel @ 0x140294DD0
 * Callers:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiReplaceLockedPage @ 0x140294BC4 (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiUnlinkHugeRangeEx @ 0x140487ED8 (MiUnlinkHugeRangeEx.c)
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     MiTryUnlinkNodeLargePages @ 0x140520D5C (MiTryUnlinkNodeLargePages.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140534804 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x1406F2B2C (MiUpdateHugeRangeZeroFreeBitmap.c)
 *     MiDescribePageRun @ 0x14086C5E8 (MiDescribePageRun.c)
 *     MxMarkPfnChannelHot @ 0x140CFE504 (MxMarkPfnChannelHot.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 */

char __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140E2D868 )
    return *(_BYTE *)(MiSearchChannelTable(a1) + 12);
  else
    return 0;
}
