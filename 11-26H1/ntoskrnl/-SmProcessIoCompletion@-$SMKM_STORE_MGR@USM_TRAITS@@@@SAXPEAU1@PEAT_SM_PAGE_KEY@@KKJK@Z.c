/*
 * XREFs of ?SmProcessIoCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z @ 0x14027E230
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CE80 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14027E650 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14027E670 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14027F890 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14050741C (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmProcessIoCompletion(
        __int64 a1,
        unsigned int *a2,
        int a3,
        __int64 a4,
        int a5,
        int a6)
{
  unsigned int v7; // ebx
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // rax
  int v10; // r14d
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  __int64 v14; // rcx
  AutoBoost *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edi
  char *v21; // r10
  __int64 v22; // r9
  unsigned int v23; // edx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _KTHREAD *v28; // rcx
  bool v29; // zf
  __int64 v30; // rax
  int v31; // [rsp+28h] [rbp-E0h]
  __int128 v32; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h] BYREF
  char *v34; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v37[136]; // [rsp+70h] [rbp-98h] BYREF

  v7 = *a2;
  LODWORD(v33) = *a2;
  v31 = a3;
  if ( !a6 )
  {
    SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(a1, &v33);
    return;
  }
  memset_0(v37, 0, 0x80uLL);
  v35[0] = 0LL;
  v35[1] = 0LL;
  v36[1] = 0LL;
  v8 = 0;
  v36[0] = 0x800000000LL;
  v34 = v37;
  CurrentThread = KeGetCurrentThread();
  v32 = 0LL;
  v10 = 1;
  --CurrentThread->SpecialApcDisable;
  v12 = (AutoBoost *)KeAbPreAcquire(a1 + 280, 0LL, 0LL, v11);
  v15 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 280), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 280), v12, a1 + 280);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v13);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  v16 = v32;
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_28;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      v14,
      &v34,
      v16);
    if ( LODWORD(v36[0]) == -1 )
    {
      v20 = 0;
      v21 = (char *)v35;
LABEL_13:
      v22 = *(_QWORD *)(a1 + 288);
      if ( v22 )
      {
        while ( 1 )
        {
          v23 = -1;
          v24 = (unsigned __int16)*(_DWORD *)v22;
          if ( HIBYTE(*(_DWORD *)v22) )
          {
            if ( (unsigned __int16)*(_DWORD *)v22 )
            {
              do
              {
                if ( *(_DWORD *)(v22 + 8LL * ((v23 + (unsigned int)v24) >> 1) + 16) >= v7 )
                  v24 = (v23 + (unsigned int)v24) >> 1;
                else
                  v23 = (v23 + (unsigned int)v24) >> 1;
              }
              while ( v23 + 1 != (_DWORD)v24 );
            }
          }
          else if ( (unsigned __int16)*(_DWORD *)v22 )
          {
            do
            {
              if ( *(_DWORD *)(v22 + 16LL * ((v23 + (unsigned int)v24) >> 1) + 16) > v7 )
                v24 = (v23 + (unsigned int)v24) >> 1;
              else
                v23 = (v23 + (unsigned int)v24) >> 1;
            }
            while ( v23 + 1 != (_DWORD)v24 );
          }
          if ( *(_BYTE *)(v22 + 3) )
            break;
          if ( v20 )
          {
            *(_QWORD *)v21 = v22;
            *((_QWORD *)v21 + 1) = v22 + 16 * ((unsigned int)v24 + 1LL);
            v21 += 16;
          }
          if ( (_DWORD)v24 )
            v22 = *(_QWORD *)(16LL * (unsigned int)(v24 - 1) + v22 + 24);
          else
            v22 = *(_QWORD *)(v22 + 8);
        }
        *(_QWORD *)v21 = v22;
        v18 = v22 + 8 * (v24 + 2);
        *((_QWORD *)v21 + 1) = v18;
        if ( v20 )
          LODWORD(v36[0]) = ((v21 - v34) >> 4) + 1;
      }
      else if ( !v20 )
      {
        *(_QWORD *)v21 = 0LL;
        *((_QWORD *)v21 + 1) = 0LL;
      }
      goto LABEL_27;
    }
    v19 = *(_QWORD *)(a1 + 288);
    v20 = 1;
    if ( !v19
      || (v18 = *(unsigned __int8 *)(v19 + 2), HIDWORD(v36[0]) >= (unsigned int)v18)
      || (unsigned int)SmArrayGrow(v18, v17, (char *)v36 + 4, &v34) )
    {
      v21 = v34;
      goto LABEL_13;
    }
LABEL_27:
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v18,
      &v32,
      &v34);
    v16 = v32;
    v10 = 0;
LABEL_28:
    if ( v16 )
    {
      v25 = *((_QWORD *)&v32 + 1) + 8LL;
      v26 = (unsigned __int16)*(_DWORD *)v16 + 2LL;
      *((_QWORD *)&v32 + 1) = v25;
      if ( v25 >= v16 + 8 * v26 )
      {
        v30 = *(_QWORD *)(v16 + 8);
        v14 = v30 + 16;
        if ( v30 )
        {
          v16 = *(_QWORD *)(v16 + 8);
          *(_QWORD *)&v32 = v30;
          *((_QWORD *)&v32 + 1) = v30 + 16;
        }
        v25 = 0LL;
        if ( v30 )
          v25 = v30 + 16;
      }
    }
    else
    {
      v25 = 0LL;
    }
    if ( (*(_BYTE *)(v25 + 7) & 1) != 0 )
    {
      if ( a5 >= 0 )
        goto LABEL_34;
    }
    else
    {
      if ( *(_BYTE *)(v25 + 6) != 1 )
        goto LABEL_34;
      if ( a5 >= 0 )
      {
        *(_BYTE *)(v25 + 6) = 3;
        goto LABEL_34;
      }
    }
    *(_BYTE *)(v25 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, &v34, &v32);
    v16 = v32;
    v10 = 1;
LABEL_34:
    if ( ++v8 == v31 )
      break;
    ++v7;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 280), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 280);
  KeAbPostRelease(a1 + 280);
  v28 = KeGetCurrentThread();
  v29 = v28->SpecialApcDisable++ == -1;
  if ( v29 && ($241382875694CED3D471BC5892DE3337 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
    KiCheckForKernelApcDelivery((__int64)v28, v27);
}
