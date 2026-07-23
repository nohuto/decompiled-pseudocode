/*
 * XREFs of HalpTimerScaleCounter @ 0x140208DE0
 * Callers:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     HalpSetTimer @ 0x140208790 (HalpSetTimer.c)
 *     HalpTimerClockArm @ 0x140208A30 (HalpTimerClockArm.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140209540 (KiStartThreadCycleAccumulationContextSwap.c)
 *     EtwpGetLoggerTimeStamp @ 0x14021D850 (EtwpGetLoggerTimeStamp.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiEndIdleCycleAccumulation @ 0x140226290 (KiEndIdleCycleAccumulation.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140226CD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140227B30 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     EtwpGetPerfCounter @ 0x14032F3E0 (EtwpGetPerfCounter.c)
 *     KiStartThreadCycleAccumulation @ 0x140336EE0 (KiStartThreadCycleAccumulation.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1404DEEA0 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x14050B910 (HalpTimerGetSavedPerformanceCounter.c)
 *     HalCalibratePerformanceCounter @ 0x140578FF0 (HalCalibratePerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x140584380 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerMeasureFrequencies @ 0x1405847E8 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140584B68 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140588CB0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpTimerScaleCounter(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( a1 && a2 && a2 != a3 )
    return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
  else
    return a1;
}
