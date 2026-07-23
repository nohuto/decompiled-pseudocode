/*
 * XREFs of KeSetClockInterval @ 0x14040CD44
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14052250C (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KiSendClockInterruptToTargetProcessor @ 0x14037B19C (KiSendClockInterruptToTargetProcessor.c)
 *     KiSetClockInterval @ 0x14040CD6C (KiSetClockInterval.c)
 */

__int64 KeSetClockInterval()
{
  unsigned int v0; // ebx

  v0 = KiSetClockInterval();
  KiSendClockInterruptToTargetProcessor(KiClockTimerOwner);
  return v0;
}
