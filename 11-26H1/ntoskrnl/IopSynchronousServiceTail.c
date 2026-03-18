/*
 * XREFs of IopSynchronousServiceTail @ 0x1409B2704
 * Callers:
 *     IopQueueCopyWrite @ 0x1404C6D40 (IopQueueCopyWrite.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140795248 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140799CE0 (NtSetVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     NtSetEaFile @ 0x1409AFCE0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409B0030 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409B0520 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x1409B0D50 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x1409B13A0 (NtQueryVolumeInformationFile.c)
 *     IopWriteFile @ 0x1409B19A0 (IopWriteFile.c)
 *     NtQueryDirectoryFile @ 0x1409B1C90 (NtQueryDirectoryFile.c)
 *     NtQueryDirectoryFileEx @ 0x1409B1DA0 (NtQueryDirectoryFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 *     IopWriteFileGather @ 0x140B01CE0 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0D3D8 (IopReadFileScatter.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     IopCallDriverReference @ 0x1402652A0 (IopCallDriverReference.c)
 *     IopFileObjectRevoked @ 0x140269D30 (IopFileObjectRevoked.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026CD00 (IoSetDiskIoAttributionFromThread.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14026E410 (IoGetBaseFileSystemDeviceObject.c)
 *     IopQueueThreadIrp @ 0x14032F090 (IopQueueThreadIrp.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     IopIoRingCompleteIrp @ 0x1404113E8 (IopIoRingCompleteIrp.c)
 *     IopQueueIrpToFileObject @ 0x1404151E0 (IopQueueIrpToFileObject.c)
 *     IopSetIrpPriorityHintFromFileObject @ 0x140430B10 (IopSetIrpPriorityHintFromFileObject.c)
 *     IoGetIoPriorityHint @ 0x14043C8B0 (IoGetIoPriorityHint.c)
 *     IopCompleteRequest @ 0x14045B5C0 (IopCompleteRequest.c)
 *     IopWaitForSynchronousIo @ 0x140469D30 (IopWaitForSynchronousIo.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     IopIsIosbInLockedRange @ 0x140A9BDE0 (IopIsIosbInLockedRange.c)
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
      || (BYTE12(xmmword_140FBFC10) & 4) != 0 )
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
