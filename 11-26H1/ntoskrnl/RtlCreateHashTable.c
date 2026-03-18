/*
 * XREFs of RtlCreateHashTable @ 0x1404B89B0
 * Callers:
 *     SepInitializeLowBoxNumberTable @ 0x140816AD0 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x140816B5C (SepInitializeSharedSidMap.c)
 *     SepSetTokenCachedHandles @ 0x140A286A8 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x1404B89D0 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
