/*
 * XREFs of HalpReleaseHighLevelLock @ 0x1402C4DEC
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1402C3218 (KiInterruptDispatchCommon.c)
 *     HalPerformEndOfInterrupt @ 0x14032DA80 (HalPerformEndOfInterrupt.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140423578 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140423640 (KiMaskSecondaryInterruptInternal.c)
 *     KiDisconnectInterruptCommon @ 0x140423DC4 (KiDisconnectInterruptCommon.c)
 *     HalDisableInterrupt @ 0x1404240E0 (HalDisableInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140424278 (KiDisconnectSecondaryInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x1404247F8 (KiConnectSecondaryInterrupt.c)
 *     HalEnableInterrupt @ 0x1404252A0 (HalEnableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x140425E10 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140425F5C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptApplyOverrides @ 0x140426138 (HalpInterruptApplyOverrides.c)
 *     HalpQueryProfileSourceList @ 0x140426230 (HalpQueryProfileSourceList.c)
 *     IvtFlushDomainTb @ 0x1404267B0 (IvtFlushDomainTb.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1404298AC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptEnableNmi @ 0x140429E90 (HalpInterruptEnableNmi.c)
 *     ExtEnvSetVpptTarget @ 0x1404D20BC (ExtEnvSetVpptTarget.c)
 *     HalpQueryProfileSource @ 0x1404E6824 (HalpQueryProfileSource.c)
 *     HalpInterruptLocalErrorService @ 0x1404F09B0 (HalpInterruptLocalErrorService.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14050827C (HalpTimerEnableHypervisorTimer.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x14057B7E0 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptRemapFixedLines @ 0x14057D558 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRequestInterrupt @ 0x14057D7A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14057D9D8 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpTimerConfigureInterrupt @ 0x1405819FC (HalpTimerConfigureInterrupt.c)
 *     HalpVpptArmTimer @ 0x140583140 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1405832A4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x140583330 (HalpVpptStop.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x14058F4A8 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpCreateSecondaryIcEntry @ 0x14058F5CC (HalpCreateSecondaryIcEntry.c)
 *     HalpDeleteSecondaryIcEntry @ 0x14058F6D8 (HalpDeleteSecondaryIcEntry.c)
 *     HalpInsertSecondarySignalList @ 0x14058F77C (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x14058F814 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x14058F9F0 (HalpProcessSecondarySignalList.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x14058FAC0 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpAllocateKInterrupt @ 0x1405944D4 (HalpAllocateKInterrupt.c)
 *     EmonAddProfileSource @ 0x140594AB0 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x140595350 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x140596260 (EmonRemoveProfileSource.c)
 *     EmonSetInterval @ 0x1405969A0 (EmonSetInterval.c)
 *     Amd64AddProfileSource @ 0x1405A3000 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x1405A3B40 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x1405A4AC0 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x1405A4D10 (Amd64SetInterval.c)
 *     IvtAttachDeviceDomainInternal @ 0x1405A5968 (IvtAttachDeviceDomainInternal.c)
 *     IvtFreeDomain @ 0x1405A6550 (IvtFreeDomain.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405A8C60 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1405A9970 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 */

void __fastcall HalpReleaseHighLevelLock(KSPIN_LOCK *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  KxReleaseSpinLock(a1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
