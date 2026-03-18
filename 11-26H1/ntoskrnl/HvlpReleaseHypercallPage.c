/*
 * XREFs of HvlpReleaseHypercallPage @ 0x14032B890
 * Callers:
 *     HvlFlushRangeListTb @ 0x14032B100 (HvlFlushRangeListTb.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1403E6070 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1403E65B8 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSetPowerProperty @ 0x1403E672C (HvlpSetPowerProperty.c)
 *     HvlGetGpaPagesAccessState @ 0x1403E6828 (HvlGetGpaPagesAccessState.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1403E6AE0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1403E6CC0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1403E6FCC (HvlGetSparseGpaPagesAccessState.c)
 *     HvlParkedVirtualProcessors @ 0x1403E7228 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403E7320 (HvlRetargetDeviceInterrupt.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1403E7AB0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlpSlowFlushListTbEx @ 0x1403E7DF8 (HvlpSlowFlushListTbEx.c)
 *     HvlWakeVirtualProcessors @ 0x1403ECBF0 (HvlWakeVirtualProcessors.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140469420 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlMapSparseGpaPages @ 0x14048ED40 (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14048FA54 (HvlMapGpaPages.c)
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
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpReleaseHypercallPage(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 HypercallCachedPages; // rdx
  struct _SLIST_ENTRY *v6; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v8; // r8d
  struct _KPRCB *v9; // rcx
  _DWORD *SchedulerAssist; // r8
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // ett

  result = *a1;
  HypercallCachedPages = 0LL;
  if ( (result & 1) != 0 )
  {
    v6 = (struct _SLIST_ENTRY *)*((_QWORD *)a1 + 2);
    v6[1].Next = (_SLIST_ENTRY *)*((_QWORD *)a1 + 3);
    return (__int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*((_QWORD *)a1 + 1) + 35840LL), v6);
  }
  else
  {
    LOBYTE(a4) = 2;
    if ( (result & 2) != 0 )
    {
      v11 = *((unsigned __int8 *)a1 + 8);
      if ( (unsigned __int8)v11 < 2u )
      {
        if ( KiIrqlFlags )
          result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
        __writecr8(v11);
      }
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = a1[3];
      if ( (v8 & 1) != 0 )
      {
        HypercallCachedPages = (__int64)CurrentPrcb->HypercallCachedPages;
      }
      else if ( (v8 & 2) != 0 )
      {
        HypercallCachedPages = (__int64)CurrentPrcb->HypercallCachedPages + 4096;
      }
      result = *((_QWORD *)a1 + 3);
      *(_QWORD *)(HypercallCachedPages + 16) = result;
      if ( *((_BYTE *)a1 + 8) )
      {
        v9 = KeGetCurrentPrcb();
        SchedulerAssist = v9->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          LODWORD(result) = *SchedulerAssist;
          do
          {
            v12 = (unsigned int)result;
            LODWORD(v12) = result & 0xFFDFFFFF;
            v13 = result;
            result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
          }
          while ( v13 != (_DWORD)result );
          if ( (result & 0x200000) != 0 )
            result = KiRemoveSystemWorkPriorityKick(v9, v12, SchedulerAssist, a4);
        }
        _enable();
      }
    }
  }
  return result;
}
