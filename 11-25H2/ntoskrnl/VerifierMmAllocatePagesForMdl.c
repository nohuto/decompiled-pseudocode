/*
 * XREFs of VerifierMmAllocatePagesForMdl @ 0x140B90540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B7B910 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmAllocatePagesForMdl(__int64 a1)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides("MmAllocatePagesForMdl") )
  {
    return 0LL;
  }
  v3 = guard_dispatch_icall_no_overrides(a1);
  v4 = v3;
  if ( v3 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 232LL, 0xF0u, *(unsigned int *)(v3 + 40));
  }
  return v4;
}
