/*
 * XREFs of FsRtlNotifyFilterChangeDirectory @ 0x140A89F10
 * Callers:
 *     FsRtlNotifyChangeDirectory @ 0x1407933E0 (FsRtlNotifyChangeDirectory.c)
 *     FsRtlNotifyFullChangeDirectory @ 0x140A89EA0 (FsRtlNotifyFullChangeDirectory.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1403FB9D0 (FsRtlNotifySetCancelRoutine.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A8AB54 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlIsNotifyOnList @ 0x140A8B018 (FsRtlIsNotifyOnList.c)
 *     FsRtlCheckNotifyForDelete @ 0x140B593C0 (FsRtlCheckNotifyForDelete.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyFilterChangeDirectory(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PVOID FsContext,
        PSTRING FullDirectoryName,
        BOOLEAN WatchTree,
        BOOLEAN IgnoreBuffer,
        ULONG CompletionFilter,
        PIRP NotifyIrp,
        PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PFILTER_REPORT_CHANGE FilterCallback)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v16; // r9d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 IsNotifyOnList; // rax
  ULONG_PTR Pool2; // rdx
  __int16 v20; // ax
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v22; // r8
  __int16 v23; // cx
  struct _LIST_ENTRY *v24; // rax
  struct _LIST_ENTRY *Blink; // rcx

  if ( NotifyList->Flink == NotifyList && !NotifyIrp )
    return;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  LOBYTE(v16) = 1;
  ++*((_DWORD *)NotifySync + 16);
  if ( !NotifyIrp )
  {
    FsRtlCheckNotifyForDelete(NotifyList, FsContext);
    goto LABEL_36;
  }
  CurrentStackLocation = NotifyIrp->Tail.Overlay.CurrentStackLocation;
  NotifyIrp->IoStatus.Status = 0;
  NotifyIrp->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_6;
  IsNotifyOnList = FsRtlIsNotifyOnList(NotifyList, FsContext);
  Pool2 = IsNotifyOnList;
  if ( !IsNotifyOnList )
  {
    Pool2 = ExAllocatePool2(0x120uLL);
    *(_QWORD *)Pool2 = NotifySync;
    *(_QWORD *)(Pool2 + 8) = FsContext;
    *(_QWORD *)(Pool2 + 128) = CurrentStackLocation->FileObject->FsContext;
    *(_QWORD *)(Pool2 + 16) = TraverseCallback;
    *(_QWORD *)(Pool2 + 24) = SubjectContext;
    SubjectContext = 0LL;
    *(_QWORD *)(Pool2 + 64) = FilterCallback;
    *(_QWORD *)(Pool2 + 136) = FullDirectoryName;
    *(_QWORD *)(Pool2 + 56) = Pool2 + 48;
    *(_QWORD *)(Pool2 + 48) = Pool2 + 48;
    v16 = 1;
    if ( WatchTree )
      *(_WORD *)(Pool2 + 72) |= 1u;
    if ( FullDirectoryName )
    {
      v23 = 2;
      if ( FullDirectoryName->Length < 2u || FullDirectoryName->Buffer[1] )
      {
        *(_BYTE *)(Pool2 + 144) = 1;
        v23 = 1;
      }
      else
      {
        *(_BYTE *)(Pool2 + 144) = 2;
      }
      if ( FullDirectoryName->Length == v23 )
        *(_WORD *)(Pool2 + 72) |= 0x10u;
    }
    else
    {
      *(_BYTE *)(Pool2 + 144) = 1;
    }
    *(_DWORD *)(Pool2 + 76) = CompletionFilter;
    if ( !IgnoreBuffer )
      *(_DWORD *)(Pool2 + 96) = CurrentStackLocation->Parameters.Read.Length;
    *(_QWORD *)(Pool2 + 120) = NotifyIrp->Tail.Overlay.Thread->Process;
    v24 = (struct _LIST_ENTRY *)(Pool2 + 32);
    Blink = NotifyList->Blink;
    if ( Blink->Flink != NotifyList )
      goto LABEL_14;
    v24->Flink = NotifyList;
    *(_QWORD *)(Pool2 + 40) = Blink;
    Blink->Flink = v24;
    NotifyList->Blink = v24;
    *(_DWORD *)(Pool2 + 112) = 1;
LABEL_13:
    NotifyIrp->IoStatus.Information = Pool2;
    NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= v16;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&NotifyIrp->Tail.Overlay.ListEntry;
    v22 = *(struct _LIST_ENTRY **)(Pool2 + 56);
    if ( v22->Flink == (struct _LIST_ENTRY *)(Pool2 + 48) )
    {
      p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(Pool2 + 48);
      NotifyIrp->Tail.Overlay.ListEntry.Blink = v22;
      v22->Flink = &p_ListEntry->ListEntry;
      *(_QWORD *)(Pool2 + 56) = p_ListEntry;
      _InterlockedAdd((volatile signed __int32 *)(Pool2 + 112), v16);
      FsRtlNotifySetCancelRoutine((__int64)NotifyIrp, 0LL);
      goto LABEL_36;
    }
LABEL_14:
    __fastfail(3u);
  }
  v20 = *(_WORD *)(IsNotifyOnList + 72);
  if ( (v20 & 4) == 0 )
  {
    if ( (v20 & 0x20) != 0 )
    {
      CurrentStackLocation->Control |= v16;
      NotifyIrp->IoStatus.Status = -1073741738;
      goto LABEL_7;
    }
    if ( (v20 & 2) != 0 && (v20 & 8) == 0 )
    {
      *(_WORD *)(Pool2 + 72) = v20 & 0xFFFD;
      NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= v16;
      NotifyIrp->IoStatus.Status = 268;
      goto LABEL_7;
    }
    if ( *(_DWORD *)(Pool2 + 104) && (v20 & 8) == 0 )
    {
      *(_QWORD *)(Pool2 + 104) = 0LL;
      FsRtlNotifyCompleteIrp(NotifyIrp, 0);
      goto LABEL_36;
    }
    goto LABEL_13;
  }
LABEL_6:
  CurrentStackLocation->Control |= v16;
  NotifyIrp->IoStatus.Status = 267;
LABEL_7:
  IofCompleteRequest(NotifyIrp, v16);
LABEL_36:
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
  if ( SubjectContext )
  {
    if ( FullDirectoryName )
    {
      SeReleaseSubjectContext(SubjectContext);
      ExFreePoolWithTag(SubjectContext, 0);
    }
  }
}
