/*
 * XREFs of VerifierPortKeReleaseSpinLockNoXdv @ 0x140C3A170
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140C3A284 (VfKeIrqlTransitionReserveLogEntry.c)
 *     VfKeIrqlLogLower @ 0x140C4DB68 (VfKeIrqlLogLower.c)
 */

void __fastcall VerifierPortKeReleaseSpinLockNoXdv(PKSPIN_LOCK SpinLock, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  KSPIN_LOCK *v4; // r9

  v3 = 0LL;
  v4 = SpinLock;
  if ( (MmVerifierData & 1) != 0 )
    v3 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2, a3, SpinLock);
  KeReleaseSpinLock(v4, a2);
  if ( (MmVerifierData & 1) != 0 )
    VfKeIrqlLogLower(v3);
}
