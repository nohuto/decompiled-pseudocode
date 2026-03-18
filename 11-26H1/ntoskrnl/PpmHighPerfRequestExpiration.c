/*
 * XREFs of PpmHighPerfRequestExpiration @ 0x14060B8B0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopPowerRequestReferenceRelease @ 0x1404A64A0 (PopPowerRequestReferenceRelease.c)
 */

void PpmHighPerfRequestExpiration()
{
  KIRQL v0; // di
  unsigned int i; // ebx

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F10828.WaitBlock[2].Thread);
  if ( MEMORY[0xFFFFF78000000008] >= unk_140F10E08 )
  {
    for ( i = 0; i < unk_140F10E04; ++i )
      PopPowerRequestReferenceRelease(stru_140F10828.WaitBlock[2].WaitListEntry.Blink, 4u);
    unk_140F10E04 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F10828.WaitBlock[2].Thread, v0);
}
