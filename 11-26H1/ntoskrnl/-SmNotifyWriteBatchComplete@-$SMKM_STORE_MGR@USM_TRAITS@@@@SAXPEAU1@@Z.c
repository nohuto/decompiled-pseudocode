/*
 * XREFs of ?SmNotifyWriteBatchComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1404B3BE4
 * Callers:
 *     MiStoreCheckCompleteWriteBatch @ 0x14040684C (MiStoreCheckCompleteWriteBatch.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmNotifyWriteBatchComplete(__int64 a1)
{
  unsigned int i; // ebx
  union _SLIST_HEADER *v3; // rcx
  PSLIST_ENTRY v4; // rdi
  PSLIST_ENTRY v5; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 2124); ++i )
  {
    v3 = (union _SLIST_HEADER *)(*(_QWORD *)(a1 + 1136) + 16LL * i);
    if ( LOWORD(v3->Alignment) )
    {
      v4 = RtlpInterlockedFlushSList(v3);
      while ( v4 )
      {
        v5 = v4;
        v4 = v4->Next;
        ExFreePoolWithTag(v5, 0);
      }
    }
  }
}
