/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x14028B290
 * Callers:
 *     MiConvertActiveLargePageToSmall @ 0x140206BB8 (MiConvertActiveLargePageToSmall.c)
 *     MiDemoteLocalLargePage @ 0x1402844A0 (MiDemoteLocalLargePage.c)
 *     MiReplenishPageSlist @ 0x14028A710 (MiReplenishPageSlist.c)
 *     MiProbeUnlockPage @ 0x14028B900 (MiProbeUnlockPage.c)
 *     MiPageFreeToZero @ 0x14028C220 (MiPageFreeToZero.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028C8F4 (MiUnlinkFreeOrZeroedPage.c)
 *     MiTradePage @ 0x140291970 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x1402923F0 (MiActivePageClaimCandidate.c)
 *     MiZeroChainWorker @ 0x1402A0D50 (MiZeroChainWorker.c)
 *     MiZeroWithUltraSpace @ 0x1402A0EE0 (MiZeroWithUltraSpace.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiInsertFreeZeroPage @ 0x1402DCE70 (MiInsertFreeZeroPage.c)
 *     MiWalkFreeZeroListHead @ 0x1403581B0 (MiWalkFreeZeroListHead.c)
 *     MiProcessPageGroupInfo @ 0x1403C3B34 (MiProcessPageGroupInfo.c)
 *     MiFreeMdlPageRun @ 0x1403C4140 (MiFreeMdlPageRun.c)
 *     MiSetPageZeroInProgress @ 0x1403C4C00 (MiSetPageZeroInProgress.c)
 *     MiBeginPageAccessor @ 0x1403C4E34 (MiBeginPageAccessor.c)
 *     MiFinishLargePageFree @ 0x1403C5FB0 (MiFinishLargePageFree.c)
 *     MiLargePageHasNoDanglingReferences @ 0x1403C61CC (MiLargePageHasNoDanglingReferences.c)
 *     MiInsertPossiblyBadPage @ 0x1403C65E0 (MiInsertPossiblyBadPage.c)
 *     MiGetFastLargePages @ 0x1403C6B68 (MiGetFastLargePages.c)
 *     MiFreeLargePages @ 0x1403C700C (MiFreeLargePages.c)
 *     MiLargePfnPromoteCandidate @ 0x1403C95C0 (MiLargePfnPromoteCandidate.c)
 *     MiFindContiguousPagesLarge @ 0x1403C97BC (MiFindContiguousPagesLarge.c)
 *     MiFindLargeNodePage @ 0x1403C99D4 (MiFindLargeNodePage.c)
 *     MiDemoteLargeFreePage @ 0x140434410 (MiDemoteLargeFreePage.c)
 *     MiInsertDemotedPages @ 0x1404346F0 (MiInsertDemotedPages.c)
 *     MiLargePagePromote @ 0x140479C00 (MiLargePagePromote.c)
 *     MiStopPageAccessor @ 0x14048E008 (MiStopPageAccessor.c)
 *     MiMirrorRemoveInactivePages @ 0x1404CB2E0 (MiMirrorRemoveInactivePages.c)
 *     MiGetBaseResidentPageForBugCheck @ 0x1404CB620 (MiGetBaseResidentPageForBugCheck.c)
 *     MiConvertLargeFreePageToActive @ 0x1404CF3A8 (MiConvertLargeFreePageToActive.c)
 *     MiNextPhysicallyContiguousPfnWorthTrying @ 0x1404DFDE0 (MiNextPhysicallyContiguousPfnWorthTrying.c)
 *     MiTryUnlinkNodeLargePages @ 0x14051E74C (MiTryUnlinkNodeLargePages.c)
 *     MiInitializeFoundLargeNodePage @ 0x1406EACFC (MiInitializeFoundLargeNodePage.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1406EE360 (MiInitializeLargeMdlLeafPfns.c)
 *     MiMakeMdlPfnsDesiredSize @ 0x1406EEA20 (MiMakeMdlPfnsDesiredSize.c)
 *     MiMoveHibernatePageFreeToZero @ 0x1406F0000 (MiMoveHibernatePageFreeToZero.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406F02F0 (MiUpdateLargePageSectionPfns.c)
 *     MiSetPfnRemovalRequested @ 0x1406F1D98 (MiSetPfnRemovalRequested.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiFreeContiguousLargePageRun @ 0x140701770 (MiFreeContiguousLargePageRun.c)
 *     MiGetPagesRemainingInResidentPage @ 0x140703334 (MiGetPagesRemainingInResidentPage.c)
 *     MiChangePagesPartitionId @ 0x140708664 (MiChangePagesPartitionId.c)
 *     MiTransferPartitionPageRun @ 0x140709A80 (MiTransferPartitionPageRun.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14070B328 (MiCoalesceActivePagesIntoFree.c)
 *     MiCanPageBeScrubbed @ 0x14070BE30 (MiCanPageBeScrubbed.c)
 *     MiMovePageToFreeList @ 0x14070D210 (MiMovePageToFreeList.c)
 *     MiPartitionTransferAllocateLargePages @ 0x14087CA30 (MiPartitionTransferAllocateLargePages.c)
 *     MiScrubLargePageRegions @ 0x140AC675C (MiScrubLargePageRegions.c)
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C007C4 (MiAddPostHibernateZeroPagesToBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPageSizeIndex(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) == 0 )
    return 3LL;
  result = 3 - ((*(_DWORD *)(a1 + 36) >> 27) & 3u);
  if ( (_DWORD)result == 3 )
    return 3LL;
  return result;
}
