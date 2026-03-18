/*
 * XREFs of VerifierMmAllocateNonCachedMemory @ 0x140C3F2F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140C347B4 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmAllocateNonCachedMemory(__int64 a1, __int64 a2)
{
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  else
    return guard_dispatch_icall_no_overrides(a1, a2);
}
