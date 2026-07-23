/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x1404C9DC0
 * Callers:
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140AC6CD8 (PopDirectedDripsHandleResiliencyNotification.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x1404C9E0C (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 */

void __fastcall PopDirectedDripsDiagPnpActionQueueAccountingUpdate(__int64 a1, char a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  KIRQL v5; // di

  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime);
  if ( LOBYTE(PopDirectedDripsDiagLock.WaitBlockList) != a2 )
  {
    LOBYTE(v3) = a2;
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v4, v3);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime, v5);
}
