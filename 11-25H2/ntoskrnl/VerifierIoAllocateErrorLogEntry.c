/*
 * XREFs of VerifierIoAllocateErrorLogEntry @ 0x140B7AC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateErrorLogEntry(__int64 a1)
{
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 0LL;
  else
    return guard_dispatch_icall_no_overrides(a1);
}
