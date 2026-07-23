/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x1403DB300
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x14052674C (SepCleanupMarkedForDeletionEntries.c)
 *     SepRmDestroyCapTable @ 0x140776F58 (SepRmDestroyCapTable.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x14081CBF0 (SepFindMatchingLowBoxNumberEntries.c)
 *     SepDeleteCachedHandlesTable @ 0x140B00708 (SepDeleteCachedHandlesTable.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // esi
  unsigned int TableSize; // r10d
  unsigned int v6; // eax
  unsigned int v7; // edi
  _LIST_ENTRY *ChainHead; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v9; // r9
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *Flink; // rcx
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *Blink; // r10
  _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  _QWORD *Directory; // rbx
  __int64 v17; // r9
  unsigned int v18; // ecx

  BucketIndex = Enumerator->BucketIndex;
  TableSize = HashTable->TableSize;
  v6 = BucketIndex;
  v7 = BucketIndex + 128;
LABEL_2:
  if ( v6 >= TableSize )
    return 0LL;
  if ( v6 == BucketIndex )
  {
    ChainHead = Enumerator->ChainHead;
    v9 = Enumerator;
  }
  else
  {
    Directory = HashTable->Directory;
    if ( TableSize > 0x80 )
    {
      _BitScanReverse(&v18, v7);
      v17 = v7 ^ (1 << v18);
      Directory = (_QWORD *)Directory[v18 - 7];
    }
    else
    {
      v17 = v6;
    }
    v9 = (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)&Directory[2 * v17];
    ChainHead = &v9->HashEntry.Linkage;
  }
  do
  {
    Flink = (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)v9->HashEntry.Linkage.Flink;
    v9 = Flink;
    if ( Flink == (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)ChainHead )
    {
      ++v6;
      ++v7;
      goto LABEL_2;
    }
  }
  while ( !Flink->HashEntry.Signature );
  v11 = Enumerator->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Enumerator->HashEntry.Linkage.Flink->Blink != Enumerator )
    goto LABEL_15;
  Blink = Enumerator->HashEntry.Linkage.Blink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator )
    goto LABEL_15;
  Blink->Flink = v11;
  v11->Blink = Blink;
  v13 = Enumerator->ChainHead;
  if ( v13 != ChainHead )
  {
    if ( v13->Flink == v13 )
      --HashTable->NonEmptyBuckets;
    if ( ChainHead->Flink == ChainHead )
      ++HashTable->NonEmptyBuckets;
  }
  Enumerator->BucketIndex = v6;
  Enumerator->ChainHead = ChainHead;
  v14 = v9->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)v9->HashEntry.Linkage.Flink->Blink != v9 )
LABEL_15:
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Flink = v14;
  Enumerator->HashEntry.Linkage.Blink = &v9->HashEntry.Linkage;
  v14->Blink = &Enumerator->HashEntry.Linkage;
  result = &v9->HashEntry;
  v9->HashEntry.Linkage.Flink = &Enumerator->HashEntry.Linkage;
  return result;
}
