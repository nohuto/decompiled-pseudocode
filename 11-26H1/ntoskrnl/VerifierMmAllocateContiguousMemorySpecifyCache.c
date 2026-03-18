/*
 * XREFs of VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140C3EF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140C347B4 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmAllocateContiguousMemorySpecifyCache(__int64 a1, __int64 a2)
{
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)"MmAllocateContiguousMemorySpecifyCache", a2) )
  {
    return 0LL;
  }
  else
  {
    return guard_dispatch_icall_no_overrides(a1, a2);
  }
}
