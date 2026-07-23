/*
 * XREFs of ?KiIdealProcessorRebalancerTimerCallback@@YAXPEAU_KTIMER2@@PEAX@Z @ 0x1404C2480
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall KiIdealProcessorRebalancerTimerCallback(struct _KTIMER2 *a1, void *a2)
{
  char v2; // bl

  v2 = 0;
  KxAcquireSpinLock(&SpinLock);
  byte_140E163B1 |= 1u;
  if ( !byte_140E163B0 )
  {
    byte_140E163B0 = 1;
    v2 = 1;
  }
  KxReleaseSpinLock(&SpinLock);
  if ( v2 )
    ExQueueWorkItem(&stru_140E16388, (WORK_QUEUE_TYPE)48);
}
