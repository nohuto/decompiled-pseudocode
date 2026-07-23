/*
 * XREFs of NtSetInformationFile @ 0x140269860
 * Callers:
 *     DifNtSetInformationFileWrapper @ 0x14068F6B0 (DifNtSetInformationFileWrapper.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x14021B6F0 (IopAllocateFileObjectExtension.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     IopCallDriverReference @ 0x140264810 (IopCallDriverReference.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopFileObjectRevoked @ 0x1402692A0 (IopFileObjectRevoked.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoGetAttachedDevice @ 0x1404472B0 (IoGetAttachedDevice.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     IopWaitForSynchronousIo @ 0x1404634B0 (IopWaitForSynchronousIo.c)
 *     KeSetKernelStackSwapEnable @ 0x1404783C0 (KeSetKernelStackSwapEnable.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     IopReplaceCompletionPort @ 0x1405CE1D8 (IopReplaceCompletionPort.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14077A8A8 (IopSetFileMemoryPartitionInformation.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     IopSetFileObjectIosbRange @ 0x1407981C0 (IopSetFileObjectIosbRange.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopOpenLinkOrRenameTarget @ 0x1409842DC (IopOpenLinkOrRenameTarget.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140AAB204 (IopAllocateIrpCleanup.c)
 *     IopTrackLink @ 0x140AD048C (IopTrackLink.c)
 *     IopCancelAlertedRequest @ 0x140B21254 (IopCancelAlertedRequest.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  SIZE_T v5; // r13
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 PreviousMode; // si
  FILE_INFORMATION_CLASS v9; // ebx
  ULONG v10; // eax
  unsigned int ULongFromUser; // eax
  _KPROCESS *Process; // rax
  ULONG v13; // r8d
  __int16 v14; // cx
  ACCESS_MASK v15; // r12d
  int v16; // r14d
  char *v17; // rdi
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v19; // r12
  bool v20; // r14
  struct _KTHREAD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  __int64 ULong64FromUser; // rax
  NTSTATUS v27; // ebx
  struct _KTHREAD *v28; // rcx
  __int64 v29; // rdx
  char v31; // r14
  __int64 Irp; // rax
  IRP *v33; // r14
  struct _KTHREAD *v34; // rcx
  int v35; // eax
  PIO_STATUS_BLOCK p_Src; // rax
  struct _KEVENT *v37; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS FileObjectExtension; // r12d
  HANDLE *Pool2; // rax
  struct _IO_STACK_LOCATION *v41; // rcx
  struct _IRP *MasterIrp; // rdx
  struct _KTHREAD *v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  char v46; // bl
  unsigned __int8 CurrentIrql; // si
  __int64 v48; // rdx
  __int64 v49; // r8
  char v50; // al
  struct _KTHREAD *v51; // rcx
  HANDLE *v52; // rcx
  PVOID *v53; // rbx
  KIRQL v54; // al
  KSPIN_LOCK *v55; // rcx
  HANDLE *v56; // rcx
  char v57; // al
  int v58; // ecx
  struct _IRP *v59; // r8
  unsigned int Flags; // ecx
  BOOLEAN Type; // al
  int v62; // eax
  NTSTATUS v63; // eax
  int SectorSize; // ecx
  char IsSandboxedToken; // di
  __int128 *v66; // rax
  int v67; // eax
  HANDLE *v68; // r13
  PVOID v69; // rbx
  unsigned int v70; // ebx
  HANDLE v71; // rcx
  int v72; // r8d
  unsigned int v73; // r8d
  unsigned int v74; // r8d
  _BYTE v75[2]; // [rsp+30h] [rbp-F8h] BYREF
  char v76; // [rsp+32h] [rbp-F6h]
  char v77; // [rsp+33h] [rbp-F5h]
  char v78; // [rsp+34h] [rbp-F4h]
  PVOID Object; // [rsp+38h] [rbp-F0h] BYREF
  int v80; // [rsp+40h] [rbp-E8h]
  union _IRP::$CBBBB9F4F0755A16DC8A369061485BEC *p_AssociatedIrp; // [rsp+48h] [rbp-E0h]
  struct _IO_STACK_LOCATION *v82; // [rsp+50h] [rbp-D8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-D0h]
  __int128 Src; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v85; // [rsp+70h] [rbp-B8h] BYREF
  char *v86; // [rsp+80h] [rbp-A8h]
  struct _KTHREAD *v87; // [rsp+A0h] [rbp-88h]
  HANDLE *v88; // [rsp+A8h] [rbp-80h]
  PVOID v89; // [rsp+B0h] [rbp-78h] BYREF
  HANDLE v90; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD *p_UserIosb; // [rsp+C0h] [rbp-68h]
  PKEVENT *p_UserEvent; // [rsp+C8h] [rbp-60h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-58h] BYREF

  v5 = Length;
  v85 = 0LL;
  v86 = 0LL;
  Src = 0LL;
  v90 = 0LL;
  v80 = 0;
  v77 = 0;
  v76 = 0;
  v78 = 0;
  CurrentThread = KeGetCurrentThread();
  v87 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v75[1] = PreviousMode;
  if ( PreviousMode )
  {
    v9 = FileInformationClass;
    if ( (unsigned int)FileInformationClass >= (FileStatInformation|FileModeInformation) )
      return -1073741821;
    v10 = *((unsigned __int8 *)IopSetOperationLength + (int)FileInformationClass);
    if ( !(_BYTE)v10 )
      return -1073741821;
    if ( Length < v10 )
      return -1073741820;
    ULongFromUser = RtlReadULongFromUser(IoStatusBlock);
    RtlWriteULongToUser(IoStatusBlock, ULongFromUser);
    Process = CurrentThread->ApcState.Process;
    if ( Process[1].ReadyTime && ((v14 = WORD2(Process[3].PerProcessorCycleTimes), v14 == 332) || v14 == 452) )
    {
      v13 = 1;
      if ( (_DWORD)v5 != 1 )
        v13 = 4;
    }
    else
    {
      v13 = *((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass);
    }
    ProbeForRead(FileInformation, v5, v13);
    v15 = IopSetOperationAccess[FileInformationClass];
    if ( FileInformationClass == FileLinkInformation || FileInformationClass == FileLinkInformationEx )
    {
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContextEx(CurrentThread, CurrentThread->Process, &SubjectContext);
      IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      if ( IsSandboxedToken )
        v15 |= 0x100u;
    }
  }
  else
  {
    v9 = FileInformationClass;
    switch ( FileInformationClass )
    {
      case FileRenameInformationBypassAccessCheck:
        v9 = FileRenameInformation;
        v76 = 1;
        break;
      case FileRenameInformationExBypassAccessCheck:
        v9 = FileRenameInformationEx;
        v76 = 1;
        break;
      case FileLinkInformationBypassAccessCheck:
        v9 = FileLinkInformation;
        v76 = 1;
        break;
      case FileLinkInformationExBypassAccessCheck:
        v9 = FileLinkInformationEx;
        v76 = 1;
        break;
      case FileCaseSensitiveInformationForceAccessCheck:
        v9 = FileCaseSensitiveInformation;
        v78 = 1;
        break;
    }
    v15 = IopSetOperationAccess[v9];
  }
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(FileHandle, v15, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v17 = (char *)Object;
  v89 = Object;
  if ( v16 >= 0 && IopFileObjectRevoked((__int64)Object) )
  {
    ObfDereferenceObjectWithTag(v17, 0x746C6644u);
    return -1073739504;
  }
  if ( v16 < 0 )
    return v16;
  if ( (*((_DWORD *)v17 + 20) & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v17 + 1));
  else
    AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)v17);
  v19 = AttachedDevice;
  DeviceObject = AttachedDevice;
  if ( (*((_DWORD *)v17 + 20) & 2) == 0 )
  {
    LOWORD(v85) = 1;
    BYTE2(v85) = 6;
    DWORD1(v85) = 0;
    v86 = (char *)&v85 + 8;
    *((_QWORD *)&v85 + 1) = (char *)&v85 + 8;
    v31 = 0;
    goto LABEL_47;
  }
  v20 = (*((_DWORD *)v17 + 20) & 4) != 0;
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  v22 = KeAbPreAcquire((struct _KTHREAD *)(v17 + 128), 0LL);
  v75[0] = 0;
  if ( _InterlockedExchange((volatile __int32 *)v17 + 29, 1) )
  {
    v25 = IopWaitAndAcquireFileObjectLock(v17, PreviousMode, v20, v22, v75);
  }
  else
  {
    if ( v22 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *(_BYTE *)(v22 + 33) |= 2u;
      else
        *(_BYTE *)(v22 + 10) = 1;
    }
    PsReferenceSiloContext(v17);
    v25 = 0;
  }
  LODWORD(v82) = v25;
  LODWORD(p_AssociatedIrp) = v25;
  if ( !v75[0] )
  {
    if ( v9 == FilePositionInformation )
    {
      if ( (unsigned int)v5 >= 8 )
      {
        if ( PreviousMode )
          ULong64FromUser = RtlReadULong64FromUser(FileInformation);
        else
          ULong64FromUser = *(_QWORD *)FileInformation;
        p_UserIosb = (_QWORD *)ULong64FromUser;
        if ( (*((_DWORD *)v17 + 20) & 8) != 0
          && (SectorSize = v19->SectorSize, (_WORD)SectorSize)
          && ((SectorSize - 1) & (unsigned int)ULong64FromUser) != 0
          || ULong64FromUser < 0 )
        {
          v27 = -1073741811;
        }
        else
        {
          *((_QWORD *)v17 + 13) = ULong64FromUser;
          if ( PreviousMode )
            RtlCopyToUser(IoStatusBlock, &Src, 0x10uLL);
          else
            RtlCopyVolatileMemory(IoStatusBlock, &Src, 0x10uLL);
          v27 = (int)v82;
        }
        v28 = KeGetCurrentThread();
        v29 = (unsigned int)v5;
        v28->OtherTransferCount += (unsigned int)v5;
        __addgsqword(0x2EF8u, (unsigned int)v5);
LABEL_38:
        IopReleaseFileObjectLock((ULONG_PTR)v17, v29, v24);
LABEL_39:
        ObfDereferenceObjectWithTag(v17, 0x746C6644u);
        return v27;
      }
      IopReleaseFileObjectLock((ULONG_PTR)v17, v23, v24);
      ObfDereferenceObjectWithTag(v17, 0x746C6644u);
      return -1073741820;
    }
    v31 = 1;
LABEL_47:
    v75[0] = v31;
    IopResetEvent(v17);
    if ( v9 == FileTrackingInformation )
    {
      if ( (unsigned int)v5 < 0x10 )
      {
        v27 = -1073741820;
      }
      else
      {
        if ( v31 )
          v66 = (__int128 *)(v17 + 152);
        else
          v66 = &v85;
        v67 = IopTrackLink((PFILE_OBJECT)v17, (__int64)v66, PreviousMode);
        v27 = v67;
        LODWORD(p_AssociatedIrp) = v67;
        if ( v67 >= 0 )
        {
          *((_QWORD *)&Src + 1) = 0LL;
          LODWORD(Src) = v67;
          if ( PreviousMode )
            RtlCopyToUser(IoStatusBlock, &Src, 0x10uLL);
          else
            RtlCopyVolatileMemory(IoStatusBlock, &Src, 0x10uLL);
        }
      }
      if ( !v31 )
        goto LABEL_39;
      goto LABEL_38;
    }
    Irp = IopAllocateIrpExReturn(v19, (unsigned __int8)v19->StackSize, (unsigned __int8)v31 ^ 1u);
    v33 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup((ULONG_PTR)v17, 0LL);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v17;
    *(_QWORD *)(Irp + 152) = v87;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    if ( v75[0] )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Src = IoStatusBlock;
      v37 = 0LL;
    }
    else
    {
      if ( PreviousMode == 1 )
      {
        v34 = KeGetCurrentThread();
        v35 = *((_DWORD *)&v34->0 + 1) >> 6;
        LOBYTE(v35) = (*((_DWORD *)&v34->0 + 1) & 0x40) != 0;
        v80 = v35;
        if ( (_BYTE)v35 )
          _interlockedbittestandreset((volatile signed __int32 *)&v34->116 + 1, 6u);
        v77 = v35;
      }
      v33->Flags = 4;
      p_Src = (PIO_STATUS_BLOCK)&Src;
      v37 = (struct _KEVENT *)&v85;
    }
    p_UserEvent = &v33->UserEvent;
    v33->UserEvent = v37;
    p_UserIosb = &v33->UserIosb;
    v33->UserIosb = p_Src;
    v33->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v33->Tail.Overlay.CurrentStackLocation;
    v82 = CurrentStackLocation;
    v87 = (struct _KTHREAD *)CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 6;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v17;
    FileObjectExtension = 0;
    p_AssociatedIrp = &v33->AssociatedIrp;
    v33->AssociatedIrp.MasterIrp = 0LL;
    v33->MdlAddress = 0LL;
    Pool2 = (HANDLE *)ExAllocatePool2(0x41uLL);
    v88 = Pool2;
    p_AssociatedIrp->MasterIrp = (struct _IRP *)Pool2;
    if ( !Pool2 )
    {
      FileObjectExtension = -1073741670;
      goto LABEL_104;
    }
    if ( PreviousMode )
      RtlCopyFromUser(Pool2, FileInformation, v5);
    else
      RtlCopyVolatileMemory(Pool2, FileInformation, v5);
    v41 = v82;
    if ( ((unsigned int)(v9 - 19) <= 1 || v9 == FilePositionInformation) && *((int *)v88 + 1) < 0 )
    {
      FileObjectExtension = -1073741811;
LABEL_104:
      IopExceptionCleanupEx((ULONG_PTR)v17, v33, 0LL, 0LL, (*((_DWORD *)v17 + 20) & 2) != 0);
      if ( (_BYTE)v80 )
        KeSetKernelStackSwapEnable(1u);
      return FileObjectExtension;
    }
    v33->Flags |= 0x830u;
    v41[-1].Parameters.Read.Length = v5;
    v41[-1].Parameters.Create.Options = v9;
    if ( v78 || v76 )
      v41[-1].Flags |= 1u;
    IopQueueThreadIrp(v33);
    v43 = KeGetCurrentThread();
    ++v43->OtherOperationCount;
    __incgsdword(0x2EE4u);
    if ( v9 == FileModeInformation )
    {
      MasterIrp = p_AssociatedIrp->MasterIrp;
      v58 = *(_DWORD *)&p_AssociatedIrp->MasterIrp->Type;
      if ( (v58 & 0xFFFFFFC9) == 0
        && ((v58 & 0x30) == 0 || (*((_DWORD *)v17 + 20) & 2) != 0)
        && ((v58 & 0x30) != 0 || (*((_DWORD *)v17 + 20) & 2) == 0)
        && (*(_DWORD *)p_AssociatedIrp->MasterIrp & 0x30) != 0x30 )
      {
        v72 = *((_DWORD *)v17 + 20);
        if ( (v72 & 8) == 0 )
        {
          if ( (v58 & 2) != 0 )
            v72 |= 0x10u;
          else
            v72 &= ~0x10u;
          *((_DWORD *)v17 + 20) = v72;
        }
        if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
          v73 = v72 | 0x20;
        else
          v73 = v72 & 0xFFFFFFDF;
        *((_DWORD *)v17 + 20) = v73;
        if ( (v73 & 2) != 0 )
        {
          if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
            v74 = v73 | 4;
          else
            v74 = v73 & 0xFFFFFFFB;
          *((_DWORD *)v17 + 20) = v74;
        }
        FileObjectExtension = 0;
        goto LABEL_116;
      }
      goto LABEL_136;
    }
    v44 = (unsigned int)(v9 - 10);
    if ( (unsigned int)v44 <= 0x3E && (v45 = 0x4080000000200003LL, _bittest64(&v45, v44)) )
    {
      v59 = p_AssociatedIrp->MasterIrp;
      Flags = p_AssociatedIrp->MasterIrp->Flags;
      if ( !Flags || (Flags & 1) != 0 || (int)v5 - 20 < Flags )
      {
        FileObjectExtension = -1073741811;
        v33->IoStatus.Status = -1073741811;
        v46 = v75[0];
      }
      else
      {
        if ( v9 == FileMoveClusterInformation )
        {
          v82[-1].Parameters.Create.EaLength = *(_DWORD *)&v59->Type;
        }
        else
        {
          if ( v9 == FileRenameInformationEx || v9 == FileLinkInformationEx )
            Type = v59->Type & 1;
          else
            Type = v59->Type;
          v82[-1].Parameters.SetFile.ReplaceIfExists = Type;
        }
        if ( *((_WORD *)&v59->Flags + 2) != 92 && !v59->MdlAddress )
          goto LABEL_75;
        v62 = IopOpenLinkOrRenameTarget(&v90, v33, v59, v17);
        FileObjectExtension = v62;
        v46 = v75[0];
        if ( v62 >= 0 )
          goto LABEL_76;
        v33->IoStatus.Status = v62;
      }
    }
    else
    {
      switch ( v9 )
      {
        case FileShortNameInformation:
          if ( (unsigned int)(v5 - 4) < *(_DWORD *)p_AssociatedIrp->MasterIrp )
          {
            FileObjectExtension = -1073741811;
            v33->IoStatus.Status = -1073741811;
            v46 = v75[0];
          }
          else
          {
            if ( *(&p_AssociatedIrp->MasterIrp->Size + 1) != 92 )
              goto LABEL_75;
            FileObjectExtension = -1073741811;
            v33->IoStatus.Status = -1073741811;
            v46 = v75[0];
          }
          break;
        case FileDispositionInformation:
        case FileDispositionInformationEx:
          v57 = p_AssociatedIrp->MasterIrp->Type;
          if ( v9 == FileDispositionInformationEx )
            v57 &= 1u;
          if ( v57 )
            v82[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)FileHandle;
          goto LABEL_75;
        case FileCompletionInformation:
          v52 = (HANDLE *)p_AssociatedIrp->MasterIrp;
          v88 = (HANDLE *)p_AssociatedIrp->MasterIrp;
          if ( *((_QWORD *)v17 + 22) || (*((_DWORD *)v17 + 20) & 2) != 0 )
            goto LABEL_136;
          Object = 0LL;
          FileObjectExtension = ObReferenceObjectByHandle(*v52, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
          if ( FileObjectExtension < 0 )
            goto LABEL_116;
          v53 = (PVOID *)ExAllocatePool2(0x40uLL);
          if ( !v53 )
          {
            ObfDereferenceObjectWithTag(Object, 0x746C6644u);
            FileObjectExtension = -1073741670;
            v33->IoStatus.Status = -1073741670;
            v33->IoStatus.Information = 0LL;
            v46 = v75[0];
            break;
          }
          v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v17 + 23);
          v55 = (KSPIN_LOCK *)(v17 + 184);
          if ( !*((_QWORD *)v17 + 22) )
          {
            _InterlockedAnd((volatile signed __int32 *)v17 + 20, 0xFFFFFBFF);
            *v53 = Object;
            v53[1] = v88[1];
            *((_QWORD *)v17 + 22) = v53;
            FileObjectExtension = 0;
            KeReleaseSpinLock(v55, v54);
            goto LABEL_116;
          }
          KeReleaseSpinLock(v55, v54);
          ExFreePoolWithTag(v53, 0);
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          FileObjectExtension = -1073741752;
          v33->IoStatus.Status = -1073741752;
          v33->IoStatus.Information = 0LL;
          v46 = v75[0];
          break;
        case FileReplaceCompletionInformation:
          v68 = (HANDLE *)p_AssociatedIrp->MasterIrp;
          v69 = 0LL;
          if ( !*((_QWORD *)v17 + 22) )
          {
            FileObjectExtension = -1073741811;
LABEL_175:
            v33->IoStatus.Status = FileObjectExtension;
            v33->IoStatus.Information = 0LL;
            v46 = v75[0];
            break;
          }
          v71 = *v68;
          if ( *v68 )
          {
            Object = 0LL;
            FileObjectExtension = ObReferenceObjectByHandle(v71, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
            v69 = Object;
          }
          if ( FileObjectExtension < 0 )
            goto LABEL_175;
          FileObjectExtension = IopReplaceCompletionPort(v17, v69, v68[1]);
          if ( !v69 )
            goto LABEL_175;
          ObfDereferenceObjectWithTag(v69, 0x746C6644u);
          v33->IoStatus.Status = FileObjectExtension;
          v33->IoStatus.Information = 0LL;
          v46 = v75[0];
          break;
        case FileIoCompletionNotificationInformation:
          v56 = (HANDLE *)p_AssociatedIrp->MasterIrp;
          if ( (*((_DWORD *)v17 + 20) & 2) != 0 )
          {
            FileObjectExtension = -1073741811;
            v33->IoStatus.Status = -1073741811;
            v33->IoStatus.Information = 0LL;
            v46 = v75[0];
          }
          else
          {
            FileObjectExtension = 0;
            if ( (*(_DWORD *)v56 & 1) != 0 )
              _InterlockedOr((volatile signed __int32 *)v17 + 20, 0x2000000u);
            if ( (*(_DWORD *)v56 & 2) != 0 )
              _InterlockedOr((volatile signed __int32 *)v17 + 20, 0x4000000u);
            if ( (*(_DWORD *)v56 & 4) != 0 )
              _InterlockedOr((volatile signed __int32 *)v17 + 20, 0x8000000u);
            v33->IoStatus.Status = 0;
            v33->IoStatus.Information = 0LL;
            v46 = v75[0];
          }
          break;
        case FileIoStatusBlockRangeInformation:
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
          {
            FileObjectExtension = -1073741727;
            goto LABEL_175;
          }
          if ( (*((_DWORD *)v17 + 20) & 2) != 0 )
          {
            FileObjectExtension = -1073741811;
            goto LABEL_175;
          }
          FileObjectExtension = IopSetFileObjectIosbRange(v17, v33);
          v33->IoStatus.Status = FileObjectExtension;
          v33->IoStatus.Information = 0LL;
          v46 = v75[0];
          break;
        case FileIoPriorityHintInformation:
          v70 = *(_DWORD *)&p_AssociatedIrp->MasterIrp->Type;
          if ( v70 <= 2 )
          {
            Object = 0LL;
            FileObjectExtension = IopAllocateFileObjectExtension((__int64)v17, (__int64 **)&Object, 0);
            if ( FileObjectExtension >= 0 )
            {
              *((_DWORD *)Object + 22) = v70 + 1;
              v33->IoStatus.Status = FileObjectExtension;
              v33->IoStatus.Information = 0LL;
              v46 = v75[0];
              break;
            }
LABEL_116:
            v33->IoStatus.Status = FileObjectExtension;
            v33->IoStatus.Information = 0LL;
            v46 = v75[0];
            break;
          }
LABEL_136:
          FileObjectExtension = -1073741811;
          goto LABEL_116;
        case FileMemoryPartitionInformation:
          if ( PreviousMode )
            FileObjectExtension = -1073741790;
          else
            FileObjectExtension = IopSetFileMemoryPartitionInformation(
                                    v17,
                                    p_AssociatedIrp->MasterIrp,
                                    (unsigned int)v5);
          goto LABEL_175;
        default:
LABEL_75:
          v46 = v75[0];
LABEL_76:
          FileObjectExtension = IopCallDriverReference(DeviceObject, v33, v46, v17, 2);
          break;
      }
    }
    if ( FileObjectExtension == 259 )
    {
      if ( !v46 )
      {
        v63 = KeWaitForSingleObject(&v85, Executive, PreviousMode, 0, 0LL);
        if ( v63 == 257 || v63 == 192 )
          IopCancelAlertedRequest(&v85, v33);
        FileObjectExtension = Src;
        if ( PreviousMode )
          RtlCopyToUser(IoStatusBlock, &Src, 0x10uLL);
        else
          RtlCopyVolatileMemory(IoStatusBlock, &Src, 0x10uLL);
        v50 = v80;
        goto LABEL_89;
      }
      FileObjectExtension = IopWaitForSynchronousIo(v33);
    }
    else
    {
      if ( !v46 )
        *p_UserEvent = 0LL;
      *p_UserIosb = IoStatusBlock;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 1 )
        __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(MasterIrp) = 1;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, MasterIrp);
      }
      IopCompleteRequest((_DWORD)v33 + 120, 0, 0, (unsigned int)&v89, 0LL);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( !v46 )
        goto LABEL_88;
    }
    IopReleaseFileObjectLock((ULONG_PTR)v17, v48, v49);
LABEL_88:
    v50 = v80;
LABEL_89:
    if ( v50 )
    {
      v51 = KeGetCurrentThread();
      if ( (*((_DWORD *)&v51->0 + 1) & 0x40) == 0 )
        _interlockedbittestandset((volatile signed __int32 *)&v51->116 + 1, 6u);
    }
    if ( v90 )
      ObCloseHandle(v90, 0);
    return FileObjectExtension;
  }
  ObfDereferenceObjectWithTag(v17, 0x746C6644u);
  return (int)v82;
}
