/*
 * XREFs of MiStoreDrainWriteSupports @ 0x1404ADFE4
 * Callers:
 *     MiStoreCheckCompleteWriteBatch @ 0x14040684C (MiStoreCheckCompleteWriteBatch.c)
 *     MiStoreDeletePartition @ 0x14070A2E4 (MiStoreDeletePartition.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreDrainWriteSupports(union _SLIST_HEADER *a1)
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
