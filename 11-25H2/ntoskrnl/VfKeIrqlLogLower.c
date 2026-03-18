/*
 * XREFs of VfKeIrqlLogLower @ 0x140B9921C
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x140B7FF50 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x140B85690 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140B85780 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseSpinLock @ 0x140B85880 (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140B85FD0 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     VerifierExReleaseFastMutex @ 0x140B8BD50 (VerifierExReleaseFastMutex.c)
 * Callees:
 *     ViKeIrqlLogCommon @ 0x140B982C0 (ViKeIrqlLogCommon.c)
 */

void __fastcall VfKeIrqlLogLower(__int64 a1)
{
  if ( ViIrqlTrimAndLog )
  {
    if ( a1 )
      ViKeIrqlLogCommon(a1, 1u);
  }
}
