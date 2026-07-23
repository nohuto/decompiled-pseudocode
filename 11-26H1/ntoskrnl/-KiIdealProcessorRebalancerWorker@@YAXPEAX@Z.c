/*
 * XREFs of ?KiIdealProcessorRebalancerWorker@@YAXPEAX@Z @ 0x14021C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021D410 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall KiIdealProcessorRebalancerWorker(void *a1)
{
  KIRQL v1; // al
  char v2; // bl

  while ( 1 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v2 = byte_140E163B1;
    byte_140E163B1 = 0;
    if ( !v2 )
      break;
    KeReleaseSpinLock(&SpinLock, v1);
    if ( (v2 & 1) != 0 )
      KiUpdateProcessConcurrencyCounts();
  }
  byte_140E163B0 = 0;
  KeReleaseSpinLock(&SpinLock, v1);
}
