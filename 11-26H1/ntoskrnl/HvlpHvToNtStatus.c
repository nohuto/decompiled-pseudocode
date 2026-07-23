/*
 * XREFs of HvlpHvToNtStatus @ 0x1402F4CA0
 * Callers:
 *     HvlpRequestProxyInterruptDoorbellGhcbNormal @ 0x1402F2D60 (HvlpRequestProxyInterruptDoorbellGhcbNormal.c)
 *     HvlpRequestProxyInterruptDoorbellGhcbEx @ 0x1402F2E4C (HvlpRequestProxyInterruptDoorbellGhcbEx.c)
 *     HvlpSetPowerProperty @ 0x1402F360C (HvlpSetPowerProperty.c)
 *     HvlGetGpaPagesAccessState @ 0x1402F3708 (HvlGetGpaPagesAccessState.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1402F39C0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402F3BA0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1402F3EAC (HvlGetSparseGpaPagesAccessState.c)
 *     HvlRetargetDeviceInterrupt @ 0x1402F4200 (HvlRetargetDeviceInterrupt.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1402F4860 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1402F4990 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlWakeVirtualProcessors @ 0x1402F9C30 (HvlWakeVirtualProcessors.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14032DD60 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlMapSparseGpaPages @ 0x140488880 (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x140489414 (HvlMapGpaPages.c)
 *     HvlNotifyPageHeat @ 0x140511814 (HvlNotifyPageHeat.c)
 *     HvlSetDeviceDmaEnabled @ 0x140528340 (HvlSetDeviceDmaEnabled.c)
 *     HvlGetRootVpSharedPages @ 0x1405BBB38 (HvlGetRootVpSharedPages.c)
 *     HvlpReadPerfRegister @ 0x1405BCEB8 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1405BE0E0 (HvlpWritePerfRegister.c)
 *     HvlAcknowledgePageRequest @ 0x1405BE350 (HvlAcknowledgePageRequest.c)
 *     HvlAttachPasidSpace @ 0x1405BE3F0 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x1405BE4A0 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x1405BE550 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x1405BE5C0 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x1405BE680 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x1405BE780 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x1405BE7E0 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x1405BE840 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x1405BE8A0 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1405BE920 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1405BEA00 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x1405BEAD0 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1405BEB90 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1405BEC20 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x1405BEC90 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1405BED70 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x1405BEE70 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405BEFB0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x1405BF070 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x1405BF0D0 (HvlEnablePasid.c)
 *     HvlGetDeviceCapabilities @ 0x1405BF220 (HvlGetDeviceCapabilities.c)
 *     HvlGetTrustedIoStatus @ 0x1405BFBE0 (HvlGetTrustedIoStatus.c)
 *     HvlHvDebuggerPowerHandler @ 0x1405BFD90 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1405BFEF0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1405C0168 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x1405C05C0 (HvlRegisterDeviceId.c)
 *     HvlRestoreTime @ 0x1405C0730 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x1405C0860 (HvlSetDeviceCapabilities.c)
 *     HvlSetPasidAddressSpace @ 0x1405C0B30 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x1405C0BE0 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x1405C0DF0 (HvlUnblockDefaultDma.c)
 *     HvlUnmapDeviceInterrupt @ 0x1405C0E80 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x1405C0F40 (HvlUnregisterDeviceId.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x1405C0FD4 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x1405C10B4 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x1405C1420 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x1405C1560 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x1405C1660 (HvlUnmapDmaRanges.c)
 *     HvlRequestProcessorHalt @ 0x1405C1E70 (HvlRequestProcessorHalt.c)
 *     HvlpAddRemovePhysicalMemory @ 0x1407231E0 (HvlpAddRemovePhysicalMemory.c)
 *     HvlQueryBootZeroMemory @ 0x140723384 (HvlQueryBootZeroMemory.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140794978 (HvlpDynamicUpdateMicrocode.c)
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
