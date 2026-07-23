/*
 * XREFs of HvlpReleaseHypercallPage @ 0x14032D8C0
 * Callers:
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1402F2F54 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1402F3498 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSetPowerProperty @ 0x1402F360C (HvlpSetPowerProperty.c)
 *     HvlGetGpaPagesAccessState @ 0x1402F3708 (HvlGetGpaPagesAccessState.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1402F39C0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402F3BA0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1402F3EAC (HvlGetSparseGpaPagesAccessState.c)
 *     HvlParkedVirtualProcessors @ 0x1402F4108 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1402F4200 (HvlRetargetDeviceInterrupt.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1402F4990 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlpSlowFlushListTbEx @ 0x1402F4CD8 (HvlpSlowFlushListTbEx.c)
 *     HvlWakeVirtualProcessors @ 0x1402F9C30 (HvlWakeVirtualProcessors.c)
 *     HvlFlushRangeListTb @ 0x14032D130 (HvlFlushRangeListTb.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404629F0 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlMapSparseGpaPages @ 0x140488880 (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x140489414 (HvlMapGpaPages.c)
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
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpReleaseHypercallPage(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 HypercallCachedPages; // rdx
  _SLIST_ENTRY *v6; // rdx
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
    v6 = (_SLIST_ENTRY *)*((_QWORD *)a1 + 2);
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
