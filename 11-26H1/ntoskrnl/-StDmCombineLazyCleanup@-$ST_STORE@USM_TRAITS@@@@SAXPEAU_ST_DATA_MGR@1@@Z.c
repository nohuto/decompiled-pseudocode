/*
 * XREFs of ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14020B620
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14020D1B8 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14020DDD0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020DFF0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EF10 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14020EFE0 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmHpChunkFree @ 0x140211300 (SmHpChunkFree.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x14042FB30 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14045A7F0 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x1404EB6A8 (-BTreeIteratorAttachEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup(__int64 a1)
{
  char v2; // cl
  unsigned int v3; // r9d
  unsigned int v4; // ebp
  unsigned __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // rcx
  _DWORD *v14; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD **v18; // rax
  __int64 LeafSibling; // rax
  unsigned int v20; // ebx
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_BYTE *)(a1 + 2061);
  v21 = 0LL;
  if ( (v2 & 3) == 1 )
  {
    *(_BYTE *)(a1 + 2061) = v2 & 0xFC | 2;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorAttachEx(
      &v21,
      a1);
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 1384);
    if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        a1,
        a1 + 24);
    *(_DWORD *)(a1 + 56) |= 1u;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1,
      v20,
      a1 + 24);
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      a1,
      &v21,
      a1 + 24);
  }
  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 2056) )
  {
    v5 = *((_QWORD *)&v21 + 1);
    v6 = v21;
    while ( v6 )
    {
      v5 += 8LL;
      v7 = (unsigned __int16)*(_DWORD *)v6 + 2LL;
      *((_QWORD *)&v21 + 1) = v5;
      if ( v5 >= v6 + 8 * v7 )
      {
        v18 = (_DWORD **)(a1 + 16);
        if ( !a1 )
          v18 = 0LL;
        if ( **v18 == -1 )
        {
          if ( **(_DWORD **)(a1 + 16) == -1 )
            LeafSibling = *(_QWORD *)(v6 + 8);
          else
            LeafSibling = 3358LL;
LABEL_28:
          if ( LeafSibling )
          {
            v5 = LeafSibling + 16;
            *(_QWORD *)&v21 = LeafSibling;
            *((_QWORD *)&v21 + 1) = LeafSibling + 16;
            v8 = LeafSibling + 16;
            v6 = LeafSibling;
          }
          else
          {
            v8 = 0LL;
          }
          v3 = 0;
          goto LABEL_8;
        }
        LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                        a1,
                        v6);
        if ( LeafSibling != -1 )
          goto LABEL_28;
        v8 = -1LL;
        v3 = 0;
      }
      else
      {
        v8 = v5;
      }
LABEL_8:
      if ( !v8 )
        break;
      if ( v4 < 0x200 )
        goto LABEL_43;
      v9 = *(_QWORD *)(a1 + 792);
      v10 = *(_DWORD *)(v9 + 2556);
      if ( *(_BYTE *)(v9 + 2470) )
        v10 >>= 8;
      if ( !(*(_DWORD *)(v9 + 2552) + *(_DWORD *)(v9 + 3064) + v10) )
      {
LABEL_43:
        v11 = *(_DWORD *)(v8 + 4);
        v12 = v11 >> *(_DWORD *)(a1 + 456);
        _BitScanReverse((unsigned int *)&v13, v12);
        v14 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                       + *(_DWORD *)(a1 + 464) * (*(_DWORD *)(a1 + 460) & v11)
                       + *(_QWORD *)(*(_QWORD *)(a1 + 192 + 8 * v13) + 16 * (v12 ^ (unsigned int)(1 << v13))));
        if ( *v14 == -1 )
        {
          do
          {
            v11 = v14[2];
            ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v14);
            SmHpChunkFree(a1 + 192, v14);
            --*(_DWORD *)(a1 + 2056);
            v16 = v11 >> *(_DWORD *)(a1 + 456);
            _BitScanReverse((unsigned int *)&v17, v16);
            v14 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                           + *(_DWORD *)(a1 + 464) * (*(_DWORD *)(a1 + 460) & v11)
                           + *(_QWORD *)(*(_QWORD *)(a1 + 192 + 8 * v17) + 16 * (v16 ^ (unsigned int)(1 << v17))));
          }
          while ( *v14 == -1 );
          v6 = v21;
          v3 = 0;
        }
        if ( *(_DWORD *)(v8 + 4) != v11 )
          *(_DWORD *)(v8 + 4) = v11;
        ++v4;
        if ( *(_DWORD *)(a1 + 2056) )
          continue;
      }
      *(_DWORD *)(a1 + 1384) = *(_DWORD *)v8;
      goto LABEL_18;
    }
  }
  v3 = 1024;
  *(_BYTE *)(a1 + 2061) = *(_BYTE *)(a1 + 2061) & 0xFC | 1;
LABEL_18:
  if ( *(_DWORD *)(a1 + 2056) <= v3 )
    *(_BYTE *)(a1 + 2061) &= 0xFCu;
  else
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 2064), 4LL, 30000LL, 4294967294LL);
  return B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
           &v21,
           a1);
}
