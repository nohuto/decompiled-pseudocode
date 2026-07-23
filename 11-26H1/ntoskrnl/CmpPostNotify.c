/*
 * XREFs of CmpPostNotify @ 0x1408D1490
 * Callers:
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmpFlushNotify @ 0x1408C07F8 (CmpFlushNotify.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmpNotifyChangeKey @ 0x14093CF14 (CmpNotifyChangeKey.c)
 *     CmpCloseKeyObject @ 0x140A66980 (CmpCloseKeyObject.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     CmpSignalDeferredPosts @ 0x1408D7260 (CmpSignalDeferredPosts.c)
 *     CmpFreePostBlock @ 0x1408D75E0 (CmpFreePostBlock.c)
 *     CmpDelayedDerefKeys @ 0x140A959A8 (CmpDelayedDerefKeys.c)
 *     CmpAddToDelayedDeref @ 0x140AACF6C (CmpAddToDelayedDeref.c)
 */

void __fastcall CmpPostNotify(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, char a5, __int128 *a6, _OWORD *a7)
{
  __int64 v7; // r12
  __int128 *v9; // r14
  char v10; // cl
  _OWORD *v11; // r15
  int v12; // eax
  _DWORD **v13; // rsi
  __int64 v14; // r8
  _DWORD *v15; // rbx
  __int64 v16; // rax
  int v17; // eax
  __int128 **v18; // rax
  __int128 **v19; // rcx
  __int64 v20; // rax
  _DWORD *v21; // rcx
  _QWORD *v22; // r8
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  _QWORD *v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // rax
  __int128 v43; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v44[3]; // [rsp+30h] [rbp-38h] BYREF

  v7 = a4;
  v43 = 0LL;
  v44[0] = 0LL;
  if ( !a6 )
  {
    *((_QWORD *)&v43 + 1) = &v43;
    *(_QWORD *)&v43 = &v43;
  }
  v9 = &v43;
  if ( a6 )
    v9 = a6;
  if ( !a7 )
  {
    *((_QWORD *)&v44[0] + 1) = v44;
    *(_QWORD *)&v44[0] = v44;
  }
  v10 = a5;
  v11 = v44;
  if ( a7 )
    v11 = a7;
  if ( !a5 )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
    v10 = 0;
  }
  v12 = *(_DWORD *)(a1 + 48);
  v13 = (_DWORD **)(a1 + 16);
  if ( *v13 == (_DWORD *)v13 )
  {
    *(_DWORD *)(a1 + 48) = v12 | 0x80000000;
    if ( !v10 )
      ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v12 & 0x7FFFFFFF;
LABEL_16:
    v14 = 1LL;
    while ( 1 )
    {
      v15 = *v13;
      if ( *v13 == (_DWORD *)v13 )
        break;
      if ( *((_DWORD ***)v15 + 1) != v13 )
        goto LABEL_26;
      v16 = *(_QWORD *)v15;
      if ( *(_DWORD **)(*(_QWORD *)v15 + 8LL) != v15 )
        goto LABEL_26;
      *v13 = (_DWORD *)v16;
      *(_QWORD *)(v16 + 8) = v13;
      if ( (_DWORD)v7 != 267 || (v15[14] & 0x10000) != 0 )
      {
        v17 = v15[14];
        if ( (v17 & 0x10000) == 0 )
        {
          v28 = v15;
          do
          {
            v29 = *((_QWORD *)v28 + 4);
            *(_DWORD *)(v29 + 24) &= ~0x10000u;
            v28 = (_DWORD *)(v29 - 32);
          }
          while ( v28 != v15 );
          v17 = v15[14] | 0x10000;
          v15[14] = v17;
        }
        if ( (_WORD)v17 != 1 )
        {
          a2 = (_DWORD *)*((_QWORD *)v15 + 4);
          if ( a2 != v15 + 8 )
          {
            v20 = *((_QWORD *)a2 - 4);
            v21 = a2 - 8;
            if ( *(_DWORD **)(v20 + 8) != a2 - 8 )
              goto LABEL_26;
            v22 = (_QWORD *)*((_QWORD *)a2 - 3);
            if ( (_DWORD *)*v22 != v21 )
              goto LABEL_26;
            *v22 = v20;
            *(_QWORD *)(v20 + 8) = v22;
            if ( v9 )
              CmpAddToDelayedDeref(v21, v9, v22);
            v14 = 1LL;
          }
          v18 = (__int128 **)*((_QWORD *)v15 + 6);
          if ( v18 )
          {
            v19 = (__int128 **)*((_QWORD *)v9 + 1);
            if ( *v19 != v9 )
              goto LABEL_26;
            *v18 = v9;
            v18[1] = (__int128 *)v19;
            *v19 = (__int128 *)v18;
            *((_QWORD *)v9 + 1) = v18;
            *((_QWORD *)v15 + 6) = 0LL;
          }
        }
        v30 = (unsigned __int16)v15[14];
        if ( v30 == 4 )
          goto LABEL_57;
        v40 = v30 - 1;
        if ( !v40 )
        {
          v42 = *((_QWORD *)v15 + 8);
          *(_QWORD *)v15 = 0LL;
          *(_DWORD *)(v42 + 24) = v7;
          KeSetEvent(*((PRKEVENT *)v15 + 8), 0, 0);
          goto LABEL_16;
        }
        v41 = v40 - 1;
        if ( !v41 )
        {
          KeInsertQueueApc(*((_QWORD *)v15 + 8) + 16LL, v7, (__int64)v15, 0);
          goto LABEL_16;
        }
        if ( v41 == 1 )
        {
LABEL_57:
          v31 = (_QWORD *)*((_QWORD *)v15 + 4);
          if ( v31 != (_QWORD *)(v15 + 8) )
          {
            v32 = *v31;
            v33 = v31 - 4;
            if ( *(_QWORD **)(*v31 + 8LL) != v31
              || (v34 = (_QWORD *)v31[1], (_QWORD *)*v34 != v31)
              || (*v34 = v32, *(_QWORD *)(v32 + 8) = v34, v35 = v33[2], *(_QWORD **)(v35 + 8) != v33 + 2)
              || (v36 = (_QWORD *)v33[3], (_QWORD *)*v36 != v33 + 2) )
            {
LABEL_26:
              __fastfail(3u);
            }
            *v36 = v35;
            *(_QWORD *)(v35 + 8) = v36;
            CmpFreePostBlock(v33);
          }
          a2 = (_DWORD *)*((_QWORD *)v15 + 2);
          v37 = v15 + 4;
          if ( *((_DWORD **)a2 + 1) != v15 + 4 )
            goto LABEL_26;
          v38 = (_QWORD *)*((_QWORD *)v15 + 3);
          if ( (_QWORD *)*v38 != v37 )
            goto LABEL_26;
          *v38 = a2;
          *((_QWORD *)a2 + 1) = v38;
          v39 = (_QWORD *)*((_QWORD *)v11 + 1);
          if ( (_OWORD *)*v39 != v11 )
            goto LABEL_26;
          *v37 = v11;
          *((_QWORD *)v15 + 3) = v39;
          *v39 = v37;
          *((_QWORD *)v11 + 1) = v37;
          goto LABEL_16;
        }
      }
      else
      {
        v23 = *((_QWORD *)v15 + 4);
        if ( *(_DWORD **)(v23 + 8) != v15 + 8 )
          goto LABEL_26;
        v24 = (_QWORD *)*((_QWORD *)v15 + 5);
        if ( (_DWORD *)*v24 != v15 + 8 )
          goto LABEL_26;
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 1 )
          __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v23) = 1;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v23);
        }
        v26 = *((_QWORD *)v15 + 2);
        a2 = v15 + 4;
        if ( *(_DWORD **)(v26 + 8) != v15 + 4 )
          goto LABEL_26;
        v27 = (_QWORD *)*((_QWORD *)v15 + 3);
        if ( (_DWORD *)*v27 != a2 )
          goto LABEL_26;
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v14 = 1LL;
        if ( v15[14] != 1 )
        {
          CmpAddToDelayedDeref(v15, v9, 1LL);
          CmpFreePostBlock(v15);
          goto LABEL_16;
        }
      }
    }
    if ( !a5 )
      ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
    if ( !a6 )
      CmpDelayedDerefKeys(v9, a2, v14);
    if ( !a7 )
      CmpSignalDeferredPosts(v11);
  }
}
