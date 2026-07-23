/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14027E700
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x14027EE40 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
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
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(__int64 a1, unsigned int *a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  __int64 v7; // rcx
  struct _KLOCK_ENTRIES *v8; // r9
  int v9; // r12d
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edi
  char *v20; // r10
  __int64 v21; // r9
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  struct _KTHREAD *v27; // rcx
  __int64 v29; // rax
  __int128 v31; // [rsp+28h] [rbp-B9h] BYREF
  char *v32; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD v33[2]; // [rsp+48h] [rbp-99h] BYREF
  int v34; // [rsp+58h] [rbp-89h]
  unsigned int v35; // [rsp+5Ch] [rbp-85h] BYREF
  __int64 v36; // [rsp+60h] [rbp-81h]
  _BYTE v37[136]; // [rsp+68h] [rbp-79h] BYREF

  v5 = *a2;
  memset_0(v37, 0, 0x80uLL);
  v33[0] = 0LL;
  v33[1] = 0LL;
  v9 = 0;
  v36 = 0LL;
  v32 = v37;
  v34 = 0;
  v10 = 1;
  v35 = 8;
  v31 = 0LL;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v12 = (AutoBoost *)KeAbPreAcquire(a1 + 280, 0LL, 0LL, v8);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 280), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 280), v12, a1 + 280);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
  }
  v15 = v31;
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_22;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      v7,
      (__int64)&v32);
    if ( v34 == -1 )
    {
      v19 = 0;
      v20 = (char *)v33;
LABEL_13:
      v21 = *(_QWORD *)(a1 + 288);
      if ( v21 )
      {
        while ( 1 )
        {
          v22 = -1;
          v23 = (unsigned __int16)*(_DWORD *)v21;
          if ( HIBYTE(*(_DWORD *)v21) )
            break;
          if ( (unsigned __int16)*(_DWORD *)v21 )
          {
            do
            {
              if ( *(_DWORD *)(v21 + 16LL * ((v22 + (unsigned int)v23) >> 1) + 16) > v5 )
                LODWORD(v23) = (v22 + (unsigned int)v23) >> 1;
              else
                v22 = (v22 + (unsigned int)v23) >> 1;
            }
            while ( v22 + 1 != (_DWORD)v23 );
          }
          if ( v19 )
          {
            *(_QWORD *)v20 = v21;
            *((_QWORD *)v20 + 1) = v21 + 16 * ((unsigned int)v23 + 1LL);
            v20 += 16;
          }
          if ( (_DWORD)v23 )
            v21 = *(_QWORD *)(16LL * (unsigned int)(v23 - 1) + v21 + 24);
          else
            v21 = *(_QWORD *)(v21 + 8);
        }
        if ( (unsigned __int16)*(_DWORD *)v21 )
        {
          do
          {
            if ( *(_DWORD *)(v21 + 8LL * ((v22 + (unsigned int)v23) >> 1) + 16) >= v5 )
              v23 = (v22 + (unsigned int)v23) >> 1;
            else
              v22 = (v22 + (unsigned int)v23) >> 1;
          }
          while ( v22 + 1 != (_DWORD)v23 );
        }
        *(_QWORD *)v20 = v21;
        v17 = v21 + 8 * (v23 + 2);
        *((_QWORD *)v20 + 1) = v17;
        if ( v19 )
          v34 = ((v20 - v32) >> 4) + 1;
      }
      else if ( !v19 )
      {
        *(_QWORD *)v20 = 0LL;
        *((_QWORD *)v20 + 1) = 0LL;
      }
      goto LABEL_21;
    }
    v18 = *(_QWORD *)(a1 + 288);
    v19 = 1;
    if ( !v18
      || (v17 = *(unsigned __int8 *)(v18 + 2), v35 >= (unsigned int)v17)
      || (unsigned int)SmArrayGrow(v17, v16, &v35, &v32) )
    {
      v20 = v32;
      goto LABEL_13;
    }
LABEL_21:
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v17,
      (__int64)&v31,
      (__int64)&v32);
    v15 = v31;
    v10 = 0;
LABEL_22:
    if ( v15 )
    {
      v24 = *((_QWORD *)&v31 + 1) + 8LL;
      v25 = (unsigned __int16)*(_DWORD *)v15 + 2LL;
      *((_QWORD *)&v31 + 1) = v24;
      if ( v24 >= v15 + 8 * v25 )
      {
        v29 = *(_QWORD *)(v15 + 8);
        v7 = v29 + 16;
        if ( v29 )
        {
          v15 = *(_QWORD *)(v15 + 8);
          *(_QWORD *)&v31 = v29;
          *((_QWORD *)&v31 + 1) = v29 + 16;
        }
        v24 = 0LL;
        if ( v29 )
          v24 = v29 + 16;
      }
    }
    else
    {
      v24 = 0LL;
    }
    if ( (*(_BYTE *)(v24 + 7) & 1) != 0 )
    {
      if ( (a5 & 1) != 0 )
        goto LABEL_28;
    }
    else
    {
      if ( *(_BYTE *)(v24 + 6) != 1 )
        goto LABEL_28;
      if ( (a5 & 1) != 0 )
      {
        *(_BYTE *)(v24 + 6) = 3;
        goto LABEL_28;
      }
    }
    *(_BYTE *)(v24 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, &v32, &v31);
    v15 = v31;
    v10 = 1;
LABEL_28:
    if ( ++v9 == a3 )
      break;
    ++v5;
  }
  if ( (a5 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 280), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 280);
    KeAbPostRelease(a1 + 280);
    v27 = KeGetCurrentThread();
    if ( v27->SpecialApcDisable++ == -1
      && ($241382875694CED3D471BC5892DE3337 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
    {
      KiCheckForKernelApcDelivery((__int64)v27, v26);
    }
  }
}
