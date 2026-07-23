/*
 * XREFs of RtlInitEnumerationHashTable @ 0x1800CA080
 * Callers:
 *     RtlInitWeakEnumerationHashTable @ 0x1801461A0 (RtlInitWeakEnumerationHashTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x1800CA100 (RtlpPopulateContext.c)
 */

BOOLEAN __cdecl RtlInitEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned __int64 v4; // r8
  _LIST_ENTRY *v5; // rax
  _LIST_ENTRY *Flink; // rcx
  BOOLEAN result; // al
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0LL;
  RtlpPopulateContext(HashTable, &v8);
  v5 = (_LIST_ENTRY *)v8;
  ++HashTable->NumEnumerators;
  if ( v5->Flink == v5 )
    ++HashTable->NonEmptyBuckets;
  Flink = v5->Flink;
  if ( v5->Flink->Blink != v5 )
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Blink = v5;
  Enumerator->HashEntry.Linkage.Flink = Flink;
  Flink->Blink = &Enumerator->HashEntry.Linkage;
  v5->Flink = &Enumerator->HashEntry.Linkage;
  Enumerator->ChainHead = v5;
  result = 1;
  Enumerator->BucketIndex = v4;
  Enumerator->HashEntry.Signature = v4;
  return result;
}
