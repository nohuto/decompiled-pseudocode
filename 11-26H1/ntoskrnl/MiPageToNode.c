/*
 * XREFs of MiPageToNode @ 0x140289710
 * Callers:
 *     MiGetPartitionNodeInformation @ 0x140258FD8 (MiGetPartitionNodeInformation.c)
 *     MiGetPageChain @ 0x140285DD0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287AA0 (MiGetPageChainSmallPageProcess.c)
 *     MiReplenishPageSlist @ 0x14028A710 (MiReplenishPageSlist.c)
 *     MiPageFreeToZero @ 0x14028C220 (MiPageFreeToZero.c)
 *     MiTradePageMarkedBad @ 0x14028E820 (MiTradePageMarkedBad.c)
 *     MiGetPageToTrade @ 0x1402951E0 (MiGetPageToTrade.c)
 *     MiReplaceLockedPage @ 0x140295664 (MiReplaceLockedPage.c)
 *     MiUnlinkProtoPages @ 0x140297A00 (MiUnlinkProtoPages.c)
 *     MiZeroAndConvertPage @ 0x1402A14B0 (MiZeroAndConvertPage.c)
 *     MiPfnBestZeroAttribute @ 0x1402A18AC (MiPfnBestZeroAttribute.c)
 *     MiZeroLargePage @ 0x1402A1A04 (MiZeroLargePage.c)
 *     MiMapContiguousMemoryLarge @ 0x1402A29AC (MiMapContiguousMemoryLarge.c)
 *     MiDemoteSlabEntriesDpc @ 0x1402BDB50 (MiDemoteSlabEntriesDpc.c)
 *     MiPruneStandbyPages @ 0x1402C8780 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1402C9B5C (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MiInsertSecondaryListStandbyPage @ 0x1402C9E90 (MiInsertSecondaryListStandbyPage.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402CA5B0 (MiReplaceSecondaryListStandbyPage.c)
 *     MiSharedInsertPfnChainInList @ 0x1402CE100 (MiSharedInsertPfnChainInList.c)
 *     MiSynchronizeFastPageInsert @ 0x1402CE960 (MiSynchronizeFastPageInsert.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MmSetPfnListInfo @ 0x1402F21D0 (MmSetPfnListInfo.c)
 *     MiReplenishUltraPageTables @ 0x1402F445C (MiReplenishUltraPageTables.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiUnlinkStandbyPage @ 0x1402F9C20 (MiUnlinkStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402FA410 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402FC2A0 (MiFindSuitableLookasideReplacement.c)
 *     MiReplaceTransitionPageInList @ 0x1402FC830 (MiReplaceTransitionPageInList.c)
 *     MiTradePageMarkedTransition @ 0x1402FD5C0 (MiTradePageMarkedTransition.c)
 *     MiSharePagesLockPageTable @ 0x1403072AC (MiSharePagesLockPageTable.c)
 *     MiHandleForkValidPteCopy @ 0x14030DAD8 (MiHandleForkValidPteCopy.c)
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiAllocateMdlPagesByLists @ 0x140337F84 (MiAllocateMdlPagesByLists.c)
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 *     MiFreeSlabPage @ 0x1403695C8 (MiFreeSlabPage.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     MiCheckSlabPage @ 0x14038A86C (MiCheckSlabPage.c)
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     MiZeroAndReleasePages @ 0x1403C3C14 (MiZeroAndReleasePages.c)
 *     MiBeginPageAccessor @ 0x1403C4E34 (MiBeginPageAccessor.c)
 *     MiFreeLargePageMemory @ 0x1403C52E8 (MiFreeLargePageMemory.c)
 *     MiDeleteClusterPage @ 0x1403C6268 (MiDeleteClusterPage.c)
 *     MiFreeLargePages @ 0x1403C700C (MiFreeLargePages.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403C7A60 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiCoalesceFreeLargePages @ 0x1403C9274 (MiCoalesceFreeLargePages.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x1403D1CA0 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiStoreCheckCandidatePage @ 0x140404388 (MiStoreCheckCandidatePage.c)
 *     MiModwriterAssignPageFileAddresses @ 0x140407170 (MiModwriterAssignPageFileAddresses.c)
 *     MmDeleteKernelStack @ 0x1404162AC (MmDeleteKernelStack.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140416D20 (MiKernelShadowStackIdealForCaching.c)
 *     MiDemoteLargeFreePage @ 0x140434410 (MiDemoteLargeFreePage.c)
 *     MiRecordLargePageCandidate @ 0x140447EB0 (MiRecordLargePageCandidate.c)
 *     MiDrainZeroLookasides @ 0x14045E180 (MiDrainZeroLookasides.c)
 *     MiPurgePartitionStandby @ 0x14046886C (MiPurgePartitionStandby.c)
 *     MiLargePagePromote @ 0x140479C00 (MiLargePagePromote.c)
 *     MiHugeRangeFreeToZero @ 0x14048DD70 (MiHugeRangeFreeToZero.c)
 *     MiStopPageAccessor @ 0x14048E008 (MiStopPageAccessor.c)
 *     MiUnlinkHugeRangeEx @ 0x14048E398 (MiUnlinkHugeRangeEx.c)
 *     MiInsertHugeRangeInList @ 0x14048E66C (MiInsertHugeRangeInList.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C7B8C (MiFinalizeImageHeaderPage.c)
 *     MiUpdatePageAttributeStamp @ 0x1404CD228 (MiUpdatePageAttributeStamp.c)
 *     MiGetEnclavePageList @ 0x1404DE364 (MiGetEnclavePageList.c)
 *     MiNextPhysicallyContiguousPfnWorthTrying @ 0x1404DFDE0 (MiNextPhysicallyContiguousPfnWorthTrying.c)
 *     MiQueryPteAddResidentAttributes @ 0x1404E9984 (MiQueryPteAddResidentAttributes.c)
 *     MiSoftFaultClusterTradeInitialize @ 0x1405085E0 (MiSoftFaultClusterTradeInitialize.c)
 *     MiInitializeMdlBatchPages @ 0x14050EE1C (MiInitializeMdlBatchPages.c)
 *     MiCreateIoPfnNode @ 0x140511B00 (MiCreateIoPfnNode.c)
 *     MiReturnPhysicalPoolPages @ 0x14051DF40 (MiReturnPhysicalPoolPages.c)
 *     MiTryUnlinkNodeLargePages @ 0x14051E74C (MiTryUnlinkNodeLargePages.c)
 *     MiAddExpansionNonPagedPool @ 0x140520A60 (MiAddExpansionNonPagedPool.c)
 *     MiAllocateBadPagesForMdl @ 0x1405245B4 (MiAllocateBadPagesForMdl.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x14052EEFC (MiCanBeginHugeIoPageAccessor.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140532364 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiEnableNewPfns @ 0x1406E8478 (MiEnableNewPfns.c)
 *     MiHotRemoveHugeRange @ 0x1406EBF04 (MiHotRemoveHugeRange.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x1406ED07C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406ED210 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 *     MiUpdateHugePageCounts @ 0x1406EDE20 (MiUpdateHugePageCounts.c)
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x1406EDE8C (MiUpdateHugeRangeZeroFreeBitmap.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1406EE640 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiMoveHibernatePageFreeToZero @ 0x1406F0000 (MiMoveHibernatePageFreeToZero.c)
 *     MiSetPfnRemovalRequested @ 0x1406F1D98 (MiSetPfnRemovalRequested.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiPrefetchPreallocatePages @ 0x1406F719C (MiPrefetchPreallocatePages.c)
 *     MiGroupZeroHugeRange @ 0x140705024 (MiGroupZeroHugeRange.c)
 *     MiHugePageOperation @ 0x140705138 (MiHugePageOperation.c)
 *     MiSoloZeroHugeRange @ 0x140705384 (MiSoloZeroHugeRange.c)
 *     MiUpdatePartitionChildPageCounts @ 0x140709E5C (MiUpdatePartitionChildPageCounts.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14070B328 (MiCoalesceActivePagesIntoFree.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x14070D17C (MiMoveBadPageChargesCrossPartition.c)
 *     MiMovePageToFreeList @ 0x14070D210 (MiMovePageToFreeList.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140711B98 (MiFreeLargeProcessPagesToCache.c)
 *     MiAddPhysicalMemoryChunks @ 0x140865468 (MiAddPhysicalMemoryChunks.c)
 *     MiCreateDynamicPfns @ 0x140865E98 (MiCreateDynamicPfns.c)
 *     MiDescribePageRun @ 0x140866208 (MiDescribePageRun.c)
 *     MiMapNewPfns @ 0x140866674 (MiMapNewPfns.c)
 *     MiAddRuns @ 0x140867A50 (MiAddRuns.c)
 *     MxInsertFreePages @ 0x140CF7300 (MxInsertFreePages.c)
 *     MxMapPfnRange @ 0x140CF7DA8 (MxMapPfnRange.c)
 *     MxMarkPfnChannelHot @ 0x140CF8184 (MxMarkPfnChannelHot.c)
 *     MxInsertEnclaveBootPages @ 0x140CFD18C (MxInsertEnclaveBootPages.c)
 *     MiCreateKernelHalSlabRange @ 0x140CFE280 (MiCreateKernelHalSlabRange.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140CFE498 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MmUpdateSlabRangeType @ 0x140CFE76C (MmUpdateSlabRangeType.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR BugCheckParameter2)
{
  int v2; // eax
  char *v3; // rcx
  int i; // r8d
  int v6; // r9d
  __int64 v7; // rdx

  v2 = dword_140E2D684;
  if ( dword_140E2D680 > (unsigned int)dword_140E2D684
    || (v3 = (char *)qword_140E2D6E0 + 16 * dword_140E2D680, BugCheckParameter2 < *(_QWORD *)v3)
    || dword_140E2D680 != dword_140E2D684 && BugCheckParameter2 >= *((_QWORD *)v3 + 2) )
  {
    for ( i = 0; ; i = v6 + 1 )
    {
      while ( 1 )
      {
        if ( v2 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v6 = (i + v2) >> 1;
        v7 = 16LL * v6;
        v3 = (char *)qword_140E2D6E0 + v7;
        if ( BugCheckParameter2 >= *(_QWORD *)((char *)qword_140E2D6E0 + v7) )
          break;
        if ( !v6 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2D6E0 + v7, 0LL);
        v2 = v6 - 1;
      }
      if ( v6 == dword_140E2D684 || BugCheckParameter2 < *((_QWORD *)v3 + 2) )
        break;
    }
    dword_140E2D680 = (i + v2) >> 1;
  }
  return *((unsigned int *)v3 + 2);
}
