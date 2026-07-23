/*
 * XREFs of VerifierExFreePool @ 0x140C35E10
 * Callers:
 *     VerifierExFreePoolEx @ 0x140C35E70 (VerifierExFreePoolEx.c)
 * Callees:
 *     VfEnabledOnKernel @ 0x1404783A0 (VfEnabledOnKernel.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ExFreePoolSanityChecks @ 0x140C4946C (ExFreePoolSanityChecks.c)
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
