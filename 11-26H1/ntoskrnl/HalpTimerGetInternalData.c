/*
 * XREFs of HalpTimerGetInternalData @ 0x140433FD0
 * Callers:
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404334F0 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140433E70 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140434048 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404E7D10 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpTimerClockStop @ 0x1404F3520 (HalpTimerClockStop.c)
 *     HalpTimerSwitchStallSource @ 0x14051238C (HalpTimerSwitchStallSource.c)
 *     HalpTimerSwitchToNormalClock @ 0x140522964 (HalpTimerSwitchToNormalClock.c)
 *     HalpInitializePnTimers @ 0x140579104 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x1405791C8 (HalpInitializeTimers.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x14057943C (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerInitialize @ 0x140579E08 (HalpTimerInitialize.c)
 *     HalpTimerQueryCycleCounter @ 0x14057A0D0 (HalpTimerQueryCycleCounter.c)
 *     HalpTimerReinitializeThisProcessor @ 0x14057A1F0 (HalpTimerReinitializeThisProcessor.c)
 *     HalpInterruptRestoreClock @ 0x14057FDE8 (HalpInterruptRestoreClock.c)
 *     HalpTimerClockActivate @ 0x140583600 (HalpTimerClockActivate.c)
 *     HalpTimerClockInitialize @ 0x140583680 (HalpTimerClockInitialize.c)
 *     HalpTimerClockPowerChange @ 0x1405836F0 (HalpTimerClockPowerChange.c)
 *     HalpTimerInitializeClockPn @ 0x140583B58 (HalpTimerInitializeClockPn.c)
 *     HalpTimerConfigureInterrupt @ 0x140583F1C (HalpTimerConfigureInterrupt.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x140584520 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerMeasureFrequencies @ 0x1405847E8 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140584B68 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerPowerChange @ 0x140585104 (HalpTimerPowerChange.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x140585238 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerStallCounterPowerChange @ 0x140585404 (HalpTimerStallCounterPowerChange.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1405857C4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x140585850 (HalpVpptStop.c)
 *     HalpTimerInitializeProfiling @ 0x1405869C8 (HalpTimerInitializeProfiling.c)
 *     HalpTimerRestartProfileInterrupt @ 0x140586B0C (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerStopProfileInterrupt @ 0x140586D0C (HalpTimerStopProfileInterrupt.c)
 *     HalpTimerWatchdogStart @ 0x140587AB0 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogStop @ 0x140587B40 (HalpTimerWatchdogStop.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140599440 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerClockInterruptStub @ 0x140599730 (HalpTimerClockInterruptStub.c)
 *     HalpTimerHypervisorInterruptStub @ 0x140599780 (HalpTimerHypervisorInterruptStub.c)
 *     HalpTimerProfileInterrupt @ 0x1405997D0 (HalpTimerProfileInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x140599830 (HalpTimerWatchdogPreResetInterrupt.c)
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
