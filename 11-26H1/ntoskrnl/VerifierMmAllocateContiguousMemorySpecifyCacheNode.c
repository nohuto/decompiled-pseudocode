/*
 * XREFs of VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140C45070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140C3A7C4 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmAllocateContiguousMemorySpecifyCacheNode(__int64 a1, __int64 a2)
{
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  else
    return guard_dispatch_icall_no_overrides(a1, a2);
}
