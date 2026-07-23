/*
 * XREFs of ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14027F390
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CE80 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x14027DA80 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14027E650 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14027E670 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14027F960 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1403EB6C0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(__int64 a1, unsigned int *a2, int a3, __int16 a4)
{
  unsigned int v4; // ebx
  int v8; // edi
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  char *v17; // r10
  __int64 v18; // r9
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  char *v25; // rcx
  __int64 v26; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  bool v28; // zf
  __int64 v29; // rdx
  __int64 *v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  char v38; // tt
  _OWORD *v39; // rcx
  __int64 v40; // r9
  char *v41; // rax
  _OWORD v43[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp-B0h] BYREF
  __int64 Object; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v46[3]; // [rsp+78h] [rbp-88h] BYREF
  int v47; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+94h] [rbp-6Ch]
  char *v49; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v50[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v51; // [rsp+B8h] [rbp-48h]
  unsigned int v52; // [rsp+BCh] [rbp-44h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h]
  _BYTE v54[136]; // [rsp+C8h] [rbp-38h] BYREF

  v4 = *a2;
  memset_0(v54, 0, 0x80uLL);
  v8 = 0;
  v52 = 8;
  v50[0] = 0LL;
  v50[1] = 0LL;
  v49 = v54;
  v43[0] = 0LL;
  v53 = 0LL;
  v9 = 0;
  v51 = 0;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 280), v10, v11, v12);
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      v13,
      (__int64)&v49);
    if ( v51 == -1 )
    {
      v17 = (char *)v50;
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 288);
      v8 = 1;
      if ( v16 )
      {
        v15 = *(unsigned __int8 *)(v16 + 2);
        if ( v52 < (unsigned int)v15 && !(unsigned int)SmArrayGrow(v15, v14, &v52, &v49) )
          goto LABEL_14;
      }
      v17 = v49;
    }
    v18 = *(_QWORD *)(a1 + 288);
    if ( v18 )
    {
      while ( 1 )
      {
        v19 = -1;
        v20 = (unsigned __int16)*(_DWORD *)v18;
        if ( HIBYTE(*(_DWORD *)v18) )
          break;
        if ( (unsigned __int16)*(_DWORD *)v18 )
        {
          do
          {
            if ( *(_DWORD *)(v18 + 16LL * ((v19 + (unsigned int)v20) >> 1) + 16) > v4 )
              LODWORD(v20) = (v19 + (unsigned int)v20) >> 1;
            else
              v19 = (v19 + (unsigned int)v20) >> 1;
          }
          while ( v19 + 1 != (_DWORD)v20 );
        }
        if ( v8 )
        {
          *(_QWORD *)v17 = v18;
          *((_QWORD *)v17 + 1) = v18 + 16 * ((unsigned int)v20 + 1LL);
          v17 += 16;
        }
        if ( (_DWORD)v20 )
          v18 = *(_QWORD *)(v18 + 16LL * (unsigned int)(v20 - 1) + 24);
        else
          v18 = *(_QWORD *)(v18 + 8);
      }
      if ( (unsigned __int16)*(_DWORD *)v18 )
      {
        do
        {
          if ( *(_DWORD *)(v18 + 8LL * ((v19 + (unsigned int)v20) >> 1) + 16) < v4 )
            v19 = (v19 + (unsigned int)v20) >> 1;
          else
            v20 = (v19 + (unsigned int)v20) >> 1;
        }
        while ( v19 + 1 != (_DWORD)v20 );
      }
      *(_QWORD *)v17 = v18;
      v15 = v18 + 8 * (v20 + 2);
      *((_QWORD *)v17 + 1) = v15;
      if ( v8 )
        v51 = ((v17 - v49) >> 4) + 1;
    }
    else if ( !v8 )
    {
      *(_QWORD *)v17 = 0LL;
      *((_QWORD *)v17 + 1) = 0LL;
    }
LABEL_14:
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v15,
      (__int64)v43,
      (__int64)&v49);
    v21 = *(_QWORD *)&v43[0];
    if ( *(_QWORD *)&v43[0] )
    {
      v22 = *((_QWORD *)&v43[0] + 1) + 8LL;
      v23 = v22;
      v24 = (unsigned __int16)**(_DWORD **)&v43[0] + 2LL;
      *((_QWORD *)&v43[0] + 1) += 8LL;
      if ( v22 >= *(_QWORD *)&v43[0] + 8 * v24 )
      {
        v37 = *(_QWORD *)(*(_QWORD *)&v43[0] + 8LL);
        if ( v37 )
        {
          v21 = *(_QWORD *)(*(_QWORD *)&v43[0] + 8LL);
          *(_QWORD *)&v43[0] = v21;
          v23 = v37 + 16;
          *((_QWORD *)&v43[0] + 1) = v37 + 16;
        }
        v22 = 0LL;
        if ( v37 )
          v22 = v37 + 16;
      }
    }
    else
    {
      v23 = *((_QWORD *)&v43[0] + 1);
      v22 = 0LL;
    }
    *(_BYTE *)(v22 + 6) = 0;
    if ( v51 == -1 || !v51 )
      v25 = (char *)v50;
    else
      v25 = &v49[16 * (v51 - 1)];
    if ( *(_QWORD *)v25 == v21 )
    {
      *((_QWORD *)v25 + 1) = v23;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (__int64)v25,
        (__int64)&v49);
      if ( v51 == -1 )
      {
        *v39 = v43[0];
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          a1 + 288,
          *(unsigned int *)(v40 + 16),
          &v49);
        if ( v51 == -1 || !v51 )
          v41 = (char *)v50;
        else
          v41 = &v49[16 * (v51 - 1)];
        *((_QWORD *)v41 + 1) = v23;
      }
    }
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
      a1 + 288,
      &v49);
    if ( ++v9 == a3 )
      break;
    ++v4;
    v8 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 280), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 280);
  KeAbPostRelease(a1 + 280);
  CurrentThread = KeGetCurrentThread();
  v28 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v28 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery((__int64)CurrentThread, v26);
  v29 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)(a4 & 0x3FF) >> 5));
  if ( v29 )
    v30 = (__int64 *)(v29 + 40LL * (a4 & 0x1F));
  else
    v30 = 0LL;
  v31 = *v30;
  WorkItem.List.Blink = 0LL;
  BYTE3(Object) = 0;
  v48 = 0;
  v32 = *(_DWORD *)(v31 + 2464) & 0x3FF;
  *(_QWORD *)&v43[0] = 0LL;
  v33 = v32;
  v34 = *(_QWORD *)(a1 + 8 * (v32 >> 5));
  if ( v34 )
    v35 = v34 + 40 * (v32 & 0x1F);
  else
    v35 = 0LL;
  LOBYTE(v36) = *(_BYTE *)(v35 + 34);
  if ( (v36 & 1) != 0 )
  {
    v36 = *(_QWORD *)(v31 + 72);
    if ( !v36 )
    {
      _m_prefetchw((const void *)(v35 + 34));
      LOBYTE(v36) = *(_BYTE *)(v35 + 34);
      do
      {
        v38 = v36;
        LOBYTE(v36) = _InterlockedCompareExchange8((volatile signed __int8 *)(v35 + 34), v36 | 2, v36);
      }
      while ( v38 != (_BYTE)v36 );
      if ( (v36 & 2) == 0 )
      {
        LODWORD(v36) = guard_dispatch_icall_no_overrides(a1, v43, 7LL);
        if ( (int)v36 >= 0 )
        {
          v46[1] = v46;
          v46[0] = v46;
          WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmKmStoreDeleteWhenEmptyWorker;
          WorkItem.Parameter = &WorkItem;
          WorkItem.List.Blink = 0LL;
          Object = 393216LL;
          v48 = 0;
          v46[2] = a1;
          v47 = v33;
          WorkItem.List.Flink = 0LL;
          if ( *(_QWORD *)&v43[0] )
            ExQueueWorkItemToPartition((ULONG_PTR)&WorkItem);
          else
            ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
          LOBYTE(v36) = KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
        }
      }
    }
  }
  return v36;
}
