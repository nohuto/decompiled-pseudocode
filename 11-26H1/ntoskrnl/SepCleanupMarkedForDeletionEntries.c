/*
 * XREFs of SepCleanupMarkedForDeletionEntries @ 0x14052674C
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140AB7B44 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     SepCleanSingletonEntry @ 0x1403B2248 (SepCleanSingletonEntry.c)
 *     RtlEnumerateEntryHashTable @ 0x1403DB300 (RtlEnumerateEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1404606B0 (RtlInitEnumerationHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x140471000 (RtlRemoveEntryHashTable.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

struct _LIST_ENTRY *SepCleanupMarkedForDeletionEntries()
{
  _RTL_DYNAMIC_HASH_TABLE *Flink; // rbx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v1; // rax
  unsigned int *v2; // rdi
  struct _LIST_ENTRY *result; // rax
  struct _LIST_ENTRY *Blink; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-30h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  Flink = (_RTL_DYNAMIC_HASH_TABLE *)SeLuidToIndexMapping->Header.WaitListHead.Flink;
  RtlInitEnumerationHashTable(Flink, &Enumerator);
  while ( 1 )
  {
    v1 = RtlEnumerateEntryHashTable(Flink, &Enumerator);
    v2 = (unsigned int *)v1;
    if ( !v1 )
      break;
    if ( LOBYTE(v1[2].Linkage.Flink) && RtlRemoveEntryHashTable(Flink, v1, 0LL) )
    {
      SepCleanSingletonEntry(v2[10]);
      *((_BYTE *)SeLuidToIndexMapping->SListFaultAddress + ((unsigned __int64)v2[10] >> 3)) &= ~(1 << (v2[10] & 7));
      ExFreePoolWithTag(v2, 0);
    }
  }
  --Flink->NumEnumerators;
  result = Enumerator.HashEntry.Linkage.Flink;
  if ( (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)Enumerator.HashEntry.Linkage.Flink != &Enumerator )
  {
    Blink = Enumerator.HashEntry.Linkage.Blink;
    if ( (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)Enumerator.HashEntry.Linkage.Flink->Blink != &Enumerator
      || Enumerator.HashEntry.Linkage.Blink->Flink != (struct _LIST_ENTRY *)&Enumerator )
    {
      __fastfail(3u);
    }
    Enumerator.HashEntry.Linkage.Blink->Flink = Enumerator.HashEntry.Linkage.Flink;
    result->Blink = Blink;
    result = Enumerator.ChainHead;
    if ( result->Flink == result )
      --Flink->NonEmptyBuckets;
  }
  return result;
}
