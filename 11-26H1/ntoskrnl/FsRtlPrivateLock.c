/*
 * XREFs of FsRtlPrivateLock @ 0x1402C0190
 * Callers:
 *     FsRtlProcessFileLock @ 0x1403FD6C0 (FsRtlProcessFileLock.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402BFFA4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402C0A10 (FsRtlPrivateInsertSharedLock.c)
 *     RtlSplay @ 0x1402C0DB0 (RtlSplay.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1402C1630 (FsRtlPrivateInsertExclusiveLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
 *     RtlRealSuccessor @ 0x1402C1830 (RtlRealSuccessor.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402C1BB8 (FsRtlPrivateInitializeFileLock.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403FD938 (FsRtlCompleteLockIrpReal.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x140505750 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x1405174BC (FsRtlPrivateRemoveLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall FsRtlPrivateLock(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock,
        PIO_STATUS_BLOCK Iosb,
        PIRP Irp,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  PLARGE_INTEGER v13; // rax
  char v15; // r15
  volatile signed __int64 *v16; // rsi
  KIRQL v17; // r14
  PIRP v18; // rdi
  char *LockInformation; // r12
  BOOLEAN v20; // bl
  char v21; // r13
  RTL_SPLAY_LINKS *v22; // rcx
  BOOLEAN Next; // al
  PSLIST_ENTRY v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  char *v27; // rax
  char *v28; // rdi
  PRTL_SPLAY_LINKS v29; // rdx
  RTL_SPLAY_LINKS *v30; // r8
  _RTL_SPLAY_LINKS *v31; // rax
  bool v32; // zf
  _RTL_SPLAY_LINKS *RightChild; // r11
  _RTL_SPLAY_LINKS *Parent; // r9
  unsigned __int64 QuadPart; // rbx
  LONGLONG v36; // rdi
  _QWORD *v37; // rax
  __int64 v39; // r8
  int Status; // r14d
  __int64 v41; // r8
  RTL_SPLAY_LINKS *Links; // [rsp+70h] [rbp-80h]
  struct _SLIST_ENTRY v43; // [rsp+88h] [rbp-68h] BYREF
  struct _SLIST_ENTRY v44; // [rsp+98h] [rbp-58h]
  struct _SLIST_ENTRY v45; // [rsp+A8h] [rbp-48h]
  PRTL_SPLAY_LINKS v46; // [rsp+B8h] [rbp-38h]
  char *v47; // [rsp+C0h] [rbp-30h]
  __int64 retaddr; // [rsp+F0h] [rbp+0h]
  PFILE_OBJECT Object; // [rsp+100h] [rbp+10h]

  Object = FileObject;
  v13 = FileOffset;
  v15 = 0;
  v16 = 0LL;
  v47 = 0LL;
  v17 = -1;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v18 = Irp;
  LockInformation = (char *)FileLock->LockInformation;
  if ( !LockInformation )
  {
    LOBYTE(FileObject) = Irp == 0LL;
    if ( !(unsigned __int8)FsRtlPrivateInitializeFileLock(FileLock, FileObject) )
    {
LABEL_3:
      v20 = 0;
      goto LABEL_74;
    }
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (char *)FileLock->LockInformation;
    v13 = FileOffset;
  }
  QuadPart = v13->QuadPart;
  v43.Next = (_SLIST_ENTRY *)QuadPart;
  v36 = Length->QuadPart;
  *((_QWORD *)&v43.Next + 1) = v36;
  *((_QWORD *)&v45.Next + 1) = QuadPart + v36 - 1;
  HIDWORD(v44.Next) = Key;
  *((_QWORD *)&v44.Next + 1) = Object;
  v45.Next = (_SLIST_ENTRY *)ProcessId;
  LOBYTE(v44.Next) = ExclusiveLock;
  v16 = (volatile signed __int64 *)(LockInformation + 24);
  v47 = LockInformation + 24;
  if ( *((_QWORD *)&v45.Next + 1) < QuadPart && v36 )
  {
    Iosb->Status = -1073741407;
    v20 = 1;
    v18 = Irp;
    goto LABEL_74;
  }
  v15 = 1;
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)LockInformation + 3);
  if ( ExclusiveLock )
  {
    v21 = FsRtlPrivateCheckForExclusiveLockAccess((__int64)(LockInformation + 24), (_RTL_SPLAY_LINKS **)&v43);
    Next = (BOOLEAN)v44.Next;
    QuadPart = (unsigned __int64)v43.Next;
  }
  else
  {
    v21 = 1;
    v22 = (RTL_SPLAY_LINKS *)*((_QWORD *)LockInformation + 5);
    if ( v22 )
    {
      v29 = 0LL;
      v46 = 0LL;
      Links = 0LL;
      v30 = 0LL;
      v31 = (_RTL_SPLAY_LINKS *)(QuadPart + v36 - 1);
      while ( 1 )
      {
        v32 = v22 == 0LL;
        if ( !v22 )
          break;
        v29 = v22;
        v46 = v22;
        RightChild = v22[2].RightChild;
        if ( (unsigned __int64)RightChild >= QuadPart && ((Parent = v22[1].Parent) != 0LL || v22[1].LeftChild) )
        {
          if ( Parent <= v31 && (v31 != (_RTL_SPLAY_LINKS *)-1LL || QuadPart) )
          {
            if ( (unsigned __int64)Parent <= QuadPart )
            {
              v32 = v22 == 0LL;
              break;
            }
            v30 = v22;
          }
          Links = v22;
          v22 = v22->LeftChild;
        }
        else if ( RightChild == v31 && v22[1].Parent == (_RTL_SPLAY_LINKS *)QuadPart )
        {
          v30 = v22;
          Links = v22;
          v22 = v22->LeftChild;
        }
        else
        {
          Links = v22;
          v22 = v22->RightChild;
        }
      }
      if ( v32 )
        v29 = v30;
      v46 = v29;
      if ( v29 )
        goto LABEL_59;
      while ( v29 )
      {
LABEL_59:
        if ( v29[1].Parent > v31 )
          break;
        if ( ((PFILE_OBJECT)v29[2].Parent != Object
           || (PEPROCESS)v29[2].LeftChild != ProcessId
           || HIDWORD(v29[1].RightChild) != Key)
          && (v36 || v29[1].LeftChild) )
        {
          v21 = 0;
          break;
        }
        v29 = RtlRealSuccessor(v29);
        v31 = (_RTL_SPLAY_LINKS *)(QuadPart + v36 - 1);
      }
      if ( Links )
        *((_QWORD *)LockInformation + 5) = RtlSplay(Links);
    }
    Next = ExclusiveLock;
  }
  if ( v21 )
  {
    if ( Next )
    {
      v27 = (char *)ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlExclusiveLockLookasideList);
      if ( v27 )
      {
        v28 = v27 + 24;
        *(struct _SLIST_ENTRY *)(v27 + 24) = v43;
        *(struct _SLIST_ENTRY *)(v27 + 40) = v44;
        *(struct _SLIST_ENTRY *)(v27 + 56) = v45;
        FsRtlPrivateInsertExclusiveLock(LockInformation + 24, v27);
        Object->LastLock = v28;
        goto LABEL_13;
      }
    }
    else
    {
      ++dword_140E11514;
      v24 = RtlpInterlockedPopEntrySList(&FsRtlSharedLockLookasideList);
      if ( !v24 )
      {
        ++dword_140E11518;
        v24 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(
                              (unsigned int)dword_140E11524,
                              (unsigned int)dword_140E1152C,
                              (unsigned int)dword_140E11528);
      }
      if ( v24 )
      {
        *(PSLIST_ENTRY)((char *)v24 + 8) = v43;
        *(PSLIST_ENTRY)((char *)v24 + 24) = v44;
        *(PSLIST_ENTRY)((char *)v24 + 40) = v45;
        if ( (unsigned __int8)FsRtlPrivateInsertSharedLock(LockInformation + 24, v24) )
        {
          Object->LastLock = &v24->Next + 1;
LABEL_13:
          if ( QuadPart < *(_QWORD *)LockInformation )
            *(_QWORD *)LockInformation = QuadPart;
          Iosb->Status = 0;
          v20 = 1;
          v18 = Irp;
          goto LABEL_74;
        }
        ++dword_140E1151C;
        if ( LOWORD(FsRtlSharedLockLookasideList.Alignment) < (unsigned __int16)word_140E11510 )
        {
          RtlpInterlockedPushEntrySList(&FsRtlSharedLockLookasideList, v24);
        }
        else
        {
          ++dword_140E11520;
          guard_dispatch_icall_no_overrides(v24, v25, v26);
        }
      }
    }
    v18 = Irp;
    if ( Irp )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3, v17);
      RtlRaiseStatus(3221225626LL);
    }
    goto LABEL_3;
  }
  v18 = Irp;
  if ( FailImmediately )
  {
    Iosb->Status = -1073741739;
    v20 = 1;
  }
  else
  {
    if ( !Irp )
      goto LABEL_3;
    v37 = ExAllocateFromNPagedLookasideList(&FsRtlWaitingLockLookasideList);
    if ( !v37 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3, v17);
      RtlRaiseStatus(3221225626LL);
    }
    v37[3] = Irp;
    v37[2] = Context;
    v37[1] = *((_QWORD *)LockInformation + 1);
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    *v37 = 0LL;
    if ( *((_QWORD *)LockInformation + 6) )
      **((_QWORD **)LockInformation + 7) = v37;
    else
      *((_QWORD *)LockInformation + 6) = v37;
    *((_QWORD *)LockInformation + 7) = v37;
    Irp->IoStatus.Information = (ULONG_PTR)LockInformation;
    _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FsRtlPrivateCancelFileLockIrp);
    if ( Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    {
      Irp->CancelIrql = v17;
      FsRtlPrivateCancelFileLockIrp(0LL, Irp);
      v15 = 0;
    }
    Iosb->Status = 259;
    v20 = 1;
  }
LABEL_74:
  if ( v15 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      _InterlockedAnd64(v16, 0LL);
    else
      KiReleaseSpinLockInstrumented(v16, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
    __writecr8(v17);
  }
  if ( v18 && Iosb->Status != 259 )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    Status = Iosb->Status;
    if ( *((_QWORD *)LockInformation + 1) )
    {
      if ( Object )
        Object->LastLock = 0LL;
      v18->IoStatus.Status = Status;
      Status = guard_dispatch_icall_no_overrides(Context, v18, v39);
    }
    else
    {
      v18->IoStatus.Status = Status;
      IofCompleteRequest(v18, 1);
    }
    if ( Status < 0 && Iosb->Status >= 0 )
    {
      LOBYTE(v41) = 1;
      FsRtlPrivateRemoveLock(LockInformation, &v43, v41);
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    Iosb->Status = Status;
  }
  return v20;
}
