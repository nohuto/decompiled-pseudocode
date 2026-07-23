/*
 * XREFs of ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14030FF4C
 * Callers:
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14030FDD0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140397DB0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

PSLIST_ENTRY __fastcall ST_STORE<SM_TRAITS>::StAcquireReadContext(__int64 a1)
{
  PSLIST_ENTRY v2; // rbx
  __int64 v3; // rdx
  _SLIST_ENTRY *Pool3; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx

  v2 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 2192));
  if ( !v2 )
  {
    v3 = (unsigned int)(*(_DWORD *)(a1 + 2168) + 4928);
    if ( (*(_DWORD *)(a1 + 840) & 0x20000) == 0 )
      v3 = (unsigned int)(*(_DWORD *)(a1 + 2168) + 832);
    Pool3 = (_SLIST_ENTRY *)ExAllocatePool3(64LL, v3, 1951624563LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
    v2 = Pool3;
    if ( Pool3 )
    {
      memset_0(Pool3, 0, 0x1D0uLL);
      v5 = ((unsigned __int64)&v2[29].Next + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( *(_DWORD *)(a1 + 2168) )
      {
        v2[1].Next = (_SLIST_ENTRY *)v5;
        v5 += *(unsigned int *)(a1 + 2168);
      }
      v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *((_QWORD *)&v2[26].Next + 1) = v6;
      v7 = (v6 + 175) & 0xFFFFFFFFFFFFFFF8uLL;
      v2[27].Next = (_SLIST_ENTRY *)v7;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 32) = 0LL;
      *(_QWORD *)v6 = v6 + 40;
      *(_DWORD *)(v6 + 24) = 0;
      *(_DWORD *)(v6 + 28) = 8;
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 32) = 0LL;
      *(_QWORD *)v7 = v7 + 40;
      *(_DWORD *)(v7 + 24) = 0;
      *(_DWORD *)(v7 + 28) = 8;
      if ( (*(_DWORD *)(a1 + 840) & 0x20000) != 0 )
        *((_QWORD *)&v2[25].Next + 1) = v7 + 168;
    }
    else
    {
      return 0LL;
    }
  }
  return v2;
}
