/*
 * XREFs of HalpReleaseHighLevelLock @ 0x14030FAAC
 * Callers:
 *     KiInterruptDispatchCommon @ 0x14030DED8 (KiInterruptDispatchCommon.c)
 *     HalPerformEndOfInterrupt @ 0x14032FAB0 (HalPerformEndOfInterrupt.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140430668 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140430730 (KiMaskSecondaryInterruptInternal.c)
 *     KiDisconnectInterruptCommon @ 0x140430EB4 (KiDisconnectInterruptCommon.c)
 *     HalDisableInterrupt @ 0x1404311D0 (HalDisableInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140431368 (KiDisconnectSecondaryInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x1404318E8 (KiConnectSecondaryInterrupt.c)
 *     HalEnableInterrupt @ 0x140432390 (HalEnableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x140432F20 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x14043306C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptApplyOverrides @ 0x140433248 (HalpInterruptApplyOverrides.c)
 *     HalpQueryProfileSourceList @ 0x140433340 (HalpQueryProfileSourceList.c)
 *     IvtFlushDomainTb @ 0x1404338C0 (IvtFlushDomainTb.c)
 *     ExtEnvSetVpptTarget @ 0x1404358D0 (ExtEnvSetVpptTarget.c)
 *     HalpQueryProfileSource @ 0x140435CE8 (HalpQueryProfileSource.c)
 *     HalpInterruptEnableNmi @ 0x140435DF0 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1404360DC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptLocalErrorService @ 0x1404E9F90 (HalpInterruptLocalErrorService.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140501D24 (HalpTimerEnableHypervisorTimer.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x14057DD10 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptRemapFixedLines @ 0x14057FA78 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRequestInterrupt @ 0x14057FCC0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14057FEF8 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpTimerConfigureInterrupt @ 0x140583F1C (HalpTimerConfigureInterrupt.c)
 *     HalpVpptArmTimer @ 0x140585660 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1405857C4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x140585850 (HalpVpptStop.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140591C28 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpCreateSecondaryIcEntry @ 0x140591D4C (HalpCreateSecondaryIcEntry.c)
 *     HalpDeleteSecondaryIcEntry @ 0x140591E58 (HalpDeleteSecondaryIcEntry.c)
 *     HalpInsertSecondarySignalList @ 0x140591EFC (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x140591F94 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x140592170 (HalpProcessSecondarySignalList.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x140592240 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpAllocateKInterrupt @ 0x140596C54 (HalpAllocateKInterrupt.c)
 *     EmonAddProfileSource @ 0x140597230 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x140597AD0 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x1405989E0 (EmonRemoveProfileSource.c)
 *     EmonSetInterval @ 0x140599120 (EmonSetInterval.c)
 *     Amd64AddProfileSource @ 0x1405A5810 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x1405A6350 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x1405A72D0 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x1405A7520 (Amd64SetInterval.c)
 *     IvtAttachDeviceDomainInternal @ 0x1405A8178 (IvtAttachDeviceDomainInternal.c)
 *     IvtFreeDomain @ 0x1405A8D60 (IvtFreeDomain.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405AB470 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1405AC180 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
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
