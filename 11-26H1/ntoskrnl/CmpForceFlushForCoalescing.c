/*
 * XREFs of CmpForceFlushForCoalescing @ 0x140AE388C
 * Callers:
 *     CmpCoalescingCallback @ 0x14046E740 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void CmpForceFlushForCoalescing()
{
  if ( !BYTE1(NlsMbOemCodePageTag)
    && BYTE1(WheapPfaLock.TrapFrame)
    && !CmpForceFlushPending
    && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
  {
    ExQueueWorkItem(&CmpForceFlushWorkItem, DelayedWorkQueue);
  }
}
