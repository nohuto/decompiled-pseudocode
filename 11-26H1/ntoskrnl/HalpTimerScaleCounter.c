/*
 * XREFs of HalpTimerScaleCounter @ 0x140208D00
 * Callers:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207BF0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     HalpSetTimer @ 0x1402086B0 (HalpSetTimer.c)
 *     HalpTimerClockArm @ 0x140208950 (HalpTimerClockArm.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140209460 (KiStartThreadCycleAccumulationContextSwap.c)
 *     EtwpGetLoggerTimeStamp @ 0x14021BEC0 (EtwpGetLoggerTimeStamp.c)
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KiEndIdleCycleAccumulation @ 0x140224900 (KiEndIdleCycleAccumulation.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140225340 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402261A0 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140226F90 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     EtwpGetPerfCounter @ 0x14032D3B0 (EtwpGetPerfCounter.c)
 *     KiStartThreadCycleAccumulation @ 0x140334EB0 (KiStartThreadCycleAccumulation.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1404E5900 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x140511EA0 (HalpTimerGetSavedPerformanceCounter.c)
 *     HalCalibratePerformanceCounter @ 0x140576AC0 (HalCalibratePerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x140581E60 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerMeasureFrequencies @ 0x1405822C8 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140582648 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140586790 (HalpTimerMeasureProcessorsWorker.c)
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
