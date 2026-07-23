/*
 * XREFs of PsDereferencePartition @ 0x1403836F0
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     PsGetNextPartition @ 0x1402598D8 (PsGetNextPartition.c)
 *     PfLogForegroundProcess @ 0x140259F3C (PfLogForegroundProcess.c)
 *     MiRebuildLargePages @ 0x1402AA1C0 (MiRebuildLargePages.c)
 *     MiQueryVadForVaAttributes @ 0x1402E7CD4 (MiQueryVadForVaAttributes.c)
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14034A2E0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     MmAllocateContiguousMemoryEx @ 0x14034B050 (MmAllocateContiguousMemoryEx.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiAllocatePageFileReadResources @ 0x1403737A8 (MiAllocatePageFileReadResources.c)
 *     PfpPartitionDereferenceParent @ 0x140383530 (PfpPartitionDereferenceParent.c)
 *     PfLogFileDataAccess @ 0x140383550 (PfLogFileDataAccess.c)
 *     PfpPartitionIterate @ 0x1403843E0 (PfpPartitionIterate.c)
 *     PfHardFaultLog @ 0x140390674 (PfHardFaultLog.c)
 *     MmFreeNonChargedSecurePages @ 0x1403CCD54 (MmFreeNonChargedSecurePages.c)
 *     MiRevertThreadAffinity @ 0x1403CD44C (MiRevertThreadAffinity.c)
 *     CcGetPartitionWithCreate @ 0x1403E5118 (CcGetPartitionWithCreate.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403FDED0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmAllocateNonChargedSecurePages @ 0x14040B6F8 (MmAllocateNonChargedSecurePages.c)
 *     PfpLogApplicationEvent @ 0x14043FAA0 (PfpLogApplicationEvent.c)
 *     MiRebalanceZeroFreeLists @ 0x1404B1BD0 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x1404E279C (MmAllocateSecureKernelPages.c)
 *     EtwpClearPartitionContext @ 0x1404F3704 (EtwpClearPartitionContext.c)
 *     MmGetNodeFastLargePageCounts @ 0x1404F6254 (MmGetNodeFastLargePageCounts.c)
 *     MiEmptyAccessLogs @ 0x1404FB2E0 (MiEmptyAccessLogs.c)
 *     MiObtainFreePages @ 0x140533DBC (MiObtainFreePages.c)
 *     PsQuitNextPartition @ 0x140619954 (PsQuitNextPartition.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     EtwpSetPartitionContext @ 0x1406CB4EC (EtwpSetPartitionContext.c)
 *     MiGetBadPageResources @ 0x1406F5D78 (MiGetBadPageResources.c)
 *     MiQuarantineBadPage @ 0x1406F6228 (MiQuarantineBadPage.c)
 *     MiContractWsSwapPageFileWorker @ 0x140708F20 (MiContractWsSwapPageFileWorker.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14077A8A8 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x1407FF1B4 (PspSetJobMemoryPartition.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 *     PsCreatePartition @ 0x14080347C (PsCreatePartition.c)
 *     PspAllocatePartition @ 0x140803608 (PspAllocatePartition.c)
 *     PspClosePartitionHandle @ 0x1408038B0 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x140803A80 (PspTeardownPartition.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x14081F438 (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x14081F5D4 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x14081F7D0 (SmProcessConfigRequest.c)
 *     SmProcessListRequest @ 0x14081FBB8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x14082014C (SmProcessStatsRequest.c)
 *     MmRemovePhysicalMemory @ 0x14086D840 (MmRemovePhysicalMemory.c)
 *     MmAllocateMemoryRanges @ 0x14086E160 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x14086E460 (MmQueryMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x14086E774 (MmIdentifyPhysicalMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140870810 (MmMarkPhysicalMemoryAsBad.c)
 *     MiScanPagefileSpace @ 0x140872550 (MiScanPagefileSpace.c)
 *     MmManagePartitionMoveMemory @ 0x1408834C8 (MmManagePartitionMoveMemory.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140884A24 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x140885030 (MiSpecialPurposeMemoryRemoved.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1408851A8 (MiSpecialPurposeMemoryTypeDereference.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1408852E0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 *     MiQueryMemoryRegionInfo @ 0x140923AB0 (MiQueryMemoryRegionInfo.c)
 *     MiCreateSection @ 0x14098B4B4 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x14098B6D4 (MiInitializeCreateSectionPacket.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 *     MmAllocateUserStack @ 0x1409EE7D8 (MmAllocateUserStack.c)
 *     MmAllocateVirtualMemory @ 0x1409EEA70 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1409EF150 (NtAllocateVirtualMemory.c)
 *     MmGetPageFileInformation @ 0x140B14EF4 (MmGetPageFileInformation.c)
 *     MmBuildLargePages @ 0x140B22ED8 (MmBuildLargePages.c)
 *     SmProcessCompressionInfoRequest @ 0x140B286E8 (SmProcessCompressionInfoRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140B308E0 (SmProcessSystemStoreTrimRequest.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140B4F390 (MmGetPhysicalMemoryRangesEx2.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B68D40 (MiInitializePartitionSpecialPurposeMemory.c)
 *     MmPerformMemoryListCommand @ 0x140C12670 (MmPerformMemoryListCommand.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall PsDereferencePartition(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = (struct _WORK_QUEUE_ITEM *)(a1 + 80);
    v5->Parameter = (void *)a1;
    v5->WorkerRoutine = (void (__fastcall *)(void *))PspTeardownPartition;
    v5->List.Flink = 0LL;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
