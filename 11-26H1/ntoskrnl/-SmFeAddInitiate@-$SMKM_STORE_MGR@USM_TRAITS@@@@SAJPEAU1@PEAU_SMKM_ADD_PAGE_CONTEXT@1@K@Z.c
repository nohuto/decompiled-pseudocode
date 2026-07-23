/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x14027EE40
 * Callers:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x14021C100 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402800C0 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x14027DA80 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z @ 0x14027E050 (-StLockReleaseExclusive@@YAXPEAUVLOCK@@K@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14027E650 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14027E670 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14027E700 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14027FE34 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402806B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(__int64 a1, unsigned __int16 *a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v6; // r12d
  int v7; // edi
  unsigned __int16 *v8; // rsi
  unsigned __int16 *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rcx
  char *v19; // r10
  __int64 v20; // r9
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // edi
  __int64 v30; // rcx
  __int64 *v31; // r10
  unsigned int v32; // edx
  _DWORD *v33; // r8
  int v34; // edi
  __int128 v36; // rax
  unsigned __int64 v37; // r14
  unsigned __int16 *v38; // rsi
  unsigned int v39; // ebx
  __int64 v40; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-C8h]
  int v42; // [rsp+40h] [rbp-C0h]
  __int128 v43; // [rsp+48h] [rbp-B8h] BYREF
  char *v44; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v45[2]; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+78h] [rbp-88h]
  unsigned int v47; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h]
  _BYTE v49[136]; // [rsp+88h] [rbp-78h] BYREF

  v3 = a3;
  memset_0(v49, 0, 0x80uLL);
  v40 = 0x1000000000000LL;
  v45[0] = 0LL;
  v6 = 0;
  v45[1] = 0LL;
  v7 = 0;
  v48 = 0LL;
  v8 = &a2[8 * v3];
  v46 = 0;
  v9 = a2;
  v44 = v49;
  v47 = 8;
  v41 = (unsigned __int64)v8;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 280), v10, v11, v12);
LABEL_2:
  if ( v9 >= v8 )
  {
    StLockReleaseExclusive((struct _KTHREAD *)(a1 + 280));
    for ( ; a2 < v8; a2 += 8 )
      SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(*(_QWORD *)(*(_QWORD *)a2 + 32LL), a1, a2[7], *(_QWORD *)a2);
    return 0LL;
  }
  v14 = *((_DWORD *)v9 + 2);
  v42 = v9[6] + v7;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
    v13,
    (__int64)&v44);
  if ( v46 == -1 )
  {
    v17 = 0;
    v19 = (char *)v45;
LABEL_7:
    v20 = *(_QWORD *)(a1 + 288);
    if ( v20 )
    {
      while ( 1 )
      {
        v21 = -1;
        v22 = (unsigned __int16)*(_DWORD *)v20;
        if ( HIBYTE(*(_DWORD *)v20) )
          break;
        if ( (unsigned __int16)*(_DWORD *)v20 )
        {
          do
          {
            if ( *(_DWORD *)(v20 + 16LL * ((v21 + (unsigned int)v22) >> 1) + 16) > v14 )
              LODWORD(v22) = (v21 + (unsigned int)v22) >> 1;
            else
              v21 = (v21 + (unsigned int)v22) >> 1;
          }
          while ( v21 + 1 != (_DWORD)v22 );
        }
        if ( v17 )
        {
          *(_QWORD *)v19 = v20;
          *((_QWORD *)v19 + 1) = v20 + 16 * ((unsigned int)v22 + 1LL);
          v19 += 16;
        }
        if ( (_DWORD)v22 )
          v20 = *(_QWORD *)(v20 + 16LL * (unsigned int)(v22 - 1) + 24);
        else
          v20 = *(_QWORD *)(v20 + 8);
      }
      if ( (unsigned __int16)*(_DWORD *)v20 )
      {
        do
        {
          if ( *(_DWORD *)(v20 + 8LL * ((v21 + (unsigned int)v22) >> 1) + 16) >= v14 )
            v22 = (v21 + (unsigned int)v22) >> 1;
          else
            v21 = (v21 + (unsigned int)v22) >> 1;
        }
        while ( v21 + 1 != (_DWORD)v22 );
      }
      *(_QWORD *)v19 = v20;
      *((_QWORD *)v19 + 1) = v20 + 8 * (v22 + 2);
      if ( v17 )
        v46 = ((v19 - v44) >> 4) + 1;
    }
    else if ( !v17 )
    {
      *(_QWORD *)v19 = 0LL;
      *((_QWORD *)v19 + 1) = 0LL;
    }
    goto LABEL_15;
  }
  v16 = *(_QWORD *)(a1 + 288);
  v17 = 1;
  if ( !v16
    || (v18 = *(unsigned __int8 *)(v16 + 2), v47 >= (unsigned int)v18)
    || (unsigned int)SmArrayGrow(v18, v15, &v47, &v44) )
  {
    v19 = v44;
    goto LABEL_7;
  }
LABEL_15:
  v23 = *((unsigned int *)v9 + 2);
  v43 = 0LL;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
    v23,
    (__int64)&v43,
    (__int64)&v44);
  if ( (_QWORD)v43 )
  {
    v25 = *((_QWORD *)&v43 + 1) + 8LL;
    v26 = (unsigned __int16)*(_DWORD *)v43 + 2LL;
    *((_QWORD *)&v43 + 1) = v25;
    if ( v25 >= (__int64)v43 + 8 * v26 )
    {
      *(_QWORD *)&v36 = *(_QWORD *)(v43 + 8);
      if ( (_QWORD)v36 )
      {
        *((_QWORD *)&v36 + 1) = v36 + 16;
        v43 = v36;
      }
      v25 = 0LL;
      if ( (_QWORD)v36 )
        v25 = v36 + 16;
    }
    if ( v25 && ((unsigned int)v13 >= *(_DWORD *)v25 || (unsigned int)v24 >= *(_DWORD *)v25) )
    {
      if ( (*(_BYTE *)(v25 + 7) & 1) != 0 )
        v34 = -1073740747;
      else
        v34 = -1073740682;
      goto LABEL_62;
    }
  }
  WORD2(v40) = v9[7];
  while ( 1 )
  {
    LODWORD(v40) = v14;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      v13,
      (__int64)&v44);
    if ( v46 != -1 )
      break;
    v29 = 0;
    v31 = v45;
LABEL_23:
    v24 = *(_QWORD *)(a1 + 288);
    if ( !v24 )
    {
      if ( !v29 )
      {
        *v31 = 0LL;
        v31[1] = 0LL;
      }
LABEL_39:
      v34 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
              a1 + 288,
              &v44,
              &v40);
      goto LABEL_40;
    }
    while ( 1 )
    {
      v32 = -1;
      v13 = (unsigned __int16)*(_DWORD *)v24;
      if ( HIBYTE(*(_DWORD *)v24) )
      {
        if ( (unsigned __int16)*(_DWORD *)v24 )
        {
          do
          {
            if ( *(_DWORD *)(v24 + 8LL * ((v32 + (unsigned int)v13) >> 1) + 16) < v14 )
              v32 = (v32 + (unsigned int)v13) >> 1;
            else
              v13 = (v32 + (unsigned int)v13) >> 1;
          }
          while ( v32 + 1 != (_DWORD)v13 );
        }
      }
      else if ( (unsigned __int16)*(_DWORD *)v24 )
      {
        do
        {
          if ( *(_DWORD *)(v24 + 16LL * ((v32 + (unsigned int)v13) >> 1) + 16) > v14 )
            v13 = (v32 + (unsigned int)v13) >> 1;
          else
            v32 = (v32 + (unsigned int)v13) >> 1;
        }
        while ( v32 + 1 != (_DWORD)v13 );
      }
      if ( *(_BYTE *)(v24 + 3) )
        break;
      if ( v29 )
      {
        *v31 = v24;
        v31[1] = v24 + 16 * ((unsigned int)v13 + 1LL);
        v31 += 2;
      }
      if ( (_DWORD)v13 )
        v24 = *(_QWORD *)(16LL * (unsigned int)(v13 - 1) + v24 + 24);
      else
        v24 = *(_QWORD *)(v24 + 8);
    }
    *v31 = v24;
    v33 = (_DWORD *)(v24 + 8 * ((unsigned int)v13 + 2LL));
    v31[1] = (__int64)v33;
    if ( v29 )
      v46 = (((char *)v31 - v44) >> 4) + 1;
    if ( (unsigned int)v13 >= (unsigned __int16)*(_DWORD *)v24 || *v33 != v14 )
      goto LABEL_39;
    v34 = -1073741484;
LABEL_40:
    if ( v34 < 0 )
      goto LABEL_84;
    v7 = v42;
    if ( ++v6 == v42 )
    {
      v8 = (unsigned __int16 *)v41;
      v9 += 8;
      goto LABEL_2;
    }
    ++v14;
  }
  v28 = *(_QWORD *)(a1 + 288);
  v29 = 1;
  if ( !v28
    || (v30 = *(unsigned __int8 *)(v28 + 2), v47 >= (unsigned int)v30)
    || (unsigned int)SmArrayGrow(v30, v27, &v47, &v44) )
  {
    v31 = (__int64 *)v44;
    goto LABEL_23;
  }
  v34 = -1073741670;
LABEL_84:
  v8 = (unsigned __int16 *)v41;
LABEL_62:
  if ( v6 && a2 < v8 )
  {
    v37 = v41;
    v38 = a2 + 4;
    do
    {
      v39 = v38[2];
      if ( v6 <= v39 )
        v39 = v6;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, (unsigned int *)v38, v39, v24, 2);
      v6 -= v39;
      if ( !v6 )
        break;
      v38 += 8;
    }
    while ( (unsigned __int64)(v38 - 4) < v37 );
  }
  StLockReleaseExclusive((struct _KTHREAD *)(a1 + 280));
  return (unsigned int)v34;
}
