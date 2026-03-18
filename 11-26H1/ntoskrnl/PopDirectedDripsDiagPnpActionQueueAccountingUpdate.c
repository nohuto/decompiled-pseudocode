/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x1404D0390
 * Callers:
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140AC5068 (PopDirectedDripsHandleResiliencyNotification.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x1404D03DC (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 */

void __fastcall PopDirectedDripsDiagPnpActionQueueAccountingUpdate(__int64 a1, char a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  KIRQL v5; // di

  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopDirectedDripsUmLock.WaitListEntry.Blink);
  if ( PopDirectedDripsUmLock.WaitBlockFill5[40] != a2 )
  {
    LOBYTE(v3) = a2;
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v4, v3);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PopDirectedDripsUmLock.WaitListEntry.Blink, v5);
}
