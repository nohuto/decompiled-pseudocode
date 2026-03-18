/*
 * XREFs of HvcallInitiateHypercall @ 0x14032BB00
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x14024F9D0 (HvlSendSyntheticClusterIpi.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402C79B0 (HvlSwitchVirtualAddressSpace.c)
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
 *     HvlInvokeHypervisorDebugger @ 0x14047A3E8 (HvlInvokeHypervisorDebugger.c)
 *     HvlMapSparseGpaPages @ 0x14048ED40 (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14048FA54 (HvlMapGpaPages.c)
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
 *     HvlRequestProcessorHalt @ 0x1405BF600 (HvlRequestProcessorHalt.c)
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
 *     RtlGetSystemTimePrecise @ 0x14021C830 (RtlGetSystemTimePrecise.c)
 *     EtwpLogKernelEvent @ 0x14032CDC0 (EtwpLogKernelEvent.c)
 *     EtwpGetPerfCounter @ 0x14032D3B0 (EtwpGetPerfCounter.c)
 *     EtwpGetHostPerfCounter @ 0x14046F124 (EtwpGetHostPerfCounter.c)
 *     HvcallpNoHypervisorPresent @ 0x1404E6190 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HvcallInitiateHypercall(__int64 a1, unsigned __int64 a2)
{
  int v2; // ebx
  char v3; // si
  unsigned __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebx
  bool i; // zf
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+30h] [rbp-39h] BYREF
  char v16; // [rsp+34h] [rbp-35h]
  __int16 v17; // [rsp+35h] [rbp-34h]
  char v18; // [rsp+37h] [rbp-32h]
  _BYTE v19[8]; // [rsp+38h] [rbp-31h] BYREF
  __int128 v20; // [rsp+40h] [rbp-29h]
  __int128 v21; // [rsp+50h] [rbp-19h]
  _QWORD v22[4]; // [rsp+60h] [rbp-9h] BYREF

  v2 = a1;
  v20 = 0LL;
  v21 = 0LL;
  if ( (BYTE4(xmmword_140FBFC10) & 0x10) == 0 )
  {
    v3 = 0;
    goto LABEL_10;
  }
  v12 = qword_140FC8C80;
  v3 = 1;
  v11 = 0;
  if ( qword_140FC8C80 )
  {
    a2 = *(unsigned int *)(qword_140FC8C80 + 4520);
    for ( i = !_BitScanForward((unsigned int *)&a1, a2); !i; i = !_BitScanForward((unsigned int *)&a1, a2) )
    {
      a2 = ((_DWORD)a2 - 1) & (unsigned int)a2;
      v14 = qword_140FC8C80 + 32 * a1 + 4556;
      if ( v14 && (*(_DWORD *)(v14 + 20) & 0x10) != 0 )
        v11 |= 1 << *(_BYTE *)(qword_140FC8C80 + 2 * a1 + 4505);
    }
    if ( (v11 & 2) == 0 )
      goto LABEL_4;
  }
  else
  {
    LOBYTE(v11) = 30;
  }
  *(_QWORD *)&v20 = EtwpGetPerfCounter(a1, a2, qword_140FC8C80);
LABEL_4:
  if ( (v11 & 4) != 0 )
    *((_QWORD *)&v20 + 1) = RtlGetSystemTimePrecise();
  else
    *((_QWORD *)&v20 + 1) = 0LL;
  if ( (v11 & 8) != 0 )
  {
    v4 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v4) << 32;
    *(_QWORD *)&v21 = v4;
  }
  else
  {
    *(_QWORD *)&v21 = 0LL;
  }
  if ( (v11 & 0x10) != 0 )
    *((_QWORD *)&v21 + 1) = EtwpGetHostPerfCounter(a1, a2, v12);
  else
    *((_QWORD *)&v21 + 1) = 0LL;
LABEL_10:
  result = HvcallCodeVa();
  v6 = result;
  if ( v3 )
  {
    v18 = 0;
    v15 = (unsigned __int16)v2;
    v17 = v2 < 0;
    v16 = BYTE2(v2) & 1;
    v22[2] = &v15;
    v22[3] = 8LL;
    v7 = *(_DWORD *)(EtwpHostSiloState + 4520);
    for ( i = !_BitScanForward((unsigned int *)&v9, v7); !i; i = !_BitScanForward((unsigned int *)&v9, v7) )
    {
      v7 &= v7 - 1;
      v10 = EtwpHostSiloState + 32LL * (unsigned int)v9 + 4556;
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 20) & 0x10) != 0 )
        {
          v13 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v9 + 4505);
          v22[1] = 8LL;
          v22[0] = &v19[8 * v13];
          EtwpLogKernelEvent(
            (unsigned int)v22,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v9 + 4504),
            2,
            3954,
            5246466);
        }
      }
    }
    return v6;
  }
  return result;
}
