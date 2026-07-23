/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x140460730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  _QWORD *Directory; // r10
  unsigned int v4; // r9d
  struct _LIST_ENTRY *v5; // rcx
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
