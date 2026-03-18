/*
 * XREFs of VerifierExFreePool @ 0x140B81830
 * Callers:
 *     VerifierExFreePoolEx @ 0x140B81890 (VerifierExFreePoolEx.c)
 * Callees:
 *     VfIsKernelVerificationOn @ 0x1404F8A90 (VfIsKernelVerificationOn.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     ExFreePoolSanityChecks @ 0x140B944D0 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePool(PVOID P)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( VfIsKernelVerificationOn() )
  {
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)P, retaddr);
    guard_dispatch_icall_no_overrides(P);
  }
}
