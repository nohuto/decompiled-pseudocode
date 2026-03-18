/*
 * XREFs of HalpTimerQueryCounterSafe @ 0x1402085F0
 * Callers:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207BF0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
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
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1404E57D4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x1404E9D90 (HalpTimerDpcRoutine.c)
 *     HalpTimerSavePerformanceCounter @ 0x1404EB7B0 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x140581E60 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140582648 (HalpTimerPerformanceCounterPowerChange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpTimerQueryCounterSafe(ULONG_PTR BugCheckParameter3)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int32 v4; // r8d
  _QWORD *v5; // r9

  while ( 1 )
  {
    v1 = *(unsigned int *)(BugCheckParameter3 + 188);
    if ( (unsigned int)v1 < HalpTimerQueryCounterHandlerCount )
      break;
    v4 = 0;
    if ( HalpTimerQueryCounterHandlerCount )
    {
      v5 = &unk_140FBB448;
      do
      {
        if ( BugCheckParameter3 == *v5 )
          break;
        ++v4;
        v5 += 2;
      }
      while ( v4 < HalpTimerQueryCounterHandlerCount );
    }
    if ( v4 >= HalpTimerQueryCounterHandlerCount
      || (_DWORD)v1 == _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 188), v4, v1) )
    {
      KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, BugCheckParameter3, *(int *)(BugCheckParameter3 + 228));
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter3 + 224) & 0x10000) != 0 )
    v2 = *(_QWORD *)(BugCheckParameter3 + 72) + *(_DWORD *)(BugCheckParameter3 + 80) * KeGetPcr()->Prcb.Number;
  else
    v2 = *(_QWORD *)(BugCheckParameter3 + 72);
  return ((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v1])(v2);
}
