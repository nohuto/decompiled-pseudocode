/*
 * XREFs of NtQueryVolumeInformationFile @ 0x140982460
 * Callers:
 *     DifNtQueryVolumeInformationFileWrapper @ 0x14068A5F0 (DifNtQueryVolumeInformationFileWrapper.c)
 *     PfpVolumeOpenAndVerify @ 0x1409809C8 (PfpVolumeOpenAndVerify.c)
 *     PfSnQueryVolumeInfo @ 0x140982310 (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x1409841A4 (PfSnIsVolumeMounted.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopGetMountFlag @ 0x1404A3940 (IopGetMountFlag.c)
 *     IopGetDriverPathInformation @ 0x1405CD1B4 (IopGetDriverPathInformation.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     IopSynchronousApiServiceTail @ 0x1409829A4 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // r12
  HANDLE v7; // rax
  NTSTATUS v8; // edi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v10; // rbx
  ULONG v11; // eax
  int ULongFromUser; // eax
  _KPROCESS *Process; // rax
  __int16 v14; // ax
  char v15; // al
  bool v16; // zf
  char v17; // al
  ULONG v18; // r8d
  NTSTATUS result; // eax
  __int64 v20; // rdx
  struct _KLOCK_ENTRIES *v21; // r9
  PFILE_OBJECT v22; // rsi
  ULONG *p_Flags; // r12
  ULONG Flags; // ebx
  bool v25; // bl
  struct _KTHREAD *v26; // rax
  void *v27; // rdx
  AutoBoost *v28; // rcx
  __int64 v29; // r8
  KPROCESSOR_MODE v30; // r13
  NTSTATUS v31; // eax
  char v32; // r13
  __int64 v33; // rdx
  struct _FILE_OBJECT *RelatedDeviceObject; // rbx
  struct _KEVENT *v35; // r12
  __int64 Irp; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  IRP *v39; // rbx
  PIO_STATUS_BLOCK v40; // r12
  PIO_STATUS_BLOCK v41; // rax
  struct _KEVENT *v42; // rcx
  ULONG *p_MajorFunction; // rax
  __int64 v44; // rax
  ULONG *v45; // rax
  __int64 v46; // r9
  int MountFlag; // ecx
  PDEVICE_OBJECT DeviceObject; // rbx
  struct _VPB *Vpb; // rdx
  PVPB v50; // rax
  ULONG Characteristics; // eax
  struct _KEVENT *v52; // rax
  _BYTE *Pool2; // r14
  NTSTATUS DriverPathInformation; // eax
  __int64 v55; // rdx
  __int64 v56; // r8
  NTSTATUS v57; // ebx
  KPROCESSOR_MODE v58[8]; // [rsp+40h] [rbp-88h] BYREF
  PVOID P; // [rsp+48h] [rbp-80h] BYREF
  NTSTATUS v60; // [rsp+50h] [rbp-78h]
  PFILE_OBJECT FileObject[2]; // [rsp+58h] [rbp-70h] BYREF
  ULONG *v62; // [rsp+68h] [rbp-60h]
  _BYTE *v63; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-50h]
  _OWORD Src[4]; // [rsp+80h] [rbp-48h] BYREF

  v5 = Length;
  v7 = FileHandle;
  v8 = 0;
  FileObject[0] = 0LL;
  P = 0LL;
  Src[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v58[0] = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= 0x10 )
      return -1073741821;
    v10 = FsInformationClass;
    v11 = *((unsigned __int8 *)IopQueryFsOperationLength + (int)FsInformationClass);
    if ( !(_BYTE)v11 )
      return -1073741821;
    if ( Length < v11 )
      return -1073741820;
    ULongFromUser = RtlReadULongFromUser((unsigned int *)IoStatusBlock);
    RtlWriteULongToUser(IoStatusBlock, ULongFromUser);
    Process = CurrentThread->ApcState.Process;
    if ( !Process[1].ReadyTime )
      goto LABEL_9;
    v14 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v14 == 332 || (v16 = v14 == 452, v15 = 0, v16) )
      v15 = 1;
    v16 = v15 == 0;
    v17 = 1;
    if ( v16 )
LABEL_9:
      v17 = 0;
    v18 = 4;
    if ( !v17 )
      v18 = *((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass);
    ProbeForWrite(FsInformation, v5, v18);
    v7 = FileHandle;
  }
  else
  {
    v10 = FsInformationClass;
  }
  result = IopReferenceFileObject(v7, IopQueryFsOperationAccess[v10], PreviousMode, (ULONG_PTR *)FileObject, 0LL);
  if ( result >= 0 )
  {
    v22 = FileObject[0];
    p_Flags = &FileObject[0]->Flags;
    v62 = &FileObject[0]->Flags;
    Flags = FileObject[0]->Flags;
    if ( (Flags & 0x800) != 0 )
    {
      if ( FsInformationClass != FileFsDeviceInformation )
      {
        v8 = -1073741808;
        goto LABEL_51;
      }
    }
    else if ( FsInformationClass != FileFsDeviceInformation )
    {
      goto LABEL_18;
    }
    if ( (FileObject[0]->Flags & 0x800) != 0 || FileObject[0]->DeviceObject->DeviceType != 20 )
    {
      MountFlag = 0;
      DeviceObject = FileObject[0]->DeviceObject;
      Vpb = DeviceObject->Vpb;
      if ( Vpb )
      {
        v50 = FileObject[0]->Vpb;
        if ( v50 == Vpb )
          MountFlag = v50->Flags & 1;
        else
          MountFlag = IopGetMountFlag((__int64)FileObject[0]->DeviceObject);
      }
      if ( Length < 8 )
      {
        v8 = -1073741820;
      }
      else
      {
        LODWORD(P) = DeviceObject->DeviceType;
        Characteristics = DeviceObject->Characteristics;
        HIDWORD(P) = Characteristics;
        if ( MountFlag )
          HIDWORD(P) = Characteristics | 0x20;
        *((_QWORD *)&Src[0] + 1) = 8LL;
        if ( PreviousMode )
          RtlWriteULong64ToUser(FsInformation, (__int64)P);
        else
          RtlCopyVolatileMemory(FsInformation, &P, 8uLL);
        if ( PreviousMode )
          RtlCopyToUser(IoStatusBlock, Src, 0x10uLL);
        else
          RtlCopyVolatileMemory(IoStatusBlock, Src, 0x10uLL);
        v60 = 0;
      }
      goto LABEL_51;
    }
LABEL_18:
    if ( (Flags & 2) != 0 )
    {
      v25 = (Flags & 4) != 0;
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      v28 = (AutoBoost *)KeAbPreAcquire((__int64)&v22->Lock, 0LL, 0LL, v21);
      v30 = 0;
      v58[0] = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v22->Busy, 1) )
      {
        LOBYTE(v29) = v25;
        LOBYTE(v27) = PreviousMode;
        v31 = IopWaitAndAcquireFileObjectLock(v22, v27, v29, v28, v58);
        v30 = v58[0];
      }
      else
      {
        if ( v28 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v28, v27);
          else
            *((_BYTE *)v28 + 10) = 1;
        }
        PsReferenceSiloContext(v22);
        v31 = 0;
      }
      if ( v30 )
      {
        v8 = v31;
        goto LABEL_51;
      }
      v32 = 1;
    }
    else
    {
      v32 = 0;
    }
    if ( FsInformationClass == FileFsDriverPathInformation )
    {
      v63 = 0LL;
      Pool2 = (_BYTE *)ExAllocatePool2(0x61uLL);
      v63 = Pool2;
      memmove(Pool2, FsInformation, Length);
      DriverPathInformation = IopGetDriverPathInformation((__int64)v22, (__int64)Pool2, Length);
      v57 = DriverPathInformation;
      v60 = DriverPathInformation;
      if ( DriverPathInformation < 0 )
        RtlRaiseStatus(DriverPathInformation);
      *(_BYTE *)FsInformation = *Pool2;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 12LL;
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      if ( (*p_Flags & 2) != 0 )
        IopReleaseFileObjectLock((ULONG_PTR)v22, v55, v56);
      v8 = v57;
      goto LABEL_51;
    }
    IopResetEvent((__int64)v22, v20);
    RelatedDeviceObject = (struct _FILE_OBJECT *)IoGetRelatedDeviceObject(v22);
    FileObject[0] = RelatedDeviceObject;
    if ( (*p_Flags & 2) != 0 )
    {
      v35 = 0LL;
    }
    else
    {
      v52 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
      v35 = v52;
      P = v52;
      if ( !v52 )
      {
LABEL_57:
        v8 = -1073741670;
LABEL_51:
        ObfDereferenceObject(v22);
        return v8;
      }
      KeInitializeEvent(v52, SynchronizationEvent, 0);
    }
    LOBYTE(v33) = RelatedDeviceObject->DeleteAccess;
    Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v33, 0LL);
    v39 = (IRP *)Irp;
    if ( Irp )
    {
      *(_QWORD *)(Irp + 192) = v22;
      *(_QWORD *)(Irp + 152) = CurrentThread;
      *(_BYTE *)(Irp + 64) = PreviousMode;
      if ( v32 )
      {
        v40 = IoStatusBlock;
        v41 = IoStatusBlock;
        v42 = 0LL;
      }
      else
      {
        *(_DWORD *)(Irp + 16) = 4;
        v41 = (PIO_STATUS_BLOCK)Src;
        v42 = v35;
        v40 = IoStatusBlock;
      }
      v39->UserEvent = v42;
      v39->UserIosb = v41;
      v39->Overlay.AllocationSize.QuadPart = 0LL;
      p_MajorFunction = (ULONG *)&v39->Tail.Overlay.CurrentStackLocation->MajorFunction;
      v62 = p_MajorFunction;
      *((_BYTE *)p_MajorFunction - 72) = 10;
      *((_QWORD *)p_MajorFunction - 3) = v22;
      v39->UserBuffer = FsInformation;
      v39->AssociatedIrp.MasterIrp = 0LL;
      v39->MdlAddress = 0LL;
      v44 = ExAllocatePool2(0x41uLL);
      v39->AssociatedIrp.MasterIrp = (struct _IRP *)v44;
      if ( v44 )
      {
        v39->Flags |= 0x870u;
        v45 = v62;
        *(v62 - 16) = Length;
        *(v45 - 14) = FsInformationClass;
        result = IopSynchronousServiceTail((PDEVICE_OBJECT)FileObject[0], v39, (ULONG_PTR)v22, PreviousMode, v32, 2);
        if ( !v32 )
        {
          LOBYTE(v46) = PreviousMode;
          return IopSynchronousApiServiceTail((unsigned int)result, P, v39, v46, Src, v40);
        }
      }
      else
      {
        IopExceptionCleanupEx((ULONG_PTR)v22, v39, 0LL, P, (v22->Flags & 2) != 0);
        return -1073741670;
      }
      return result;
    }
    if ( (v22->Flags & 2) == 0 )
      ExFreePoolWithTag(v35, 0);
    if ( (v22->Flags & 2) != 0 )
      IopReleaseFileObjectLock((ULONG_PTR)v22, v37, v38);
    goto LABEL_57;
  }
  return result;
}
