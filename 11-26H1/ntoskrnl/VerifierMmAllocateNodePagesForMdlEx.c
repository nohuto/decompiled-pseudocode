/*
 * XREFs of VerifierMmAllocateNodePagesForMdlEx @ 0x140C45210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140C2F5A8 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x140C3A7C4 (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x140C45E60 (VfFillAllocatePagesForMdl.c)
 */

struct _MDL *__fastcall VerifierMmAllocateNodePagesForMdlEx(__int64 a1, __int64 a2)
{
  struct _MDL *v5; // rax
  struct _MDL *v6; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v5 = (struct _MDL *)guard_dispatch_icall_no_overrides(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    VfFillAllocatePagesForMdl(v5);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 232LL, 0xF0u, v6->ByteCount);
  }
  return v6;
}
