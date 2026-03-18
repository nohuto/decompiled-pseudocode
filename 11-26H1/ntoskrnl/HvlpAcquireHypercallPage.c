/*
 * XREFs of HvlpAcquireHypercallPage @ 0x14032B970
 * Callers:
 *     HvlFlushRangeListTb @ 0x14032B100 (HvlFlushRangeListTb.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1403E6070 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1403E65B8 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSetPowerProperty @ 0x1403E672C (HvlpSetPowerProperty.c)
 *     HvlGetGpaPagesAccessState @ 0x1403E6828 (HvlGetGpaPagesAccessState.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1403E6AE0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1403E6CC0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlParkedVirtualProcessors @ 0x1403E7228 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403E7320 (HvlRetargetDeviceInterrupt.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1403E7AB0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlpSlowFlushListTbEx @ 0x1403E7DF8 (HvlpSlowFlushListTbEx.c)
 *     HvlWakeVirtualProcessors @ 0x1403ECBF0 (HvlWakeVirtualProcessors.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140469420 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSecureFlushLargeRangeList @ 0x1404A27EC (HvlpSecureFlushLargeRangeList.c)
 *     HvlLpReadMultipleMsr @ 0x1404CBCB0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1404DD9A0 (HvlLpWriteMultipleMsr.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1404E60A8 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpCheckTscSync @ 0x1404EE8C4 (HvlpCheckTscSync.c)
 *     HvlLpReadCpuid @ 0x1404F63B0 (HvlLpReadCpuid.c)
 *     HvlpDepositPages @ 0x140516D78 (HvlpDepositPages.c)
 *     HvlNotifyPageHeat @ 0x140517DA4 (HvlNotifyPageHeat.c)
 *     HvlSetQpcBias @ 0x140532F60 (HvlSetQpcBias.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1405B8EB8 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlGetRootVpSharedPages @ 0x1405B92C8 (HvlGetRootVpSharedPages.c)
 *     HvlGetSyntheticMachineCheckContext @ 0x1405B93B8 (HvlGetSyntheticMachineCheckContext.c)
 *     HvlQueryNumaDistance @ 0x1405B9590 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405B9830 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlStartBootLogicalProcessors @ 0x1405B9968 (HvlStartBootLogicalProcessors.c)
 *     HvlpGetVpIndexFromApicId @ 0x1405BA204 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1405BA4F0 (HvlpMapStatisticsPage.c)
 *     HvlpSetupSchedulerAssist @ 0x1405BB26C (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1405BB2FC (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1405BB45C (HvlpStartVirtualProcessor.c)
 *     HvlpUpdateLpcbIndex @ 0x1405BB55C (HvlpUpdateLpcbIndex.c)
 *     HvlpWithdrawPages @ 0x1405BB614 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1405BB934 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1405BC500 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x1405BC600 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlEnterSleepState @ 0x1405BC910 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x1405BC9B0 (HvlGetDeviceCapabilities.c)
 *     HvlGetMicrocodeLatency @ 0x1405BD090 (HvlGetMicrocodeLatency.c)
 *     HvlGetSystemPasidCapabilities @ 0x1405BD1B0 (HvlGetSystemPasidCapabilities.c)
 *     HvlGetTrustedIoStatus @ 0x1405BD370 (HvlGetTrustedIoStatus.c)
 *     HvlHvDebuggerPowerHandler @ 0x1405BD520 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpWritebackInvalidate @ 0x1405BD5F0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1405BD680 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1405BD8F8 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1405BD980 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1405BDA30 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1405BDAC8 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1405BDBF0 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x1405BDD50 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1405BE090 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1405BE228 (HvlSetPartitionProperty.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1405BE400 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1405BE4A0 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x1405BE610 (HvlUnmapDeviceInterrupt.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x1405BE844 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1405BE9FC (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1405BEAC0 (HvlpSlowFlushPasidAddressList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x1405BEBB0 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x1405BECF0 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x1405BEDF0 (HvlUnmapDmaRanges.c)
 *     HvlNotifyAcpiReenabled @ 0x1405BF2D0 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x1405BF348 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1405BF470 (HvlPrepareForSecureHibernate.c)
 *     HvlpInitializePowerStatistics @ 0x1405BF6FC (HvlpInitializePowerStatistics.c)
 *     HvlpApplyIoCachePolicy @ 0x1405BFAAC (HvlpApplyIoCachePolicy.c)
 *     HvlCollectLivedump @ 0x1405C02A4 (HvlCollectLivedump.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1405C11BC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1405C1454 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x1405C19D8 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1405C2034 (HvlpQueryExtendedCapabilities.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1405C2324 (HvlpInvokeGetPageListHypercall.c)
 *     HvlQueryBootZeroMemory @ 0x14071E6F4 (HvlQueryBootZeroMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140791AD8 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140791D04 (HvlpLpCpuid.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 */

_QWORD *__fastcall HvlpAcquireHypercallPage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *HypercallCachedPages; // rbx
  struct _KPRCB *v9; // rbp
  PSLIST_ENTRY v10; // rax
  _SLIST_ENTRY *Next; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v18; // al
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  struct _KPRCB *CurrentPrcb; // rax
  struct _KPRCB *v21; // rax

  HypercallCachedPages = 0LL;
  if ( (a2 & 8) != 0 )
    goto LABEL_8;
  if ( (HvlpFlags & 8) == 0 )
  {
    *(_DWORD *)a1 = 4;
    *(_BYTE *)(a1 + 8) = KeDisableInterrupts();
    *(_DWORD *)(a1 + 12) = a2;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (a2 & 1) != 0 )
    {
      HypercallCachedPages = CurrentPrcb->HypercallCachedPages;
    }
    else if ( (a2 & 2) != 0 )
    {
      HypercallCachedPages = (char *)CurrentPrcb->HypercallCachedPages + 4096;
    }
    Next = (_SLIST_ENTRY *)HypercallCachedPages[2];
    goto LABEL_5;
  }
  v9 = KeGetCurrentPrcb();
  v10 = RtlpInterlockedPopEntrySList(&v9->HypercallPageList);
  HypercallCachedPages = &v10->Next;
  if ( v10 )
  {
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v10;
    Next = v10[1].Next;
LABEL_5:
    *(_QWORD *)(a1 + 24) = Next;
    return HypercallCachedPages;
  }
  if ( (a2 & 4) == 0 )
  {
LABEL_8:
    if ( a3 )
    {
      v13 = -4096LL;
      v14 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v15 = v14 + a4 - 1;
      HypercallCachedPages = (_QWORD *)(v15 & 0xFFFFFFFFFFFFF000uLL);
      if ( ((v14 ^ v15) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        HypercallCachedPages = (_QWORD *)((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v16 = 2LL;
      *(_DWORD *)a1 = 2;
      CurrentIrql = KeGetCurrentIrql();
      *(_BYTE *)(a1 + 8) = CurrentIrql;
      if ( CurrentIrql < 2u )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v13) = 2;
          LOBYTE(v16) = v18;
          KiRaiseIrqlProcessIrqlFlags(v16, v13);
        }
      }
      PhysicalAddress = MmGetPhysicalAddress(HypercallCachedPages);
    }
    else
    {
      *(_DWORD *)a1 = 4;
      *(_BYTE *)(a1 + 8) = KeDisableInterrupts();
      *(_DWORD *)(a1 + 12) = a2;
      v21 = KeGetCurrentPrcb();
      if ( (a2 & 1) != 0 )
      {
        HypercallCachedPages = v21->HypercallCachedPages;
      }
      else if ( (a2 & 2) != 0 )
      {
        HypercallCachedPages = (char *)v21->HypercallCachedPages + 4096;
      }
      PhysicalAddress = (PHYSICAL_ADDRESS)HypercallCachedPages[2];
    }
    *(PHYSICAL_ADDRESS *)(a1 + 24) = PhysicalAddress;
    return HypercallCachedPages;
  }
  return 0LL;
}
