/*
 * XREFs of SepCleanupMarkedForDeletionEntries @ 0x1405240DC
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140A2B9A4 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     SepCleanSingletonEntry @ 0x1403CB1DC (SepCleanSingletonEntry.c)
 *     RtlEnumerateEntryHashTable @ 0x1403D8330 (RtlEnumerateEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x140466F60 (RtlInitEnumerationHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x140477880 (RtlRemoveEntryHashTable.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

struct _LIST_ENTRY *SepCleanupMarkedForDeletionEntries()
{
  struct _RTL_DYNAMIC_HASH_TABLE *Flink; // rbx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v1; // rax
  unsigned int *v2; // rdi
  struct _LIST_ENTRY *result; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-30h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  Flink = (struct _RTL_DYNAMIC_HASH_TABLE *)SeLuidToIndexMapping->Header.WaitListHead.Flink;
  RtlInitEnumerationHashTable(Flink, &Enumerator);
  while ( 1 )
  {
    v1 = RtlEnumerateEntryHashTable(Flink, &Enumerator);
    v2 = (unsigned int *)v1;
    if ( !v1 )
      break;
    if ( LOBYTE(v1[2].Linkage.Flink) && RtlRemoveEntryHashTable(Flink, v1, 0LL) )
    {
      SepCleanSingletonEntry();
      *((_BYTE *)SeLuidToIndexMapping->SListFaultAddress + ((unsigned __int64)v2[10] >> 3)) &= ~(1 << (v2[10] & 7));
      ExFreePoolWithTag(v2, 0);
    }
  }
  --Flink->NumEnumerators;
  result = Enumerator.HashEntry.Linkage.Flink;
  if ( (struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)Enumerator.HashEntry.Linkage.Flink != &Enumerator )
  {
    Blink = Enumerator.HashEntry.Linkage.Blink;
    if ( (struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)Enumerator.HashEntry.Linkage.Flink->Blink != &Enumerator
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
