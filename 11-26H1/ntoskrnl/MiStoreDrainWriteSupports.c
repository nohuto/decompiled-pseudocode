/*
 * XREFs of MiStoreDrainWriteSupports @ 0x1404A7674
 * Callers:
 *     MiStoreCheckCompleteWriteBatch @ 0x1403FF93C (MiStoreCheckCompleteWriteBatch.c)
 *     MiStoreDeletePartition @ 0x14070EF98 (MiStoreDeletePartition.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreDrainWriteSupports(_SLIST_HEADER *a1)
{
  PSLIST_ENTRY v1; // rbx
  PSLIST_ENTRY v2; // rcx

  v1 = RtlpInterlockedFlushSList(a1 + 92);
  while ( v1 )
  {
    v2 = v1;
    v1 = v1->Next;
    ExFreePoolWithTag(v2, 0);
  }
}
