/*
 * XREFs of VfKeIrqlTransitionReserveLogEntry @ 0x140C3A284
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x140C34610 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x140C39960 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140C39A50 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseSpinLock @ 0x140C39B50 (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140C3A170 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     VerifierExReleaseFastMutex @ 0x140C3F4E0 (VerifierExReleaseFastMutex.c)
 *     VfKeIrqlLogRaise @ 0x140C4CD5C (VfKeIrqlLogRaise.c)
 * Callees:
 *     <none>
 */

char *__fastcall VfKeIrqlTransitionReserveLogEntry(char a1, char a2)
{
  char *v2; // r8

  v2 = 0LL;
  if ( ViTrackIrqlQueue )
  {
    if ( ViKeTrackIrqlDisabled )
    {
      _InterlockedIncrement(&ViKeTrackIrqlSkipped);
    }
    else if ( _InterlockedExchangeAdd(&ViTrackIrqlActiveCount, 1u) >= (unsigned int)ViTrackIrqlQueueLength )
    {
      _InterlockedDecrement(&ViTrackIrqlActiveCount);
    }
    else
    {
      v2 = (char *)ViTrackIrqlQueue
         + 56 * (_InterlockedIncrement(&ViTrackIrqlIndex) & (unsigned int)(ViTrackIrqlQueueLength - 1));
      v2[8] = a1;
      v2[9] = a2;
      *((_WORD *)v2 + 5) = KeGetPcr()->Prcb.Number;
    }
  }
  return v2;
}
