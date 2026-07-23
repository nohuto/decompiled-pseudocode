/*
 * XREFs of IopSynchronousServiceTail @ 0x1409837C4
 * Callers:
 *     IopQueueCopyWrite @ 0x1404C06F0 (IopQueueCopyWrite.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140797D78 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x14079C100 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14079C810 (NtSetVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     NtSetEaFile @ 0x140980DA0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409810F0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409815E0 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x140981E10 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140982460 (NtQueryVolumeInformationFile.c)
 *     IopWriteFile @ 0x140982A60 (IopWriteFile.c)
 *     NtQueryDirectoryFile @ 0x140982D50 (NtQueryDirectoryFile.c)
 *     NtQueryDirectoryFileEx @ 0x140982E60 (NtQueryDirectoryFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AAAD60 (NtNotifyChangeDirectoryFileEx.c)
 *     IopWriteFileGather @ 0x140B03A10 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0EB28 (IopReadFileScatter.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     IopCallDriverReference @ 0x140264810 (IopCallDriverReference.c)
 *     IopFileObjectRevoked @ 0x1402692A0 (IopFileObjectRevoked.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026C270 (IoSetDiskIoAttributionFromThread.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14026D980 (IoGetBaseFileSystemDeviceObject.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     IopQueueIrpToFileObject @ 0x140409810 (IopQueueIrpToFileObject.c)
 *     IopIoRingCompleteIrp @ 0x140410B08 (IopIoRingCompleteIrp.c)
 *     IopSetIrpPriorityHintFromFileObject @ 0x14041DB40 (IopSetIrpPriorityHintFromFileObject.c)
 *     IoGetIoPriorityHint @ 0x14042F160 (IoGetIoPriorityHint.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     IopWaitForSynchronousIo @ 0x1404634B0 (IopWaitForSynchronousIo.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IopIsIosbInLockedRange @ 0x140A9E950 (IopIsIosbInLockedRange.c)
 */

__int64 __fastcall IopSynchronousServiceTail(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        struct _FILE_OBJECT *BugCheckParameter2,
        char a4,
        KPROCESSOR_MODE a5,
        char a6,
        unsigned int a7)
{
  PIO_APC_ROUTINE UserApcRoutine; // rax
  unsigned int v11; // r14d
  char v12; // r13
  ULONG Flags; // eax
  int v14; // r12d
  char v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // ecx
  int v19; // esi
  struct _KTHREAD *v20; // rcx
  unsigned int v21; // eax
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *FsContext; // rax
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r10
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  unsigned int v26; // eax
  ULONG DeviceType; // eax
  unsigned __int8 CurrentIrql; // si
  PIO_COMPLETION_CONTEXT CompletionContext; // [rsp+30h] [rbp-10h]
  unsigned int v31; // [rsp+88h] [rbp+48h]
  struct _FILE_OBJECT *v32; // [rsp+90h] [rbp+50h] BYREF
  char v33; // [rsp+98h] [rbp+58h]

  v33 = a4;
  v32 = BugCheckParameter2;
  UserApcRoutine = Irp->Overlay.AsynchronousParameters.UserApcRoutine;
  v31 = 0;
  v11 = 1;
  if ( ((unsigned __int8)UserApcRoutine & 1) != 0 )
  {
    Irp->AllocationFlags |= 0x10u;
    Irp->Overlay.AllocationSize.QuadPart = (unsigned __int64)UserApcRoutine & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v12 = a6;
  CompletionContext = BugCheckParameter2->CompletionContext;
  Flags = Irp->Flags;
  v14 = Flags & 0x200000;
  if ( (a6 || Irp->Overlay.AllocationSize.QuadPart) && !v14 )
  {
    if ( (BugCheckParameter2->Flags & 2) != 0 )
      Irp->AllocationFlags |= 2u;
    goto LABEL_21;
  }
  if ( v14 )
  {
    v15 = 0;
    goto LABEL_12;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && BugCheckParameter2->CompletionContext )
  {
    v15 = 1;
LABEL_12:
    if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)BugCheckParameter2, v15) )
      goto LABEL_22;
LABEL_21:
    IopQueueThreadIrp((__int64)Irp, (__int64)Irp);
    goto LABEL_22;
  }
  if ( (Flags & 0x10) != 0
    || BugCheckParameter2->CompletionContext
    || !BugCheckParameter2->FileObjectExtension
    || !(unsigned __int8)IopIsIosbInLockedRange(BugCheckParameter2) )
  {
    goto LABEL_21;
  }
LABEL_22:
  if ( !IopFileObjectRevoked((__int64)BugCheckParameter2) )
  {
    v19 = a7;
    if ( a7 <= 1 )
    {
      if ( DeviceObject->DeviceType == 7
        || DeviceObject->DeviceType == 8
        || DeviceObject->DeviceType == 9
        || DeviceObject->DeviceType == 36 )
      {
        IoSetDiskIoAttributionFromThread((__int64)Irp, KeGetCurrentThread());
      }
      CurrentThread = KeGetCurrentThread();
      if ( v19 )
      {
        ++CurrentThread->WriteOperationCount;
        v21 = 12000;
      }
      else
      {
        ++CurrentThread->ReadOperationCount;
        v21 = 11996;
      }
    }
    else
    {
      v20 = KeGetCurrentThread();
      ++v20->OtherOperationCount;
      v21 = 12004;
    }
    __incgsdword(v21);
    if ( (BugCheckParameter2->Flags & 0x800000) == 0
      || v19
      || (BugCheckParameter2->Vpb->Flags & 0x40) != 0
      || (FsContext = BugCheckParameter2->FsContext) == 0LL
      || (FsContext[6] & 0x20) != 0
      || (IopSetIrpPriorityHintFromFileObject((__int64)BugCheckParameter2, (__int64)Irp),
          IoGetIoPriorityHint(Irp) < IoPriorityNormal)
      || (BYTE12(xmmword_140FC0C10) & 4) != 0 )
    {
      v26 = IopCallDriverReference(DeviceObject, Irp, v12, BugCheckParameter2, v19);
    }
    else
    {
      BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(BugCheckParameter2);
      FastIoDispatch = BaseFileSystemDeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch->SizeOfFastIoDispatch >= 0xF0
        && *(_QWORD *)&FastIoDispatch[1].SizeOfFastIoDispatch
        && (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)BaseFileSystemDeviceObject, (__int64)Irp) )
      {
        goto LABEL_24;
      }
      v26 = IopCallDriverReference(DeviceObject, Irp, v12, BugCheckParameter2, 0);
    }
    v18 = v26;
    v31 = v26;
    goto LABEL_48;
  }
  v31 = -1073739504;
  Irp->IoStatus.Status = -1073739504;
  IofCompleteRequest(Irp, 0);
LABEL_24:
  v18 = v31;
LABEL_48:
  if ( v33 && v18 != 259 )
  {
    if ( v14 )
    {
      DeviceType = DeviceObject->DeviceType;
      if ( DeviceType != 8 && DeviceType != 20 )
        v11 = 0;
      IopIoRingCompleteIrp(Irp, (ULONG_PTR)BugCheckParameter2, v11);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 1 )
        __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v16) = 1;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v16);
      }
      IopCompleteRequest((__int64)&Irp->Tail, 0LL, 0LL, (ULONG_PTR *)&v32, 0LL);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v18 = v31;
  }
  if ( v12 )
  {
    if ( v18 == 259 )
      v31 = IopWaitForSynchronousIo(Irp, (unsigned int *)BugCheckParameter2, a5);
    IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2, v16, v17);
    return v31;
  }
  else if ( v14 || CompletionContext && (v18 & 0xC0000000) == 0x80000000 )
  {
    return 259;
  }
  return v18;
}
