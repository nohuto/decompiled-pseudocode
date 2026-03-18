/*
 * XREFs of RtlRemoveEntryHashTable @ 0x140477880
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x1405240DC (SepCleanupMarkedForDeletionEntries.c)
 *     SepRmDestroyCapTable @ 0x140773F58 (SepRmDestroyCapTable.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A2C9E4 (SepDereferenceLowBoxNumberEntry.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140A4621C (SepInsertOrReferenceSharedSidEntries.c)
 *     SepDeReferenceSharedSidEntries @ 0x140A46A88 (SepDeReferenceSharedSidEntries.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A8BBE8 (SepDereferenceCachedHandlesEntryInternal.c)
 * Callees:
 *     RtlpPopulateContext @ 0x14041A4B0 (RtlpPopulateContext.c)
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
