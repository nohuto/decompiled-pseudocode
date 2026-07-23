/*
 * XREFs of HvcallInitiateHypercall @ 0x14032DB30
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x140251330 (HvlSendSyntheticClusterIpi.c)
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
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140312650 (HvlSwitchVirtualAddressSpace.c)
 *     HvlFlushRangeListTb @ 0x14032D130 (HvlFlushRangeListTb.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404629F0 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlInvokeHypervisorDebugger @ 0x140473D58 (HvlInvokeHypervisorDebugger.c)
 *     HvlMapSparseGpaPages @ 0x140488880 (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x140489414 (HvlMapGpaPages.c)
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
 *     HvlRequestProcessorHalt @ 0x1405C1E70 (HvlRequestProcessorHalt.c)
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
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpGetPerfCounter @ 0x14032F3E0 (EtwpGetPerfCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1404688A4 (EtwpGetHostPerfCounter.c)
 *     HvcallpNoHypervisorPresent @ 0x1404DF730 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  if ( (BYTE4(xmmword_140FC0C10) & 0x10) == 0 )
  {
    v3 = 0;
    goto LABEL_10;
  }
  v12 = qword_140FC9C80;
  v3 = 1;
  v11 = 0;
  if ( qword_140FC9C80 )
  {
    a2 = *(unsigned int *)(qword_140FC9C80 + 4520);
    for ( i = !_BitScanForward((unsigned int *)&a1, a2); !i; i = !_BitScanForward((unsigned int *)&a1, a2) )
    {
      a2 = ((_DWORD)a2 - 1) & (unsigned int)a2;
      v14 = qword_140FC9C80 + 32 * a1 + 4556;
      if ( v14 && (*(_DWORD *)(v14 + 20) & 0x10) != 0 )
        v11 |= 1 << *(_BYTE *)(qword_140FC9C80 + 2 * a1 + 4505);
    }
    if ( (v11 & 2) == 0 )
      goto LABEL_4;
  }
  else
  {
    LOBYTE(v11) = 30;
  }
  *(_QWORD *)&v20 = EtwpGetPerfCounter(a1, a2, qword_140FC9C80);
LABEL_4:
  if ( (v11 & 4) != 0 )
    *((LARGE_INTEGER *)&v20 + 1) = RtlGetSystemTimePrecise();
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
