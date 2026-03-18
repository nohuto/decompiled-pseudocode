/*
 * XREFs of KiResetClockInterval @ 0x1405EE66C
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14051FE68 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     KiSetNextClockTickDueTime @ 0x1403796D0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140379C60 (KiSetClockTimerKTimerDeadlines.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140418DA0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140419438 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiResetClockInterval(__int64 a1)
{
  int v2; // edx
  __int64 InterruptTimePrecise; // rdi
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  RtlRbRemoveNode((__int64)&KiClockIntervalRequests, a1);
  v2 = *(_DWORD *)(a1 + 32);
  InterruptTimePrecise = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  if ( v2 )
    PoTraceSystemTimerResolutionKernel(0, v2, 1);
  if ( !KiClockTimerPerCpuTickScheduling )
    return KiSetClockIntervalToMinimumRequested();
  if ( KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v5);
  KiSetClockTimerKTimerDeadlines((__int64)KeGetCurrentPrcb(), InterruptTimePrecise, 0);
  return KiSetNextClockTickDueTime(InterruptTimePrecise, 1);
}
