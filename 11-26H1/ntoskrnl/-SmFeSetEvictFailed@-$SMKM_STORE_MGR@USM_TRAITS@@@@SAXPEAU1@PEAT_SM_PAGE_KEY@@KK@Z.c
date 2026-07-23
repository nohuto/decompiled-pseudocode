/*
 * XREFs of ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140640858
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140441060 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x14027DA80 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z @ 0x14027E050 (-StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14027E670 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1403EB6C0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-89h] BYREF
  int v17; // [rsp+48h] [rbp-71h]
  int v18; // [rsp+4Ch] [rbp-6Dh]
  __int64 v19; // [rsp+50h] [rbp-69h]
  _BYTE v20[136]; // [rsp+58h] [rbp-61h] BYREF

  v3 = *a2;
  memset_0(v20, 0, 0x80uLL);
  v16[1] = 0LL;
  v16[2] = 0LL;
  v16[0] = v20;
  v19 = 0LL;
  v15 = 0LL;
  v17 = 0;
  v6 = 0;
  v18 = 8;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 280), v7, v8, v9);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (__int64 *)(a1 + 288),
    v3,
    (__int64)v16);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
    v10,
    (__int64)&v15,
    (__int64)v16);
  v11 = *((_QWORD *)&v15 + 1);
  v12 = v15;
  do
  {
    if ( v12 )
    {
      v11 += 8LL;
      v13 = v11;
      if ( v11 >= v12 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v12 + 2) )
      {
        v14 = *(_QWORD *)(v12 + 8);
        if ( v14 )
        {
          v12 = *(_QWORD *)(v12 + 8);
          v11 = v14 + 16;
        }
        v13 = (v14 + 16) & ((unsigned __int128)-(__int128)v14 >> 64);
      }
    }
    else
    {
      v13 = 0LL;
    }
    *(_BYTE *)(v13 + 7) |= 1u;
    ++v6;
    *(_BYTE *)(v13 + 6) = 3;
  }
  while ( v6 != a3 );
  StLockReleaseExclusive((struct _KTHREAD *)(a1 + 280));
}
