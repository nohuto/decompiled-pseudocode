/*
 * XREFs of VerifierPortExAllocatePoolWithTagPriority @ 0x140C3F770
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14045ECF0 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall VerifierPortExAllocatePoolWithTagPriority(POOL_TYPE a1, SIZE_T a2, ULONG a3, EX_POOL_PRIORITY a4)
{
  if ( (VfRuleClasses & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
    return (PVOID)guard_dispatch_icall_no_overrides(a1 | 0x80u, 0LL);
  else
    return ExAllocatePoolWithTagPriority(a1, a2, a3, a4);
}
