/*
 * XREFs of ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD_EX@1@@Z @ 0x140210840
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140211C90 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020FE40 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140210350 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140462248 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     qsort_s @ 0x140539760 (qsort_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4)
{
  char *v5; // rbx
  unsigned __int64 v6; // r9
  unsigned int *v7; // r10
  _QWORD *v8; // r8
  unsigned int *v9; // rsi
  __int64 v11; // r14
  __int16 v12; // ax
  __int16 v13; // dx
  __int64 *v14; // r12
  int v15; // edx
  _OWORD *v16; // rcx
  _DWORD **v17; // rax
  char *v18; // r12
  unsigned __int64 v19; // rdi
  unsigned int v20; // r10d
  unsigned int v21; // r11d
  unsigned int v22; // esi
  __int64 v23; // r9
  unsigned int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int *v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // edi
  bool v30; // zf
  __int64 v31; // r15
  _DWORD **v32; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  char *v37; // rdx
  unsigned __int64 v38; // rcx
  unsigned __int64 i; // rdx
  unsigned int *v40; // rdi
  unsigned int *j; // r9
  unsigned int v42; // edx
  int *v43; // r8
  _DWORD **v44; // rax
  _DWORD **v45; // rax
  __int64 LeafSibling; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // esi
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  void *v53; // rsp
  unsigned int v54; // edx
  void *v55; // rsp
  __int64 v56; // rcx
  unsigned __int64 v57; // rsi
  __int64 v58; // rdi
  bool v59; // cc
  void **v60; // r9
  void **v61; // rax
  char *v62; // rax
  unsigned int v63; // esi
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  void *v67; // rsp
  unsigned int v68; // edx
  void *v69; // rsp
  __int64 v70; // rax
  unsigned int *v71; // r8
  unsigned __int64 v72; // rcx
  void **v73; // rax
  void **v74; // rbx
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  unsigned __int64 v77; // rcx
  unsigned int v78; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v79; // [rsp+34h] [rbp+4h]
  unsigned int *v80; // [rsp+38h] [rbp+8h]
  unsigned int *v81; // [rsp+40h] [rbp+10h] BYREF
  __int128 v82; // [rsp+48h] [rbp+18h]
  int v83; // [rsp+58h] [rbp+28h]
  unsigned int v84; // [rsp+5Ch] [rbp+2Ch]
  __int64 v85; // [rsp+60h] [rbp+30h]
  unsigned int *v86; // [rsp+68h] [rbp+38h]
  unsigned __int64 v87; // [rsp+78h] [rbp+48h]
  __int128 Context; // [rsp+80h] [rbp+50h] BYREF
  __int128 v89; // [rsp+90h] [rbp+60h]

  v5 = (char *)a2 + *((unsigned __int16 *)a2 + 3);
  v6 = (unsigned __int64)a2 + *((unsigned __int16 *)a2 + 2);
  v86 = a3;
  v80 = a2;
  v7 = a3;
  v87 = v6;
  v8 = v5 + 8;
  v9 = a2;
  v11 = 0LL;
  Context = 0LL;
  if ( (unsigned __int64)(v5 + 8) > v6 )
  {
    v29 = -2147483643;
    goto LABEL_25;
  }
  *(_QWORD *)v5 = 0LL;
  if ( v5 )
    *(_DWORD *)v5 = *(_DWORD *)a4 & *(_DWORD *)(a1 + 800);
  *(_DWORD *)v5 *= 16;
  v12 = 4096;
  v13 = *(_WORD *)(a4 + 4);
  if ( (v13 & 0xFFF) != 0 )
    v12 = v13 & 0xFFF;
  *((_WORD *)v5 + 2) = v12;
  if ( v7[1] == *(_DWORD *)(a4 + 8) && v7[2] == (*(_WORD *)(a4 + 4) & 0xFFF) )
  {
    v36 = *v7;
    if ( (_DWORD)v36 )
    {
      v37 = (char *)v9 + v36;
      if ( (unsigned __int64)&v5[(unsigned int)((_DWORD)v5 - ((_DWORD)v9 + v36))] > v6 )
      {
LABEL_101:
        v29 = -2147483643;
      }
      else
      {
        v38 = (unsigned __int64)(v37 + 8);
        for ( i = (unsigned __int64)&v37[8 * (unsigned __int8)v37[6] + 8]; v38 < i; v38 += 8LL )
        {
          if ( *(_DWORD *)(v38 + 4) != *(_DWORD *)v5 || *(_DWORD *)v38 != *v9 )
          {
            *v8++ = *(_QWORD *)v38;
            ++v5[6];
          }
        }
        if ( v5[6] )
          goto LABEL_54;
        v29 = 0;
      }
      goto LABEL_25;
    }
  }
  v14 = (__int64 *)(a1 + 128);
  if ( (*(_DWORD *)(a1 + 184) & 1) == 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (char **)(a1 + 128),
      (__int64 *)(a1 + 152));
  *(_DWORD *)(a1 + 184) |= 1u;
  *(_DWORD *)(*(_QWORD *)(a1 + 760) + 8LL) = *(_DWORD *)(a4 + 8);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
    (char **)(a1 + 128),
    *(_DWORD *)(a1 + 768),
    a1 + 152);
  v15 = *(_DWORD *)(a1 + 176);
  if ( v15 == -1 || !v15 )
    v16 = (_OWORD *)(a1 + 160);
  else
    v16 = (_OWORD *)(*(_QWORD *)(a1 + 152) + 16LL * (unsigned int)(v15 - 1));
  v17 = (_DWORD **)(a1 + 144);
  v89 = *v16;
  if ( a1 == -128 )
    v17 = 0LL;
  v11 = v89;
  if ( **v17 != -1 )
  {
    if ( (_QWORD)v89 )
    {
      v47 = *v14;
      if ( (_QWORD)v89 != *v14 )
      {
        if ( v15 == -1 )
        {
          v48 = *(_QWORD *)v16;
          v49 = 0;
          if ( v47 )
            v49 = *(unsigned __int8 *)(v47 + 2);
          v50 = 16LL * v49;
          v51 = v50 + 15;
          if ( v50 + 15 < v50 )
            v51 = 0xFFFFFFFFFFFFFF0LL;
          v52 = v51 & 0xFFFFFFFFFFFFFFF0uLL;
          v53 = alloca(v52);
          v54 = *(_DWORD *)(v48 + 16);
          v55 = alloca(v52);
          v83 = 0;
          v85 = 1LL;
          v84 = v49;
          v81 = &v78;
          v82 = 0LL;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
            (char **)(a1 + 128),
            v54,
            (__int64)&v81);
          v56 = 2LL * (v49 - 2);
          v57 = (unsigned __int64)(&v80)[2 * v49 - 1];
          v58 = *((_QWORD *)&v78 + v56);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
            (char **)(a1 + 128),
            (__int64 *)&v81);
          v59 = v57 <= v58 + 16;
          v60 = (void **)(v57 - 8);
          v9 = v80;
          v61 = (void **)(v58 + 8);
        }
        else
        {
          v75 = *((_QWORD *)v16 - 1);
          v76 = *((_QWORD *)v16 - 2);
          v60 = (void **)(v75 - 8);
          v77 = v76 + 16;
          v61 = (void **)(v76 + 8);
          v59 = v75 <= v77;
        }
        if ( v59 )
          v60 = v61;
        if ( **(_DWORD **)(a1 + 144) != -1 )
          NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 144), v60, 3u);
      }
    }
  }
  v18 = v5 + 8;
  v19 = *((_QWORD *)&v89 + 1) - 4LL;
  v20 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1368) + 2LL * *v9) >> 13;
  v79 = v20;
  v21 = 0;
  v78 = 0;
  v22 = 0;
  while ( v22 < 0x10 && v11 )
  {
    v19 += 4LL;
    if ( v19 < v11 + 4 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v11 + 4) )
    {
      v23 = v19;
      goto LABEL_20;
    }
    v44 = (_DWORD **)(a1 + 144);
    if ( a1 == -128 )
      v44 = 0LL;
    if ( **v44 == -1 )
    {
      v45 = (_DWORD **)(a1 + 144);
      if ( a1 == -128 )
        v45 = 0LL;
      if ( **v45 == -1 )
        LeafSibling = *(_QWORD *)(v11 + 8);
      else
        LeafSibling = 3358LL;
    }
    else
    {
      LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                      a1 + 128,
                      v11);
      if ( LeafSibling == -1 )
      {
        v20 = v79;
        v23 = -1LL;
        v21 = v78;
        goto LABEL_20;
      }
    }
    if ( LeafSibling )
    {
      v19 = LeafSibling + 16;
      v11 = LeafSibling;
      v23 = LeafSibling + 16;
      v20 = v79;
      v21 = v78;
    }
    else
    {
      v20 = v79;
      v21 = v78;
      v23 = 0LL;
    }
LABEL_20:
    if ( !v23 )
      break;
    v24 = *(_DWORD *)v23;
    v25 = v24 >> *(_DWORD *)(a1 + 456);
    _BitScanReverse((unsigned int *)&v26, v25);
    v27 = (unsigned int *)(*(unsigned int *)(a1 + 472)
                         + *(_DWORD *)(a1 + 464) * (v24 & *(_DWORD *)(a1 + 460))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v26 + 192) + 16 * (v25 ^ (unsigned int)(1 << v26))));
    if ( v27 == (unsigned int *)a4 )
      goto LABEL_35;
    if ( v27[2] != *(_DWORD *)(a4 + 8) )
      break;
    if ( ((*(_WORD *)(a4 + 4) ^ *((_WORD *)v27 + 2)) & 0xFFF) != 0
      || (v34 = (unsigned __int64)*v27 >> *(_DWORD *)(a1 + 804),
          *(unsigned __int16 *)(*(_QWORD *)(a1 + 1368) + 2 * v34) >> 13 < v20)
      || (v35 = *(_QWORD *)(*(_QWORD *)(a1 + 792) + 3040LL)) != 0
      && (v35 == -1 || _bittest64(*(const signed __int64 **)(v35 + 16), v34)) )
    {
LABEL_35:
      ++v22;
    }
    else
    {
      if ( *((_WORD *)v27 + 3) < 0xFEFFu )
      {
        if ( (unsigned __int64)(v18 + 8) > v87 )
          goto LABEL_101;
        *(_QWORD *)v18 = 0LL;
        *(_DWORD *)v18 = *v27;
        *((_DWORD *)v18 + 1) = *((unsigned __int16 *)v27 + 3);
        v18 += 8;
        ++v5[6];
        goto LABEL_35;
      }
      v78 = ++v21;
      if ( v21 >= 0x80 )
        goto LABEL_35;
    }
  }
  v28 = (unsigned __int8)v5[6];
  if ( !(_BYTE)v28 )
    goto LABEL_24;
  v9 = v80;
  v40 = (unsigned int *)&v18[-8 * v28];
  if ( (unsigned __int8)v28 > 1u )
  {
    LODWORD(Context) = *v80;
    *((_QWORD *)&Context + 1) = a1;
    qsort_s(&v18[-8 * v28], (unsigned __int8)v5[6], 8uLL, ST_STORE<SM_TRAITS>::StDmCombineTargetCompare, &Context);
  }
  for ( j = &v40[2 * (unsigned __int8)v5[6]]; v40 < j; *v43 *= 16 )
  {
    v42 = *v40;
    v43 = (int *)(v40 + 1);
    *(_QWORD *)v40 = 0LL;
    if ( v40 != (unsigned int *)-4LL )
      *v43 = v42 & *(_DWORD *)(a1 + 800);
    if ( v40 )
      *v40 = v42 >> *(_DWORD *)(a1 + 804);
    v40 += 2;
  }
  v7 = v86;
LABEL_54:
  *v7 = *((unsigned __int16 *)v9 + 3);
  v7[1] = *(_DWORD *)(a4 + 8);
  v7[2] = *(_WORD *)(a4 + 4) & 0xFFF;
  *((_WORD *)v9 + 3) = (_WORD)v5 + 8 * ((unsigned __int8)v5[6] + 1) - (_WORD)v9;
LABEL_24:
  v29 = 0;
LABEL_25:
  v30 = a1 == -128;
  v31 = a1 + 128;
  v32 = (_DWORD **)(v31 + 16);
  if ( v30 )
    v32 = 0LL;
  if ( **v32 != -1 )
  {
    if ( v11 )
    {
      v62 = *(char **)v31;
      if ( v11 != *(_QWORD *)v31 )
      {
        if ( v62 )
          v63 = (unsigned __int8)v62[2];
        else
          v63 = 0;
        v64 = 16LL * v63;
        v65 = v64 + 15;
        if ( v64 + 15 < v64 )
          v65 = 0xFFFFFFFFFFFFFF0LL;
        v66 = v65 & 0xFFFFFFFFFFFFFFF0uLL;
        v67 = alloca(v66);
        v68 = *(_DWORD *)(v11 + 16);
        v69 = alloca(v66);
        v85 = 1LL;
        v84 = v63;
        v82 = 0LL;
        v83 = 0;
        v81 = &v78;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          (char **)v31,
          v68,
          (__int64)&v81);
        v70 = *((_QWORD *)&v78 + 2 * v63 - 4);
        v71 = (&v80)[2 * v63 - 1];
        v72 = v70 + 16;
        v73 = (void **)(v70 + 8);
        v74 = (void **)(v71 - 2);
        if ( (unsigned __int64)v71 <= v72 )
          v74 = v73;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          (char **)v31,
          (__int64 *)&v81);
        if ( **(_DWORD **)(v31 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(v31 + 16), v74);
      }
    }
  }
  return v29;
}
