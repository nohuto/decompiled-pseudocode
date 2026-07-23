/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402104F0
 * Callers:
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14020F6E0 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140211560 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EBCE8 (-BTreeMergeNodes@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 * Callees:
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EBCE8 (-BTreeMergeNodes@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EC010 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EC734 (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDeleteEx(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void **v5; // r14
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  char *v8; // rax
  char *v9; // r9
  const void *v10; // rdx
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rcx
  char *v14; // rsi
  _DWORD *v16; // rdx
  __int64 v17; // r13
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  void **v21; // rdx
  _QWORD *i; // rcx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  char *v28; // rax
  __int64 v29; // r8
  _DWORD *v30; // rbp
  unsigned __int64 v31; // r14
  __int64 v32; // rdx

  v5 = (void **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v6 = *v5;
  v7 = (unsigned __int16)*(_DWORD *)*v5;
  v8 = (char *)v5[1];
  v9 = v8;
  if ( *((_BYTE *)*v5 + 3) )
  {
    v10 = v8 + 4;
    v11 = 510;
    v12 = 4 * v7 + 12;
  }
  else
  {
    v10 = v8 + 16;
    v12 = 16 * v7;
    v11 = 127;
  }
  v13 = v12 - (_QWORD)v8;
  v14 = (char *)v6 + v13;
  if ( (_DWORD *)((char *)v6 + v13) )
    memmove(v5[1], v10, (size_t)v6 + v13);
  --*(_WORD *)v6;
  if ( *((_BYTE *)v6 + 3) )
    --*(_QWORD *)(a1 + 8);
  if ( *(_DWORD **)a1 == v6 )
  {
    if ( !(unsigned __int16)*v6 && !*((_BYTE *)v6 + 3) )
    {
      memmove(v5, v5 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      --*(_DWORD *)(a2 + 24);
      if ( **(_DWORD **)(a1 + 16) == -1 || *((_BYTE *)v6 + 2) != 2 )
      {
        *(_QWORD *)a1 = *((_QWORD *)v6 + 1);
      }
      else
      {
        *(_QWORD *)a1 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v6 + 1, 1u);
        if ( **(_DWORD **)(a1 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v6 + 1);
        if ( **(_DWORD **)(a1 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v6 + 1);
        v30 = *(_DWORD **)(a1 + 16);
        if ( *v30 != -1 )
        {
          if ( (v6[2] & 1) != 0 )
          {
            v31 = *((_QWORD *)v6 + 1) & 0xFFFFFFFFFFFFF000uLL;
            v32 = *(_QWORD *)(v31 + 8);
            if ( v32 )
            {
              if ( (v32 & 2) == 0 )
              {
                guard_dispatch_icall_no_overrides(a1 + 16, v32, v29);
                *(_DWORD *)(v31 + 8) |= 2u;
                --v30[12];
              }
            }
          }
          else
          {
            --v30[11];
            guard_dispatch_icall_no_overrides(a1 + 16, *((_QWORD *)v6 + 1), v29);
          }
        }
      }
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
        a1,
        v6);
    }
    return 0LL;
  }
  else
  {
    if ( (unsigned __int16)*v6 < v11 )
    {
      v17 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2,
              a3,
              v9);
      if ( !v17 )
        return 3221225478LL;
      v18 = (unsigned __int16)*v6;
      if ( v18 < v11 )
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeMergeNodes(
          a1,
          a2,
          v17);
        v5 = (void **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v17 & 1) != 0 )
        {
          v24 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
          *v5 = (void *)v24;
          v25 = (unsigned __int16)*(_DWORD *)v24;
          if ( *(_BYTE *)(v24 + 3) )
            v26 = 4 * v25 + 16;
          else
            v26 = 16 * (v25 + 1);
          v5[1] = (void *)(v24 + v26 - (_QWORD)v14);
        }
      }
      else
      {
        if ( (v17 & 1) != 0 )
        {
          v27 = v18 - v11 + 1;
          v28 = (char *)v5[1];
          if ( *((_BYTE *)v6 + 3) )
            v5[1] = &v28[4 * v27];
          else
            v5[1] = &v28[16 * v27];
        }
        if ( *((_BYTE *)v6 + 3) )
        {
          v19 = (__int64)*(v5 - 2);
          v20 = (unsigned __int64)*(v5 - 1) + 32 * !(v17 & 1) - 16;
          v21 = (void **)(v20 <= v19 + 16 ? v19 + 8 : v20 - 8);
          if ( **(_DWORD **)(a1 + 16) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v21);
        }
      }
    }
    v16 = v5[1];
    if ( v16 == (_DWORD *)((char *)*v5 + 16) && *((_BYTE *)*v5 + 3) )
    {
      for ( i = (_QWORD *)(*(_QWORD *)a2 + 16 * (*(unsigned int *)(a2 + 24) - 2LL));
            (unsigned __int64)i >= *(_QWORD *)a2;
            i -= 2 )
      {
        v23 = i[1];
        if ( v23 > *i + 16LL )
        {
          *(_DWORD *)(v23 - 16) = *v16;
          return 0LL;
        }
      }
    }
    return 0LL;
  }
}
