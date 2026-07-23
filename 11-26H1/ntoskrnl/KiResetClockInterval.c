/*
 * XREFs of KiResetClockInterval @ 0x1405F0FDC
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14052250C (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     KiSetNextClockTickDueTime @ 0x14037B480 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14037BA10 (KiSetClockTimerKTimerDeadlines.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14040D2D0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14040D968 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiResetClockInterval(PRTL_BALANCED_NODE Node)
{
  int Right; // edx
  LARGE_INTEGER InterruptTimePrecise; // rdi
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  RtlRbRemoveNode(&KiClockIntervalRequests, Node);
  Right = (int)Node[1].Right;
  InterruptTimePrecise.QuadPart = 0LL;
  LOBYTE(Node[1].Children[0]) = 0;
  if ( Right )
    PoTraceSystemTimerResolutionKernel(0, Right, 1);
  if ( !KiClockTimerPerCpuTickScheduling )
    return KiSetClockIntervalToMinimumRequested();
  if ( KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  KiSetClockTimerKTimerDeadlines((__int64)KeGetCurrentPrcb(), InterruptTimePrecise, 0);
  return KiSetNextClockTickDueTime(InterruptTimePrecise, 1);
}
