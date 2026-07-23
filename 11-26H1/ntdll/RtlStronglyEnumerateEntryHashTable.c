/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x1800D5950
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x1800D5D10 (RtlpGetChainHead.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlStronglyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // r10d
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v3; // r9
  PRTL_DYNAMIC_HASH_TABLE v4; // r11
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *ChainHead; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *Flink; // rcx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax

  BucketIndex = Enumerator->BucketIndex;
  v3 = Enumerator;
  v4 = HashTable;
  while ( BucketIndex < v4->TableSize )
  {
    if ( BucketIndex == v3->BucketIndex )
    {
      Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)v3->HashEntry.Linkage.Flink;
      ChainHead = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v3->ChainHead;
    }
    else
    {
      ChainHead = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)RtlpGetChainHead(v4, BucketIndex);
      Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead;
    }
    while ( 1 )
    {
      result = *Flink;
      Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)result;
      if ( result == ChainHead )
        break;
      if ( result->Signature )
      {
        v3->BucketIndex = BucketIndex;
        v3->ChainHead = &ChainHead->Linkage;
        v3->HashEntry.Linkage.Flink = &result->Linkage;
        return result;
      }
    }
    ++BucketIndex;
  }
  return 0LL;
}
