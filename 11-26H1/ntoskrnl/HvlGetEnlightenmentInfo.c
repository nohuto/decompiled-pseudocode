/*
 * XREFs of HvlGetEnlightenmentInfo @ 0x1405BF3E0
 * Callers:
 *     <none>
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140415184 (VslGetNestedPageProtectionFlags.c)
 *     VslGetSecurePciEnabled @ 0x1405C5AA0 (VslGetSecurePciEnabled.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlGetEnlightenmentInfo(_DWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  memset_0(a1, 0, 0x280uLL);
  *a1 = HvlEnlightenments;
  a1[1] = HvlHypervisorConnected != 0;
  a1[7] = HvlLongSpinCountMask;
  if ( (HvlEnlightenments & 0x40) != 0 )
    *((_QWORD *)a1 + 4) = HvlNotifyLongSpinWait;
  if ( _bittest(&HvlEnlightenments, 8u) )
    *((_QWORD *)a1 + 5) = HvlGetReferenceTimeUsingTscPage;
  if ( (HvlEnlightenments & 0x4000) != 0 )
    *((_QWORD *)a1 + 25) = HvlSendSyntheticClusterIpi;
  if ( (HvlEnlightenments & 0x10000) != 0 )
  {
    *((_QWORD *)a1 + 6) = HvlSetSystemSleepProperty;
    *((_QWORD *)a1 + 7) = HvlEnterSleepState;
    *((_QWORD *)a1 + 8) = HvlNotifyDebugDeviceAvailable;
  }
  *((_QWORD *)a1 + 26) = HvlHalVpStartEnabled;
  if ( (HvlEnlightenments & 0x8000) != 0 )
  {
    *((_QWORD *)a1 + 27) = HvlHalStartVirtualProcessor;
    *((_QWORD *)a1 + 28) = HvlHalGetVpIndexFromApicId;
  }
  if ( (HvlEnlightenments & 0x10) != 0 )
  {
    *((_QWORD *)a1 + 1) = HvlEndSystemInterrupt;
    *((_QWORD *)a1 + 2) = HvlWriteApicCommandRegister;
  }
  *((_QWORD *)a1 + 51) = HvlRegisterDeviceId;
  *((_QWORD *)a1 + 52) = HvlUnregisterDeviceId;
  *((_QWORD *)a1 + 53) = HvlDmaAllocateDeviceDomain;
  *((_QWORD *)a1 + 54) = HvlDmaAttachDeviceDomain;
  *((_QWORD *)a1 + 55) = HvlDmaDetachDeviceDomain;
  *((_QWORD *)a1 + 56) = HvlDmaDeleteDeviceDomain;
  *((_QWORD *)a1 + 61) = HvlDmaGetDmaGuardEnabled;
  *((_QWORD *)a1 + 69) = HvlSetRootFaultReportingReady;
  *((_QWORD *)a1 + 71) = HvlUnblockDefaultDma;
  *((_QWORD *)a1 + 32) = HvlGetDeviceCapabilities;
  *((_QWORD *)a1 + 45) = HvlSetDeviceCapabilities;
  *((_QWORD *)a1 + 74) = HvlDmaGetHybridPassthroughReservedRegions;
  *((_QWORD *)a1 + 31) = HvlGetSystemPasidCapabilities;
  *((_QWORD *)a1 + 33) = HvlCreatePasidSpace;
  *((_QWORD *)a1 + 36) = HvlAttachPasidSpace;
  *((_QWORD *)a1 + 37) = HvlDetachPasidSpace;
  *((_QWORD *)a1 + 38) = HvlEnablePasid;
  *((_QWORD *)a1 + 39) = HvlDisablePasid;
  *((_QWORD *)a1 + 34) = HvlSetPasidAddressSpace;
  *((_QWORD *)a1 + 44) = HvlSetDeviceDmaEnabled;
  *((_QWORD *)a1 + 35) = HvlFlushPasid;
  *((_QWORD *)a1 + 40) = HvlAcknowledgePageRequest;
  *((_QWORD *)a1 + 41) = HvlCreatePrQueue;
  *((_QWORD *)a1 + 42) = HvlDeletePrQueue;
  *((_QWORD *)a1 + 43) = HvlClearPrqStalled;
  *((_QWORD *)a1 + 46) = HvlAttachPrQueue;
  *((_QWORD *)a1 + 47) = HvlDetachPrQueue;
  *((_QWORD *)a1 + 48) = HvlHvDebuggerPowerHandler;
  if ( (HvlEnlightenments & 0x20000000) != 0 )
    *((_QWORD *)a1 + 66) = HvlRestoreTime;
  if ( (HvlEnlightenments & 0x80004000) == 0x80004000 )
    *((_QWORD *)a1 + 78) = HvlShouldUseSyntheticClusterIpi;
  *((_QWORD *)a1 + 79) = HvlGetTrustedIoStatus;
  if ( (HvlEnlightenments & 0x40000000) != 0 )
    *((_QWORD *)a1 + 68) = HvlWakeVirtualProcessors;
  *((_QWORD *)a1 + 57) = HvlDmaMapDeviceLogicalRange;
  *((_QWORD *)a1 + 58) = HvlDmaUnmapDeviceLogicalRange;
  *((_QWORD *)a1 + 59) = HvlDmaMapDeviceSparsePages;
  *((_QWORD *)a1 + 60) = HvlDmaUnmapDeviceSparsePages;
  *((_QWORD *)a1 + 70) = HvlDmaConfigureDeviceDomain;
  *((_QWORD *)a1 + 72) = HvlDmaFlushDeviceDomain;
  *((_QWORD *)a1 + 73) = HvlDmaFlushDeviceDomainVaList;
  *((_QWORD *)a1 + 65) = HvlGetVpSintMessagePage;
  *((_QWORD *)a1 + 75) = HvlDmaReserveDeviceDomainAttachment;
  *((_QWORD *)a1 + 76) = HvlDmaUnreserveDeviceDomainAttachment;
  *((_QWORD *)a1 + 77) = HvlChangeIsolatedMemoryVisibility;
  if ( (HvlpFlags & 0x2000000) != 0 )
  {
    *((_QWORD *)a1 + 20) = HvlSuspendPartition;
    *((_QWORD *)a1 + 21) = HvlResumePartition;
    *((_QWORD *)a1 + 23) = HvlInvokeWheaErrorNotificationCallback;
    *((_QWORD *)a1 + 19) = HvGetMachineCheckContext;
  }
  if ( (HvlpRootFlags & 0x80u) != 0 )
  {
    *((_QWORD *)a1 + 22) = HvlSetSystemMachineCheckProperty;
    *((_QWORD *)a1 + 14) = HvlQueryAssociatedProcessors;
    *((_QWORD *)a1 + 24) = HvlGetProcessorIndexFromVpIndex;
    *((_QWORD *)a1 + 15) = HvlLpReadMultipleMsr;
    *((_QWORD *)a1 + 16) = HvlLpWriteMultipleMsr;
    *((_QWORD *)a1 + 17) = HvlLpReadCpuid;
    *((_QWORD *)a1 + 18) = HvlLpWritebackInvalidate;
    *((_QWORD *)a1 + 67) = HvlLpGetLogicalProcessorHwId;
  }
  if ( _bittest((const signed __int32 *)&HvlpRootFlags, 8u) )
  {
    *((_QWORD *)a1 + 9) = HvlMapDeviceInterrupt;
    *((_QWORD *)a1 + 10) = HvlUnmapDeviceInterrupt;
    *((_QWORD *)a1 + 11) = HvlRetargetDeviceInterrupt;
  }
  if ( (HvlpRootFlags & 1) != 0 )
  {
    *((_QWORD *)a1 + 12) = HvlSetHpetConfig;
    *((_QWORD *)a1 + 13) = HvlNotifyHpetEnabled;
    *((_QWORD *)a1 + 62) = HvlUpdateMicrocodeDatabase;
    *((_QWORD *)a1 + 63) = HvlGetMicrocodeLatency;
    if ( (HvlpRootFlags & 0x200) != 0 )
      *((_QWORD *)a1 + 49) = HvlSetQpcBias;
  }
  result = VslGetNestedPageProtectionFlags(0LL);
  if ( (result & 4) != 0 )
  {
    v3 = (unsigned __int64)VslAccessPciDevice & -(__int64)((unsigned __int8)VslGetSecurePciEnabled() != 0);
    result = (__int64)VslIumEfiRuntimeService;
    *((_QWORD *)a1 + 29) = v3;
    *((_QWORD *)a1 + 30) = VslIumEfiRuntimeService;
  }
  if ( (HvlpFlags & 0x4000) != 0 )
  {
    result = (__int64)HvlGetQpcBias;
    *((_QWORD *)a1 + 50) = HvlGetQpcBias;
  }
  return result;
}
