/*
 * XREFs of PpmDisableHighPerfRequestDeferredExpiration @ 0x1404D57E8
 * Callers:
 *     PdcPoPerfOverride @ 0x1409F4CB8 (PdcPoPerfOverride.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     PopPowerRequestReferenceRelease @ 0x14049FB30 (PopPowerRequestReferenceRelease.c)
 */

void __fastcall PpmDisableHighPerfRequestDeferredExpiration(char a1)
{
  KIRQL v2; // si
  unsigned int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( a1 )
  {
    KeCancelTimer(&PpmHighPerfEndTimer);
    v3 = 0;
    for ( PpmHighPerfDeferredEndTime = 0LL; v3 < PpmHighPerfDeferredEndCount; ++v3 )
      PopPowerRequestReferenceRelease(PpmHighPerfPowerRequest, 4u);
    PpmHighPerfDeferredEndCount = 0;
    PpmHighPerfDeferredEndTime = 0LL;
  }
  PpmHighPerfDeferredEndDisabled = a1;
  KeReleaseSpinLock(&PpmHighPerfRequestLock, v2);
}
