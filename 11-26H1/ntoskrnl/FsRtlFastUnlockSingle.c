/*
 * XREFs of FsRtlFastUnlockSingle @ 0x140308CE0
 * Callers:
 *     FsRtlProcessFileLock @ 0x1403F9EB0 (FsRtlProcessFileLock.c)
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

NTSTATUS __stdcall FsRtlFastUnlockSingle(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        LARGE_INTEGER *FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  _QWORD *LockInformation; // rbp
  unsigned __int64 QuadPart; // rbx
  KIRQL v12; // al
  _RTL_SPLAY_LINKS *v13; // rcx
  NTSTATUS v14; // r12d
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  KSPIN_LOCK *v17; // rdi
  KIRQL v18; // al
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  _RTL_SPLAY_LINKS *v21; // rcx
  unsigned __int64 v22; // rax
  _RTL_SPLAY_LINKS *v23; // r9
  _QWORD *v24; // r11
  unsigned __int64 v25; // r8
  PRTL_SPLAY_LINKS v26; // r14
  unsigned __int64 v27; // rax
  unsigned __int64 RightChild; // r9
  _RTL_SPLAY_LINKS *v29; // r10
  unsigned __int64 Parent; // rdx
  bool v31; // zf
  LONGLONG v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r8
  _RTL_SPLAY_LINKS *v37; // rdx
  LONGLONG v38; // r8
  _RTL_SPLAY_LINKS *v39; // r14
  _SLIST_ENTRY **p_Next; // r15
  _SLIST_ENTRY *Next; // rbp
  _SLIST_ENTRY *v42; // r13
  __int64 v43; // rdx
  __int64 v44; // r8
  _QWORD *v45; // rcx
  _SLIST_ENTRY *v46; // rbx
  __int64 v47; // rsi
  _SLIST_ENTRY *v48; // rdi
  _RTL_SPLAY_LINKS *v49; // rcx
  _SLIST_ENTRY *v50; // rbp
  unsigned __int64 v51; // rax
  _SLIST_ENTRY *v52; // rax
  __int64 v53; // r8
  _QWORD *v54; // rbx
  PRTL_SPLAY_LINKS v55; // rax
  _RTL_SPLAY_LINKS *v56; // rax
  _SLIST_ENTRY **v57; // rcx
  int v58; // eax
  _RTL_SPLAY_LINKS *v59; // rbp
  PRTL_SPLAY_LINKS v60; // rax
  _SLIST_ENTRY *v61; // rax
  int v62; // [rsp+20h] [rbp-68h]
  _QWORD *v63; // [rsp+28h] [rbp-60h]
  LONGLONG v64; // [rsp+38h] [rbp-50h]
  _RTL_SPLAY_LINKS *v65; // [rsp+38h] [rbp-50h]
  _SLIST_ENTRY **v66; // [rsp+40h] [rbp-48h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  KIRQL v69; // [rsp+90h] [rbp+8h]

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation )
    return -1073741698;
  QuadPart = FileOffset->QuadPart;
  if ( (unsigned __int64)(FileOffset->QuadPart + Length->QuadPart - 1) < FileOffset->QuadPart && Length->QuadPart )
    return -1073741407;
  v12 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v13 = (_RTL_SPLAY_LINKS *)LockInformation[5];
  v14 = 0;
  v15 = v12;
  if ( !v13 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(LockInformation + 3, 0LL);
    else
      KiReleaseSpinLockInstrumented(LockInformation + 3, retaddr);
    goto LABEL_6;
  }
  v26 = 0LL;
  v27 = QuadPart + Length->QuadPart - 1;
  do
  {
    RightChild = (unsigned __int64)v13[2].RightChild;
    v29 = v13;
    if ( RightChild >= QuadPart )
    {
      Parent = (unsigned __int64)v13[1].Parent;
      if ( Parent )
      {
        if ( Parent <= v27 )
        {
LABEL_20:
          if ( v27 != -1LL || QuadPart )
          {
            if ( Parent <= QuadPart )
              break;
            v26 = v13;
          }
        }
        v13 = v13->LeftChild;
        continue;
      }
      if ( v13[1].LeftChild )
        goto LABEL_20;
    }
    if ( RightChild == v27 && v13[1].Parent == (_RTL_SPLAY_LINKS *)QuadPart )
    {
      v26 = v13;
      v13 = v13->LeftChild;
    }
    else
    {
      v13 = v13->RightChild;
    }
  }
  while ( v13 );
  v31 = v13 == 0LL;
  v32 = Length->QuadPart;
  v64 = Length->QuadPart;
  if ( !v31 )
    v26 = v29;
  if ( !v26 )
    v26 = 0LL;
  while ( v26 )
  {
    if ( (PFILE_OBJECT)v26[2].Parent == FileObject
      && (PEPROCESS)v26[2].LeftChild == ProcessId
      && HIDWORD(v26[1].RightChild) == Key
      && v26[1].Parent == (_RTL_SPLAY_LINKS *)QuadPart
      && v26[1].LeftChild == (_RTL_SPLAY_LINKS *)v32 )
    {
      if ( FileObject->LastLock == &v26[1] )
        FileObject->LastLock = 0LL;
      LockInformation[5] = RtlDelete(v26);
      if ( (_RTL_SPLAY_LINKS *)*LockInformation == v26[1].Parent )
        FsRtlPrivateResetLowestLockOffset(LockInformation);
      if ( LockInformation[2] )
      {
        KxReleaseSpinLock(LockInformation + 3);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
        __writecr8(v15);
        guard_dispatch_icall_no_overrides(Context, &v26[1], v35);
        LOBYTE(v15) = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
      }
      ++dword_140E1155C;
      if ( LOWORD(FsRtlExclusiveLockLookasideList.Alignment) >= (unsigned __int16)word_140E11550 )
      {
        ++dword_140E11560;
        guard_dispatch_icall_no_overrides(v26, v33, v34);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&FsRtlExclusiveLockLookasideList, (PSLIST_ENTRY)v26);
      }
      if ( LockInformation[6] )
        FsRtlPrivateCheckWaitingLocks(LockInformation, LockInformation + 3, (unsigned __int8)v15);
      KxReleaseSpinLock(LockInformation + 3);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
      __writecr8((unsigned __int8)v15);
      return 0;
    }
    if ( v26[1].Parent > (_RTL_SPLAY_LINKS *)QuadPart )
      break;
    v55 = RtlRealSuccessor(v26);
    v32 = v64;
    v26 = v55;
  }
  KxReleaseSpinLock(LockInformation + 3);
LABEL_6:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
  __writecr8(v15);
  v16 = FileOffset->QuadPart;
  v63 = FileLock->LockInformation;
  v17 = v63 + 3;
  v18 = KeAcquireSpinLockRaiseToDpc(v63 + 3);
  v19 = v63[4];
  v20 = v18;
  v69 = v18;
  if ( !v19 )
    goto LABEL_155;
  v21 = 0LL;
  v22 = v16 + Length->QuadPart - 1;
  while ( 1 )
  {
    v23 = (_RTL_SPLAY_LINKS *)(v19 - 24);
    v24 = *(_QWORD **)(v19 - 24);
    if ( *(_QWORD *)(v19 - 24 + 16) < v16 )
      break;
    v25 = v24[1];
    if ( !v25 )
    {
      if ( !v24[2] )
        break;
LABEL_13:
      if ( v22 != -1LL || v16 )
      {
        if ( v25 <= v16 )
          goto LABEL_53;
        v21 = (_RTL_SPLAY_LINKS *)(v19 - 24);
      }
      goto LABEL_51;
    }
    if ( v25 <= v22 )
      goto LABEL_13;
LABEL_51:
    v19 = *(_QWORD *)(v19 + 8);
LABEL_52:
    if ( !v19 )
      goto LABEL_53;
  }
  if ( v24[6] != v22 || v24[1] != v16 )
  {
    v19 = *(_QWORD *)(v19 + 16);
    goto LABEL_52;
  }
LABEL_53:
  v31 = v19 == 0;
  v37 = 0LL;
  if ( !v31 )
    v21 = v23;
  if ( v21 )
    v37 = v21 + 1;
  if ( !v37 )
  {
LABEL_155:
    KeReleaseSpinLock(v17, v20);
    return -1073741698;
  }
  v38 = Length->QuadPart;
  v39 = v37 - 1;
  p_Next = (_SLIST_ENTRY **)&v37[-1];
  Next = 0LL;
  while ( 1 )
  {
    v42 = *p_Next;
    if ( !*p_Next )
    {
LABEL_100:
      KxReleaseSpinLock(v17);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
      __writecr8(v20);
      return -1073741698;
    }
    if ( (PFILE_OBJECT)v42[2].Next == FileObject
      && *((PEPROCESS *)&v42[2].Next + 1) == ProcessId
      && *((_DWORD *)&v42[1].Next + 3) == Key
      && *((_QWORD *)&v42->Next + 1) == v16
      && v42[1].Next == (_SLIST_ENTRY *)v38 )
    {
      break;
    }
    if ( *((_QWORD *)&v42->Next + 1) > v16 )
      goto LABEL_100;
    p_Next = (_SLIST_ENTRY **)*p_Next;
    if ( Next < v42[3].Next )
      Next = v42[3].Next;
  }
  if ( FileObject->LastLock == &v42->Next + 1 )
    FileObject->LastLock = 0LL;
  if ( *p_Next == (_SLIST_ENTRY *)v39[2].Parent )
    v39[2].Parent = (_RTL_SPLAY_LINKS *)p_Next;
  *p_Next = v42->Next;
  if ( p_Next == (_SLIST_ENTRY **)v39 )
  {
    if ( !v39->Parent )
    {
      v63[4] = RtlDelete(v37);
      ++dword_140E1175C;
      if ( LOWORD(FsRtlLockTreeNodeLookasideList.Alignment) < (unsigned __int16)word_140E11750 )
      {
        RtlpInterlockedPushEntrySList(&FsRtlLockTreeNodeLookasideList, (PSLIST_ENTRY)v39);
      }
      else
      {
        ++dword_140E11760;
        guard_dispatch_icall_no_overrides(v39, v43, v44);
      }
      v39 = 0LL;
    }
    v45 = v63;
    if ( *v63 == *((_QWORD *)&v42->Next + 1) )
    {
      FsRtlPrivateResetLowestLockOffset(v63);
      goto LABEL_76;
    }
  }
  else
  {
LABEL_76:
    v45 = v63;
  }
  if ( !v39 )
    goto LABEL_91;
  v46 = 0LL;
  v62 = 0;
  v47 = 0LL;
  if ( LOBYTE(v39->LeftChild) )
  {
    v48 = (_SLIST_ENTRY *)v39->RightChild;
    p_Next = (_SLIST_ENTRY **)v39;
    LOBYTE(v39->LeftChild) = 0;
  }
  else
  {
    v46 = Next;
    v48 = v42[3].Next;
    if ( !v39->Parent || v48 <= Next )
      goto LABEL_90;
  }
  v49 = v39->RightChild;
  v65 = v49;
  while ( 1 )
  {
    v50 = *p_Next;
    if ( !*p_Next )
      break;
    if ( (_SLIST_ENTRY *)v39->Parent == v50 )
    {
      v46 = v50[3].Next;
      v47 = *((_QWORD *)&v50->Next + 1);
      if ( v49 > (_RTL_SPLAY_LINKS *)v48 )
        goto LABEL_87;
      v39->RightChild = (_RTL_SPLAY_LINKS *)v46;
      p_Next = &v50->Next;
    }
    else
    {
      v51 = *((_QWORD *)&v50->Next + 1);
      if ( v51 <= (unsigned __int64)v46 || !v50[1].Next && v51 == v47 )
        goto LABEL_85;
      v56 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList);
      v66 = (_SLIST_ENTRY **)v56;
      v57 = (_SLIST_ENTRY **)v56;
      if ( !v56 )
      {
        v58 = v62;
        if ( LOBYTE(v39->LeftChild) )
          v58 = 1;
        LOBYTE(v39->LeftChild) = 1;
        v49 = v65;
        v62 = v58;
LABEL_85:
        if ( v49 > (_RTL_SPLAY_LINKS *)v48 && *((_QWORD *)&v50->Next + 1) > (unsigned __int64)v48 )
          goto LABEL_89;
        v52 = v50[3].Next;
        if ( v46 < v52 )
        {
          v46 = v50[3].Next;
          if ( v49 <= (_RTL_SPLAY_LINKS *)v48 )
            v39->RightChild = (_RTL_SPLAY_LINKS *)v52;
        }
LABEL_87:
        p_Next = &v50->Next;
        continue;
      }
      v56[1].LeftChild = 0LL;
      v59 = v56 + 1;
      v56[1].RightChild = 0LL;
      v56[1].Parent = v56 + 1;
      LOBYTE(v56->LeftChild) = 0;
      v60 = v39 + 1;
      if ( v39[1].RightChild )
      {
        v60 = RtlRealSuccessor(v39 + 1);
        v57 = v66;
        v60->LeftChild = v59;
      }
      else
      {
        v39[1].RightChild = v59;
      }
      v59->Parent = v60;
      *v57 = *p_Next;
      *p_Next = 0LL;
      v57[6] = (_SLIST_ENTRY *)v39[2].Parent;
      v61 = (_SLIST_ENTRY *)v39->RightChild;
      v39[2].Parent = (_RTL_SPLAY_LINKS *)p_Next;
      v57[2] = v61;
      v39->RightChild = (_RTL_SPLAY_LINKS *)v46;
      if ( v62 )
        v62 = 0;
      else
        LOBYTE(v39->LeftChild) = 0;
      v39 = (_RTL_SPLAY_LINKS *)v57;
      p_Next = v57;
      v49 = v65;
    }
  }
  v39->RightChild = (_RTL_SPLAY_LINKS *)v46;
LABEL_89:
  v45 = v63;
LABEL_90:
  LOBYTE(v20) = v69;
  v17 = v63 + 3;
LABEL_91:
  if ( v45[2] )
  {
    KxReleaseSpinLock(v17);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
    __writecr8((unsigned __int8)v20);
    v54 = v63;
    guard_dispatch_icall_no_overrides(Context, &v42->Next + 1, v53);
    LOBYTE(v20) = KeAcquireSpinLockRaiseToDpc(v17);
  }
  else
  {
    v54 = v63;
  }
  ++dword_140E115DC;
  if ( LOWORD(FsRtlSharedLockLookasideList.Alignment) >= (unsigned __int16)word_140E115D0 )
  {
    ++dword_140E115E0;
    guard_dispatch_icall_no_overrides(v42, v37, v38);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&FsRtlSharedLockLookasideList, v42);
  }
  if ( v17[3] )
    FsRtlPrivateCheckWaitingLocks(v54, v17, (unsigned __int8)v20);
  KxReleaseSpinLock(v17);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
  __writecr8((unsigned __int8)v20);
  return v14;
}
