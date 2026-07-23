/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x1800CB100
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x1801461B0 (RtlWeaklyEnumerateEntryHashTable.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // ebx
  unsigned int TableSize; // r11d
  unsigned int v6; // eax
  unsigned int v7; // r9d
  _QWORD *Directory; // r8
  unsigned int v9; // r10d
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v10; // rdx
  _LIST_ENTRY *ChainHead; // r8
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *Flink; // rcx
  unsigned int v13; // ecx
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *Blink; // r9
  _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *v17; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax

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
    v10 = Enumerator;
  }
  else
  {
    Directory = HashTable->Directory;
    if ( TableSize > 0x80 )
    {
      _BitScanReverse(&v13, v7);
      v9 = v7 ^ (1 << v13);
      Directory = (_QWORD *)Directory[v13 - 7];
    }
    else
    {
      v9 = v6;
    }
    v10 = (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)&Directory[2 * v9];
    ChainHead = &v10->HashEntry.Linkage;
  }
  do
  {
    Flink = (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)v10->HashEntry.Linkage.Flink;
    v10 = Flink;
    if ( Flink == (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)ChainHead )
    {
      ++v6;
      ++v7;
      goto LABEL_2;
    }
  }
  while ( !Flink->HashEntry.Signature );
  v14 = Enumerator->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Enumerator->HashEntry.Linkage.Flink->Blink != Enumerator )
    goto LABEL_16;
  Blink = Enumerator->HashEntry.Linkage.Blink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator )
    goto LABEL_16;
  Blink->Flink = v14;
  v14->Blink = Blink;
  v16 = Enumerator->ChainHead;
  if ( v16 != ChainHead )
  {
    if ( v16->Flink == v16 )
      --HashTable->NonEmptyBuckets;
    if ( ChainHead->Flink == ChainHead )
      ++HashTable->NonEmptyBuckets;
  }
  Enumerator->BucketIndex = v6;
  Enumerator->ChainHead = ChainHead;
  v17 = v10->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)v10->HashEntry.Linkage.Flink->Blink != v10 )
LABEL_16:
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Flink = v17;
  Enumerator->HashEntry.Linkage.Blink = &v10->HashEntry.Linkage;
  v17->Blink = &Enumerator->HashEntry.Linkage;
  result = &v10->HashEntry;
  v10->HashEntry.Linkage.Flink = &Enumerator->HashEntry.Linkage;
  return result;
}
