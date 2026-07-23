/*
 * XREFs of CmpForceFlushForCoalescing @ 0x140AE1394
 * Callers:
 *     CmpCoalescingCallback @ 0x140467EC0 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void CmpForceFlushForCoalescing()
{
  if ( !BYTE1(NlsMbOemCodePageTag)
    && WheapPfaLock.ApcStateFill[24]
    && !CmpForceFlushPending
    && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
  {
    ExQueueWorkItem(&CmpForceFlushWorkItem, DelayedWorkQueue);
  }
}
