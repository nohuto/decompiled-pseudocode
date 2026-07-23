/*
 * XREFs of PopFxBeginDeviceIRPhaseAccounting @ 0x1404DFF98
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopFxBeginDeviceIRPhaseAccounting(__int64 a1)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.Timer.Header.WaitListHead);
  KxAcquireSpinLock(&PopCsResiliencyStatsLock);
  byte_140F100F8 = 1;
  if ( PopFxBlockingDeviceListLock.SavedApcStateFill[0] )
    qword_140F100F0 = a1;
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  KeReleaseSpinLock((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.Timer.Header.WaitListHead, v2);
}
