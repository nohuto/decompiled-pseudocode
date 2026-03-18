/*
 * XREFs of HalpTimerGetInternalData @ 0x140426EC0
 * Callers:
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404263E0 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140426D60 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140426F38 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404EE730 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpTimerClockStop @ 0x1404F9F10 (HalpTimerClockStop.c)
 *     HalpTimerSwitchStallSource @ 0x14051891C (HalpTimerSwitchStallSource.c)
 *     HalpTimerSwitchToNormalClock @ 0x1405202C0 (HalpTimerSwitchToNormalClock.c)
 *     HalpInitializePnTimers @ 0x140576BD4 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x140576C98 (HalpInitializeTimers.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x140576F0C (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerInitialize @ 0x1405778D8 (HalpTimerInitialize.c)
 *     HalpTimerQueryCycleCounter @ 0x140577BA0 (HalpTimerQueryCycleCounter.c)
 *     HalpTimerReinitializeThisProcessor @ 0x140577CC0 (HalpTimerReinitializeThisProcessor.c)
 *     HalpInterruptRestoreClock @ 0x14057D8C8 (HalpInterruptRestoreClock.c)
 *     HalpTimerClockActivate @ 0x1405810E0 (HalpTimerClockActivate.c)
 *     HalpTimerClockInitialize @ 0x140581160 (HalpTimerClockInitialize.c)
 *     HalpTimerClockPowerChange @ 0x1405811D0 (HalpTimerClockPowerChange.c)
 *     HalpTimerInitializeClockPn @ 0x140581638 (HalpTimerInitializeClockPn.c)
 *     HalpTimerConfigureInterrupt @ 0x1405819FC (HalpTimerConfigureInterrupt.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x140582000 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerMeasureFrequencies @ 0x1405822C8 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140582648 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerPowerChange @ 0x140582BE4 (HalpTimerPowerChange.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x140582D18 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerStallCounterPowerChange @ 0x140582EE4 (HalpTimerStallCounterPowerChange.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1405832A4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x140583330 (HalpVpptStop.c)
 *     HalpTimerInitializeProfiling @ 0x1405844A8 (HalpTimerInitializeProfiling.c)
 *     HalpTimerRestartProfileInterrupt @ 0x1405845EC (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerStopProfileInterrupt @ 0x1405847EC (HalpTimerStopProfileInterrupt.c)
 *     HalpTimerWatchdogStart @ 0x140585590 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogStop @ 0x140585620 (HalpTimerWatchdogStop.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140596CC0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerClockInterruptStub @ 0x140596FB0 (HalpTimerClockInterruptStub.c)
 *     HalpTimerHypervisorInterruptStub @ 0x140597000 (HalpTimerHypervisorInterruptStub.c)
 *     HalpTimerProfileInterrupt @ 0x140597050 (HalpTimerProfileInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1405970B0 (HalpTimerWatchdogPreResetInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerGetInternalData(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 224) & 0x10000) != 0 )
    return *(_QWORD *)(a1 + 72) + *(_DWORD *)(a1 + 80) * KeGetPcr()->Prcb.Number;
  else
    return *(_QWORD *)(a1 + 72);
}
