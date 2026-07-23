/*
 * XREFs of FsRtlProcessFileLock @ 0x1403F9EB0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlFastUnlockSingle @ 0x140308CE0 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateLock @ 0x14030AE50 (FsRtlPrivateLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1403BF9C4 (FsRtlPrivateFastUnlockAll.c)
 *     IoGetRequestorProcess @ 0x1403FA0E0 (IoGetRequestorProcess.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403FA128 (FsRtlCompleteLockIrpReal.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall FsRtlProcessFileLock(PFILE_LOCK FileLock, PIRP Irp, PVOID Context)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  IRP *v7; // rcx
  LARGE_INTEGER ByteOffset; // rax
  UCHAR Flags; // bl
  ULONG Key; // edi
  LARGE_INTEGER *v11; // rbp
  struct _FILE_OBJECT *v12; // r14
  struct _KPROCESS *ProcessId; // rax
  NTSTATUS v14; // ebx
  ULONG Options; // ebx
  LARGE_INTEGER *Length; // rdi
  struct _FILE_OBJECT *FileObject; // rsi
  struct _KPROCESS *RequestorProcess; // rax
  NTSTATUS v20; // eax
  PCOMPLETE_LOCK_IRP_ROUTINE v21; // rax
  struct _KPROCESS *v22; // rax
  int v23; // ebx
  struct _KPROCESS *v24; // rax
  unsigned int v25; // eax
  PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine; // rcx
  struct _IO_STATUS_BLOCK Iosb; // [rsp+60h] [rbp-38h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+A8h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Iosb.Pointer = 0LL;
  Iosb.Information = 0LL;
  v7 = Irp;
  if ( CurrentStackLocation->MinorFunction != 1 )
  {
    switch ( CurrentStackLocation->MinorFunction )
    {
      case 2u:
        Options = CurrentStackLocation->Parameters.Create.Options;
        Length = CurrentStackLocation->Parameters.LockControl.Length;
        FileObject = CurrentStackLocation->FileObject;
        FileOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
        RequestorProcess = IoGetRequestorProcess(Irp);
        v20 = FsRtlFastUnlockSingle(FileLock, FileObject, &FileOffset, Length, RequestorProcess, Options, Context, 0);
        break;
      case 3u:
        v22 = IoGetRequestorProcess(Irp);
        v20 = FsRtlPrivateFastUnlockAll(
                (__int64)FileLock,
                (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
                v22,
                0,
                0,
                (__int64)Context);
        break;
      case 4u:
        v23 = CurrentStackLocation->Parameters.Create.Options;
        v24 = IoGetRequestorProcess(Irp);
        v25 = FsRtlPrivateFastUnlockAll(
                (__int64)FileLock,
                (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
                v24,
                v23,
                1,
                (__int64)Context);
        CompleteLockIrpRoutine = FileLock->CompleteLockIrpRoutine;
        Iosb.Status = v25;
        FsRtlCompleteLockIrpReal(CompleteLockIrpRoutine, Context, Irp, v25, &Iosb, 0LL);
        return Iosb.Status;
      default:
        v14 = -1073741808;
        Irp->IoStatus.Status = -1073741808;
LABEL_9:
        IofCompleteRequest(v7, 1);
        return v14;
    }
    v14 = v20;
    v21 = FileLock->CompleteLockIrpRoutine;
    Irp->IoStatus.Status = v14;
    if ( v21 )
      return guard_dispatch_icall_no_overrides(Context, Irp);
    v7 = Irp;
    goto LABEL_9;
  }
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  Flags = CurrentStackLocation->Flags;
  Key = CurrentStackLocation->Parameters.Create.Options;
  v11 = CurrentStackLocation->Parameters.LockControl.Length;
  v12 = CurrentStackLocation->FileObject;
  FileOffset = ByteOffset;
  ProcessId = IoGetRequestorProcess(Irp);
  FsRtlPrivateLock(FileLock, v12, &FileOffset, v11, ProcessId, Key, Flags & 1, (Flags & 2) != 0, &Iosb, Irp, Context, 0);
  return Iosb.Status;
}
