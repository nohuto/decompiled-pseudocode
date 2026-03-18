/*
 * XREFs of VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140B90190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmAllocateContiguousMemorySpecifyCache(__int64 a1)
{
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides("MmAllocateContiguousMemorySpecifyCache") )
  {
    return 0LL;
  }
  else
  {
    return guard_dispatch_icall_no_overrides(a1);
  }
}
