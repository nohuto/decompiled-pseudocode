/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x14028A7F0
 * Callers:
 *     MiConvertActiveLargePageToSmall @ 0x140206C98 (MiConvertActiveLargePageToSmall.c)
 *     MiDemoteLocalLargePage @ 0x140283A10 (MiDemoteLocalLargePage.c)
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     MiPageFreeToZero @ 0x14028B780 (MiPageFreeToZero.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140291950 (MiActivePageClaimCandidate.c)
 *     MiZeroChainWorker @ 0x1402A02A0 (MiZeroChainWorker.c)
 *     MiZeroWithUltraSpace @ 0x1402A0430 (MiZeroWithUltraSpace.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MiWalkFreeZeroListHead @ 0x140359F50 (MiWalkFreeZeroListHead.c)
 *     MiProcessPageGroupInfo @ 0x1403CDA40 (MiProcessPageGroupInfo.c)
 *     MiFreeMdlPageRun @ 0x1403CE04C (MiFreeMdlPageRun.c)
 *     MiSetPageZeroInProgress @ 0x1403CEB0C (MiSetPageZeroInProgress.c)
 *     MiBeginPageAccessor @ 0x1403CED40 (MiBeginPageAccessor.c)
 *     MiFinishLargePageFree @ 0x1403CFEB0 (MiFinishLargePageFree.c)
 *     MiLargePageHasNoDanglingReferences @ 0x1403D00CC (MiLargePageHasNoDanglingReferences.c)
 *     MiInsertPossiblyBadPage @ 0x1403D04D4 (MiInsertPossiblyBadPage.c)
 *     MiGetFastLargePages @ 0x1403D0A5C (MiGetFastLargePages.c)
 *     MiFreeLargePages @ 0x1403D0F00 (MiFreeLargePages.c)
 *     MiLargePfnPromoteCandidate @ 0x1403D3470 (MiLargePfnPromoteCandidate.c)
 *     MiFindContiguousPagesLarge @ 0x1403D366C (MiFindContiguousPagesLarge.c)
 *     MiFindLargeNodePage @ 0x1403D3884 (MiFindLargeNodePage.c)
 *     MiDemoteLargeFreePage @ 0x14042B4F0 (MiDemoteLargeFreePage.c)
 *     MiInsertDemotedPages @ 0x14042B7D0 (MiInsertDemotedPages.c)
 *     MiLargePagePromote @ 0x140473560 (MiLargePagePromote.c)
 *     MiStopPageAccessor @ 0x140487B48 (MiStopPageAccessor.c)
 *     MiMirrorRemoveInactivePages @ 0x1404C4D10 (MiMirrorRemoveInactivePages.c)
 *     MiGetBaseResidentPageForBugCheck @ 0x1404C5050 (MiGetBaseResidentPageForBugCheck.c)
 *     MiConvertLargeFreePageToActive @ 0x1404C8DD8 (MiConvertLargeFreePageToActive.c)
 *     MiNextPhysicallyContiguousPfnWorthTrying @ 0x1404D94C0 (MiNextPhysicallyContiguousPfnWorthTrying.c)
 *     MiTryUnlinkNodeLargePages @ 0x140520D5C (MiTryUnlinkNodeLargePages.c)
 *     MiInitializeFoundLargeNodePage @ 0x1406EF99C (MiInitializeFoundLargeNodePage.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1406F3000 (MiInitializeLargeMdlLeafPfns.c)
 *     MiMakeMdlPfnsDesiredSize @ 0x1406F36C0 (MiMakeMdlPfnsDesiredSize.c)
 *     MiMoveHibernatePageFreeToZero @ 0x1406F4C70 (MiMoveHibernatePageFreeToZero.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406F4F60 (MiUpdateLargePageSectionPfns.c)
 *     MiSetPfnRemovalRequested @ 0x1406F6A08 (MiSetPfnRemovalRequested.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiFreeContiguousLargePageRun @ 0x140706440 (MiFreeContiguousLargePageRun.c)
 *     MiGetPagesRemainingInResidentPage @ 0x140708004 (MiGetPagesRemainingInResidentPage.c)
 *     MiChangePagesPartitionId @ 0x14070D318 (MiChangePagesPartitionId.c)
 *     MiTransferPartitionPageRun @ 0x14070E734 (MiTransferPartitionPageRun.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14070FFD8 (MiCoalesceActivePagesIntoFree.c)
 *     MiCanPageBeScrubbed @ 0x140710AE0 (MiCanPageBeScrubbed.c)
 *     MiMovePageToFreeList @ 0x140711EC0 (MiMovePageToFreeList.c)
 *     MiPartitionTransferAllocateLargePages @ 0x140882E30 (MiPartitionTransferAllocateLargePages.c)
 *     MiScrubLargePageRegions @ 0x140AC8350 (MiScrubLargePageRegions.c)
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C069D4 (MiAddPostHibernateZeroPagesToBitmap.c)
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
