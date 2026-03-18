/*
 * XREFs of VerifierIoSetCompletionRoutineEx @ 0x140C28C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140C347B4 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoSetCompletionRoutineEx(__int64 a1, __int64 a2)
{
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 3221225626LL;
  else
    return guard_dispatch_icall_no_overrides(a1, a2);
}
