/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EC1D0
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020D6E0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140211560 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EC038 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 * Callees:
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EC010 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EC038 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EC40C (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 *v4; // r14
  _DWORD *v5; // rbx
  char *v6; // rcx
  int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // ebp
  const void *v10; // rdx
  size_t v11; // rdi
  _DWORD *v13; // rdx
  _QWORD *i; // rcx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  void **v20; // rdx
  unsigned __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  _DWORD *v26; // rbp
  unsigned __int64 v27; // r14
  __int64 v28; // rdx

  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = (_DWORD *)*v4;
  v6 = (char *)v4[1];
  v7 = *(_DWORD *)*v4;
  if ( *(_BYTE *)(*v4 + 3) )
  {
    v8 = 8LL * (unsigned __int16)v7 + 8;
    v9 = 255;
    v10 = v6 + 8;
  }
  else
  {
    v8 = 16LL * (unsigned __int16)v7;
    v10 = v6 + 16;
    v9 = 127;
  }
  v11 = (size_t)v5 + v8 - (_QWORD)v6;
  if ( v11 )
    memmove(v6, v10, v11);
  --*(_WORD *)v5;
  if ( *((_BYTE *)v5 + 3) )
    --*(_QWORD *)(a1 + 8);
  if ( *(_DWORD **)a1 == v5 )
  {
    if ( !(unsigned __int16)*v5 && !*((_BYTE *)v5 + 3) )
    {
      memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      --*(_DWORD *)(a2 + 24);
      if ( **(_DWORD **)(a1 + 16) == -1 || *((_BYTE *)v5 + 2) != 2 )
      {
        *(_QWORD *)a1 = *((_QWORD *)v5 + 1);
      }
      else
      {
        *(_QWORD *)a1 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v5 + 1, 1u);
        if ( **(_DWORD **)(a1 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v5 + 1);
        if ( **(_DWORD **)(a1 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v5 + 1);
        v26 = *(_DWORD **)(a1 + 16);
        if ( *v26 != -1 )
        {
          if ( (v5[2] & 1) != 0 )
          {
            v27 = *((_QWORD *)v5 + 1) & 0xFFFFFFFFFFFFF000uLL;
            v28 = *(_QWORD *)(v27 + 8);
            if ( v28 )
            {
              if ( (v28 & 2) == 0 )
              {
                guard_dispatch_icall_no_overrides(a1 + 16, v28);
                *(_DWORD *)(v27 + 8) |= 2u;
                --v26[12];
              }
            }
          }
          else
          {
            --v26[11];
            guard_dispatch_icall_no_overrides(a1 + 16, *((_QWORD *)v5 + 1));
          }
        }
      }
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
        a1,
        (unsigned __int8 *)v5);
    }
    return 0LL;
  }
  else
  {
    if ( (unsigned __int16)*v5 < v9 )
    {
      v16 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              a1,
              a2);
      if ( !v16 )
        return 3221225478LL;
      v17 = (unsigned __int16)*v5;
      if ( v17 < v9 )
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
          a1,
          a2,
          v16);
        v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v16 & 1) != 0 )
        {
          v21 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
          *v4 = v21;
          v22 = (unsigned __int16)*(_DWORD *)v21;
          if ( *(_BYTE *)(v21 + 3) )
            v23 = 8 * v22 + 16;
          else
            v23 = 16 * (v22 + 1);
          v4[1] = v21 + v23 - v11;
        }
      }
      else
      {
        if ( (v16 & 1) != 0 )
        {
          v24 = v17 - v9 + 1;
          v25 = v4[1];
          if ( *((_BYTE *)v5 + 3) )
            v4[1] = v25 + 8 * v24;
          else
            v4[1] = v25 + 16 * v24;
        }
        if ( *((_BYTE *)v5 + 3) )
        {
          v18 = *(v4 - 2);
          v19 = 32LL * !(v16 & 1) + *(v4 - 1) - 16;
          v20 = (void **)(v19 <= v18 + 16 ? v18 + 8 : v19 - 8);
          if ( **(_DWORD **)(a1 + 16) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v20);
        }
      }
    }
    v13 = (_DWORD *)v4[1];
    if ( v13 == (_DWORD *)(*v4 + 16) && *(_BYTE *)(*v4 + 3) )
    {
      for ( i = (_QWORD *)(*(_QWORD *)a2 + 16 * (*(unsigned int *)(a2 + 24) - 2LL));
            (unsigned __int64)i >= *(_QWORD *)a2;
            i -= 2 )
      {
        v15 = i[1];
        if ( v15 > *i + 16LL )
        {
          *(_DWORD *)(v15 - 16) = *v13;
          return 0LL;
        }
      }
    }
    return 0LL;
  }
}
