/*
 * XREFs of KeSetClockInterval @ 0x14041880C
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14051FE68 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KiSendClockInterruptToTargetProcessor @ 0x1403793EC (KiSendClockInterruptToTargetProcessor.c)
 *     KiSetClockInterval @ 0x140418834 (KiSetClockInterval.c)
 */

__int64 KeSetClockInterval()
{
  unsigned int v0; // ebx

  v0 = KiSetClockInterval();
  KiSendClockInterruptToTargetProcessor(KiClockTimerOwner);
  return v0;
}
