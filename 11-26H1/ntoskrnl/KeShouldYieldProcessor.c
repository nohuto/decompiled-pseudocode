/*
 * XREFs of KeShouldYieldProcessor @ 0x1402D49D0
 * Callers:
 *     MiConvertActiveLargePageToSmall @ 0x140206BB8 (MiConvertActiveLargePageToSmall.c)
 *     MiGetPageChain @ 0x140285DD0 (MiGetPageChain.c)
 *     MiDemoteSlabEntriesDpc @ 0x1402BDB50 (MiDemoteSlabEntriesDpc.c)
 *     MiCountSharedPages @ 0x1402D0E10 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1402D28A0 (MiGetWorkingSetInfoList.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiReferenceIoPages @ 0x1402EFF98 (MiReferenceIoPages.c)
 *     MiSectionProtectAllPtes @ 0x140303F00 (MiSectionProtectAllPtes.c)
 *     MiQueryAddressSpan @ 0x140304F70 (MiQueryAddressSpan.c)
 *     MiQueryAddressState @ 0x140305180 (MiQueryAddressState.c)
 *     MiProbePacketContended @ 0x140306770 (MiProbePacketContended.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x140306B00 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiSharePagesYield @ 0x1403070E0 (MiSharePagesYield.c)
 *     IopMcShouldYield @ 0x14030D338 (IopMcShouldYield.c)
 *     MiMapUserLargePages @ 0x14030FD60 (MiMapUserLargePages.c)
 *     MiCommitVadFillPageTables @ 0x140310ED0 (MiCommitVadFillPageTables.c)
 *     MiProtectGoodCitizen @ 0x140311404 (MiProtectGoodCitizen.c)
 *     MiComputePageCommitment @ 0x140311CE0 (MiComputePageCommitment.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140312684 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDereferenceIoPages @ 0x1403132CC (MiDereferenceIoPages.c)
 *     MiInsertViewOfPhysicalSection @ 0x140315954 (MiInsertViewOfPhysicalSection.c)
 *     MiWalkPtesForWriteWatchState @ 0x1403178F8 (MiWalkPtesForWriteWatchState.c)
 *     MiGetPageChainYield @ 0x140318260 (MiGetPageChainYield.c)
 *     MiMoveDirtyBitsToPfns @ 0x140319470 (MiMoveDirtyBitsToPfns.c)
 *     MiUnlockMdlWritePages @ 0x14031D67C (MiUnlockMdlWritePages.c)
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiDecommitRemoveEnclaveAcquireLocks @ 0x140341128 (MiDecommitRemoveEnclaveAcquireLocks.c)
 *     MiCommitEnclavePages @ 0x140341288 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403414DC (MiAddPagesToEnclave.c)
 *     MiWalkFreeZeroListHead @ 0x1403581B0 (MiWalkFreeZeroListHead.c)
 *     MiClearNonPagedPtes @ 0x1403633B8 (MiClearNonPagedPtes.c)
 *     MiCommitPoolMemory @ 0x140364AE0 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x1403652A0 (MiFillPoolCommitPageTable.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14036672C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiChangePageAttributeBatch @ 0x140368E1C (MiChangePageAttributeBatch.c)
 *     MiDispatchFault @ 0x1403A3E60 (MiDispatchFault.c)
 *     MiSoftFaultMappedView @ 0x1403BB610 (MiSoftFaultMappedView.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403C5A90 (MiConvertSmallPageRangeToLarge.c)
 *     MiStoreWriteIssue @ 0x140407EF8 (MiStoreWriteIssue.c)
 *     MiConvertLargeActivePageToChain @ 0x14040A4E0 (MiConvertLargeActivePageToChain.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     MiPurgeSubsection @ 0x140422170 (MiPurgeSubsection.c)
 *     MiWritePageFileHash @ 0x140470698 (MiWritePageFileHash.c)
 *     MiPruneUnusedList @ 0x14048F610 (MiPruneUnusedList.c)
 *     MiConvertLargeFreePageToActive @ 0x1404CF3A8 (MiConvertLargeFreePageToActive.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E72E8 (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x1404F4AF0 (MiVadRangeIsIoSpace.c)
 *     MiDecrementLargeSubsections @ 0x140505D08 (MiDecrementLargeSubsections.c)
 *     MiHugePurgeZeroList @ 0x1405190A8 (MiHugePurgeZeroList.c)
 *     MiProtectEnclavePages @ 0x140519CE0 (MiProtectEnclavePages.c)
 *     MiArePageContentsZero @ 0x140520384 (MiArePageContentsZero.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405EBEAC (KeAlertMultipleThreadByThreadId.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406ED210 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 *     MiDeleteStaleCacheMaps @ 0x1406F3AF0 (MiDeleteStaleCacheMaps.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x1406F4C48 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiEnableLargeSubsection @ 0x1406F99BC (MiEnableLargeSubsection.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407004D4 (MiQueryVaPhysicalContiguity.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140700C48 (MiBuildPhysicalPageFreeChain.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x140701D6C (MiPreparePhysicalPagesMdlForFree.c)
 *     MiSoloZeroHugeRange @ 0x140705384 (MiSoloZeroHugeRange.c)
 *     MiTransferPartitionPageRun @ 0x140709A80 (MiTransferPartitionPageRun.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14070B50C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14070C03C (MiScrubLargeMappedPage.c)
 *     MiZeroPageCalibrateDpc @ 0x140711360 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     EtwTraceShouldYieldProcessor @ 0x1403142E8 (EtwTraceShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rax
  LOGICAL v1; // ebx
  int v2; // r8d
  __int64 v3; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // ebp
  _KTHREAD *NextThread; // rcx
  unsigned int v9; // esi
  struct _KPRCB *v10; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v12; // eax
  __int64 v13; // rdx
  unsigned __int32 v14; // ett

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v9 = 1;
    v2 = 1;
    if ( DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
        goto LABEL_9;
      goto LABEL_15;
    }
    goto LABEL_6;
  }
  if ( !CurrentPrcb->NestingLevel )
  {
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v9 = 2;
      goto LABEL_9;
    }
    if ( CurrentPrcb->QuantumEnd )
    {
      v9 = 3;
      goto LABEL_9;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v9 = 4;
      goto LABEL_9;
    }
LABEL_6:
    if ( DpcWatchdogCount <= 7 )
      return 0;
    if ( !v2 )
    {
LABEL_25:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      v10 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)v10->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v12 = *SchedulerAssist;
        do
        {
          v13 = v12;
          LODWORD(v13) = v12 & 0xFFDFFFFF;
          v14 = v12;
          v12 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v12 & 0xFFDFFFFF, v12);
        }
        while ( v14 != v12 );
        if ( (v12 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v10, v13, SchedulerAssist, v3);
      }
      _enable();
      v9 = 0;
      goto LABEL_9;
    }
    goto LABEL_15;
  }
  v3 = 1LL;
  if ( DpcWatchdogCount <= 7 )
    return 0;
  if ( CurrentPrcb->QuantumEnd )
  {
    v9 = 7;
    goto LABEL_9;
  }
LABEL_15:
  if ( (DpcRequestSummary & 0x1E) == 0 )
  {
    if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
    {
      v9 = 6;
      goto LABEL_9;
    }
    goto LABEL_25;
  }
  v9 = 5;
LABEL_9:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v9, DpcWatchdogCount, DpcTimeCount, v3);
  LOBYTE(v1) = v9 != 0;
  return v1;
}
