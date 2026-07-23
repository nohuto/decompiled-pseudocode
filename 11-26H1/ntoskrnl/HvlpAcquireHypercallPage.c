/*
 * XREFs of HvlpAcquireHypercallPage @ 0x14032D9A0
 * Callers:
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1402F2F54 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1402F3498 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSetPowerProperty @ 0x1402F360C (HvlpSetPowerProperty.c)
 *     HvlGetGpaPagesAccessState @ 0x1402F3708 (HvlGetGpaPagesAccessState.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1402F39C0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402F3BA0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlParkedVirtualProcessors @ 0x1402F4108 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1402F4200 (HvlRetargetDeviceInterrupt.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1402F4990 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlpSlowFlushListTbEx @ 0x1402F4CD8 (HvlpSlowFlushListTbEx.c)
 *     HvlWakeVirtualProcessors @ 0x1402F9C30 (HvlWakeVirtualProcessors.c)
 *     HvlFlushRangeListTb @ 0x14032D130 (HvlFlushRangeListTb.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404629F0 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSecureFlushLargeRangeList @ 0x14049C20C (HvlpSecureFlushLargeRangeList.c)
 *     HvlLpReadMultipleMsr @ 0x1404C56E0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1404D7080 (HvlLpWriteMultipleMsr.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1404DF648 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpCheckTscSync @ 0x1404E7EA4 (HvlpCheckTscSync.c)
 *     HvlLpReadCpuid @ 0x1404EF9C0 (HvlLpReadCpuid.c)
 *     HvlpDepositPages @ 0x1405107E8 (HvlpDepositPages.c)
 *     HvlNotifyPageHeat @ 0x140511814 (HvlNotifyPageHeat.c)
 *     HvlSetQpcBias @ 0x1405353E0 (HvlSetQpcBias.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1405BB728 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlGetRootVpSharedPages @ 0x1405BBB38 (HvlGetRootVpSharedPages.c)
 *     HvlGetSyntheticMachineCheckContext @ 0x1405BBC28 (HvlGetSyntheticMachineCheckContext.c)
 *     HvlQueryNumaDistance @ 0x1405BBE00 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405BC0A0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 *     HvlpGetVpIndexFromApicId @ 0x1405BCA74 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1405BCD60 (HvlpMapStatisticsPage.c)
 *     HvlpSetupSchedulerAssist @ 0x1405BDADC (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1405BDB6C (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1405BDCCC (HvlpStartVirtualProcessor.c)
 *     HvlpUpdateLpcbIndex @ 0x1405BDDCC (HvlpUpdateLpcbIndex.c)
 *     HvlpWithdrawPages @ 0x1405BDE84 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1405BE1A4 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1405BED70 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x1405BEE70 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlEnterSleepState @ 0x1405BF180 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x1405BF220 (HvlGetDeviceCapabilities.c)
 *     HvlGetMicrocodeLatency @ 0x1405BF900 (HvlGetMicrocodeLatency.c)
 *     HvlGetSystemPasidCapabilities @ 0x1405BFA20 (HvlGetSystemPasidCapabilities.c)
 *     HvlGetTrustedIoStatus @ 0x1405BFBE0 (HvlGetTrustedIoStatus.c)
 *     HvlHvDebuggerPowerHandler @ 0x1405BFD90 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpWritebackInvalidate @ 0x1405BFE60 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1405BFEF0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1405C0168 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1405C01F0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1405C02A0 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1405C0338 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1405C0460 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x1405C05C0 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1405C0900 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1405C0A98 (HvlSetPartitionProperty.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1405C0C70 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1405C0D10 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x1405C0E80 (HvlUnmapDeviceInterrupt.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x1405C10B4 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1405C126C (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1405C1330 (HvlpSlowFlushPasidAddressList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x1405C1420 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x1405C1560 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x1405C1660 (HvlUnmapDmaRanges.c)
 *     HvlNotifyAcpiReenabled @ 0x1405C1B40 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x1405C1BB8 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1405C1CE0 (HvlPrepareForSecureHibernate.c)
 *     HvlpInitializePowerStatistics @ 0x1405C1F6C (HvlpInitializePowerStatistics.c)
 *     HvlpApplyIoCachePolicy @ 0x1405C231C (HvlpApplyIoCachePolicy.c)
 *     HvlCollectLivedump @ 0x1405C2B14 (HvlCollectLivedump.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1405C3A2C (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1405C3CC4 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x1405C4248 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1405C48A4 (HvlpQueryExtendedCapabilities.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1405C4B94 (HvlpInvokeGetPageListHypercall.c)
 *     HvlQueryBootZeroMemory @ 0x140723384 (HvlQueryBootZeroMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140794608 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140794834 (HvlpLpCpuid.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
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
