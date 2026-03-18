/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x1403B5AC4
 * Callers:
 *     FsRtlFastUnlockAll @ 0x1403B5AA0 (FsRtlFastUnlockAll.c)
 *     FsRtlProcessFileLock @ 0x1403FD6C0 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAllByKey @ 0x1405B5A10 (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     RtlDelete @ 0x1402BF430 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1402BF4D4 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402BFAE8 (FsRtlPrivateCheckWaitingLocks.c)
 *     RtlRealSuccessor @ 0x1402C1830 (RtlRealSuccessor.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     FsRtlSplitLocks @ 0x1403B7268 (FsRtlSplitLocks.c)
 *     IoGetRequestorProcess @ 0x1403FD8F0 (IoGetRequestorProcess.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403FD938 (FsRtlCompleteLockIrpReal.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlPrivateFastUnlockAll(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        struct _KPROCESS *a3,
        int a4,
        char a5,
        __int64 a6)
{
  _QWORD *v6; // rsi
  _RTL_SPLAY_LINKS *v7; // rdi
  _RTL_SPLAY_LINKS *v8; // r13
  _QWORD *v9; // r14
  KIRQL v10; // al
  RTL_SPLAY_LINKS *v11; // rbp
  unsigned __int64 v12; // r15
  _RTL_SPLAY_LINKS *i; // rax
  PRTL_SPLAY_LINKS v15; // rax
  unsigned __int64 v16; // rbx
  void **p_Parent; // rdx
  PRTL_SPLAY_LINKS v18; // r13
  void **v19; // r10
  _RTL_SPLAY_LINKS *v20; // rcx
  char v21; // bl
  PRTL_SPLAY_LINKS v22; // rbx
  void *v23; // rbx
  void **v24; // r14
  _RTL_SPLAY_LINKS *Parent; // rax
  __int64 v26; // rdi
  __int64 v27; // rbp
  _RTL_SPLAY_LINKS *k; // rax
  PRTL_SPLAY_LINKS v29; // rdi
  _RTL_SPLAY_LINKS *j; // rax
  KIRQL v31; // al
  _RTL_SPLAY_LINKS *m; // rax
  PEPROCESS RequestorProcess; // rax
  KIRQL v34; // dl
  RTL_SPLAY_LINKS *v35; // [rsp+30h] [rbp-68h]
  unsigned __int64 v36; // [rsp+38h] [rbp-60h] BYREF
  _RTL_SPLAY_LINKS *v37; // [rsp+40h] [rbp-58h] BYREF
  void **v38; // [rsp+48h] [rbp-50h]
  char v39; // [rsp+A0h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v40; // [rsp+A8h] [rbp+10h]
  struct _KPROCESS *v41; // [rsp+B0h] [rbp+18h]
  int v42; // [rsp+B8h] [rbp+20h]

  v42 = a4;
  v41 = a3;
  v40 = a2;
  v6 = *(_QWORD **)(a1 + 24);
  v7 = 0LL;
  v8 = a2;
  v9 = 0LL;
  if ( !v6 )
    return 3221225598LL;
  a2[5].Parent = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
  v11 = (RTL_SPLAY_LINKS *)v6[4];
  v12 = v10;
  if ( !v11 )
  {
    if ( v6[5] )
      goto LABEL_24;
    KxReleaseSpinLock(v6 + 3);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    __writecr8(v12);
    return 3221225598LL;
  }
  for ( i = v11->LeftChild; i; i = i->LeftChild )
    v11 = i;
  v39 = 0;
  do
  {
    v15 = RtlRealSuccessor(v11);
    v16 = 0LL;
    v37 = 0LL;
    p_Parent = (void **)&v11[-1].Parent;
    v36 = 0LL;
    v35 = v11 - 1;
    v18 = v15;
    v19 = 0LL;
    while ( 1 )
    {
      v20 = (_RTL_SPLAY_LINKS *)*p_Parent;
      if ( !*p_Parent )
      {
        v21 = v39;
        goto LABEL_20;
      }
      v9 = *p_Parent;
      if ( v20[1].LeftChild != v40
        || (struct _KPROCESS *)v20[1].RightChild != v41
        || a5 && HIDWORD(v20[1].Parent) != v42 )
      {
        p_Parent = (void **)*p_Parent;
        v35 = v20;
        goto LABEL_16;
      }
      Parent = v20[2].Parent;
      if ( !v19 )
        v19 = p_Parent;
      v38 = v19;
      if ( Parent > v7 )
        v7 = Parent;
      v37 = v7;
      if ( v20 == v11[1].Parent )
        v11[1].Parent = (_RTL_SPLAY_LINKS *)p_Parent;
      *p_Parent = v20->Parent;
      if ( v6[2] )
        break;
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, v20);
      p_Parent = (void **)&v35->Parent;
      v19 = v38;
LABEL_16:
      if ( !v19 && v9[6] > v16 )
      {
        v16 = v9[6];
        v36 = v16;
      }
    }
    v21 = 1;
    v39 = 1;
LABEL_20:
    v7 = 0LL;
    if ( v19 )
    {
      if ( v11[-1].Parent )
      {
        FsRtlSplitLocks(&v11[-1], v19, &v37, &v36);
      }
      else
      {
        v6[4] = RtlDelete(v11);
        ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList, &v11[-1]);
      }
    }
    if ( v21 )
    {
      KeReleaseSpinLock(v6 + 3, v12);
      guard_dispatch_icall_no_overrides(a6, v9 + 1);
      LOBYTE(v12) = KeAcquireSpinLockRaiseToDpc(v6 + 3);
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, v9);
      v18 = (PRTL_SPLAY_LINKS)v6[4];
      v39 = 0;
      if ( v18 )
      {
        for ( j = v18->LeftChild; j; j = j->LeftChild )
          v18 = j;
      }
    }
    v11 = v18;
  }
  while ( v18 );
  v8 = v40;
LABEL_24:
  v22 = (PRTL_SPLAY_LINKS)v6[5];
  if ( v22 )
  {
    for ( k = v22->LeftChild; k; k = k->LeftChild )
      v22 = k;
    do
    {
      v29 = RtlRealSuccessor(v22);
      if ( v22[2].Parent == v8
        && (struct _KPROCESS *)v22[2].LeftChild == v41
        && (!a5 || HIDWORD(v22[1].RightChild) == v42) )
      {
        v6[5] = RtlDelete(v22);
        if ( v6[2] )
        {
          KeReleaseSpinLock(v6 + 3, v12);
          guard_dispatch_icall_no_overrides(a6, &v22[1]);
          v31 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
          v29 = (PRTL_SPLAY_LINKS)v6[5];
          LOBYTE(v12) = v31;
          if ( v29 )
          {
            for ( m = v29->LeftChild; m; m = m->LeftChild )
              v29 = m;
          }
        }
        ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlExclusiveLockLookasideList, v22);
      }
      v22 = v29;
    }
    while ( v29 );
  }
  v23 = (void *)v6[6];
  v24 = (void **)(v6 + 6);
  while ( v23 )
  {
    v26 = *((_QWORD *)v23 + 3);
    v27 = *(_QWORD *)(v26 + 184);
    if ( v40 != *(_RTL_SPLAY_LINKS **)(v27 + 48) )
      goto LABEL_43;
    RequestorProcess = IoGetRequestorProcess(*((PIRP *)v23 + 3));
    if ( v41 != RequestorProcess || a5 && v42 != *(_DWORD *)(v27 + 16) )
      goto LABEL_43;
    *(_BYTE *)(v26 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v26 + 104), 0LL);
    v34 = *(_BYTE *)(v26 + 69);
    if ( *(_BYTE *)(v26 + 68) )
      v26 = 0LL;
    KeReleaseQueuedSpinLock(7uLL, v34);
    if ( v26 )
    {
      *(_QWORD *)(v26 + 56) = 0LL;
      *v24 = *(void **)v23;
      if ( v23 == (void *)v6[7] )
        v6[7] = v24;
      KeReleaseSpinLock(v6 + 3, v12);
      FsRtlCompleteLockIrpReal(v6[1], *((_QWORD *)v23 + 2), v26, 3221225598LL, &v39, 0LL);
      LOBYTE(v12) = KeAcquireSpinLockRaiseToDpc(v6 + 3);
      v24 = (void **)(v6 + 6);
      ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v23);
    }
    else
    {
LABEL_43:
      v24 = (void **)v23;
    }
    v23 = *v24;
  }
  FsRtlPrivateCheckWaitingLocks((__int64)v6, v6 + 3, v12);
  FsRtlPrivateResetLowestLockOffset(v6);
  KeReleaseSpinLock(v6 + 3, v12);
  return 0LL;
}
