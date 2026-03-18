/*
 * XREFs of ExAcquireSpinLockShared @ 0x1402EDF10
 * Callers:
 *     IopQueueWorkItemProlog @ 0x140202F00 (IopQueueWorkItemProlog.c)
 *     IopFindDiskIoAttribution @ 0x140207870 (IopFindDiskIoAttribution.c)
 *     ExProtectPoolEx @ 0x14024CE7C (ExProtectPoolEx.c)
 *     PsGetNextPartitionUnsafe @ 0x14025839C (PsGetNextPartitionUnsafe.c)
 *     MiGetPartitionNodeInformation @ 0x140258FD8 (MiGetPartitionNodeInformation.c)
 *     PfSnGetFileInformation @ 0x140265CF0 (PfSnGetFileInformation.c)
 *     IoPageReadEx @ 0x14026BD90 (IoPageReadEx.c)
 *     IoReferenceIoAttributionFromThread @ 0x14026CAD0 (IoReferenceIoAttributionFromThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026CD00 (IoSetDiskIoAttributionFromThread.c)
 *     PsGetEffectiveContainerId @ 0x14026E950 (PsGetEffectiveContainerId.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14026EDA0 (IopSetDiskIoAttributionFromProcess.c)
 *     MiKernelStackVaToStackNode @ 0x1402A2024 (MiKernelStackVaToStackNode.c)
 *     MiGetControlAreaPtes @ 0x1402E3790 (MiGetControlAreaPtes.c)
 *     MiGetPageFromSlabAllocator @ 0x14033A4BC (MiGetPageFromSlabAllocator.c)
 *     ExRemovePoolTag @ 0x1403447D0 (ExRemovePoolTag.c)
 *     ExpCheckForResource @ 0x140344B48 (ExpCheckForResource.c)
 *     RtlpHpAcquireLockShared @ 0x140349FDC (RtlpHpAcquireLockShared.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1403513A4 (RtlpCSparseBitmapPageCommit.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x140357750 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     RtlpHpAllocVA @ 0x140364350 (RtlpHpAllocVA.c)
 *     MiStartingOffsetNeedLock @ 0x14036D190 (MiStartingOffsetNeedLock.c)
 *     IoQueueWorkItemEx @ 0x1403819A0 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItem @ 0x140382430 (IoQueueWorkItem.c)
 *     MiCheckSlabPage @ 0x14038A86C (MiCheckSlabPage.c)
 *     MiApplyDebuggerPatches @ 0x14038C7F8 (MiApplyDebuggerPatches.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14038ED10 (MiReferenceControlAreaFileWithTag.c)
 *     PopPepProcessEvent @ 0x1403AFCF0 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x1403B1784 (PopPepComponentSetLatency.c)
 *     PopPepLockActivityLink @ 0x1403B3A70 (PopPepLockActivityLink.c)
 *     PopFxLockDevice @ 0x1403B74A4 (PopFxLockDevice.c)
 *     MmUnmapReservedMapping @ 0x1403C1C70 (MmUnmapReservedMapping.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1403CB24C (SepGetSingletonEntryFromIndexNumber.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiObtainParkedCoreMasks @ 0x1403E9CF8 (MiObtainParkedCoreMasks.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403F54DC (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     MiPageFileLargestBitmapsRun @ 0x140405994 (MiPageFileLargestBitmapsRun.c)
 *     MiFindFreePageFileSpace @ 0x140405E3C (MiFindFreePageFileSpace.c)
 *     IoTryReleasePages @ 0x140411820 (IoTryReleasePages.c)
 *     MiReferenceControlAreaFile @ 0x140448EB0 (MiReferenceControlAreaFile.c)
 *     MiReturnLockedVadOrNextVa @ 0x14044E7E0 (MiReturnLockedVadOrNextVa.c)
 *     InsertEventEntryInLookUpTable @ 0x140459DC4 (InsertEventEntryInLookUpTable.c)
 *     PsGetWorkOnBehalfThread @ 0x14045F7E0 (PsGetWorkOnBehalfThread.c)
 *     MiTrimSection @ 0x1404651E0 (MiTrimSection.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140467C50 (IopReferenceIoAttributionFromProcess.c)
 *     MiLocateCombineBlock @ 0x1404698E0 (MiLocateCombineBlock.c)
 *     MiAgeAweRegions @ 0x140476420 (MiAgeAweRegions.c)
 *     HalpIommuFlushDmaDomain @ 0x14047B404 (HalpIommuFlushDmaDomain.c)
 *     IommupHvFlushDomainTbs @ 0x14047BC18 (IommupHvFlushDomainTbs.c)
 *     VmpPrefetchVirtualAddresses @ 0x14049B1E8 (VmpPrefetchVirtualAddresses.c)
 *     MiGetChannelInformation @ 0x1404A43F4 (MiGetChannelInformation.c)
 *     MiComputeHardAgingPercent @ 0x1404B1DCC (MiComputeHardAgingPercent.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404B5970 (MmMapLockedPagesWithReservedMapping.c)
 *     MiWorkingSetManager @ 0x1404BE000 (MiWorkingSetManager.c)
 *     VmColdPagesHint @ 0x1404BE180 (VmColdPagesHint.c)
 *     MiPurgeSlabEntries @ 0x1404C1C3C (MiPurgeSlabEntries.c)
 *     MiPartitionTrimmedEnough @ 0x1404C212C (MiPartitionTrimmedEnough.c)
 *     MiComputeUnusedSegmentReduction @ 0x1404C475C (MiComputeUnusedSegmentReduction.c)
 *     VmpSplitMemoryRange @ 0x1404C8B68 (VmpSplitMemoryRange.c)
 *     MiIsCalibrationWorthwhile @ 0x1404CACF0 (MiIsCalibrationWorthwhile.c)
 *     MiCreateCommit @ 0x1404CF830 (MiCreateCommit.c)
 *     MiReferencePfBackedSection @ 0x1404D1764 (MiReferencePfBackedSection.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x1404D1FF4 (PopPepGetDevicePlatformStateDependents.c)
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404DC920 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1404E5274 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepGetComponentVetoMasks @ 0x1404E8120 (PopPepGetComponentVetoMasks.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1404EBE80 (MiAbsorbPossibleEngineChanges.c)
 *     MiGenerateAccessViolation @ 0x1404ED878 (MiGenerateAccessViolation.c)
 *     MiGetPrivatePageCount @ 0x1404EE528 (MiGetPrivatePageCount.c)
 *     PopPepGetDeviceVetoMasks @ 0x1404F4CE8 (PopPepGetDeviceVetoMasks.c)
 *     MiUpdateEngineAffinities @ 0x1404FDD1C (MiUpdateEngineAffinities.c)
 *     MiInitializeCachedExtentWalker @ 0x1405044E8 (MiInitializeCachedExtentWalker.c)
 *     MiTransientPageListWriter @ 0x14050BC30 (MiTransientPageListWriter.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiGetOptimalEngineMix @ 0x140510C58 (MiGetOptimalEngineMix.c)
 *     MiSuitableZeroingProcessorAvailable @ 0x1405280BC (MiSuitableZeroingProcessorAvailable.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140529F94 (SepValidateAndCopyGlobalEntry.c)
 *     MiGetListOfPendingBadPages @ 0x14052AB58 (MiGetListOfPendingBadPages.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x14052D548 (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     IommupDomainDetachPasidDevice @ 0x140588288 (IommupDomainDetachPasidDevice.c)
 *     HalpQueryNumaRangeTableInformation @ 0x140592A90 (HalpQueryNumaRangeTableInformation.c)
 *     PopPepPlatformStateRegistered @ 0x140611864 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140611AE4 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140615D38 (PspJobIoRateVolumeEntryReference.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x140647E80 (ViIrpDatabaseAcquireLockShared.c)
 *     VmpAccessFaultBatch @ 0x1406C09D0 (VmpAccessFaultBatch.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x1406C1C10 (VmpUpdateCommitStateMemoryRange.c)
 *     VmpPinMemoryRanges @ 0x1406C1F74 (VmpPinMemoryRanges.c)
 *     MiReleasePartitionHugeIoSpace @ 0x1406ED674 (MiReleasePartitionHugeIoSpace.c)
 *     MiDeleteAwePageTables @ 0x1407011B0 (MiDeleteAwePageTables.c)
 *     MiCloneWriteWatch @ 0x140703194 (MiCloneWriteWatch.c)
 *     MiNoPagesLastChance @ 0x140703B60 (MiNoPagesLastChance.c)
 *     MiFindPageFileMemoryExtent @ 0x14070CB30 (MiFindPageFileMemoryExtent.c)
 *     ExQuerySystemLockInformation @ 0x140BFF388 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // r8
  KIRQL CurrentIrql; // bl
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    _m_prefetchw((const void *)SpinLock);
    v4 = *SpinLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(SpinLock, v4 + 1, v4);
      if ( v5 == v4 )
        break;
      if ( v4 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)SpinLock, CurrentIrql, v1);
        return CurrentIrql;
      }
    }
    return CurrentIrql;
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql);
    return CurrentIrql;
  }
}
