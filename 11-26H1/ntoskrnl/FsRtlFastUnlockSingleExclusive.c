/*
 * XREFs of FsRtlFastUnlockSingleExclusive @ 0x14030C590
 * Callers:
 *     FsRtlPrivateRemoveLock @ 0x140510F2C (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     RtlDelete @ 0x14030A0F0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14030A194 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14030A7AC (FsRtlPrivateCheckWaitingLocks.c)
 *     RtlRealSuccessor @ 0x14030C4F0 (RtlRealSuccessor.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleExclusive(
        _QWORD *a1,
        _RTL_SPLAY_LINKS *a2,
        _RTL_SPLAY_LINKS **a3,
        _RTL_SPLAY_LINKS **a4,
        _RTL_SPLAY_LINKS *a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  _RTL_SPLAY_LINKS *v9; // rbx
  KIRQL v13; // al
  _RTL_SPLAY_LINKS *v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 v17; // rax
  PRTL_SPLAY_LINKS v18; // r14
  _RTL_SPLAY_LINKS *RightChild; // rdx
  _RTL_SPLAY_LINKS *v20; // r10
  _RTL_SPLAY_LINKS *Parent; // r9
  bool v22; // zf
  _RTL_SPLAY_LINKS *v23; // rcx
  _RTL_SPLAY_LINKS *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  PRTL_SPLAY_LINKS v28; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  _RTL_SPLAY_LINKS *v30; // [rsp+50h] [rbp+8h]

  v9 = *a3;
  v13 = KeAcquireSpinLockRaiseToDpc(a1 + 3);
  v14 = (_RTL_SPLAY_LINKS *)a1[5];
  v15 = v13;
  if ( !v14 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(a1 + 3, 0LL);
    else
      KiReleaseSpinLockInstrumented(a1 + 3, retaddr);
LABEL_4:
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
    __writecr8(v15);
    return 3221225598LL;
  }
  v17 = (unsigned __int64)*a4 + (_QWORD)v9 - 1;
  v18 = 0LL;
  do
  {
    RightChild = v14[2].RightChild;
    v20 = v14;
    if ( RightChild >= v9 )
    {
      Parent = v14[1].Parent;
      if ( Parent )
      {
        if ( (unsigned __int64)Parent <= v17 )
        {
LABEL_11:
          if ( v17 != -1LL || v9 )
          {
            if ( Parent <= v9 )
              break;
            v18 = v14;
          }
        }
        v14 = v14->LeftChild;
        continue;
      }
      if ( v14[1].LeftChild )
        goto LABEL_11;
    }
    if ( RightChild == (_RTL_SPLAY_LINKS *)v17 && v14[1].Parent == v9 )
    {
      v18 = v14;
      v14 = v14->LeftChild;
    }
    else
    {
      v14 = v14->RightChild;
    }
  }
  while ( v14 );
  v22 = v14 == 0LL;
  v23 = *a4;
  if ( !v22 )
    v18 = v20;
  v30 = *a4;
  if ( !v18 )
    v18 = 0LL;
  while ( 1 )
  {
    if ( !v18 )
    {
LABEL_43:
      KxReleaseSpinLock(a1 + 3);
      goto LABEL_4;
    }
    if ( v18[2].Parent == a2 && v18[2].LeftChild == a5 && HIDWORD(v18[1].RightChild) == a6 )
    {
      v24 = v18 + 1;
      if ( v18[1].Parent == v9 && v18[1].LeftChild == v23 )
        break;
    }
    if ( v18[1].Parent > v9 )
      goto LABEL_43;
    v28 = RtlRealSuccessor(v18);
    v23 = v30;
    v18 = v28;
  }
  if ( a2[5].Parent == v24 )
    a2[5].Parent = 0LL;
  a1[5] = RtlDelete(v18);
  if ( (_RTL_SPLAY_LINKS *)*a1 == v24->Parent )
    FsRtlPrivateResetLowestLockOffset(a1);
  if ( !a8 && a1[2] )
  {
    KxReleaseSpinLock(a1 + 3);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
    __writecr8(v15);
    guard_dispatch_icall_no_overrides(a7, &v18[1], v27);
    LOBYTE(v15) = KeAcquireSpinLockRaiseToDpc(a1 + 3);
  }
  ++dword_140E1155C;
  if ( LOWORD(FsRtlExclusiveLockLookasideList.Alignment) < (unsigned __int16)word_140E11550 )
  {
    RtlpInterlockedPushEntrySList(&FsRtlExclusiveLockLookasideList, (PSLIST_ENTRY)v18);
  }
  else
  {
    ++dword_140E11560;
    guard_dispatch_icall_no_overrides(v18, v25, v26);
  }
  if ( a9 && a1[6] )
    FsRtlPrivateCheckWaitingLocks((__int64)a1, a1 + 3, v15);
  KxReleaseSpinLock(a1 + 3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
  __writecr8((unsigned __int8)v15);
  return 0LL;
}
