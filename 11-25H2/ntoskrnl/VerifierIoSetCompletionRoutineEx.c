/*
 * XREFs of VerifierIoSetCompletionRoutineEx @ 0x140B7B020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoSetCompletionRoutineEx(__int64 a1)
{
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 3221225626LL;
  else
    return guard_dispatch_icall_no_overrides(a1);
}
