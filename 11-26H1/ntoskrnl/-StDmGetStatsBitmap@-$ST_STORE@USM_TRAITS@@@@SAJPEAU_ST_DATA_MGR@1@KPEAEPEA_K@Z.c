/*
 * XREFs of ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140641974
 * Callers:
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140357EBC (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 * Callees:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14020D1B8 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020DFF0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020E640 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1403947C0 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140394DA0 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1404743C4 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  char **v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rax
  _QWORD *v7; // r13
  unsigned __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 LeafSibling; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rax
  __int16 v21; // cx
  int v22; // edx
  int v23; // eax
  unsigned int v24; // r9d
  unsigned int v25; // eax
  int v26; // r9d
  unsigned __int64 v27; // r8
  char v28; // cl
  _OWORD v30[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = (char **)(a1 + 64);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 72);
  v7 = a4;
  v30[0] = 0LL;
  if ( v6 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (char **)a1,
        (__int64 *)(a1 + 24));
    *(_DWORD *)(a1 + 56) |= 1u;
    if ( (*(_DWORD *)(a1 + 120) & 1) == 0 )
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        v4,
        (__int64 *)(a1 + 88));
    *(_DWORD *)(a1 + 120) |= 1u;
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
    **(_DWORD **)(a1 + 760) = 0;
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
      v4,
      *(_DWORD *)(a1 + 768),
      a1 + 88);
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
      (__int64)v4,
      (__int64)v30,
      a1 + 88);
    v11 = *((_QWORD *)&v30[0] + 1);
    v12 = *(_QWORD *)&v30[0];
    while ( 1 )
    {
      if ( !v12 )
      {
LABEL_25:
        v7 = a4;
        *(_QWORD *)&v30[0] = v12;
        break;
      }
      v11 += 4LL;
      v13 = (unsigned __int16)*(_DWORD *)v12 + 4LL;
      *((_QWORD *)&v30[0] + 1) = v11;
      if ( v11 >= v12 + 4 * v13 )
      {
        if ( **(_DWORD **)((unsigned __int64)(v4 + 2) & -(__int64)(v4 != 0LL)) == -1 )
        {
          LeafSibling = *(_QWORD *)(v12 + 8);
        }
        else
        {
          LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(v4);
          if ( LeafSibling == -1 )
          {
            v15 = -1LL;
            goto LABEL_17;
          }
        }
        if ( !LeafSibling )
        {
          v15 = 0LL;
          goto LABEL_17;
        }
        v11 = LeafSibling + 16;
        v12 = LeafSibling;
        *((_QWORD *)&v30[0] + 1) = LeafSibling + 16;
      }
      v15 = v11;
LABEL_17:
      if ( !v15 )
        goto LABEL_25;
      v16 = (unsigned int)(*(_DWORD *)v15 >> *(_DWORD *)(a1 + 456));
      _BitScanReverse((unsigned int *)&v17, v16);
      v18 = *(unsigned int *)(a1 + 472);
      v19 = (unsigned int)(*(_DWORD *)(a1 + 464) * (*(_DWORD *)v15 & *(_DWORD *)(a1 + 460)))
          + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v17 + 192) + 16 * (v16 ^ (unsigned int)(1 << v17)));
      v20 = 4096LL;
      v21 = *(_WORD *)(v19 + v18 + 4);
      v22 = v21 & 0xFFF;
      if ( (v21 & 0xFFF) != 0 )
        v20 = *(_WORD *)(v19 + v18 + 4) & 0xFFF;
      v5 += v20;
      v23 = *(_DWORD *)(a1 + 816);
      if ( (v21 & 0xFFF) == 0 )
      {
        v22 = 4096;
        v23 = 0;
      }
      v24 = v23 + v22 + 15;
      v25 = *(_DWORD *)(v19 + v18) / a2;
      v26 = v24 >> 4;
      if ( v26 )
      {
        do
        {
          v27 = (unsigned __int64)v25 >> 3;
          v28 = v25++ & 7;
          v26 -= a2;
          *(_BYTE *)(v27 + a3) |= 1 << v28;
        }
        while ( v26 > 0 );
      }
    }
  }
  *v7 = v5;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    (char **)v30,
    v4);
  return 0LL;
}
