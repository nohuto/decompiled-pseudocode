/*
 * XREFs of VerifierIoAllocateWorkItem @ 0x140B7AF60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateWorkItem(__int64 a1)
{
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0LL)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides("IoAllocateWorkItem") )
  {
    return 0LL;
  }
  else
  {
    return guard_dispatch_icall_no_overrides(a1);
  }
}
