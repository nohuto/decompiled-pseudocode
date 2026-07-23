/*
 * XREFs of NtQueryInformationFile @ 0x140985BC0
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x1404A0570 (PfpFileCheckAttributesForPrefetch.c)
 *     DifNtQueryInformationFileWrapper @ 0x1406867F0 (DifNtQueryInformationFileWrapper.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x14080CEE0 (RtlIsPartialPlaceholderFileHandle.c)
 *     SdbpGetFileTimestamp @ 0x140887374 (SdbpGetFileTimestamp.c)
 *     PfSnGetPrefetchInstructions @ 0x140987060 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopCallDriverReference @ 0x140264810 (IopCallDriverReference.c)
 *     IopFileObjectRevoked @ 0x1402692A0 (IopFileObjectRevoked.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     MmIsDriverVerifying @ 0x1403C18E0 (MmIsDriverVerifying.c)
 *     IoGetAttachedDevice @ 0x1404472B0 (IoGetAttachedDevice.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopWaitForSynchronousIo @ 0x1404634B0 (IopWaitForSynchronousIo.c)
 *     KeSetKernelStackSwapEnable @ 0x1404783C0 (KeSetKernelStackSwapEnable.c)
 *     IopGetFileVolumeNameInformation @ 0x1404D9D58 (IopGetFileVolumeNameInformation.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     IopGetNumaNodeInformation @ 0x14077C8EC (IopGetNumaNodeInformation.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopValidateQueryInformationParameters @ 0x14098667C (IopValidateQueryInformationParameters.c)
 *     IopGetModeInformation @ 0x140986860 (IopGetModeInformation.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     IopQueryProcessIdsUsingFile @ 0x1409BBA80 (IopQueryProcessIdsUsingFile.c)
 *     IopCancelAlertedRequest @ 0x140B21254 (IopCancelAlertedRequest.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  unsigned __int8 PreviousMode; // r15
  FILE_INFORMATION_CLASS v10; // ebx
  NTSTATUS result; // eax
  int v12; // esi
  struct _FILE_OBJECT *v13; // rdi
  ULONG *p_Flags; // r12
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _KLOCK_ENTRIES *v16; // r9
  struct _DEVICE_OBJECT *v17; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  bool v19; // si
  struct _KTHREAD *v20; // rax
  AutoBoost *v21; // rax
  void *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  ULONG_PTR FastIoQueryBasicInfo; // rax
  PFAST_IO_QUERY_STANDARD_INFO FastIoQueryStandardInfo; // rcx
  void *v27; // r14
  char v28; // al
  struct _DRIVER_OBJECT *DriverObject; // r14
  char v30; // si
  __int64 Irp; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r14
  PIO_STATUS_BLOCK v35; // rax
  struct _KEVENT *p_Event; // rcx
  __int64 v37; // rdi
  ULONG_PTR v38; // r12
  __int64 Pool2; // rax
  __int64 v40; // rdx
  int *v41; // rdx
  struct _KTHREAD *v42; // rcx
  char v43; // r10
  NTSTATUS NumaNodeInformation; // edi
  int ModeInformation; // eax
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  NTSTATUS v49; // eax
  unsigned __int8 CurrentIrql; // bl
  NTSTATUS FileVolumeNameInformation; // ebx
  char v52; // cl
  struct _KTHREAD *v53; // rcx
  int v54; // ecx
  __int64 v55; // rcx
  int v56; // ecx
  int v57; // ecx
  PVOID *Object; // [rsp+20h] [rbp-118h]
  char v59; // [rsp+40h] [rbp-F8h] BYREF
  char v60; // [rsp+41h] [rbp-F7h]
  unsigned __int8 v61; // [rsp+42h] [rbp-F6h]
  char v62; // [rsp+43h] [rbp-F5h]
  BOOLEAN v63; // [rsp+44h] [rbp-F4h]
  char v64; // [rsp+45h] [rbp-F3h]
  char v65; // [rsp+46h] [rbp-F2h]
  char v66; // [rsp+47h] [rbp-F1h]
  char v67; // [rsp+48h] [rbp-F0h]
  int v68; // [rsp+4Ch] [rbp-ECh]
  PVOID v69; // [rsp+50h] [rbp-E8h] BYREF
  _OWORD v70[2]; // [rsp+58h] [rbp-E0h] BYREF
  PDEVICE_OBJECT v71; // [rsp+78h] [rbp-C0h]
  PVOID v72; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD *v73; // [rsp+88h] [rbp-B0h]
  __int64 v74; // [rsp+90h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-A0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-98h] BYREF
  ULONG_PTR v77; // [rsp+B0h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-80h]
  __int128 Src; // [rsp+C0h] [rbp-78h] BYREF
  PFAST_IO_QUERY_STANDARD_INFO v80; // [rsp+D0h] [rbp-68h]
  void *v81; // [rsp+D8h] [rbp-60h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-58h] BYREF

  memset(&Event, 0, sizeof(Event));
  v70[0] = 0LL;
  HandleInformation = 0LL;
  v63 = 0;
  v62 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v61 = PreviousMode;
  v10 = FileInformationClass;
  result = IopValidateQueryInformationParameters(
             PreviousMode,
             (_DWORD)CurrentThread,
             (_DWORD)IoStatusBlock,
             (_DWORD)FileInformation,
             Length,
             0,
             FileInformationClass);
  if ( result < 0 )
    return result;
  if ( !PreviousMode && FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
  {
    v10 = FileCaseSensitiveInformation;
    v62 = 1;
  }
  v69 = 0LL;
  v12 = ObReferenceObjectByHandle(
          FileHandle,
          IopQueryOperationAccess[v10],
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &v69,
          &HandleInformation);
  v13 = (struct _FILE_OBJECT *)v69;
  BugCheckParameter2 = (ULONG_PTR)v69;
  v72 = v69;
  if ( v12 >= 0 && IopFileObjectRevoked((__int64)v69) )
  {
    ObfDereferenceObject(v13);
    v12 = -1073739504;
  }
  v68 = v12;
  if ( v12 < 0 )
    return v12;
  if ( v10 == FileAccessInformation )
  {
    v53 = KeGetCurrentThread();
    ++v53->OtherOperationCount;
    __incgsdword(0x2EE4u);
    if ( Length >= 4 )
    {
      v64 = 1;
      if ( PreviousMode )
        RtlWriteULongToUser(FileInformation, HandleInformation.GrantedAccess);
      else
        RtlCopyVolatileMemory(FileInformation, &HandleInformation.GrantedAccess, 4uLL);
      v64 = 0;
      if ( PreviousMode )
        RtlWriteULongToUser(IoStatusBlock, 0);
      else
        IoStatusBlock->Status = 0;
      if ( PreviousMode )
        RtlWriteULong64ToUser(&IoStatusBlock->Information, 4LL);
      else
        IoStatusBlock->Information = 4LL;
      goto LABEL_35;
    }
    goto LABEL_105;
  }
  p_Flags = &v13->Flags;
  v74 = (__int64)&v13->Flags;
  if ( (v13->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v13->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v13);
  v17 = AttachedDevice;
  v71 = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  if ( v10 == FileIsRemoteDeviceInformation )
  {
    v65 = 1;
    if ( Length )
    {
      v52 = (v13->DeviceObject->Characteristics & 0x10) != 0;
      *((_QWORD *)&v70[0] + 1) = 1LL;
      if ( PreviousMode )
        RtlWriteUCharToUser(FileInformation, v52);
      else
        *(_BYTE *)FileInformation = v52;
      v65 = 0;
      if ( PreviousMode )
        RtlCopyToUser(IoStatusBlock, v70, 0x10uLL);
      else
        RtlCopyVolatileMemory(IoStatusBlock, v70, 0x10uLL);
      goto LABEL_35;
    }
LABEL_105:
    ObfDereferenceObject(v13);
    return -1073741820;
  }
  if ( v10 == FileVolumeNameInformation )
  {
    FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                  v13->DeviceObject,
                                  IoStatusBlock,
                                  FileInformation,
                                  Length,
                                  PreviousMode);
    ObfDereferenceObject(v13);
    return FileVolumeNameInformation;
  }
  if ( (*p_Flags & 2) != 0 )
  {
    v19 = (*p_Flags & 4) != 0;
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = (AutoBoost *)KeAbPreAcquire((__int64)&v13->Lock, 0LL, 0LL, v16);
    v59 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v13->Busy, 1) )
    {
      v12 = IopWaitAndAcquireFileObjectLock(v13, PreviousMode, v19, v21, &v59);
    }
    else
    {
      if ( v21 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v21, v22);
        else
          *((_BYTE *)v21 + 10) = 1;
      }
      PsReferenceSiloContext(v13);
      v12 = 0;
    }
    v68 = v12;
    if ( v59 )
      goto LABEL_35;
    if ( v10 == FilePositionInformation )
    {
      v66 = 1;
      if ( Length < 8 )
      {
        v12 = -1073741820;
      }
      else
      {
        *((_QWORD *)&v70[0] + 1) = 8LL;
        if ( PreviousMode )
          RtlWriteULong64ToUser(FileInformation, v13->CurrentByteOffset.QuadPart);
        else
          *(_QWORD *)FileInformation = v13->CurrentByteOffset.QuadPart;
        v66 = 0;
        if ( PreviousMode )
          RtlCopyToUser(IoStatusBlock, v70, 0x10uLL);
        else
          RtlCopyVolatileMemory(IoStatusBlock, v70, 0x10uLL);
      }
LABEL_34:
      IopReleaseFileObjectLock((ULONG_PTR)v13, v23, v24);
LABEL_35:
      ObfDereferenceObject(v13);
      return v12;
    }
    if ( FastIoDispatch )
    {
      if ( (FastIoQueryBasicInfo = (ULONG_PTR)FastIoDispatch->FastIoQueryBasicInfo,
            v77 = FastIoQueryBasicInfo,
            v73 = (_QWORD *)FastIoQueryBasicInfo,
            FastIoQueryStandardInfo = FastIoDispatch->FastIoQueryStandardInfo,
            v80 = FastIoQueryStandardInfo,
            v10 == FileBasicInformation)
        && FastIoQueryBasicInfo
        || v10 == FileStandardInformation && FastIoQueryStandardInfo )
      {
        Src = 0LL;
        v60 = 0;
        v67 = 0;
        if ( (MmVerifierData & 0x10) != 0 && (DriverObject = v17->DriverObject, MmIsDriverVerifying(DriverObject)) )
          v27 = (void *)VfFastIoSnapState(DriverObject);
        else
          v27 = 0LL;
        v81 = v27;
        Object = (PVOID *)v17;
        LOBYTE(v23) = 1;
        v28 = guard_dispatch_icall_no_overrides((__int64)v13, v23);
        v60 = v28;
        if ( v27 )
        {
          VfFastIoCheckState(v27, v77);
          v28 = v60;
        }
        if ( v28 )
        {
          v12 = Src;
          v68 = Src;
          v67 = 1;
          if ( PreviousMode )
            RtlCopyToUser(IoStatusBlock, &Src, 0x10uLL);
          else
            RtlCopyVolatileMemory(IoStatusBlock, &Src, 0x10uLL);
          v28 = v60;
        }
        if ( v28 )
          goto LABEL_34;
      }
    }
    v30 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v30 = 0;
  }
  v59 = v30;
  IopResetEvent((__int64)v13, v23);
  Irp = IopAllocateIrpExReturn((__int64)v17, (unsigned __int8)v17->StackSize, 0LL);
  v34 = Irp;
  v74 = Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v13;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    if ( v30 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      v35 = IoStatusBlock;
      p_Event = 0LL;
    }
    else
    {
      if ( PreviousMode == 1 )
        v63 = KeSetKernelStackSwapEnable(0);
      *(_DWORD *)(v34 + 16) = 4;
      v35 = (PIO_STATUS_BLOCK)v70;
      p_Event = &Event;
    }
    CurrentThread = (struct _KTHREAD *)(v34 + 80);
    *(_QWORD *)(v34 + 80) = p_Event;
    v73 = (_QWORD *)(v34 + 72);
    *(_QWORD *)(v34 + 72) = v35;
    *(_QWORD *)(v34 + 88) = 0LL;
    v37 = *(_QWORD *)(v34 + 184);
    *(_BYTE *)(v37 - 72) = 5;
    v38 = BugCheckParameter2;
    *(_QWORD *)(v37 - 24) = BugCheckParameter2;
    *(_QWORD *)(v34 + 112) = FileInformation;
    *(_QWORD *)(v34 + 24) = 0LL;
    *(_QWORD *)(v34 + 8) = 0LL;
    Pool2 = ExAllocatePool2(0x41uLL);
    *(_QWORD *)(v34 + 24) = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(v34 + 16) |= 0x870u;
      *(_DWORD *)(v37 - 64) = Length;
      *(_DWORD *)(v37 - 56) = v10;
      if ( v62 )
        *(_BYTE *)(v37 - 70) |= 1u;
      IopQueueThreadIrp(v34, v40);
      v42 = KeGetCurrentThread();
      ++v42->OtherOperationCount;
      __incgsdword(0x2EE4u);
      v43 = 0;
      NumaNodeInformation = 0;
      switch ( v10 )
      {
        case FileModeInformation:
          **(_DWORD **)(v34 + 24) = IopGetModeInformation(v38);
          *(_QWORD *)(v34 + 56) = 4LL;
          break;
        case FileAlignmentInformation:
          **(_DWORD **)(v34 + 24) = v17->AlignmentRequirement;
          *(_QWORD *)(v34 + 56) = 4LL;
          break;
        case FileIoCompletionNotificationInformation:
          v41 = *(int **)(v34 + 24);
          *v41 = 0;
          v54 = 0;
          if ( (*(_DWORD *)(v38 + 80) & 0x4000000) != 0 )
          {
            v54 = 2;
            *v41 = 2;
          }
          if ( (*(_DWORD *)(v38 + 80) & 0x8000000) != 0 )
          {
            v54 |= 4u;
            *v41 = v54;
          }
          if ( (*(_DWORD *)(v38 + 80) & 0x2000000) != 0 )
            *v41 = v54 | 1;
          *(_QWORD *)(v34 + 56) = 4LL;
          break;
        case FileIoPriorityHintInformation:
          v55 = *(_QWORD *)(v38 + 208);
          if ( v55 && (v56 = *(_DWORD *)(v55 + 88)) != 0 )
            v57 = v56 - 1;
          else
            v57 = 2;
          **(_DWORD **)(v34 + 24) = v57;
          *(_QWORD *)(v34 + 56) = 4LL;
          break;
        default:
          switch ( v10 )
          {
            case FileProcessIdsUsingFileInformation:
              LODWORD(v69) = 0;
              NumaNodeInformation = IopQueryProcessIdsUsingFile(v38, *(_QWORD *)(v34 + 24), Length, &v69, Object);
              v43 = 1;
              v62 = 1;
              if ( NumaNodeInformation == -1073741820 )
                IoStatusBlock->Information = (unsigned int)v69;
              else
                *(_QWORD *)(v34 + 56) = (unsigned int)v69;
              v30 = v59;
              break;
            case FileNumaNodeInformation:
              NumaNodeInformation = IopGetNumaNodeInformation(v38, *(USHORT **)(v34 + 24));
              v43 = 1;
              if ( NumaNodeInformation >= 0 )
                *(_QWORD *)(v34 + 56) = 2LL;
              break;
            case FileAllInformation:
              *(_DWORD *)(*(_QWORD *)(v34 + 24) + 76LL) = HandleInformation.GrantedAccess;
              ModeInformation = IopGetModeInformation(v38);
              *(_DWORD *)(v46 + 88) = ModeInformation;
              *(_DWORD *)(v46 + 92) = v17->AlignmentRequirement;
              *(_QWORD *)(v34 + 56) = 12LL;
              break;
          }
          if ( !v43 )
          {
            NumaNodeInformation = IopCallDriverReference(v17, (PIRP)v34, v30, (_QWORD *)v38, 2);
            goto LABEL_54;
          }
          break;
      }
      *(_DWORD *)(v34 + 48) = NumaNodeInformation;
LABEL_54:
      if ( NumaNodeInformation == 259 )
      {
        if ( !v30 )
        {
          v49 = KeWaitForSingleObject(&Event, Executive, PreviousMode, 0, 0LL);
          if ( v49 == 257 || v49 == 192 )
            IopCancelAlertedRequest(&Event, (PIRP)v34);
          NumaNodeInformation = v70[0];
          if ( PreviousMode )
            RtlCopyToUser(IoStatusBlock, v70, 0x10uLL);
          else
            RtlCopyVolatileMemory(IoStatusBlock, v70, 0x10uLL);
          goto LABEL_58;
        }
        NumaNodeInformation = IopWaitForSynchronousIo((PIRP)v34, (unsigned int *)v38, PreviousMode);
      }
      else
      {
        if ( !v30 )
          *(_QWORD *)&CurrentThread->Header.Lock = 0LL;
        *v73 = IoStatusBlock;
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 1 )
          __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v41) = 1;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)v41);
        }
        IopCompleteRequest(v34 + 120, 0LL, 0LL, (ULONG_PTR *)&v72, 0LL);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        if ( !v30 )
          goto LABEL_58;
      }
      IopReleaseFileObjectLock(v38, v47, v48);
LABEL_58:
      if ( v63 )
        KeSetKernelStackSwapEnable(1u);
      return NumaNodeInformation;
    }
    IopExceptionCleanupEx(v38, (PIRP)v34, 0LL, 0LL, (*(_DWORD *)(v38 + 80) & 2) != 0);
    if ( v63 )
      KeSetKernelStackSwapEnable(1u);
    return -1073741670;
  }
  else
  {
    if ( (*p_Flags & 2) != 0 )
      IopReleaseFileObjectLock((ULONG_PTR)v13, v32, v33);
    ObfDereferenceObject(v13);
    return -1073741670;
  }
}
