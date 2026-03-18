/*
 * XREFs of SmpKeyedStoreCtxCleanup @ 0x14063E8E8
 * Callers:
 *     SmPartitionCleanup @ 0x140818F90 (SmPartitionCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SmpKeyedStoreCtxCleanup(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
