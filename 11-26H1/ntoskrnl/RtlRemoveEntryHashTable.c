/*
 * XREFs of RtlRemoveEntryHashTable @ 0x140471000
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x14052674C (SepCleanupMarkedForDeletionEntries.c)
 *     SepRmDestroyCapTable @ 0x140776F58 (SepRmDestroyCapTable.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409E43BC (SepInsertOrReferenceSharedSidEntries.c)
 *     SepDeReferenceSharedSidEntries @ 0x1409E45E0 (SepDeReferenceSharedSidEntries.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A90EB0 (SepDereferenceCachedHandlesEntryInternal.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A9F480 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlpPopulateContext @ 0x140411D00 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlRemoveEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  unsigned __int64 Signature; // r8
  struct _LIST_ENTRY *Flink; // r10
  struct _LIST_ENTRY *Blink; // rax

  Signature = Entry->Signature;
  --HashTable->NumEntries;
  if ( Entry->Linkage.Flink == Entry->Linkage.Blink )
    --HashTable->NonEmptyBuckets;
  Flink = Entry->Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Entry->Linkage.Flink->Blink != Entry
    || (Blink = Entry->Linkage.Blink, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Blink->Flink != Entry) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( Context && !Context->ChainHead )
    RtlpPopulateContext((__int64)HashTable, Context, Signature);
  return 1;
}
