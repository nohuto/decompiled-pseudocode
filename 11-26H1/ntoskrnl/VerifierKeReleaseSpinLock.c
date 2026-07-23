/*
 * XREFs of VerifierKeReleaseSpinLock @ 0x140C39B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140C3A284 (VfKeIrqlTransitionReserveLogEntry.c)
 *     VfKeIrqlLogLower @ 0x140C4DB68 (VfKeIrqlLogLower.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 result; // rax

  v3 = 0LL;
  v4 = a1;
  if ( (MmVerifierData & 1) != 0 )
    v3 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2, a3, a1);
  result = guard_dispatch_icall_no_overrides(v4, a2);
  if ( (MmVerifierData & 1) != 0 )
    return VfKeIrqlLogLower(v3);
  return result;
}
