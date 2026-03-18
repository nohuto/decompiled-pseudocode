/*
 * XREFs of VerifierExFreePool @ 0x140C2FE00
 * Callers:
 *     VerifierExFreePoolEx @ 0x140C2FE60 (VerifierExFreePoolEx.c)
 * Callees:
 *     VfEnabledOnKernel @ 0x14047EA30 (VfEnabledOnKernel.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     ExFreePoolSanityChecks @ 0x140C4345C (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePool(PVOID P)
{
  __int64 v2; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( VfEnabledOnKernel() )
  {
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)P, retaddr);
    guard_dispatch_icall_no_overrides((__int64)P, v2);
  }
}
