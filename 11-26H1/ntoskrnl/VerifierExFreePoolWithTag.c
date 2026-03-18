/*
 * XREFs of VerifierExFreePoolWithTag @ 0x140C2FE80
 * Callers:
 *     <none>
 * Callees:
 *     VfEnabledOnKernel @ 0x14047EA30 (VfEnabledOnKernel.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     ExFreePoolSanityChecks @ 0x140C4345C (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(PVOID P, ULONG Tag)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( VfEnabledOnKernel() )
  {
    ExFreePoolWithTag(P, Tag);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)P, retaddr);
    guard_dispatch_icall_no_overrides((__int64)P, Tag);
  }
}
