/*
 * XREFs of ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140211C90
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210F70 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14020D1B8 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD_EX@1@@Z @ 0x140210840 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1403ECB64 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1403ED018 (-BTreeFindLeafSiblingEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x1403ED224 (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineRegion(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  _DWORD *Pool3; // rax
  __int64 *v6; // rsi
  int v7; // ecx
  int v8; // r14d
  int v9; // eax
  __int64 v10; // r15
  __int64 v11; // r14
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 result; // rax
  _DWORD *LeafSibling; // rax
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  int v21; // [rsp+38h] [rbp-8h]
  _QWORD *v22; // [rsp+90h] [rbp+50h] BYREF

  v2 = *(_QWORD **)(a1 + 1376);
  if ( v2 )
  {
    v22 = *(_QWORD **)(a1 + 1376);
    Pool3 = v2;
    *(_QWORD *)(a1 + 1376) = 0LL;
  }
  else
  {
    Pool3 = (_DWORD *)ExAllocatePool3(64LL, 4096LL, 1951624563LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
    v22 = Pool3;
    v2 = Pool3;
    if ( !Pool3 )
    {
      result = 3221225626LL;
      goto LABEL_19;
    }
  }
  *Pool3 = a2;
  v6 = (__int64 *)(a1 + 88);
  Pool3[1] = 528384;
  v7 = *(_DWORD *)(a1 + 804);
  v20 = 0LL;
  v8 = *(_DWORD *)(a1 + 800) | (a2 << v7);
  v21 = 0;
  if ( (*(_DWORD *)(a1 + 120) & 1) == 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (char **)(a1 + 64),
      (__int64 *)(a1 + 88));
  *(_DWORD *)(a1 + 120) |= 1u;
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
  **(_DWORD **)(a1 + 760) = v8;
  if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
              a1 + 88,
              a1 + 64,
              *(unsigned int *)(a1 + 768)) < 0 )
    NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  while ( 1 )
  {
    v9 = *(_DWORD *)(a1 + 112);
    if ( !v9 )
      break;
    v10 = *v6;
    v11 = 2LL * (unsigned int)(v9 - 1);
    v12 = *(_QWORD *)(*v6 + 16LL * (unsigned int)(v9 - 1) + 8) - 4LL;
    v13 = *(_QWORD *)(*v6 + 16LL * (unsigned int)(v9 - 1)) + 16LL;
    *(_QWORD *)(*v6 + 8 * v11 + 8) = v12;
    if ( v12 >= v13 )
      goto LABEL_8;
    *(_QWORD *)(v10 + 8 * v11 + 8) = v13;
    LeafSibling = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
                              a1 + 64,
                              a1 + 88,
                              2LL);
    if ( !LeafSibling )
      break;
    if ( LeafSibling != (_DWORD *)-1LL )
    {
      v12 = (unsigned __int64)&LeafSibling[(unsigned __int16)*LeafSibling + 3];
      *(_QWORD *)(v10 + 8 * v11 + 8) = v12;
LABEL_8:
      if ( !v12 )
        break;
      goto LABEL_9;
    }
    v12 = -1LL;
LABEL_9:
    v14 = *(_DWORD *)v12;
    v15 = v14 >> *(_DWORD *)(a1 + 456);
    _BitScanReverse((unsigned int *)&v16, v15);
    v17 = *(unsigned int *)(a1 + 472)
        + *(_DWORD *)(a1 + 464) * (v14 & *(_DWORD *)(a1 + 460))
        + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v16 + 192) + 16 * (v15 ^ (unsigned int)(1 << v16)));
    if ( *(_DWORD *)v17 >> *(_DWORD *)(a1 + 804) != a2 )
      break;
    if ( *(_WORD *)(v17 + 6) <= 1u
      && (unsigned int)ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry(a1, (unsigned int *)v2, (unsigned int *)&v20, v17) == -2147483643 )
    {
      result = ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(a1, &v22);
      if ( (int)result < 0 )
        goto LABEL_23;
      if ( (*(_DWORD *)(a1 + 120) & 1) == 0 )
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          (char **)(a1 + 64),
          (__int64 *)(a1 + 88));
      *(_DWORD *)(a1 + 120) |= 1u;
      **(_DWORD **)(a1 + 760) = *(_DWORD *)v17;
      if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
                  a1 + 88,
                  a1 + 64,
                  *(unsigned int *)(a1 + 768)) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      v2 = v22;
      v20 = 0LL;
      v21 = 0;
      *v22 = 0LL;
      *(_DWORD *)v2 = a2;
      *((_DWORD *)v2 + 1) = 528384;
    }
  }
  if ( v2 + 1 >= (_QWORD *)((char *)v2 + *((unsigned __int16 *)v2 + 3)) )
  {
LABEL_18:
    result = 0LL;
    goto LABEL_19;
  }
  result = ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(a1, &v22);
  if ( (int)result >= 0 )
  {
    v2 = v22;
    goto LABEL_18;
  }
LABEL_23:
  v2 = v22;
LABEL_19:
  if ( v2 )
    *(_QWORD *)(a1 + 1376) = v2;
  return result;
}
