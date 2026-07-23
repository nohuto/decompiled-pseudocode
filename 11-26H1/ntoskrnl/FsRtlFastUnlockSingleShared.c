/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x14030A210
 * Callers:
 *     FsRtlPrivateRemoveLock @ 0x140510F2C (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     RtlDelete @ 0x14030A0F0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14030A194 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14030A7AC (FsRtlPrivateCheckWaitingLocks.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     RtlRealSuccessor @ 0x14030C4F0 (RtlRealSuccessor.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleShared(
        _QWORD *a1,
        _RTL_SPLAY_LINKS *a2,
        _RTL_SPLAY_LINKS **a3,
        _RTL_SPLAY_LINKS **a4,
        _RTL_SPLAY_LINKS *a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        char a9)
{
  _RTL_SPLAY_LINKS *v9; // rbx
  KSPIN_LOCK *v10; // r13
  KIRQL v13; // al
  KSPIN_LOCK v14; // r8
  KIRQL v15; // bp
  unsigned __int64 v16; // rcx
  _RTL_SPLAY_LINKS *v17; // rdx
  _RTL_SPLAY_LINKS *v18; // r9
  _QWORD *v19; // r11
  unsigned __int64 v20; // rax
  _RTL_SPLAY_LINKS *v21; // r10
  _RTL_SPLAY_LINKS *v22; // rcx
  _RTL_SPLAY_LINKS *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // r8
  _RTL_SPLAY_LINKS *v26; // r14
  _RTL_SPLAY_LINKS *v27; // r15
  _RTL_SPLAY_LINKS *Parent; // r12
  __int64 v29; // rdx
  __int64 v30; // r8
  _RTL_SPLAY_LINKS *v31; // rbx
  _RTL_SPLAY_LINKS *LeftChild; // rsi
  _RTL_SPLAY_LINKS *RightChild; // rdi
  _RTL_SPLAY_LINKS *v34; // rcx
  _RTL_SPLAY_LINKS *v35; // rbp
  _RTL_SPLAY_LINKS *v36; // rax
  _RTL_SPLAY_LINKS *v37; // rax
  KIRQL v38; // bl
  _RTL_SPLAY_LINKS *v40; // rax
  _RTL_SPLAY_LINKS *v41; // rcx
  int v42; // eax
  _RTL_SPLAY_LINKS *v43; // rbp
  PRTL_SPLAY_LINKS v44; // rax
  _RTL_SPLAY_LINKS *v45; // rax
  int v46; // [rsp+20h] [rbp-58h]
  _RTL_SPLAY_LINKS *i; // [rsp+28h] [rbp-50h]
  _RTL_SPLAY_LINKS *v48; // [rsp+30h] [rbp-48h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v51; // [rsp+90h] [rbp+18h]

  v9 = *a3;
  v10 = a1 + 3;
  v13 = KeAcquireSpinLockRaiseToDpc(a1 + 3);
  v14 = v10[1];
  v15 = v13;
  v51 = v13;
  if ( !v14 )
    goto LABEL_103;
  v16 = (unsigned __int64)*a4 + (_QWORD)v9 - 1;
  v17 = 0LL;
  while ( 1 )
  {
    v18 = (_RTL_SPLAY_LINKS *)(v14 - 24);
    v19 = *(_QWORD **)(v14 - 24);
    if ( *(_QWORD *)(v14 - 24 + 16) < (unsigned __int64)v9 )
      break;
    v20 = v19[1];
    if ( !v20 )
    {
      if ( !v19[2] )
        break;
LABEL_6:
      if ( v16 != -1LL || v9 )
      {
        if ( v20 <= (unsigned __int64)v9 )
          goto LABEL_12;
        v17 = (_RTL_SPLAY_LINKS *)(v14 - 24);
      }
      goto LABEL_10;
    }
    if ( v20 <= v16 )
      goto LABEL_6;
LABEL_10:
    v14 = *(_QWORD *)(v14 + 8);
LABEL_11:
    if ( !v14 )
      goto LABEL_12;
  }
  if ( v19[6] != v16 || (_RTL_SPLAY_LINKS *)v19[1] != v9 )
  {
    v14 = *(_QWORD *)(v14 + 16);
    goto LABEL_11;
  }
LABEL_12:
  if ( v14 )
    v17 = v18;
  v21 = 0LL;
  v22 = 0LL;
  if ( v17 )
    v22 = v17 + 1;
  if ( v22 )
  {
    v23 = 0LL;
    v24 = a6;
    v25 = (__int64)a5;
    v26 = v22 - 1;
    v27 = v22 - 1;
    while ( 1 )
    {
      Parent = v27->Parent;
      if ( !v27->Parent )
      {
LABEL_68:
        KxReleaseSpinLock(v10);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
        __writecr8(v51);
        return 3221225598LL;
      }
      if ( Parent[1].LeftChild == a2
        && Parent[1].RightChild == a5
        && HIDWORD(Parent[1].Parent) == a6
        && Parent->LeftChild == v9
        && Parent->RightChild == *a4 )
      {
        break;
      }
      if ( Parent->LeftChild > v9 )
        goto LABEL_68;
      v27 = v27->Parent;
      if ( v23 < Parent[2].Parent )
        v23 = Parent[2].Parent;
    }
    if ( a2[5].Parent == (_RTL_SPLAY_LINKS *)&Parent->LeftChild )
      a2[5].Parent = 0LL;
    if ( v27->Parent == v26[2].Parent )
      v26[2].Parent = v27;
    v27->Parent = Parent->Parent;
    if ( v27 == v26 )
    {
      if ( !v26->Parent )
      {
        v10[1] = (KSPIN_LOCK)RtlDelete(v22);
        ++dword_140E1175C;
        if ( LOWORD(FsRtlLockTreeNodeLookasideList.Alignment) < (unsigned __int16)word_140E11750 )
        {
          RtlpInterlockedPushEntrySList(&FsRtlLockTreeNodeLookasideList, (PSLIST_ENTRY)v26);
        }
        else
        {
          ++dword_140E11760;
          guard_dispatch_icall_no_overrides(v26, v29, v30);
        }
        v21 = 0LL;
        v26 = 0LL;
      }
      if ( (_RTL_SPLAY_LINKS *)*a1 == Parent->LeftChild )
        FsRtlPrivateResetLowestLockOffset(a1);
    }
    if ( v26 )
    {
      v31 = v21;
      LeftChild = v21;
      v46 = (int)v21;
      if ( LOBYTE(v26->LeftChild) )
      {
        RightChild = v26->RightChild;
        v27 = v26;
        LOBYTE(v26->LeftChild) = 0;
        goto LABEL_39;
      }
      v31 = v23;
      RightChild = Parent[2].Parent;
      if ( v26->Parent )
      {
        if ( RightChild > v23 )
        {
LABEL_39:
          v34 = v26->RightChild;
          for ( i = v34; ; v34 = i )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v35 = v27->Parent;
                if ( !v27->Parent )
                {
                  v26->RightChild = v31;
                  goto LABEL_47;
                }
                if ( v26->Parent != v35 )
                  break;
                v31 = v35[2].Parent;
                LeftChild = v35->LeftChild;
                if ( v34 > RightChild )
                  goto LABEL_45;
                v26->RightChild = v31;
                v27 = v35;
              }
              v36 = v35->LeftChild;
              if ( v36 > v31 && (v35->RightChild || v36 != LeftChild) )
                break;
LABEL_43:
              if ( v34 > RightChild && v35->LeftChild > RightChild )
                goto LABEL_47;
              v37 = v35[2].Parent;
              if ( v31 < v37 )
              {
                v31 = v35[2].Parent;
                if ( v34 <= RightChild )
                  v26->RightChild = v37;
              }
LABEL_45:
              v27 = v35;
            }
            v40 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList);
            v48 = v40;
            v41 = v40;
            if ( !v40 )
            {
              v42 = v46;
              if ( LOBYTE(v26->LeftChild) )
                v42 = 1;
              LOBYTE(v26->LeftChild) = 1;
              v34 = i;
              v46 = v42;
              goto LABEL_43;
            }
            v43 = v40 + 1;
            v40[1].LeftChild = 0LL;
            v40[1].RightChild = 0LL;
            v40[1].Parent = v40 + 1;
            LOBYTE(v40->LeftChild) = 0;
            v44 = v26 + 1;
            if ( v26[1].RightChild )
            {
              v44 = RtlRealSuccessor(v26 + 1);
              v41 = v48;
              v44->LeftChild = v43;
            }
            else
            {
              v26[1].RightChild = v43;
            }
            v43->Parent = v44;
            v41->Parent = v27->Parent;
            v27->Parent = 0LL;
            v41[2].Parent = v26[2].Parent;
            v45 = v26->RightChild;
            v26[2].Parent = v27;
            v41->RightChild = v45;
            v26->RightChild = v31;
            if ( v46 )
              v46 = 0;
            else
              LOBYTE(v26->LeftChild) = 0;
            v26 = v41;
            v27 = v41;
          }
        }
      }
    }
LABEL_47:
    if ( a8 || !a1[2] )
    {
      v38 = v51;
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)v10, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
      __writecr8(v51);
      guard_dispatch_icall_no_overrides(a7, &Parent->LeftChild, v25);
      v38 = KeAcquireSpinLockRaiseToDpc(v10);
    }
    ++dword_140E115DC;
    if ( LOWORD(FsRtlSharedLockLookasideList.Alignment) < (unsigned __int16)word_140E115D0 )
    {
      RtlpInterlockedPushEntrySList(&FsRtlSharedLockLookasideList, (PSLIST_ENTRY)Parent);
    }
    else
    {
      ++dword_140E115E0;
      guard_dispatch_icall_no_overrides(Parent, v24, v25);
    }
    if ( a9 && v10[3] )
      FsRtlPrivateCheckWaitingLocks(a1, v10, v38);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v10, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
    __writecr8(v38);
    return 0LL;
  }
  else
  {
LABEL_103:
    KeReleaseSpinLock(v10, v15);
    return 3221225598LL;
  }
}
