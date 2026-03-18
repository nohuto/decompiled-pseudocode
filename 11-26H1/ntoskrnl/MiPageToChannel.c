/*
 * XREFs of MiPageToChannel @ 0x140295870
 * Callers:
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiReplaceLockedPage @ 0x140295664 (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiUnlinkHugeRangeEx @ 0x14048E398 (MiUnlinkHugeRangeEx.c)
 *     MiInsertHugeRangeInList @ 0x14048E66C (MiInsertHugeRangeInList.c)
 *     MiTryUnlinkNodeLargePages @ 0x14051E74C (MiTryUnlinkNodeLargePages.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140532364 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x1406EDE8C (MiUpdateHugeRangeZeroFreeBitmap.c)
 *     MiDescribePageRun @ 0x140866208 (MiDescribePageRun.c)
 *     MxMarkPfnChannelHot @ 0x140CF8184 (MxMarkPfnChannelHot.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402CBEE8 (MiSearchChannelTable.c)
 */

char __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140E2D6E8 )
    return *(_BYTE *)(MiSearchChannelTable(a1) + 12);
  else
    return 0;
}
