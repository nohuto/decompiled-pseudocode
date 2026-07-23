/*
 * XREFs of RtlWeaklyEnumerateEntryHashTable @ 0x1403DDB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlWeaklyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // esi
  unsigned int TableSize; // r10d
  unsigned int v5; // r8d
  unsigned int v6; // edi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY ChainHead; // r9
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *Blink; // r10
  _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *v13; // rcx
  _QWORD *Directory; // rbx
  unsigned int v15; // r9d
  unsigned int v16; // ecx

  BucketIndex = Enumerator->BucketIndex;
  TableSize = HashTable->TableSize;
  v5 = BucketIndex;
  v6 = BucketIndex + 128;
LABEL_2:
  if ( v5 >= TableSize )
    return 0LL;
  if ( v5 == BucketIndex )
  {
    ChainHead = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Enumerator->ChainHead;
    result = &Enumerator->HashEntry;
  }
  else
  {
    Directory = HashTable->Directory;
    if ( TableSize > 0x80 )
    {
      _BitScanReverse(&v16, v6);
      v15 = v6 ^ (1 << v16);
      Directory = (_QWORD *)Directory[v16 - 7];
    }
    else
    {
      v15 = v5;
    }
    result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)&Directory[2 * v15];
    ChainHead = result;
  }
  do
  {
    Flink = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)result->Linkage.Flink;
    result = Flink;
    if ( Flink == ChainHead )
    {
      ++v5;
      ++v6;
      goto LABEL_2;
    }
  }
  while ( !Flink->Signature );
  v10 = Enumerator->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Enumerator->HashEntry.Linkage.Flink->Blink != Enumerator )
    goto LABEL_15;
  Blink = Enumerator->HashEntry.Linkage.Blink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator )
    goto LABEL_15;
  Blink->Flink = v10;
  v10->Blink = Blink;
  v12 = Enumerator->ChainHead;
  if ( v12 != (_LIST_ENTRY *)ChainHead )
  {
    if ( v12->Flink == v12 )
      --HashTable->NonEmptyBuckets;
    if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)ChainHead->Linkage.Flink == ChainHead )
      ++HashTable->NonEmptyBuckets;
  }
  Enumerator->BucketIndex = v5;
  Enumerator->ChainHead = &ChainHead->Linkage;
  v13 = result->Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink->Blink != result )
LABEL_15:
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Flink = v13;
  Enumerator->HashEntry.Linkage.Blink = &result->Linkage;
  v13->Blink = &Enumerator->HashEntry.Linkage;
  result->Linkage.Flink = &Enumerator->HashEntry.Linkage;
  return result;
}
