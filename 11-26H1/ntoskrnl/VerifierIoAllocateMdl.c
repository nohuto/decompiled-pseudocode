/*
 * XREFs of VerifierIoAllocateMdl @ 0x140C2EAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140C3A7C4 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateMdl(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi

  v2 = a2;
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0LL)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)"IoAllocateMdl", a2) )
  {
    return 0LL;
  }
  else
  {
    return guard_dispatch_icall_no_overrides(a1, v2);
  }
}
