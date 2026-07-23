/*
 * XREFs of ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140391408
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020F10C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14020DDD0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020DFF0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1403917A0 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140391D40 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140391FE0 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?BTreeFindNextEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAU_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140392B50 (-BTreeFindNextEntry@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14050BB44 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v8; // rsi
  __int64 v9; // r14
  int v10; // r12d
  _QWORD *v11; // r15
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // rax
  _DWORD *NextEntry; // r9
  unsigned int v16; // r9d
  int v17; // r10d
  int v18; // r14d
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 i; // r9
  unsigned int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int *v26; // r9
  int v27; // r8d
  unsigned int v28; // r10d
  int v29; // ecx
  __int64 v30; // r10
  __int16 v31; // ax
  unsigned int v32; // r8d
  int v33; // r9d
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rsi
  __int64 v37; // rcx
  int v38; // r15d
  __int64 v39; // r14
  int v40; // ebp
  char *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r9
  unsigned int v45; // ecx

  v4 = a2[52];
  if ( (*(_BYTE *)(a1 + 2062) & 1) != 0 )
  {
    LODWORD(result) = -1073740574;
    goto LABEL_39;
  }
  v8 = a2[53];
  v9 = a1 + 792;
  v10 = -1;
  v11 = a2 + 55;
  if ( *(_BYTE *)v4 && *v11 == *(_QWORD *)(*(_QWORD *)v9 + 2488LL) )
  {
    NextEntry = (_DWORD *)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindNextEntry(
                            a1,
                            a2[53]);
    if ( !NextEntry || *NextEntry != *(_DWORD *)(v4 + 16) )
    {
      LODWORD(result) = -1073741275;
LABEL_39:
      v38 = a3;
      return ST_STORE<SM_TRAITS>::StDmFinishPageRetrieve(a1, a4, (_DWORD)a2, v38, result);
    }
  }
  else
  {
    if ( (*(_DWORD *)(v8 + 32) & 1) == 0 )
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (char **)a1,
        (__int64 *)a2[53]);
    *(_DWORD *)(v8 + 32) |= 1u;
    LODWORD(result) = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
                        (char **)a1,
                        *(_DWORD *)(v4 + 16),
                        v8);
    if ( (int)result < 0 )
      goto LABEL_39;
    *v11 = *(_QWORD *)(*(_QWORD *)v9 + 2488LL);
    v13 = *(_DWORD *)(v8 + 24);
    if ( v13 == -1 || !v13 )
      v14 = v8 + 8;
    else
      v14 = *(_QWORD *)v8 + 16LL * (unsigned int)(v13 - 1);
    NextEntry = *(_DWORD **)(v14 + 8);
  }
  v16 = NextEntry[1];
  v17 = *(_DWORD *)(a1 + 456);
  v18 = *(_DWORD *)(a1 + 464);
  v19 = v16 >> v17;
  _BitScanReverse((unsigned int *)&v20, v19);
  v21 = v18 * (v16 & *(_DWORD *)(a1 + 460));
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v20 + 192) + 16 * (v19 ^ (unsigned int)(1 << v20)));
        ;
        i = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v25 + 192) + 16 * (v24 ^ (unsigned int)(1 << v25))) )
  {
    v26 = (unsigned int *)(*(unsigned int *)(a1 + 472) + v21 + i);
    if ( *v26 != -1 )
      break;
    v23 = v26[2];
    v24 = v23 >> v17;
    _BitScanReverse((unsigned int *)&v25, v24);
    v21 = v18 * (*(_DWORD *)(a1 + 460) & v23);
  }
  v27 = *(_DWORD *)(a1 + 800) & *v26;
  v28 = *v26;
  v29 = *(_DWORD *)(a1 + 804);
  *(_DWORD *)a4 = *v26;
  v30 = v28 >> v29;
  v31 = v26[1] & 0xFFF;
  if ( !v31 )
    v31 = 4096;
  *(_WORD *)(a4 + 4) = v31;
  *(_WORD *)(a4 + 6) = (unsigned __int8)*(_WORD *)v4;
  if ( (*(_DWORD *)(a1 + 776) & 0x100000) != 0 )
  {
    v10 = v26[2];
    *(_DWORD *)(a4 + 20) |= 4u;
  }
  *(_DWORD *)(a4 + 16) = v10;
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) != 0 )
  {
    v32 = 16 * v27;
  }
  else
  {
    v45 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1368) + 2 * v30) >> 13;
    if ( (_DWORD)v30 != *(_DWORD *)(a1 + 16 * (v45 + 89LL)) )
      v45 = 8;
    v32 = 16 * v27;
    if ( v45 != 8 )
    {
      v36 = *(_QWORD *)(16LL * v45 + a1 + 1432) + v32;
      goto LABEL_25;
    }
  }
  v33 = 129;
  v34 = *(_QWORD *)(a1 + 792);
  if ( *(_QWORD *)(a4 + 8) != 1LL )
    v33 = 1;
  if ( (*(_BYTE *)(v34 + 2469) & 4) != 0 )
    v35 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v34, v30, v32, v33, v33);
  else
    v35 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v34, v30, v32, v33, v33);
  v36 = v35;
  if ( v35 <= 4 )
  {
    LODWORD(result) = -2147483634;
    if ( v36 != 1 )
      LODWORD(result) = -1073741550;
    goto LABEL_39;
  }
  *(_DWORD *)(a4 + 20) |= 1u;
LABEL_25:
  v37 = *(_QWORD *)(v4 + 8);
  v38 = a3;
  v39 = a2[2];
  v40 = *(_DWORD *)(a3 + 8) & 0x400;
  if ( (*(_BYTE *)(v37 + 10) & 5) != 0 )
    v41 = *(char **)(v37 + 24);
  else
    v41 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v37, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( v41 )
  {
    v42 = *(unsigned __int16 *)(a4 + 6);
    *(_DWORD *)(a4 + 20) |= 2u;
    v43 = (__int64)&v41[4096 * v42];
    v44 = v43 | 1;
    if ( !v40 )
      v44 = v43;
    result = ST_STORE<SM_TRAITS>::StDmSinglePageCopy(a1, v39, v36, v44, a4, a2);
    if ( (int)result >= 0 )
    {
      if ( (_DWORD)result == 259 )
        return result;
      LODWORD(result) = 0;
    }
  }
  else
  {
    LODWORD(result) = -1073741670;
  }
  return ST_STORE<SM_TRAITS>::StDmFinishPageRetrieve(a1, a4, (_DWORD)a2, v38, result);
}
