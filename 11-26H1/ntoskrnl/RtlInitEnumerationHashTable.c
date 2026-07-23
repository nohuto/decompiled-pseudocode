/*
 * XREFs of RtlInitEnumerationHashTable @ 0x1404606B0
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x14052674C (SepCleanupMarkedForDeletionEntries.c)
 *     SepRmDestroyCapTable @ 0x140776F58 (SepRmDestroyCapTable.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x14081CBF0 (SepFindMatchingLowBoxNumberEntries.c)
 *     SepDeleteCachedHandlesTable @ 0x140B00708 (SepDeleteCachedHandlesTable.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlInitEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  _QWORD *Directory; // r9
  unsigned int v4; // r8d
  struct _LIST_ENTRY *v5; // rdx
  struct _LIST_ENTRY *Flink; // rax
  unsigned int v7; // eax
  BOOLEAN result; // al

  Directory = HashTable->Directory;
  if ( HashTable->TableSize > 0x80 )
  {
    _BitScanReverse(&v7, 0x80u);
    v4 = (1 << v7) ^ 0x80;
    Directory = (_QWORD *)Directory[v7 - 7];
  }
  else
  {
    v4 = 0;
  }
  ++HashTable->NumEnumerators;
  v5 = (struct _LIST_ENTRY *)&Directory[2 * v4];
  if ( v5->Flink == v5 )
    ++HashTable->NonEmptyBuckets;
  Flink = v5->Flink;
  if ( v5->Flink->Blink != v5 )
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Flink = Flink;
  Enumerator->HashEntry.Linkage.Blink = v5;
  Flink->Blink = &Enumerator->HashEntry.Linkage;
  result = 1;
  v5->Flink = &Enumerator->HashEntry.Linkage;
  Enumerator->BucketIndex = 0;
  Enumerator->ChainHead = v5;
  Enumerator->HashEntry.Signature = 0LL;
  return result;
}
