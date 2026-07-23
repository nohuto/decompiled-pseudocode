/*
 * XREFs of HalpTimerQueryCounterSafe @ 0x1402086D0
 * Callers:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
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
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1404DED74 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x1404E3140 (HalpTimerDpcRoutine.c)
 *     HalpTimerSavePerformanceCounter @ 0x1404E4D90 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x140584380 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140584B68 (HalpTimerPerformanceCounterPowerChange.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
      v5 = &unk_140FBB7E8;
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
