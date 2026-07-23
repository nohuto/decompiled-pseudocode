/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x140481120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlStronglyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // edi
  unsigned int TableSize; // ebx
  unsigned int v5; // r8d
  unsigned int v6; // r10d
  _QWORD *Directory; // r11
  unsigned int v8; // r9d
  PRTL_DYNAMIC_HASH_TABLE_ENTRY Flink; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *ChainHead; // r9
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  unsigned int v12; // ecx

  BucketIndex = Enumerator->BucketIndex;
  TableSize = HashTable->TableSize;
  v5 = BucketIndex;
  v6 = BucketIndex + 128;
LABEL_2:
  if ( v5 >= TableSize )
    return 0LL;
  if ( v5 == BucketIndex )
  {
    Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Enumerator->HashEntry.Linkage.Flink;
    ChainHead = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)Enumerator->ChainHead;
  }
  else
  {
    Directory = HashTable->Directory;
    if ( TableSize > 0x80 )
    {
      _BitScanReverse(&v12, v6);
      v8 = v6 ^ (1 << v12);
      Directory = (_QWORD *)Directory[v12 - 7];
    }
    else
    {
      v8 = v5;
    }
    Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)&Directory[2 * v8];
    ChainHead = Flink;
  }
  do
  {
    result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Linkage.Flink;
    Flink = result;
    if ( result == ChainHead )
    {
      ++v5;
      ++v6;
      goto LABEL_2;
    }
  }
  while ( !result->Signature );
  Enumerator->BucketIndex = v5;
  Enumerator->ChainHead = &ChainHead->Linkage;
  Enumerator->HashEntry.Linkage.Flink = &result->Linkage;
  return result;
}
