/*
 * XREFs of RtlCreateHashTable @ 0x1404B21E0
 * Callers:
 *     SepInitializeLowBoxNumberTable @ 0x14081CCE0 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x14081CD6C (SepInitializeSharedSidMap.c)
 *     SepSetTokenCachedHandles @ 0x140A3B748 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x1404B2200 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
