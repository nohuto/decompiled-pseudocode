/*
 * XREFs of ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14050741C
 * Callers:
 *     ?SmProcessIoCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z @ 0x14027E230 (-SmProcessIoCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140534CDC (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 * Callees:
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x14027DA80 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z @ 0x14027E050 (-StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14027E670 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14027F890 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1403EB6C0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  int v6; // edi
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int128 v16; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v17[3]; // [rsp+30h] [rbp-89h] BYREF
  int v18; // [rsp+48h] [rbp-71h]
  int v19; // [rsp+4Ch] [rbp-6Dh]
  __int64 v20; // [rsp+50h] [rbp-69h]
  _BYTE v21[136]; // [rsp+58h] [rbp-61h] BYREF

  v3 = *a2;
  memset_0(v21, 0, 0x80uLL);
  v6 = 0;
  v17[1] = 0LL;
  v17[2] = 0LL;
  v20 = 0LL;
  v17[0] = v21;
  v18 = 0;
  v7 = 1;
  v19 = 8;
  v16 = 0LL;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 280), v8, v9, v10);
  v11 = 0LL;
  while ( 1 )
  {
    if ( v7 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        (__int64 *)(a1 + 288),
        v3,
        (__int64)v17);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v12,
        (__int64)&v16,
        (__int64)v17);
      v11 = v16;
      v7 = 0;
    }
    if ( v11 )
    {
      v13 = *((_QWORD *)&v16 + 1) + 8LL;
      v14 = (unsigned __int16)*(_DWORD *)v11 + 2LL;
      *((_QWORD *)&v16 + 1) = v13;
      if ( v13 >= v11 + 8 * v14 )
      {
        v15 = *(_QWORD *)(v11 + 8);
        if ( v15 )
        {
          v11 = *(_QWORD *)(v11 + 8);
          *(_QWORD *)&v16 = v15;
          *((_QWORD *)&v16 + 1) = v15 + 16;
        }
        v13 = (v15 + 16) & ((unsigned __int128)-(__int128)v15 >> 64);
      }
    }
    else
    {
      v13 = 0LL;
    }
    if ( *(_BYTE *)(v13 + 6) == 3 )
    {
      *(_BYTE *)(v13 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v17, (__int64 *)&v16);
      v11 = v16;
      v7 = 1;
    }
    if ( ++v6 == a3 )
      break;
    ++v3;
  }
  StLockReleaseExclusive((struct _KTHREAD *)(a1 + 280));
}
