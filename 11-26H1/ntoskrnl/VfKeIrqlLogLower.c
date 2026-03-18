/*
 * XREFs of VfKeIrqlLogLower @ 0x140C47B58
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x140C2E600 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x140C33950 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140C33A40 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseSpinLock @ 0x140C33B40 (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140C34160 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     VerifierExReleaseFastMutex @ 0x140C394D0 (VerifierExReleaseFastMutex.c)
 * Callees:
 *     ViKeIrqlLogCommon @ 0x140C479D8 (ViKeIrqlLogCommon.c)
 */

void __fastcall VfKeIrqlLogLower(__int64 a1)
{
  if ( ViIrqlTrimAndLog )
  {
    if ( a1 )
      ViKeIrqlLogCommon(a1, 1u);
  }
}
