/*
 * XREFs of SmpKeyedStoreCtxCleanup @ 0x1406424C8
 * Callers:
 *     SmPartitionCleanup @ 0x14081F1A0 (SmPartitionCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SmpKeyedStoreCtxCleanup(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
