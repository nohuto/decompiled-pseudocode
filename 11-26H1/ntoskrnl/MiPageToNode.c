/*
 * XREFs of MiPageToNode @ 0x140288C70
 * Callers:
 *     MiGetPartitionNodeInformation @ 0x14025A7B8 (MiGetPartitionNodeInformation.c)
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287000 (MiGetPageChainSmallPageProcess.c)
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiPageFreeToZero @ 0x14028B780 (MiPageFreeToZero.c)
 *     MiTradePageMarkedBad @ 0x14028DD80 (MiTradePageMarkedBad.c)
 *     MiGetPageToTrade @ 0x140294740 (MiGetPageToTrade.c)
 *     MiReplaceLockedPage @ 0x140294BC4 (MiReplaceLockedPage.c)
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 *     MiZeroAndConvertPage @ 0x1402A0A00 (MiZeroAndConvertPage.c)
 *     MiPfnBestZeroAttribute @ 0x1402A0DFC (MiPfnBestZeroAttribute.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiMapContiguousMemoryLarge @ 0x1402A1EFC (MiMapContiguousMemoryLarge.c)
 *     MiPruneStandbyPages @ 0x1402AA540 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1402AB91C (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MiInsertSecondaryListStandbyPage @ 0x1402ABC50 (MiInsertSecondaryListStandbyPage.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402AC370 (MiReplaceSecondaryListStandbyPage.c)
 *     MiSharedInsertPfnChainInList @ 0x1402AFEC0 (MiSharedInsertPfnChainInList.c)
 *     MiSynchronizeFastPageInsert @ 0x1402B0720 (MiSynchronizeFastPageInsert.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MmSetPfnListInfo @ 0x1402D4250 (MmSetPfnListInfo.c)
 *     MiReplenishUltraPageTables @ 0x1402D64DC (MiReplenishUltraPageTables.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiUnlinkStandbyPage @ 0x1402DBCA0 (MiUnlinkStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402DE320 (MiFindSuitableLookasideReplacement.c)
 *     MiReplaceTransitionPageInList @ 0x1402DE8B0 (MiReplaceTransitionPageInList.c)
 *     MiTradePageMarkedTransition @ 0x1402DF640 (MiTradePageMarkedTransition.c)
 *     MiSharePagesLockPageTable @ 0x1402E932C (MiSharePagesLockPageTable.c)
 *     MiHandleForkValidPteCopy @ 0x1402EFB58 (MiHandleForkValidPteCopy.c)
 *     MiDemoteSlabEntriesDpc @ 0x140308810 (MiDemoteSlabEntriesDpc.c)
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiAllocateMdlPagesByLists @ 0x14033A004 (MiAllocateMdlPagesByLists.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MiFreeSlabPage @ 0x14036B368 (MiFreeSlabPage.c)
 *     MiAllocatePageFileReadResources @ 0x1403737A8 (MiAllocatePageFileReadResources.c)
 *     MiCheckSlabPage @ 0x14038C61C (MiCheckSlabPage.c)
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     MiZeroAndReleasePages @ 0x1403CDB20 (MiZeroAndReleasePages.c)
 *     MiBeginPageAccessor @ 0x1403CED40 (MiBeginPageAccessor.c)
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     MiDeleteClusterPage @ 0x1403D0168 (MiDeleteClusterPage.c)
 *     MiFreeLargePages @ 0x1403D0F00 (MiFreeLargePages.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403D1950 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiCoalesceFreeLargePages @ 0x1403D3124 (MiCoalesceFreeLargePages.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x1403D4C70 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiStoreCheckCandidatePage @ 0x1403FD488 (MiStoreCheckCandidatePage.c)
 *     MiModwriterAssignPageFileAddresses @ 0x140400260 (MiModwriterAssignPageFileAddresses.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     MiKernelShadowStackIdealForCaching @ 0x14040B330 (MiKernelShadowStackIdealForCaching.c)
 *     MiDemoteLargeFreePage @ 0x14042B4F0 (MiDemoteLargeFreePage.c)
 *     MiRecordLargePageCandidate @ 0x1404409A0 (MiRecordLargePageCandidate.c)
 *     MiDrainZeroLookasides @ 0x140457D20 (MiDrainZeroLookasides.c)
 *     MiPurgePartitionStandby @ 0x140461F1C (MiPurgePartitionStandby.c)
 *     MiLargePagePromote @ 0x140473560 (MiLargePagePromote.c)
 *     MiHugeRangeFreeToZero @ 0x1404878B0 (MiHugeRangeFreeToZero.c)
 *     MiStopPageAccessor @ 0x140487B48 (MiStopPageAccessor.c)
 *     MiUnlinkHugeRangeEx @ 0x140487ED8 (MiUnlinkHugeRangeEx.c)
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C18CC (MiFinalizeImageHeaderPage.c)
 *     MiUpdatePageAttributeStamp @ 0x1404C69C8 (MiUpdatePageAttributeStamp.c)
 *     MiGetEnclavePageList @ 0x1404D7A44 (MiGetEnclavePageList.c)
 *     MiNextPhysicallyContiguousPfnWorthTrying @ 0x1404D94C0 (MiNextPhysicallyContiguousPfnWorthTrying.c)
 *     MiQueryPteAddResidentAttributes @ 0x1404E2D34 (MiQueryPteAddResidentAttributes.c)
 *     MiSoftFaultClusterTradeInitialize @ 0x140502088 (MiSoftFaultClusterTradeInitialize.c)
 *     MiInitializeMdlBatchPages @ 0x14050888C (MiInitializeMdlBatchPages.c)
 *     MiCreateIoPfnNode @ 0x14050B570 (MiCreateIoPfnNode.c)
 *     MiReturnPhysicalPoolPages @ 0x140520550 (MiReturnPhysicalPoolPages.c)
 *     MiTryUnlinkNodeLargePages @ 0x140520D5C (MiTryUnlinkNodeLargePages.c)
 *     MiAddExpansionNonPagedPool @ 0x140523104 (MiAddExpansionNonPagedPool.c)
 *     MiAllocateBadPagesForMdl @ 0x140526C24 (MiAllocateBadPagesForMdl.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x14053141C (MiCanBeginHugeIoPageAccessor.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140534804 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiEnableNewPfns @ 0x1406ED114 (MiEnableNewPfns.c)
 *     MiHotRemoveHugeRange @ 0x1406F0BA4 (MiHotRemoveHugeRange.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x1406F1D1C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406F1EB0 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 *     MiUpdateHugePageCounts @ 0x1406F2AC0 (MiUpdateHugePageCounts.c)
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x1406F2B2C (MiUpdateHugeRangeZeroFreeBitmap.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1406F32E0 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiMoveHibernatePageFreeToZero @ 0x1406F4C70 (MiMoveHibernatePageFreeToZero.c)
 *     MiSetPfnRemovalRequested @ 0x1406F6A08 (MiSetPfnRemovalRequested.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiPrefetchPreallocatePages @ 0x1406FBE0C (MiPrefetchPreallocatePages.c)
 *     MiGroupZeroHugeRange @ 0x140709CF4 (MiGroupZeroHugeRange.c)
 *     MiHugePageOperation @ 0x140709E08 (MiHugePageOperation.c)
 *     MiSoloZeroHugeRange @ 0x14070A054 (MiSoloZeroHugeRange.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14070EB10 (MiUpdatePartitionChildPageCounts.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14070FFD8 (MiCoalesceActivePagesIntoFree.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x140711E2C (MiMoveBadPageChargesCrossPartition.c)
 *     MiMovePageToFreeList @ 0x140711EC0 (MiMovePageToFreeList.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140716898 (MiFreeLargeProcessPagesToCache.c)
 *     MiAddPhysicalMemoryChunks @ 0x14086B848 (MiAddPhysicalMemoryChunks.c)
 *     MiCreateDynamicPfns @ 0x14086C278 (MiCreateDynamicPfns.c)
 *     MiDescribePageRun @ 0x14086C5E8 (MiDescribePageRun.c)
 *     MiMapNewPfns @ 0x14086CA54 (MiMapNewPfns.c)
 *     MiAddRuns @ 0x14086DE30 (MiAddRuns.c)
 *     MxInsertFreePages @ 0x140CFD680 (MxInsertFreePages.c)
 *     MxMapPfnRange @ 0x140CFE128 (MxMapPfnRange.c)
 *     MxMarkPfnChannelHot @ 0x140CFE504 (MxMarkPfnChannelHot.c)
 *     MxInsertEnclaveBootPages @ 0x140D0350C (MxInsertEnclaveBootPages.c)
 *     MiCreateKernelHalSlabRange @ 0x140D04620 (MiCreateKernelHalSlabRange.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140D04838 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MmUpdateSlabRangeType @ 0x140D04B0C (MmUpdateSlabRangeType.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR BugCheckParameter2)
{
  int v2; // eax
  char *v3; // rcx
  int i; // r8d
  int v6; // r9d
  __int64 v7; // rdx

  v2 = dword_140E2D804;
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v3 = (char *)qword_140E2D860 + 16 * dword_140E2D800, BugCheckParameter2 < *(_QWORD *)v3)
    || dword_140E2D800 != dword_140E2D804 && BugCheckParameter2 >= *((_QWORD *)v3 + 2) )
  {
    for ( i = 0; ; i = v6 + 1 )
    {
      while ( 1 )
      {
        if ( v2 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v6 = (i + v2) >> 1;
        v7 = 16LL * v6;
        v3 = (char *)qword_140E2D860 + v7;
        if ( BugCheckParameter2 >= *(_QWORD *)((char *)qword_140E2D860 + v7) )
          break;
        if ( !v6 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2D860 + v7, 0LL);
        v2 = v6 - 1;
      }
      if ( v6 == dword_140E2D804 || BugCheckParameter2 < *((_QWORD *)v3 + 2) )
        break;
    }
    dword_140E2D800 = (i + v2) >> 1;
  }
  return *((unsigned int *)v3 + 2);
}
