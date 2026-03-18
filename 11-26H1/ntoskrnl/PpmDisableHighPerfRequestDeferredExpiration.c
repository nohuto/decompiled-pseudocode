/*
 * XREFs of PpmDisableHighPerfRequestDeferredExpiration @ 0x1404DC108
 * Callers:
 *     PdcPoPerfOverride @ 0x140A390F8 (PdcPoPerfOverride.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     PopPowerRequestReferenceRelease @ 0x1404A64A0 (PopPowerRequestReferenceRelease.c)
 */

void __fastcall PpmDisableHighPerfRequestDeferredExpiration(char a1)
{
  KIRQL v2; // si
  unsigned int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F10828.WaitBlock[2].Thread);
  if ( a1 )
  {
    KeCancelTimer((PKTIMER)&stru_140F10828.536);
    v3 = 0;
    for ( unk_140F10E08 = 0LL; v3 < unk_140F10E04; ++v3 )
      PopPowerRequestReferenceRelease(stru_140F10828.WaitBlock[2].WaitListEntry.Blink, 4u);
    unk_140F10E04 = 0;
    unk_140F10E08 = 0LL;
  }
  unk_140F10E00 = a1;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F10828.WaitBlock[2].Thread, v2);
}
