/*
 * XREFs of NtQueryInformationFile @ 0x1409B4B00
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x1404A6EE0 (PfpFileCheckAttributesForPrefetch.c)
 *     DifNtQueryInformationFileWrapper @ 0x140682C10 (DifNtQueryInformationFileWrapper.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x140807440 (RtlIsPartialPlaceholderFileHandle.c)
 *     SdbpGetFileTimestamp @ 0x140880F74 (SdbpGetFileTimestamp.c)
 *     PfSnGetPrefetchInstructions @ 0x1409B5FA0 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopCallDriverReference @ 0x1402652A0 (IopCallDriverReference.c)
 *     IopFileObjectRevoked @ 0x140269D30 (IopFileObjectRevoked.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026C640 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     IopQueueThreadIrp @ 0x14032F090 (IopQueueThreadIrp.c)
 *     MmIsDriverVerifying @ 0x1403B79E0 (MmIsDriverVerifying.c)
 *     IoGetAttachedDevice @ 0x14044F180 (IoGetAttachedDevice.c)
 *     IopResetEvent @ 0x140455C40 (IopResetEvent.c)
 *     IopCompleteRequest @ 0x14045B5C0 (IopCompleteRequest.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IopWaitForSynchronousIo @ 0x140469D30 (IopWaitForSynchronousIo.c)
 *     KeSetKernelStackSwapEnable @ 0x14047EA50 (KeSetKernelStackSwapEnable.c)
 *     IopGetFileVolumeNameInformation @ 0x1404E0678 (IopGetFileVolumeNameInformation.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     IopGetNumaNodeInformation @ 0x1407799BC (IopGetNumaNodeInformation.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     IopQueryProcessIdsUsingFile @ 0x1409705AC (IopQueryProcessIdsUsingFile.c)
 *     IopValidateQueryInformationParameters @ 0x1409B55BC (IopValidateQueryInformationParameters.c)
 *     IopGetModeInformation @ 0x1409B57A0 (IopGetModeInformation.c)
 *     IopExceptionCleanupEx @ 0x1409B6D64 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409B6E40 (IopWaitAndAcquireFileObjectLock.c)
 *     IopCancelAlertedRequest @ 0x140B1F1D4 (IopCancelAlertedRequest.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140C47F24 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4824C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  unsigned __int8 v9; // r15
  FILE_INFORMATION_CLASS v10; // ebx
  NTSTATUS result; // eax
  int v12; // esi
  _KTHREAD *Thread; // rdi
  unsigned int *p_CurrentRunTime; // r12
  _RTL_BALANCED_NODE *AttachedDevice; // rax
  struct _KLOCK_ENTRIES *v16; // r9
  struct _DEVICE_OBJECT *v17; // r13
  _RTL_BALANCED_NODE *v18; // r14
  bool v19; // si
  struct _KTHREAD *v20; // rax
  AutoBoost *v21; // rax
  void *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  _RTL_BALANCED_NODE *v25; // rax
  unsigned __int64 ParentValue; // rcx
  void *v27; // r14
  char v28; // al
  struct _DRIVER_OBJECT *DriverObject; // r14
  char v30; // si
  __int64 Irp; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r14
  void *p_AvailableEntryBitmap; // rax
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
  struct _KTHREAD *CurrentThread; // rcx
  int v54; // ecx
  __int64 v55; // rcx
  int v56; // ecx
  int v57; // ecx
  char v58; // [rsp+40h] [rbp-F8h] BYREF
  char v59; // [rsp+41h] [rbp-F7h]
  unsigned __int8 v60; // [rsp+42h] [rbp-F6h]
  char v61; // [rsp+43h] [rbp-F5h]
  BOOLEAN v62; // [rsp+44h] [rbp-F4h]
  char v63; // [rsp+45h] [rbp-F3h]
  char v64; // [rsp+46h] [rbp-F2h]
  char v65; // [rsp+47h] [rbp-F1h]
  char v66; // [rsp+48h] [rbp-F0h]
  int v67; // [rsp+4Ch] [rbp-ECh]
  struct _KLOCK_ENTRIES Object; // [rsp+50h] [rbp-E8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-80h]
  __int128 Src; // [rsp+C0h] [rbp-78h] BYREF
  unsigned __int64 v71; // [rsp+D0h] [rbp-68h]
  void *v72; // [rsp+D8h] [rbp-60h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-58h] BYREF

  memset(&Event, 0, sizeof(Event));
  *(_OWORD *)&Object.AvailableEntryBitmap = 0LL;
  Object.Entries[0].WaiterTree.Min = 0LL;
  v62 = 0;
  v61 = 0;
  Object.Entries[0].WaiterTree.Root = (_RTL_BALANCED_NODE *)KeGetCurrentThread();
  v9 = BYTE2(Object.Entries[0].WaiterTree.Root[23].Right);
  v60 = v9;
  v10 = FileInformationClass;
  result = IopValidateQueryInformationParameters(
             v9,
             Object.Entries[0].WaiterTree.Root,
             (_DWORD)IoStatusBlock,
             (_DWORD)FileInformation,
             Length,
             0,
             FileInformationClass);
  if ( result < 0 )
    return result;
  if ( !v9 && FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
  {
    v10 = FileCaseSensitiveInformation;
    v61 = 1;
  }
  Object.Thread = 0LL;
  v12 = ObReferenceObjectByHandle(
          FileHandle,
          IopQueryOperationAccess[v10],
          (POBJECT_TYPE)IoFileObjectType,
          v9,
          (PVOID *)&Object.Thread,
          (POBJECT_HANDLE_INFORMATION)&Object.Entries[0].WaiterTree.8);
  Thread = Object.Thread;
  BugCheckParameter2 = (ULONG_PTR)Object.Thread;
  Object.Entries[0].TreeNode.ParentValue = (unsigned __int64)Object.Thread;
  if ( v12 >= 0 && IopFileObjectRevoked((__int64)Object.Thread) )
  {
    ObfDereferenceObject(Thread);
    v12 = -1073739504;
  }
  v67 = v12;
  if ( v12 < 0 )
    return v12;
  if ( v10 == FileAccessInformation )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    if ( Length >= 4 )
    {
      v63 = 1;
      if ( v9 )
        RtlWriteULongToUser(FileInformation, SHIDWORD(Object.Entries[0].WaiterTree.Min));
      else
        RtlCopyVolatileMemory(FileInformation, (char *)&Object.Entries[0].WaiterTree.Min + 4, 4uLL);
      v63 = 0;
      if ( v9 )
        RtlWriteULongToUser(IoStatusBlock, 0);
      else
        IoStatusBlock->Status = 0;
      if ( v9 )
        RtlWriteULong64ToUser(&IoStatusBlock->Information, 4LL);
      else
        IoStatusBlock->Information = 4LL;
      goto LABEL_35;
    }
    goto LABEL_105;
  }
  p_CurrentRunTime = &Thread->CurrentRunTime;
  Object.Entries[0].OwnerTree.Min = (_RTL_BALANCED_NODE *)&Thread->CurrentRunTime;
  if ( (Thread->CurrentRunTime & 0x800) != 0 )
    AttachedDevice = (_RTL_BALANCED_NODE *)IoGetAttachedDevice((PDEVICE_OBJECT)Thread->Header.WaitListHead.Flink);
  else
    AttachedDevice = (_RTL_BALANCED_NODE *)IoGetRelatedDeviceObject((PFILE_OBJECT)Thread);
  v17 = (struct _DEVICE_OBJECT *)AttachedDevice;
  Object.Entries[0].TreeNode.Children[1] = AttachedDevice;
  v18 = AttachedDevice->Children[1][3].Children[1];
  if ( v10 == FileIsRemoteDeviceInformation )
  {
    v64 = 1;
    if ( Length )
    {
      v52 = (HIDWORD(Thread->Header.WaitListHead.Flink[3].Flink) & 0x10) != 0;
      Object.Entries[0].LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)1LL;
      if ( v9 )
        RtlWriteUCharToUser(FileInformation, v52);
      else
        *(_BYTE *)FileInformation = v52;
      v64 = 0;
      if ( v9 )
        RtlCopyToUser(IoStatusBlock, (void *)&Object.AvailableEntryBitmap, 0x10uLL);
      else
        RtlCopyVolatileMemory(IoStatusBlock, (const void *)&Object.AvailableEntryBitmap, 0x10uLL);
      goto LABEL_35;
    }
LABEL_105:
    ObfDereferenceObject(Thread);
    return -1073741820;
  }
  if ( v10 == FileVolumeNameInformation )
  {
    FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                  Thread->Header.WaitListHead.Flink,
                                  IoStatusBlock,
                                  FileInformation,
                                  Length,
                                  v9);
    ObfDereferenceObject(Thread);
    return FileVolumeNameInformation;
  }
  if ( (*p_CurrentRunTime & 2) != 0 )
  {
    v19 = (*p_CurrentRunTime & 4) != 0;
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = (AutoBoost *)KeAbPreAcquire((__int64)&Thread->SystemCallNumber, 0LL, 0LL, v16);
    v58 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&Thread->116, 1) )
    {
      v12 = IopWaitAndAcquireFileObjectLock(Thread, v9, v19, v21, &v58);
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
      PsReferenceSiloContext(Thread);
      v12 = 0;
    }
    v67 = v12;
    if ( v58 )
      goto LABEL_35;
    if ( v10 == FilePositionInformation )
    {
      v65 = 1;
      if ( Length < 8 )
      {
        v12 = -1073741820;
      }
      else
      {
        Object.Entries[0].LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)8LL;
        if ( v9 )
          RtlWriteULong64ToUser(FileInformation, (__int64)Thread->SchedulingGroup);
        else
          *(_QWORD *)FileInformation = Thread->SchedulingGroup;
        v65 = 0;
        if ( v9 )
          RtlCopyToUser(IoStatusBlock, (void *)&Object.AvailableEntryBitmap, 0x10uLL);
        else
          RtlCopyVolatileMemory(IoStatusBlock, (const void *)&Object.AvailableEntryBitmap, 0x10uLL);
      }
LABEL_34:
      IopReleaseFileObjectLock((ULONG_PTR)Thread, v23, v24);
LABEL_35:
      ObfDereferenceObject(Thread);
      return v12;
    }
    if ( v18 )
    {
      if ( (v25 = v18[1].Children[1],
            Object.Entries[0].BoostBitmap.AllFields = (unsigned __int64)v25,
            Object.Entries[0].OwnerTree.Root = v25,
            ParentValue = v18[1].ParentValue,
            v71 = ParentValue,
            v10 == FileBasicInformation)
        && v25
        || v10 == FileStandardInformation && ParentValue )
      {
        Src = 0LL;
        v59 = 0;
        v66 = 0;
        if ( (MmVerifierData & 0x10) != 0 && (DriverObject = v17->DriverObject, MmIsDriverVerifying(DriverObject)) )
          v27 = (void *)VfFastIoSnapState(DriverObject);
        else
          v27 = 0LL;
        v72 = v27;
        LOBYTE(v23) = 1;
        v28 = guard_dispatch_icall_no_overrides((__int64)Thread, v23);
        v59 = v28;
        if ( v27 )
        {
          VfFastIoCheckState(v27, Object.Entries[0].BoostBitmap.AllFields);
          v28 = v59;
        }
        if ( v28 )
        {
          v12 = Src;
          v67 = Src;
          v66 = 1;
          if ( v9 )
            RtlCopyToUser(IoStatusBlock, &Src, 0x10uLL);
          else
            RtlCopyVolatileMemory(IoStatusBlock, &Src, 0x10uLL);
          v28 = v59;
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
  v58 = v30;
  IopResetEvent((__int64)Thread, v23);
  Irp = IopAllocateIrpExReturn((__int64)v17, (unsigned __int8)v17->StackSize, 0LL);
  v34 = Irp;
  Object.Entries[0].OwnerTree.Min = (_RTL_BALANCED_NODE *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Thread;
    *(_QWORD *)(Irp + 152) = Object.Entries[0].WaiterTree.Root;
    *(_BYTE *)(Irp + 64) = v9;
    if ( v30 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_AvailableEntryBitmap = IoStatusBlock;
      p_Event = 0LL;
    }
    else
    {
      if ( v9 == 1 )
        v62 = KeSetKernelStackSwapEnable(0);
      *(_DWORD *)(v34 + 16) = 4;
      p_AvailableEntryBitmap = (void *)&Object.AvailableEntryBitmap;
      p_Event = &Event;
    }
    Object.Entries[0].WaiterTree.Root = (_RTL_BALANCED_NODE *)(v34 + 80);
    *(_QWORD *)(v34 + 80) = p_Event;
    Object.Entries[0].OwnerTree.Root = (_RTL_BALANCED_NODE *)(v34 + 72);
    *(_QWORD *)(v34 + 72) = p_AvailableEntryBitmap;
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
      if ( v61 )
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
              LODWORD(Object.Thread) = 0;
              NumaNodeInformation = IopQueryProcessIdsUsingFile(v38, *(_DWORD **)(v34 + 24), Length, &Object);
              v43 = 1;
              v61 = 1;
              if ( NumaNodeInformation == -1073741820 )
                IoStatusBlock->Information = LODWORD(Object.Thread);
              else
                *(_QWORD *)(v34 + 56) = LODWORD(Object.Thread);
              v30 = v58;
              break;
            case FileNumaNodeInformation:
              NumaNodeInformation = IopGetNumaNodeInformation(v38, *(USHORT **)(v34 + 24));
              v43 = 1;
              if ( NumaNodeInformation >= 0 )
                *(_QWORD *)(v34 + 56) = 2LL;
              break;
            case FileAllInformation:
              *(_DWORD *)(*(_QWORD *)(v34 + 24) + 76LL) = HIDWORD(Object.Entries[0].WaiterTree.Min);
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
          v49 = KeWaitForSingleObject(&Event, Executive, v9, 0, 0LL);
          if ( v49 == 257 || v49 == 192 )
            IopCancelAlertedRequest(&Event, (PIRP)v34);
          NumaNodeInformation = *(_DWORD *)&Object.AvailableEntryBitmap;
          if ( v9 )
            RtlCopyToUser(IoStatusBlock, (void *)&Object.AvailableEntryBitmap, 0x10uLL);
          else
            RtlCopyVolatileMemory(IoStatusBlock, (const void *)&Object.AvailableEntryBitmap, 0x10uLL);
          goto LABEL_58;
        }
        NumaNodeInformation = IopWaitForSynchronousIo((PIRP)v34, (unsigned int *)v38, v9);
      }
      else
      {
        if ( !v30 )
          Object.Entries[0].WaiterTree.Root->Children[0] = 0LL;
        Object.Entries[0].OwnerTree.Root->Children[0] = (_RTL_BALANCED_NODE *)IoStatusBlock;
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 1 )
          __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v41) = 1;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)v41);
        }
        IopCompleteRequest(v34 + 120, 0LL, 0LL, (ULONG_PTR *)&Object.Entries[0].TreeNode.16, 0LL);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        if ( !v30 )
          goto LABEL_58;
      }
      IopReleaseFileObjectLock(v38, v47, v48);
LABEL_58:
      if ( v62 )
        KeSetKernelStackSwapEnable(1u);
      return NumaNodeInformation;
    }
    IopExceptionCleanupEx(v38, (PIRP)v34, 0LL, 0LL, (*(_DWORD *)(v38 + 80) & 2) != 0);
    if ( v62 )
      KeSetKernelStackSwapEnable(1u);
    return -1073741670;
  }
  else
  {
    if ( (*p_CurrentRunTime & 2) != 0 )
      IopReleaseFileObjectLock((ULONG_PTR)Thread, v32, v33);
    ObfDereferenceObject(Thread);
    return -1073741670;
  }
}
