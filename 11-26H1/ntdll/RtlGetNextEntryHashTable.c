/*
 * XREFs of RtlGetNextEntryHashTable @ 0x1800E1C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlGetNextEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *Flink; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v4; // rcx

  Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)Context->PrevLinkage->Flink;
  result = *Flink;
  if ( *Flink == (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Context->ChainHead )
    return 0LL;
  if ( HashTable->NumEnumerators )
  {
    v4 = *Flink;
    do
    {
      result = v4;
      if ( v4->Signature )
        break;
      Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)v4;
      v4 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v4->Linkage.Flink;
    }
    while ( v4 != (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Context->ChainHead );
  }
  if ( result->Signature != Context->Signature )
    return 0LL;
  Context->PrevLinkage = (_LIST_ENTRY *)Flink;
  return result;
}
