/*
 * XREFs of ?KiIdealProcessorRebalancerTimerCallback@@YAXPEAU_KTIMER2@@PEAX@Z @ 0x1404C8740
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall KiIdealProcessorRebalancerTimerCallback(struct _KTIMER2 *a1, void *a2)
{
  char v2; // bl

  v2 = 0;
  KxAcquireSpinLock(&SpinLock);
  byte_140E16271 |= 1u;
  if ( !byte_140E16270 )
  {
    byte_140E16270 = 1;
    v2 = 1;
  }
  KxReleaseSpinLock(&SpinLock);
  if ( v2 )
    ExQueueWorkItem(&stru_140E16248, (WORK_QUEUE_TYPE)48);
}
