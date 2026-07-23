/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1403EA860
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1403EA4C0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 * Callees:
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x14027DA80 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z @ 0x14027E050 (-StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14027E670 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14027F890 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1403EB6C0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int128 v14; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v16; // [rsp+48h] [rbp-C0h]
  int v17; // [rsp+4Ch] [rbp-BCh]
  __int64 v18; // [rsp+50h] [rbp-B8h]
  _BYTE v19[136]; // [rsp+58h] [rbp-B0h] BYREF

  memset_0(v19, 0, 0x80uLL);
  v17 = 8;
  v15[1] = 0LL;
  v15[0] = v19;
  v15[2] = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  v4 = 1;
  v16 = 0;
  v5 = 0;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 280), v6, v7, v8);
LABEL_2:
  v9 = v14;
  while ( 1 )
  {
    if ( v4 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 288,
        v5,
        v15);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v13,
        (__int64)&v14,
        (__int64)v15);
      v9 = v14;
      v4 = 0;
    }
    if ( !v9 )
      break;
    v10 = *((_QWORD *)&v14 + 1) + 8LL;
    v11 = (unsigned __int16)*(_DWORD *)v9 + 2LL;
    *((_QWORD *)&v14 + 1) = v10;
    if ( v10 >= v9 + 8 * v11 )
    {
      v12 = *(_QWORD *)(v9 + 8);
      if ( v12 )
      {
        v9 = *(_QWORD *)(v9 + 8);
        v14 = __PAIR128__(v12 + 16, v12);
      }
      v10 = 0LL;
      if ( v12 )
        v10 = v12 + 16;
    }
    if ( !v10 )
      break;
    v5 = *(_DWORD *)v10;
    if ( *(unsigned __int16 *)(v10 + 4) == a2 )
    {
      *(_BYTE *)(v10 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v15, (__int64 *)&v14);
      v4 = 1;
      goto LABEL_2;
    }
  }
  StLockReleaseExclusive((struct _KTHREAD *)(a1 + 280));
}
