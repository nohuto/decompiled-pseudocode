/*
 * XREFs of NtSetVolumeInformationFile @ 0x14079C810
 * Callers:
 *     DifNtSetVolumeInformationFileWrapper @ 0x1406925E0 (DifNtSetVolumeInformationFileWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     IopSynchronousApiServiceTail @ 0x1409829A4 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140AAB204 (IopAllocateIrpCleanup.c)
 *     IoReportTargetDeviceChange @ 0x140AE42C0 (IoReportTargetDeviceChange.c)
 *     IoGetRelatedTargetDevice @ 0x140AF49F8 (IoGetRelatedTargetDevice.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // r13
  struct _KEVENT *v7; // r12
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rdi
  ULONG v10; // eax
  NTSTATUS result; // eax
  int ULongFromUser; // eax
  _KPROCESS *Process; // rax
  __int16 v14; // ax
  bool v16; // al
  ULONG v17; // r8d
  struct _FILE_OBJECT *v18; // rsi
  int RelatedTargetDevice; // eax
  struct _KLOCK_ENTRIES *v20; // r9
  struct _DEVICE_OBJECT *v21; // rdi
  bool v22; // r13
  struct _KTHREAD *v23; // rax
  AutoBoost *v24; // rax
  void *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  NTSTATUS v28; // r14d
  char v29; // r13
  struct _KEVENT *Pool2; // rax
  __int64 v31; // rdx
  __int64 Irp; // rax
  IRP *v33; // r14
  struct _IO_STATUS_BLOCK *v34; // rax
  struct _KEVENT *v35; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *v37; // rcx
  int **p_AssociatedIrp; // r10
  NTSTATUS v39; // r13d
  char v40; // cl
  FS_INFORMATION_CLASS v41; // edx
  _DWORD *v42; // r8
  unsigned int v43; // r9d
  int v44; // eax
  char v45; // r13
  NTSTATUS v46; // esi
  __int64 v47; // r9
  char v48; // [rsp+40h] [rbp-F8h]
  char v49[3]; // [rsp+41h] [rbp-F7h] BYREF
  ULONG Size; // [rsp+44h] [rbp-F4h]
  FS_INFORMATION_CLASS Size_4; // [rsp+48h] [rbp-F0h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-E8h]
  struct _DEVICE_OBJECT *v53; // [rsp+58h] [rbp-E0h] BYREF
  int v54[2]; // [rsp+60h] [rbp-D8h]
  ULONG v55; // [rsp+70h] [rbp-C8h]
  FS_INFORMATION_CLASS v56; // [rsp+78h] [rbp-C0h]
  volatile void *Address; // [rsp+80h] [rbp-B8h]
  PVOID Object; // [rsp+88h] [rbp-B0h] BYREF
  PIO_STATUS_BLOCK v59; // [rsp+90h] [rbp-A8h]
  struct _KEVENT *v60; // [rsp+98h] [rbp-A0h]
  __int64 v61; // [rsp+A0h] [rbp-98h]
  PIO_STATUS_BLOCK v62; // [rsp+A8h] [rbp-90h]
  struct _IO_STACK_LOCATION *v63; // [rsp+B0h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+B8h] [rbp-80h]
  __int128 v65; // [rsp+C0h] [rbp-78h] BYREF
  int NotificationStructure; // [rsp+D0h] [rbp-68h] BYREF
  GUID v67; // [rsp+D4h] [rbp-64h]
  int v68; // [rsp+E4h] [rbp-54h]
  __int64 v69; // [rsp+E8h] [rbp-50h]
  int v70; // [rsp+F0h] [rbp-48h]
  int v71; // [rsp+F4h] [rbp-44h]

  v5 = Length;
  Size = Length;
  Address = FsInformation;
  v59 = IoStatusBlock;
  *(_QWORD *)v54 = FileHandle;
  v62 = IoStatusBlock;
  v55 = Length;
  Size_4 = FsInformationClass;
  v56 = FsInformationClass;
  Object = 0LL;
  v7 = 0LL;
  v60 = 0LL;
  v53 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v48 = PreviousMode;
  v49[1] = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= 0x10 )
      return -1073741821;
    v9 = FsInformationClass;
    v10 = *((unsigned __int8 *)IopSetFsOperationLength + (int)FsInformationClass);
    if ( !(_BYTE)v10 )
      return -1073741821;
    if ( Length < v10 )
      return -1073741820;
    ULongFromUser = RtlReadULongFromUser((unsigned int *)IoStatusBlock);
    RtlWriteULongToUser(IoStatusBlock, ULongFromUser);
    Process = CurrentThread->ApcState.Process;
    v16 = 0;
    if ( Process[1].ReadyTime )
    {
      v14 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v14 == 332 || v14 == 452 )
        v16 = 1;
    }
    v17 = 4;
    if ( !v16 )
      v17 = *((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass);
    ProbeForRead(Address, v5, v17);
  }
  else
  {
    v9 = FsInformationClass;
  }
  result = IopReferenceFileObject(*(void **)v54, IopSetFsOperationAccess[v9], PreviousMode, (ULONG_PTR *)&Object, 0LL);
  if ( result >= 0 )
  {
    v18 = (struct _FILE_OBJECT *)Object;
    RelatedTargetDevice = IoGetRelatedTargetDevice(Object, &v53);
    v21 = v53;
    if ( RelatedTargetDevice < 0 )
      v21 = 0LL;
    v53 = v21;
    if ( (v18->Flags & 2) != 0 )
    {
      v22 = (v18->Flags & 4) != 0;
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      v24 = (AutoBoost *)KeAbPreAcquire((__int64)&v18->Lock, 0LL, 0LL, v20);
      v49[0] = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v18->Busy, 1) )
      {
        LOBYTE(v26) = v22;
        LOBYTE(v25) = PreviousMode;
        v28 = IopWaitAndAcquireFileObjectLock(v18, v25, v26, v24, v49);
      }
      else
      {
        if ( v24 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v24, v25);
          else
            *((_BYTE *)v24 + 10) = 1;
        }
        PsReferenceSiloContext(v18);
        v28 = 0;
      }
      if ( v49[0] )
      {
        ObfDereferenceObject(v18);
        if ( v21 )
          ObfDereferenceObject(v21);
        return v28;
      }
      v29 = 1;
    }
    else
    {
      Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
      v7 = Pool2;
      v60 = Pool2;
      if ( !Pool2 )
      {
        ObfDereferenceObject(v18);
LABEL_42:
        if ( v21 )
          ObfDereferenceObject(v21);
        return -1073741670;
      }
      KeInitializeEvent(Pool2, SynchronizationEvent, 0);
      v29 = 0;
    }
    v49[0] = v29;
    IopResetEvent((__int64)v18, v27);
    DeviceObject = IoGetRelatedDeviceObject(v18);
    LOBYTE(v31) = DeviceObject->StackSize;
    Irp = IopAllocateIrpExReturn((__int64)DeviceObject, v31, 0LL);
    v33 = (IRP *)Irp;
    v61 = Irp;
    if ( !Irp )
    {
      if ( (v18->Flags & 2) == 0 )
        ExFreePoolWithTag(v7, 0);
      IopAllocateIrpCleanup((ULONG_PTR)v18, 0LL);
      goto LABEL_42;
    }
    *(_QWORD *)(Irp + 192) = v18;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = v48;
    v65 = 0LL;
    if ( v29 )
    {
      v34 = v59;
      v35 = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      v34 = (struct _IO_STATUS_BLOCK *)&v65;
      v35 = v7;
    }
    v33->UserEvent = v35;
    v33->UserIosb = v34;
    v33->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v33->Tail.Overlay.CurrentStackLocation;
    *(_QWORD *)v54 = CurrentStackLocation;
    v63 = CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 11;
    CurrentStackLocation[-1].FileObject = v18;
    v33->MdlAddress = 0LL;
    v37 = (struct _IRP *)ExAllocatePool2(0x41uLL);
    p_AssociatedIrp = (int **)&v33->AssociatedIrp;
    CurrentThread = (struct _KTHREAD *)&v33->AssociatedIrp;
    v33->AssociatedIrp.MasterIrp = v37;
    v39 = v37 == 0LL ? 0xC000009A : 0;
    if ( v37 )
    {
      if ( v48 )
        RtlCopyFromUser(v37, (void *)Address, Size);
      else
        RtlCopyVolatileMemory(v37, (const void *)Address, Size);
      v40 = v48;
      v41 = Size_4;
      v42 = *(_DWORD **)v54;
      v43 = Size;
      p_AssociatedIrp = (int **)CurrentThread;
    }
    else
    {
      v40 = v48;
      v41 = Size_4;
      v42 = *(_DWORD **)v54;
      v43 = Size;
    }
    if ( v39 >= 0 )
    {
      if ( v40 && v41 == FileFsLabelInformation && ((v44 = **p_AssociatedIrp, v44 < 0) || v44 + 4 > v43) )
      {
        IopExceptionCleanupEx((ULONG_PTR)v18, v33, 0LL, v7, (v18->Flags & 2) != 0);
        if ( v21 )
          ObfDereferenceObject(v21);
        return -1073741811;
      }
      else
      {
        v33->Flags |= 0x30u;
        *(v42 - 16) = v43;
        *(v42 - 14) = v41;
        v45 = v49[0];
        v46 = IopSynchronousServiceTail(DeviceObject, v33, (ULONG_PTR)v18, v40, v49[0], 2);
        if ( !v45 )
        {
          LOBYTE(v47) = v48;
          v46 = IopSynchronousApiServiceTail((unsigned int)v46, v7, v33, v47, &v65, v59);
        }
        if ( v21 )
        {
          if ( v46 >= 0 )
          {
            v68 = 0;
            v71 = 0;
            NotificationStructure = 2359297;
            v69 = 0LL;
            v70 = -1;
            v67 = GUID_IO_VOLUME_CHANGE;
            IoReportTargetDeviceChange(v21, &NotificationStructure);
          }
          ObfDereferenceObject(v21);
        }
        return v46;
      }
    }
    else
    {
      IopExceptionCleanupEx((ULONG_PTR)v18, v33, 0LL, v7, (v18->Flags & 2) != 0);
      if ( v21 )
        ObfDereferenceObject(v21);
      return v39;
    }
  }
  return result;
}
