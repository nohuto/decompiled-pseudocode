/*
 * XREFs of HvlpHvToNtStatus @ 0x1403E7DC0
 * Callers:
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14032BD30 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlpRequestProxyInterruptDoorbellGhcbNormal @ 0x1403E5E7C (HvlpRequestProxyInterruptDoorbellGhcbNormal.c)
 *     HvlpRequestProxyInterruptDoorbellGhcbEx @ 0x1403E5F68 (HvlpRequestProxyInterruptDoorbellGhcbEx.c)
 *     HvlpSetPowerProperty @ 0x1403E672C (HvlpSetPowerProperty.c)
 *     HvlGetGpaPagesAccessState @ 0x1403E6828 (HvlGetGpaPagesAccessState.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1403E6AE0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1403E6CC0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1403E6FCC (HvlGetSparseGpaPagesAccessState.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403E7320 (HvlRetargetDeviceInterrupt.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1403E7980 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1403E7AB0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlWakeVirtualProcessors @ 0x1403ECBF0 (HvlWakeVirtualProcessors.c)
 *     HvlMapSparseGpaPages @ 0x14048ED40 (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14048FA54 (HvlMapGpaPages.c)
 *     HvlNotifyPageHeat @ 0x140517DA4 (HvlNotifyPageHeat.c)
 *     HvlSetDeviceDmaEnabled @ 0x140525CD0 (HvlSetDeviceDmaEnabled.c)
 *     HvlGetRootVpSharedPages @ 0x1405B92C8 (HvlGetRootVpSharedPages.c)
 *     HvlpReadPerfRegister @ 0x1405BA648 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1405BB870 (HvlpWritePerfRegister.c)
 *     HvlAcknowledgePageRequest @ 0x1405BBAE0 (HvlAcknowledgePageRequest.c)
 *     HvlAttachPasidSpace @ 0x1405BBB80 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x1405BBC30 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x1405BBCE0 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x1405BBD50 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x1405BBE10 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x1405BBF10 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x1405BBF70 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x1405BBFD0 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x1405BC030 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1405BC0B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1405BC190 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x1405BC260 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1405BC320 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1405BC3B0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x1405BC420 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1405BC500 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x1405BC600 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405BC740 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x1405BC800 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x1405BC860 (HvlEnablePasid.c)
 *     HvlGetDeviceCapabilities @ 0x1405BC9B0 (HvlGetDeviceCapabilities.c)
 *     HvlGetTrustedIoStatus @ 0x1405BD370 (HvlGetTrustedIoStatus.c)
 *     HvlHvDebuggerPowerHandler @ 0x1405BD520 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1405BD680 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1405BD8F8 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x1405BDD50 (HvlRegisterDeviceId.c)
 *     HvlRestoreTime @ 0x1405BDEC0 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x1405BDFF0 (HvlSetDeviceCapabilities.c)
 *     HvlSetPasidAddressSpace @ 0x1405BE2C0 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x1405BE370 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x1405BE580 (HvlUnblockDefaultDma.c)
 *     HvlUnmapDeviceInterrupt @ 0x1405BE610 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x1405BE6D0 (HvlUnregisterDeviceId.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x1405BE764 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x1405BE844 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x1405BEBB0 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x1405BECF0 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x1405BEDF0 (HvlUnmapDmaRanges.c)
 *     HvlRequestProcessorHalt @ 0x1405BF600 (HvlRequestProcessorHalt.c)
 *     HvlpAddRemovePhysicalMemory @ 0x14071E550 (HvlpAddRemovePhysicalMemory.c)
 *     HvlQueryBootZeroMemory @ 0x14071E6F4 (HvlQueryBootZeroMemory.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140791E48 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpHvToNtStatus(unsigned __int16 a1)
{
  int v1; // edx
  __int64 result; // rax
  unsigned int v3; // ecx

  v1 = a1;
  if ( !a1 )
    return 0LL;
  if ( a1 == 11 || a1 == 29 )
    return 3221225626LL;
  result = 3473497LL;
  v3 = a1 | 0xC0350000;
  if ( v1 != 89 )
    return v3;
  return result;
}
