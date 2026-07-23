/*
 * XREFs of VerifierExReleaseFastMutex @ 0x140C3F4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140C3A284 (VfKeIrqlTransitionReserveLogEntry.c)
 *     VfKeIrqlLogLower @ 0x140C4DB68 (VfKeIrqlLogLower.c)
 */

__int64 __fastcall VerifierExReleaseFastMutex(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  __int64 v3; // r9
  __int64 result; // rax

  v2 = 0LL;
  LOBYTE(a2) = *(_BYTE *)(a1 + 48);
  v3 = a1;
  if ( (VfRuleClasses & 2) != 0 )
    v2 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2);
  result = guard_dispatch_icall_no_overrides(v3, a2);
  if ( (VfRuleClasses & 2) != 0 )
    return VfKeIrqlLogLower(v2);
  return result;
}
