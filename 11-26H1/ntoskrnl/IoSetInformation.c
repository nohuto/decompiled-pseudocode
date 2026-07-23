/*
 * XREFs of IoSetInformation @ 0x140B34AF0
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1406FD3DC (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileExtension @ 0x140B318D8 (MiAttemptPageFileExtension.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14077A8A8 (IopSetFileMemoryPartitionInformation.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     IopOpenLinkOrRenameTarget @ 0x1409842DC (IopOpenLinkOrRenameTarget.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140AAB204 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x140B21254 (IopCancelAlertedRequest.c)
 */

NTSTATUS __stdcall IoSetInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation)
{
  char v4; // r15
  struct _KLOCK_ENTRIES *v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  char v10; // bl
  AutoBoost *v11; // rax
  void *v12; // rdx
  NTSTATUS v13; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _DEVICE_OBJECT *v18; // r13
  __int64 Irp; // rax
  __int64 v20; // r8
  IRP *v21; // rbx
  struct _KEVENT *p_Event; // rcx
  __int64 v23; // r15
  ULONG Flags; // edx
  ULONG v25; // eax
  ULONG v26; // edx
  unsigned int v27; // eax
  ULONG v28; // edx
  NTSTATUS FinalStatus; // esi
  __int64 v30; // rdx
  __int64 v31; // r8
  HANDLE v32; // r15
  NTSTATUS v33; // eax
  char v34; // al
  char v35; // [rsp+30h] [rbp-40h] BYREF
  char v36; // [rsp+31h] [rbp-3Fh]
  HANDLE Handle; // [rsp+38h] [rbp-38h]
  HANDLE v38; // [rsp+40h] [rbp-30h] BYREF
  __int128 v39; // [rsp+48h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  char v41; // [rsp+A0h] [rbp+30h]

  v4 = 0;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  v41 = 0;
  v36 = 0;
  PsReferenceSiloContext(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (FileObject->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)&FileObject->Lock, 0LL, 0LL, v8);
    v35 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v13 = IopWaitAndAcquireFileObjectLock((__int64)FileObject, 0LL, v10, v11, &v35);
      if ( v35 )
      {
        ObfDereferenceObject(FileObject);
        return v13;
      }
    }
    else
    {
      if ( v11 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v11, v12);
        else
          *((_BYTE *)v11 + 10) = 1;
      }
      PsReferenceSiloContext(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v4 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
  }
  v35 = v4;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v18 = RelatedDeviceObject;
  if ( FileInformationClass == FileRenameInformationBypassAccessCheck )
  {
    FileInformationClass = FileRenameInformation;
  }
  else if ( FileInformationClass == FileRenameInformationExBypassAccessCheck )
  {
    FileInformationClass = FileRenameInformationEx;
  }
  else if ( FileInformationClass == FileLinkInformationBypassAccessCheck )
  {
    FileInformationClass = FileLinkInformation;
  }
  else
  {
    if ( FileInformationClass != FileLinkInformationExBypassAccessCheck )
    {
      if ( FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
      {
        FileInformationClass = FileCaseSensitiveInformation;
        v36 = 1;
      }
      goto LABEL_23;
    }
    FileInformationClass = FileLinkInformationEx;
  }
  v41 = 1;
LABEL_23:
  LOBYTE(v16) = RelatedDeviceObject->StackSize;
  LOBYTE(v17) = v4 ^ 1;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v16, v17);
  v21 = (IRP *)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(FileObject, 0LL, v20);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(Irp + 64) = 0;
  if ( v4 )
  {
    *(_BYTE *)(Irp + 71) |= 2u;
    p_Event = 0LL;
  }
  else
  {
    *(_DWORD *)(Irp + 16) = 4;
    p_Event = &Event;
  }
  *(_QWORD *)(Irp + 80) = p_Event;
  v23 = *(_QWORD *)(Irp + 184);
  *(_QWORD *)(Irp + 72) = &v39;
  *(_BYTE *)(v23 - 72) = 6;
  *(_QWORD *)(v23 - 24) = FileObject;
  *(_DWORD *)(Irp + 16) |= 0x10u;
  *(_QWORD *)(Irp + 24) = FileInformation;
  *(_DWORD *)(v23 - 64) = Length;
  *(_DWORD *)(v23 - 56) = FileInformationClass;
  if ( v41 || v36 )
    *(_BYTE *)(v23 - 70) |= 1u;
  IopQueueThreadIrp(Irp, 0LL);
  switch ( FileInformationClass )
  {
    case FileModeInformation:
      Flags = FileObject->Flags;
      if ( (Flags & 8) == 0 )
      {
        if ( (*(_DWORD *)FileInformation & 2) != 0 )
          Flags |= 0x10u;
        else
          Flags &= ~0x10u;
        FileObject->Flags = Flags;
      }
      v25 = Flags;
      v26 = Flags | 0x20;
      v27 = v25 & 0xFFFFFFDF;
      if ( (*(_BYTE *)FileInformation & 4) == 0 )
        v26 = v27;
      FileObject->Flags = v26;
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
      {
        if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
          v28 = v26 | 4;
        else
          v28 = v26 & 0xFFFFFFFB;
        FileObject->Flags = v28;
      }
      FinalStatus = 0;
      v21->IoStatus.Status = 0;
      v21->IoStatus.Information = 0LL;
      goto LABEL_52;
    case FileRenameInformation:
      goto LABEL_56;
    case FileRenameInformationEx:
LABEL_55:
      v34 = *(_BYTE *)FileInformation & 1;
LABEL_57:
      *(_BYTE *)(v23 - 40) = v34;
      goto LABEL_58;
    case FileLinkInformation:
LABEL_56:
      v34 = *(_BYTE *)FileInformation;
      goto LABEL_57;
    case FileLinkInformationEx:
      goto LABEL_55;
    case FileMoveClusterInformation:
      *(_DWORD *)(v23 - 40) = *(_DWORD *)FileInformation;
LABEL_58:
      if ( *((_WORD *)FileInformation + 10) == 92 || *((_QWORD *)FileInformation + 1) )
      {
        FinalStatus = IopOpenLinkOrRenameTarget(&v38, (__int64)v21, (__int64)FileInformation, FileObject);
        if ( FinalStatus < 0 )
        {
          --v21->CurrentLocation;
          --v21->Tail.Overlay.CurrentStackLocation;
          IofCompleteRequest(v21, 2);
          v32 = v38;
          goto LABEL_64;
        }
        v33 = IofCallDriver(v18, v21);
        v32 = v38;
LABEL_63:
        FinalStatus = v33;
        goto LABEL_64;
      }
LABEL_53:
      v33 = IofCallDriver(v18, v21);
      v32 = Handle;
      goto LABEL_63;
  }
  if ( FileInformationClass != FileMemoryPartitionInformation )
    goto LABEL_53;
  FinalStatus = IopSetFileMemoryPartitionInformation((__int64)FileObject, (__int128 *)FileInformation, Length);
  v21->IoStatus.Status = FinalStatus;
  v21->IoStatus.Information = 0LL;
LABEL_52:
  --v21->CurrentLocation;
  --v21->Tail.Overlay.CurrentStackLocation;
  IofCompleteRequest(v21, 0);
  v32 = Handle;
LABEL_64:
  if ( v35 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event.Header.LockNV, v21);
      FinalStatus = FileObject->FinalStatus;
    }
    IopReleaseFileObjectLock((ULONG_PTR)FileObject, v30, v31);
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v39;
  }
  if ( v32 )
    ObCloseHandle(v32, 0);
  return FinalStatus;
}
