/*
 * XREFs of ?KiIdealProcessorRebalancerWorker@@YAXPEAX@Z @ 0x14021AB10
 * Callers:
 *     <none>
 * Callees:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021BA80 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall KiIdealProcessorRebalancerWorker(void *a1)
{
  KIRQL v1; // al
  char v2; // bl

  while ( 1 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v2 = byte_140E16271;
    byte_140E16271 = 0;
    if ( !v2 )
      break;
    KeReleaseSpinLock(&SpinLock, v1);
    if ( (v2 & 1) != 0 )
      KiUpdateProcessConcurrencyCounts();
  }
  byte_140E16270 = 0;
  KeReleaseSpinLock(&SpinLock, v1);
}
