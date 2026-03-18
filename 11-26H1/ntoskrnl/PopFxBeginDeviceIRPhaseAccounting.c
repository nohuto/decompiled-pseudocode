/*
 * XREFs of PopFxBeginDeviceIRPhaseAccounting @ 0x1404E6AF8
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopFxBeginDeviceIRPhaseAccounting(unsigned __int64 a1)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12420.320);
  KxAcquireSpinLock(&stru_140F10070.Spare35[1]);
  LOBYTE(stru_140F10828.Padding[3]) = 1;
  if ( stru_140F12420.WaitBlockFill5[32] )
    stru_140F10828.Padding[2] = a1;
  KxReleaseSpinLock(&stru_140F10070.Spare35[1]);
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F12420.320, v2);
}
