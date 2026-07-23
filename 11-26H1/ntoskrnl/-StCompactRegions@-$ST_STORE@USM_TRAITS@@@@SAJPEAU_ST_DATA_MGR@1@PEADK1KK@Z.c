/*
 * XREFs of ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140393B98 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14039547C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x1403968F8 (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1406411CC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14020D1B8 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14020E100 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020E640 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020ECD0 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1403947C0 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140394870 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140394DA0 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x140394E70 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140395AF4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1404743C4 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     SmEtwLogCompactionOp @ 0x140529FD0 (SmEtwLogCompactionOp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactRegions(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // r12d
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  int v10; // edi
  _WORD *v11; // rax
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // r13
  int v21; // r9d
  int v22; // edx
  __int16 v23; // cx
  int v24; // ecx
  unsigned int v25; // edi
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  int v29; // r15d
  __int64 v30; // rdi
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int16 v33; // cx
  unsigned __int64 v34; // rdx
  unsigned __int16 v35; // r10
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned __int64 v38; // r8
  _WORD *v39; // r11
  unsigned __int64 v40; // rdx
  unsigned __int16 v41; // r10
  __int64 v42; // r9
  unsigned int v43; // ecx
  unsigned int v44; // eax
  int v45; // eax
  int v46; // edi
  unsigned int v47; // r15d
  __int64 v48; // r8
  _DWORD **v49; // rax
  _DWORD **v50; // rax
  __int64 LeafSibling; // rax
  int v53; // eax
  __int64 v54; // rcx
  int v55; // [rsp+60h] [rbp-A0h]
  int v56; // [rsp+64h] [rbp-9Ch]
  unsigned int v57; // [rsp+68h] [rbp-98h] BYREF
  __int128 v58; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+80h] [rbp-80h]
  unsigned int v60; // [rsp+84h] [rbp-7Ch]
  int v61; // [rsp+88h] [rbp-78h]
  unsigned int v62; // [rsp+8Ch] [rbp-74h]
  unsigned int v63; // [rsp+90h] [rbp-70h]
  __int64 v64; // [rsp+98h] [rbp-68h]
  __int64 v65; // [rsp+A0h] [rbp-60h]
  _WORD *v66; // [rsp+A8h] [rbp-58h]
  _WORD *v67; // [rsp+B0h] [rbp-50h]
  __int64 v68[3]; // [rsp+C0h] [rbp-40h] BYREF
  int v69; // [rsp+D8h] [rbp-28h]
  int v70; // [rsp+DCh] [rbp-24h]
  __int64 v71; // [rsp+E0h] [rbp-20h]
  char v72; // [rsp+E8h] [rbp-18h] BYREF

  v6 = a5;
  v8 = a3;
  v65 = a2;
  v62 = a3;
  v64 = a4;
  memset_0(v68, 0, 0xA8uLL);
  v9 = *(_QWORD *)(a1 + 1368);
  v10 = 0;
  v56 = 0;
  v58 = 0LL;
  v63 = a5;
  v11 = (_WORD *)(v9 + 2LL * a5);
  v67 = (_WORD *)(v9 + 2 * v8);
  v66 = v11;
  v61 = 0;
  if ( v67 == v11 )
    v55 = 0;
  else
    v55 = *v11 & 0x1FFF;
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
  v12 = (_QWORD *)(a1 + 88);
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (char **)(a1 + 64),
      (__int64 *)(a1 + 88));
  *(_DWORD *)(a1 + 120) &= ~1u;
  **(_DWORD **)(a1 + 760) = (_DWORD)v8 << *(_DWORD *)(a1 + 804);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
    (char **)(a1 + 64),
    *(_DWORD *)(a1 + 768),
    a1 + 88);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
    a1 + 64,
    &v58,
    a1 + 88);
  v59 = 0;
  while ( 1 )
  {
    if ( v10 )
    {
      **(_DWORD **)(a1 + 760) = (_DWORD)v8 << *(_DWORD *)(a1 + 804);
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
        (char **)(a1 + 64),
        *(_DWORD *)(a1 + 768),
        a1 + 88);
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
        &v58,
        a1 + 64);
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
        a1 + 64,
        &v58,
        a1 + 88);
    }
    if ( !(_QWORD)v58 )
    {
LABEL_67:
      v46 = 0;
      goto LABEL_68;
    }
    v13 = *((_QWORD *)&v58 + 1) + 4LL;
    v14 = (unsigned __int16)*(_DWORD *)v58 + 4LL;
    *((_QWORD *)&v58 + 1) = v13;
    if ( v13 >= (__int64)v58 + 4 * v14 )
    {
      if ( a1 == -64 )
        v49 = 0LL;
      else
        v49 = (_DWORD **)(a1 + 80);
      if ( **v49 == -1 )
      {
        if ( a1 == -64 )
          v50 = 0LL;
        else
          v50 = (_DWORD **)(a1 + 80);
        if ( **v50 == -1 )
          LeafSibling = *(_QWORD *)(v58 + 8);
        else
          LeafSibling = 3358LL;
      }
      else
      {
        LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                        a1 + 64,
                        v58);
        if ( LeafSibling == -1 )
        {
          v13 = -1LL;
          goto LABEL_10;
        }
      }
      if ( LeafSibling )
      {
        v13 = LeafSibling + 16;
        *(_QWORD *)&v58 = LeafSibling;
        *((_QWORD *)&v58 + 1) = LeafSibling + 16;
      }
      else
      {
        v13 = 0LL;
      }
    }
LABEL_10:
    if ( !v13 )
      goto LABEL_67;
    v15 = *(_DWORD *)v13;
    v16 = (unsigned int)(*(_DWORD *)v13 >> *(_DWORD *)(a1 + 456));
    v17 = *(_DWORD *)(a1 + 464) * (v15 & *(_DWORD *)(a1 + 460));
    _BitScanReverse((unsigned int *)&v18, v16);
    v57 = v15;
    v19 = *(_DWORD *)(a1 + 800);
    v60 = 0;
    v20 = *(unsigned int *)(a1 + 472)
        + v17
        + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v18 + 192) + 16 * (v16 ^ (unsigned int)(1 << v18)));
    v21 = *(_DWORD *)v20 & v19;
    if ( *(_DWORD *)v20 >> *(_DWORD *)(a1 + 804) != (_DWORD)v8 )
      goto LABEL_67;
    v22 = *(_DWORD *)(a1 + 816);
    v23 = *(_WORD *)(v20 + 4);
    if ( (v23 & 0xFFF) != 0 )
    {
      v24 = v23 & 0xFFF;
    }
    else
    {
      v24 = 4096;
      v22 = 0;
    }
    v25 = (unsigned int)(v22 + v24 + 15) >> 4;
    v60 = v25;
    if ( v6 == (_DWORD)v8 || v25 + (*v66 & 0x1FFF) <= *(_DWORD *)(a1 + 808) )
    {
      v26 = v64;
      v27 = v55;
    }
    else
    {
      v26 = v65;
      v66 = v67;
      v6 = v8;
      v27 = 0;
      v64 = v65;
      v55 = 0;
      v56 = 0;
      v61 = 1;
    }
    if ( v21 != v27 || (_DWORD)v8 != v6 )
      break;
LABEL_36:
    v45 = v25 + v27;
    v10 = v56;
    v55 = v45;
    if ( a6 && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, 0LL) != 2 )
    {
      v46 = -2147483634;
      goto LABEL_68;
    }
  }
  if ( v26 )
  {
    memmove((void *)(v26 + (unsigned int)(16 * v27)), (const void *)(v65 + (unsigned int)(16 * v21)), 16 * v25);
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v20);
    v28 = *(_DWORD *)(a1 + 112);
    v29 = v55 | (v6 << *(_DWORD *)(a1 + 804));
    if ( v28 == -1 || !v28 )
      v30 = a1 + 96;
    else
      v30 = *v12 + 16LL * (unsigned int)(v28 - 1);
    if ( *(_QWORD *)v30 == (_QWORD)v58 )
    {
      *(_QWORD *)(v30 + 8) = *((_QWORD *)&v58 + 1);
    }
    else
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (char **)(a1 + 64),
        (__int64 *)(a1 + 88));
      if ( *(_DWORD *)(a1 + 112) == -1 )
      {
        *(_OWORD *)v30 = v58;
      }
      else
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          (char **)(a1 + 64),
          *(_DWORD *)(v58 + 16),
          a1 + 88);
        v53 = *(_DWORD *)(a1 + 112);
        if ( v53 == -1 || !v53 )
          v54 = a1 + 96;
        else
          v54 = *v12 + 16LL * (unsigned int)(v53 - 1);
        *(_QWORD *)(v54 + 8) = *((_QWORD *)&v58 + 1);
      }
    }
    if ( !v56 )
    {
      **(_DWORD **)(a1 + 760) = v29;
      if ( (unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
                           a1 + 64,
                           a1 + 88,
                           *(unsigned int *)(a1 + 768)) )
      {
        v31 = v57;
        *(_DWORD *)v20 = v29;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
          a1 + 64,
          a1 + 88,
          v31);
LABEL_26:
        v8 = v62;
        v25 = v60;
        if ( v62 != v6 )
        {
          v32 = *(_QWORD *)(a1 + 1368);
          v33 = *(_WORD *)(v32 + 2LL * v62);
          v34 = (unsigned __int64)v33 >> 13;
          v35 = v33 & 0x1FFF;
          *(_WORD *)(v32 + 2LL * v62) = v33 - v60;
          *(_DWORD *)(a1 + 8 * v34 + 1996) -= v25;
          if ( *(_DWORD *)(a1 + 16 * (v34 + 89)) != (_DWORD)v8 )
          {
            v36 = (unsigned int)(*(_DWORD *)(a1 + 800) + 1) >> 1;
            v37 = *(_WORD *)(v32 + 2 * v8) & 0x1FFF;
            if ( v35 < v36 && v35 )
            {
              if ( v37 >= v36 || (*(_WORD *)(v32 + 2 * v8) & 0x1FFF) == 0 )
              {
                --*(_DWORD *)(a1 + 1408);
                *(_BYTE *)((v8 >> 3) + *(_QWORD *)(a1 + 1400)) |= 1 << (v8 & 7);
              }
            }
            else if ( v37 < v36 && (*(_WORD *)(v32 + 2 * v8) & 0x1FFF) != 0 )
            {
              *(_BYTE *)((v8 >> 3) + *(_QWORD *)(a1 + 1400)) &= ~(1 << (v8 & 7));
              ++*(_DWORD *)(a1 + 1408);
            }
          }
          v38 = v6;
          v39 = (_WORD *)(*(_QWORD *)(a1 + 1368) + 2LL * v6);
          v40 = (unsigned __int64)(unsigned __int16)*v39 >> 13;
          v41 = *v39 & 0x1FFF;
          *v39 += v25;
          v42 = 16 * (v40 + 89);
          *(_DWORD *)(a1 + 8 * v40 + 1996) += v25;
          if ( *(_DWORD *)(v42 + a1) != v6 )
          {
            v43 = (unsigned int)(*(_DWORD *)(a1 + 800) + 1) >> 1;
            v44 = *v39 & 0x1FFF;
            if ( v41 < v43 && v41 )
            {
              if ( v44 >= v43 || (*v39 & 0x1FFF) == 0 )
              {
                --*(_DWORD *)(a1 + 1408);
                v38 = (unsigned __int64)v6 >> 3;
                *(_BYTE *)(v38 + *(_QWORD *)(a1 + 1400)) |= 1 << (v6 & 7);
              }
            }
            else if ( v44 < v43 && (*v39 & 0x1FFF) != 0 )
            {
              v38 = (unsigned __int64)v6 >> 3;
              *(_BYTE *)(v38 + *(_QWORD *)(a1 + 1400)) &= ~(1 << (v6 & 7));
              ++*(_DWORD *)(a1 + 1408);
            }
          }
          if ( v25 )
          {
            if ( v6 == *(_DWORD *)(v42 + a1) )
              *(_DWORD *)(v42 + a1 + 4) += v25;
          }
          else if ( (*v39 & 0x1FFF) == 0 && v6 != *(_DWORD *)(v42 + a1) )
          {
            ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v6, v38);
          }
        }
        ++v59;
        v27 = v55;
        goto LABEL_36;
      }
      v56 = 1;
    }
    **(_DWORD **)(a1 + 760) = *(_DWORD *)v20;
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
      a1 + 64,
      a1 + 88,
      *(unsigned int *)(a1 + 768));
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
      &v58,
      a1 + 64);
    *(_DWORD *)v20 = v29;
    v47 = v57;
    v68[0] = (__int64)&v72;
    v68[1] = 0LL;
    v58 = 0LL;
    v68[2] = 0LL;
    v71 = 0LL;
    v69 = 0;
    v70 = 8;
    v46 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
            (char **)(a1 + 64),
            &v57,
            (__int64)v68);
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (char **)(a1 + 64),
      v68);
    if ( v46 < 0 )
    {
      *(_DWORD *)v20 = **(_DWORD **)(a1 + 760);
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        a1 + 64,
        a1 + 88,
        v47);
      goto LABEL_68;
    }
    if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                (char **)(a1 + 64),
                *(_DWORD *)(a1 + 768),
                a1 + 88) < 0
      || (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
                a1 + 64,
                a1 + 88,
                v48) < 0 )
    {
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
    }
    goto LABEL_26;
  }
  v46 = -1073741802;
LABEL_68:
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    &v58,
    a1 + 64);
  if ( v46 != -1073741802 && (WORD2(stru_140E27C48.InitialStack) & 0x200) != 0 )
    SmEtwLogCompactionOp(
      (unsigned int)&stru_140E27C48.QuantumTarget,
      15,
      a1,
      v62,
      v63,
      (unsigned __int16)*v66 >> 13,
      v59,
      v61,
      v46,
      0,
      0);
  return (unsigned int)v46;
}
