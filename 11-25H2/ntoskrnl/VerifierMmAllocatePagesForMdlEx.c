/*
 * XREFs of VerifierMmAllocatePagesForMdlEx @ 0x140B90620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B7B910 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x140B91050 (VfFillAllocatePagesForMdl.c)
 */

struct _MDL *__fastcall VerifierMmAllocatePagesForMdlEx(__int64 a1)
{
  struct _MDL *v3; // rax
  struct _MDL *v4; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v3 = (struct _MDL *)guard_dispatch_icall_no_overrides(a1);
  v4 = v3;
  if ( v3 )
  {
    VfFillAllocatePagesForMdl(v3);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 232LL, 0xF0u, v4->ByteCount);
  }
  return v4;
}
