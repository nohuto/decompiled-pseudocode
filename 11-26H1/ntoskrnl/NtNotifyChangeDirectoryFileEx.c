/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x140AAAD60
 * Callers:
 *     DifNtNotifyChangeDirectoryFileExWrapper @ 0x14067FC20 (DifNtNotifyChangeDirectoryFileExWrapper.c)
 *     NtNotifyChangeDirectoryFile @ 0x140AAAD00 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140467B40 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopProbeAndLockPages_3 @ 0x140503E84 (IopProbeAndLockPages_3.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140AAB204 (IopAllocateIrpCleanup.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtNotifyChangeDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass)
{
  PIO_APC_ROUTINE v10; // r14
  PVOID v13; // r15
  KPROCESSOR_MODE PreviousMode; // si
  int ULongFromUser; // eax
  ULONG v16; // r12d
  NTSTATUS result; // eax
  __int64 v18; // rdx
  struct _KLOCK_ENTRIES *v19; // r9
  PFILE_OBJECT v20; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 Irp; // rax
  IRP *v25; // rdi
  __int64 v26; // r14
  DIRECTORY_NOTIFY_INFORMATION_CLASS v27; // ecx
  ULONG Flags; // eax
  NTSTATUS v29; // edi
  char v30; // di
  struct _KTHREAD *v31; // rax
  AutoBoost *v32; // rax
  struct _KLOCK_ENTRY *v33; // rdx
  char v34; // r14
  PMDL Mdl; // rcx
  __int64 v36; // r8
  NTSTATUS v37; // esi
  __int64 Pool2; // rax
  char v39; // [rsp+40h] [rbp-48h] BYREF
  KPROCESSOR_MODE v40; // [rsp+41h] [rbp-47h]
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-30h]
  PIO_APC_ROUTINE v44; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v45; // [rsp+A8h] [rbp+20h]

  v45 = ApcContext;
  v44 = ApcRoutine;
  v10 = ApcRoutine;
  FileObject = 0LL;
  v13 = 0LL;
  Object = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v40 = PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)IoStatusBlock);
    RtlWriteULongToUser(IoStatusBlock, ULongFromUser);
    v16 = Length;
    if ( Length )
      ProbeForWrite(Buffer, Length, 4u);
    if ( (CompletionFilter & 0xFFFFF000) != 0 || !CompletionFilter )
      return -1073741811;
  }
  else
  {
    v16 = Length;
  }
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (ULONG_PTR *)&FileObject, 0LL);
  if ( result >= 0 )
  {
    v20 = FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v29 = -1073741811;
LABEL_45:
      ObfDereferenceObject(v20);
      return v29;
    }
    if ( Event )
    {
      Object = 0LL;
      v29 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v13 = Object;
      if ( v29 < 0 )
        goto LABEL_45;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (v20->Flags & 2) != 0 )
    {
      v30 = (v20->Flags & 4) != 0;
      v31 = KeGetCurrentThread();
      --v31->KernelApcDisable;
      v32 = (AutoBoost *)KeAbPreAcquire((__int64)&v20->Lock, 0LL, 0LL, v19);
      v34 = 0;
      v39 = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v20->Busy, 1) )
      {
        LOBYTE(v33) = PreviousMode;
        v29 = IopWaitAndAcquireFileObjectLock((__int64)v20, v33, v30, v32, &v39);
        v34 = v39;
      }
      else
      {
        if ( v32 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v32, v33);
          else
            *((_BYTE *)v32 + 10) = 1;
        }
        PsReferenceSiloContext(v20);
        v29 = 0;
      }
      if ( v34 )
      {
        if ( v13 )
          ObfDereferenceObject(v13);
        goto LABEL_45;
      }
      v39 = 1;
      v10 = v44;
    }
    else
    {
      v39 = 0;
      if ( PreviousMode )
      {
        IopMarkApcRoutineIfAsynchronousIo32((__int64 *)&IoStatusBlock, (__int64 *)&v44, 0);
        v10 = v44;
      }
    }
    IopResetEvent((__int64)v20, v18);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v20);
    LOBYTE(v22) = v39 ^ 1;
    LOBYTE(v23) = RelatedDeviceObject->StackSize;
    Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v23, v22);
    v25 = (IRP *)Irp;
    if ( Irp )
    {
      *(_QWORD *)(Irp + 192) = v20;
      *(_QWORD *)(Irp + 152) = CurrentThread;
      *(_BYTE *)(Irp + 64) = PreviousMode;
      *(_QWORD *)(Irp + 80) = v13;
      *(_QWORD *)(Irp + 72) = IoStatusBlock;
      *(_QWORD *)(Irp + 88) = v10;
      *(_QWORD *)(Irp + 96) = v45;
      v26 = *(_QWORD *)(Irp + 184);
      *(_BYTE *)(v26 - 72) = 12;
      v27 = DirectoryNotifyInformationClass;
      *(_BYTE *)(v26 - 71) = (DirectoryNotifyInformationClass != DirectoryNotifyInformation) + 2;
      *(_QWORD *)(v26 - 24) = v20;
      if ( !v16 )
      {
LABEL_17:
        *(_DWORD *)(v26 - 64) = v16;
        *(_DWORD *)(v26 - 56) = CompletionFilter;
        if ( *(_BYTE *)(v26 - 71) == 3 )
          *(_DWORD *)(v26 - 48) = v27;
        *(_BYTE *)(v26 - 70) = 0;
        if ( WatchTree )
          *(_BYTE *)(v26 - 70) = 1;
        return IopSynchronousServiceTail(RelatedDeviceObject, v25, v20, 0, PreviousMode, v39, 2u);
      }
      Flags = RelatedDeviceObject->Flags;
      if ( (Flags & 4) == 0 )
      {
        if ( (Flags & 0x10) == 0 )
        {
          v25->UserBuffer = Buffer;
          goto LABEL_17;
        }
        Mdl = IoAllocateMdl(Buffer, v16, 0, 1u, v25);
        if ( Mdl )
        {
          v37 = IopProbeAndLockPages_3(
                  (unsigned __int64)Mdl,
                  PreviousMode,
                  v36,
                  (struct _LIST_ENTRY *)RelatedDeviceObject,
                  *(unsigned __int8 *)(v26 - 72));
          if ( v37 >= 0 )
          {
            PreviousMode = v40;
LABEL_40:
            v27 = DirectoryNotifyInformationClass;
            goto LABEL_17;
          }
        }
        else
        {
          v37 = -1073741670;
        }
        IopExceptionCleanupEx((ULONG_PTR)v20, v25, v13, 0LL, (v20->Flags & 2) != 0);
        return v37;
      }
      Pool2 = ExAllocatePool2(0x41uLL);
      v25->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
      if ( Pool2 )
      {
        v25->UserBuffer = Buffer;
        v25->Flags = 112;
        goto LABEL_40;
      }
      IopExceptionCleanupEx((ULONG_PTR)v20, v25, v13, 0LL, (v20->Flags & 2) != 0);
    }
    else
    {
      IopAllocateIrpCleanup((ULONG_PTR)v20, v13);
    }
    return -1073741670;
  }
  return result;
}
