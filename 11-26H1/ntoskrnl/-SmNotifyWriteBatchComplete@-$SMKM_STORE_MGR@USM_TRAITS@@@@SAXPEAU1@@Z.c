/*
 * XREFs of ?SmNotifyWriteBatchComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1404AD1B0
 * Callers:
 *     MiStoreCheckCompleteWriteBatch @ 0x1403FF93C (MiStoreCheckCompleteWriteBatch.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmNotifyWriteBatchComplete(__int64 a1)
{
  unsigned int i; // ebx
  _SLIST_HEADER *v3; // rcx
  PSLIST_ENTRY v4; // rdi
  PSLIST_ENTRY v5; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 2124); ++i )
  {
    v3 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 1136) + 16LL * i);
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
