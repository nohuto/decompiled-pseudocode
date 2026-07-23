/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x1403BF9C4
 * Callers:
 *     FsRtlFastUnlockAll @ 0x1403BF9A0 (FsRtlFastUnlockAll.c)
 *     FsRtlProcessFileLock @ 0x1403F9EB0 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAllByKey @ 0x1405B8220 (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     RtlDelete @ 0x14030A0F0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14030A194 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14030A7AC (FsRtlPrivateCheckWaitingLocks.c)
 *     RtlRealSuccessor @ 0x14030C4F0 (RtlRealSuccessor.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     FsRtlSplitLocks @ 0x1403C1168 (FsRtlSplitLocks.c)
 *     IoGetRequestorProcess @ 0x1403FA0E0 (IoGetRequestorProcess.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403FA128 (FsRtlCompleteLockIrpReal.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
  unsigned __int64 v7; // rdi
  _RTL_SPLAY_LINKS *v8; // r13
  _QWORD *v9; // r14
  KIRQL v10; // al
  _RTL_SPLAY_LINKS *v11; // rbp
  unsigned __int64 v12; // r15
  _RTL_SPLAY_LINKS *i; // rax
  PRTL_SPLAY_LINKS v15; // rax
  _RTL_SPLAY_LINKS *v16; // r10
  void **p_Parent; // rdx
  unsigned __int64 v18; // rbx
  PRTL_SPLAY_LINKS v19; // r13
  void **v20; // r11
  _RTL_SPLAY_LINKS *v21; // rcx
  char v22; // bl
  PRTL_SPLAY_LINKS v23; // rbx
  void *v24; // rbx
  void **v25; // r14
  _RTL_SPLAY_LINKS *Parent; // rax
  __int64 v27; // rdi
  __int64 v28; // rbp
  _RTL_SPLAY_LINKS *k; // rax
  PRTL_SPLAY_LINKS v30; // rdi
  _RTL_SPLAY_LINKS *j; // rax
  KIRQL v32; // al
  _RTL_SPLAY_LINKS *m; // rax
  PEPROCESS RequestorProcess; // rax
  KIRQL v35; // dl
  _RTL_SPLAY_LINKS *v36; // [rsp+30h] [rbp-68h]
  unsigned __int64 v37; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-58h] BYREF
  void **v39; // [rsp+48h] [rbp-50h]
  char v40; // [rsp+A0h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v41; // [rsp+A8h] [rbp+10h]
  struct _KPROCESS *v42; // [rsp+B0h] [rbp+18h]
  int v43; // [rsp+B8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v41 = a2;
  v6 = *(_QWORD **)(a1 + 24);
  v7 = 0LL;
  v8 = a2;
  v9 = 0LL;
  if ( !v6 )
    return 3221225598LL;
  a2[5].Parent = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
  v11 = (_RTL_SPLAY_LINKS *)v6[4];
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
  v40 = 0;
  do
  {
    v15 = RtlRealSuccessor(v11);
    v16 = v11 - 1;
    v38 = 0LL;
    p_Parent = (void **)&v11[-1].Parent;
    v18 = 0LL;
    v36 = v11 - 1;
    v19 = v15;
    v20 = 0LL;
    v37 = 0LL;
    while ( 1 )
    {
      v21 = (_RTL_SPLAY_LINKS *)*p_Parent;
      if ( !*p_Parent )
      {
        v22 = v40;
        goto LABEL_20;
      }
      v9 = *p_Parent;
      if ( v21[1].LeftChild != v41
        || (struct _KPROCESS *)v21[1].RightChild != v42
        || a5 && HIDWORD(v21[1].Parent) != v43 )
      {
        p_Parent = (void **)*p_Parent;
        v36 = v21;
        goto LABEL_16;
      }
      Parent = v21[2].Parent;
      if ( !v20 )
        v20 = p_Parent;
      v39 = v20;
      if ( (unsigned __int64)Parent > v7 )
        v7 = (unsigned __int64)Parent;
      v38 = v7;
      if ( v21 == v16[2].Parent )
        v16[2].Parent = (_RTL_SPLAY_LINKS *)p_Parent;
      *p_Parent = v21->Parent;
      if ( v6[2] )
        break;
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, v21);
      p_Parent = (void **)&v36->Parent;
      v16 = v11 - 1;
      v20 = v39;
LABEL_16:
      if ( !v20 && v9[6] > v18 )
      {
        v18 = v9[6];
        v37 = v18;
      }
    }
    v22 = 1;
    v40 = 1;
LABEL_20:
    v7 = 0LL;
    if ( v20 )
    {
      if ( v16->Parent )
      {
        FsRtlSplitLocks(v16, v20, &v38, &v37);
      }
      else
      {
        v6[4] = RtlDelete(v11);
        ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList, &v11[-1]);
      }
    }
    if ( v22 )
    {
      KeReleaseSpinLock(v6 + 3, v12);
      guard_dispatch_icall_no_overrides(a6, v9 + 1);
      LOBYTE(v12) = KeAcquireSpinLockRaiseToDpc(v6 + 3);
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, v9);
      v19 = (PRTL_SPLAY_LINKS)v6[4];
      v40 = 0;
      if ( v19 )
      {
        for ( j = v19->LeftChild; j; j = j->LeftChild )
          v19 = j;
      }
    }
    v11 = v19;
  }
  while ( v19 );
  v8 = v41;
LABEL_24:
  v23 = (PRTL_SPLAY_LINKS)v6[5];
  if ( v23 )
  {
    for ( k = v23->LeftChild; k; k = k->LeftChild )
      v23 = k;
    do
    {
      v30 = RtlRealSuccessor(v23);
      if ( v23[2].Parent == v8
        && (struct _KPROCESS *)v23[2].LeftChild == v42
        && (!a5 || HIDWORD(v23[1].RightChild) == v43) )
      {
        v6[5] = RtlDelete(v23);
        if ( v6[2] )
        {
          KeReleaseSpinLock(v6 + 3, v12);
          guard_dispatch_icall_no_overrides(a6, &v23[1]);
          v32 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
          v30 = (PRTL_SPLAY_LINKS)v6[5];
          LOBYTE(v12) = v32;
          if ( v30 )
          {
            for ( m = v30->LeftChild; m; m = m->LeftChild )
              v30 = m;
          }
        }
        ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlExclusiveLockLookasideList, v23);
      }
      v23 = v30;
    }
    while ( v30 );
  }
  v24 = (void *)v6[6];
  v25 = (void **)(v6 + 6);
  while ( v24 )
  {
    v27 = *((_QWORD *)v24 + 3);
    v28 = *(_QWORD *)(v27 + 184);
    if ( v41 != *(_RTL_SPLAY_LINKS **)(v28 + 48) )
      goto LABEL_43;
    RequestorProcess = IoGetRequestorProcess(*((PIRP *)v24 + 3));
    if ( v42 != RequestorProcess || a5 && v43 != *(_DWORD *)(v28 + 16) )
      goto LABEL_43;
    *(_BYTE *)(v27 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v27 + 104), 0LL);
    v35 = *(_BYTE *)(v27 + 69);
    if ( *(_BYTE *)(v27 + 68) )
      v27 = 0LL;
    KeReleaseQueuedSpinLock(7uLL, v35);
    if ( v27 )
    {
      *(_QWORD *)(v27 + 56) = 0LL;
      *v25 = *(void **)v24;
      if ( v24 == (void *)v6[7] )
        v6[7] = v25;
      KeReleaseSpinLock(v6 + 3, v12);
      FsRtlCompleteLockIrpReal(v6[1], *((_QWORD *)v24 + 2), v27, 3221225598LL, &v40, 0LL);
      LOBYTE(v12) = KeAcquireSpinLockRaiseToDpc(v6 + 3);
      v25 = (void **)(v6 + 6);
      ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v24);
    }
    else
    {
LABEL_43:
      v25 = (void **)v24;
    }
    v24 = *v25;
  }
  FsRtlPrivateCheckWaitingLocks((__int64)v6, v6 + 3, v12);
  FsRtlPrivateResetLowestLockOffset(v6);
  KeReleaseSpinLock(v6 + 3, v12);
  return 0LL;
}
