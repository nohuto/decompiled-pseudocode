/*
 * XREFs of NtSetEaFile @ 0x140980DA0
 * Callers:
 *     DifNtSetEaFileWrapper @ 0x14068EBB0 (DifNtSetEaFileWrapper.c)
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
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopProbeAndLockPages_2 @ 0x1404D9AF8 (IopProbeAndLockPages_2.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     IopSynchronousApiServiceTail @ 0x1409829A4 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     IoCheckEaBufferValidity @ 0x140AA4F50 (IoCheckEaBufferValidity.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  SIZE_T v4; // rbx
  struct _KEVENT *v8; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS result; // eax
  struct _KLOCK_ENTRIES *v11; // r9
  PFILE_OBJECT v12; // r14
  struct _KEVENT *Pool2; // rax
  __int64 v14; // rdx
  char v15; // di
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  __int64 v17; // rdx
  IRP *v18; // rax
  __int64 v19; // r8
  IRP *Irp; // rsi
  __int64 v21; // rdx
  PIO_STATUS_BLOCK v22; // rax
  struct _KEVENT *v23; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG Flags; // eax
  ULONG v26; // eax
  __int64 v27; // r9
  int ULongFromUser; // eax
  bool v29; // bl
  struct _KTHREAD *v30; // rax
  AutoBoost *v31; // rax
  void *v32; // rdx
  __int64 v33; // r8
  char v34; // di
  NTSTATUS v35; // ebx
  PMDL Mdl; // rcx
  _FILE_FULL_EA_INFORMATION *v37; // rdi
  int v38; // eax
  char v39; // [rsp+40h] [rbp-78h] BYREF
  char v40; // [rsp+41h] [rbp-77h]
  NTSTATUS v41; // [rsp+44h] [rbp-74h]
  ULONG ErrorOffset; // [rsp+48h] [rbp-70h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-68h]
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-58h] BYREF
  PVOID P; // [rsp+68h] [rbp-50h]
  struct _DEVICE_OBJECT *v46; // [rsp+70h] [rbp-48h]
  PIRP v47; // [rsp+78h] [rbp-40h]
  __int128 v48; // [rsp+80h] [rbp-38h] BYREF

  v4 = Length;
  FileObject = 0LL;
  v8 = 0LL;
  P = 0LL;
  v48 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)IoStatusBlock);
    RtlWriteULongToUser(IoStatusBlock, ULongFromUser);
    ProbeForRead(Buffer, v4, 4u);
  }
  result = IopReferenceFileObject(FileHandle, 0x10u, PreviousMode, (ULONG_PTR *)&FileObject, 0LL);
  v41 = result;
  if ( result >= 0 )
  {
    v12 = FileObject;
    if ( (FileObject->Flags & 2) != 0 )
    {
      v29 = (FileObject->Flags & 4) != 0;
      v30 = KeGetCurrentThread();
      --v30->KernelApcDisable;
      v31 = (AutoBoost *)KeAbPreAcquire((__int64)&v12->Lock, 0LL, 0LL, v11);
      v34 = 0;
      v39 = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v12->Busy, 1) )
      {
        LOBYTE(v33) = v29;
        LOBYTE(v32) = PreviousMode;
        v35 = IopWaitAndAcquireFileObjectLock(v12, v32, v33, v31, &v39);
        v34 = v39;
      }
      else
      {
        if ( v31 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v31, v32);
          else
            *((_BYTE *)v31 + 10) = 1;
        }
        PsReferenceSiloContext(v12);
        v35 = 0;
      }
      v41 = v35;
      if ( v34 )
        goto LABEL_29;
      v15 = 1;
    }
    else
    {
      Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
      v8 = Pool2;
      P = Pool2;
      if ( !Pool2 )
      {
LABEL_28:
        v35 = -1073741670;
LABEL_29:
        ObfDereferenceObject(v12);
        return v35;
      }
      KeInitializeEvent(Pool2, SynchronizationEvent, 0);
      v15 = 0;
    }
    v39 = v15;
    IopResetEvent((__int64)v12, v14);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v12);
    v46 = RelatedDeviceObject;
    LOBYTE(v17) = RelatedDeviceObject->StackSize;
    v18 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v17, 0LL);
    Irp = v18;
    v47 = v18;
    v21 = 0LL;
    if ( v18 )
    {
      v18->Tail.Overlay.OriginalFileObject = v12;
      v18->Tail.Overlay.Thread = CurrentThread;
      v18->RequestorMode = PreviousMode;
      if ( v15 )
      {
        v22 = IoStatusBlock;
        v23 = 0LL;
      }
      else
      {
        v18->Flags = 4;
        v22 = (PIO_STATUS_BLOCK)&v48;
        v23 = v8;
      }
      Irp->UserEvent = v23;
      Irp->UserIosb = v22;
      Irp->Overlay.AllocationSize.QuadPart = 0LL;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentThread = (struct _KTHREAD *)CurrentStackLocation;
      CurrentStackLocation[-1].MajorFunction = 8;
      CurrentStackLocation[-1].FileObject = v12;
      Flags = RelatedDeviceObject->Flags;
      if ( (Flags & 4) != 0 )
      {
        ErrorOffset = 0;
        v26 = Length;
        if ( Length )
        {
          v40 = 0;
          v37 = (_FILE_FULL_EA_INFORMATION *)ExAllocatePool2(0x61uLL);
          Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v37;
          memmove(v37, Buffer, Length);
          v38 = IoCheckEaBufferValidity(v37, Length, &ErrorOffset);
          v41 = v38;
          if ( v38 < 0 )
          {
            v40 = 1;
            IoStatusBlock->Status = v38;
            IoStatusBlock->Information = ErrorOffset;
            RtlRaiseStatus(v38);
          }
          Irp->Flags |= 0x30u;
          v15 = v39;
          goto LABEL_41;
        }
        Irp->AssociatedIrp.MasterIrp = 0LL;
      }
      else
      {
        if ( (Flags & 0x10) == 0 )
        {
          Irp->UserBuffer = Buffer;
LABEL_13:
          v26 = Length;
          goto LABEL_14;
        }
        v26 = Length;
        if ( Length )
        {
          Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
          if ( !Mdl )
          {
            v35 = -1073741670;
LABEL_44:
            IopExceptionCleanupEx((ULONG_PTR)v12, Irp, 0LL, v8, (v12->Flags & 2) != 0);
            return v35;
          }
          v35 = IopProbeAndLockPages_2(
                  (__int64)Mdl,
                  PreviousMode,
                  0,
                  (__int64)RelatedDeviceObject,
                  LOBYTE(CurrentThread[-1].Spare32));
          if ( v35 < 0 )
            goto LABEL_44;
LABEL_41:
          RelatedDeviceObject = v46;
          goto LABEL_13;
        }
      }
LABEL_14:
      LODWORD(CurrentThread[-1].KcsanThread) = v26;
      result = IopSynchronousServiceTail(RelatedDeviceObject, Irp, (ULONG_PTR)v12, PreviousMode, v15, 2);
      if ( !v15 )
      {
        LOBYTE(v27) = PreviousMode;
        return IopSynchronousApiServiceTail((unsigned int)result, v8, Irp, v27, &v48, IoStatusBlock);
      }
      return result;
    }
    if ( (v12->Flags & 2) == 0 )
      ExFreePoolWithTag(v8, 0);
    if ( (v12->Flags & 2) != 0 )
      IopReleaseFileObjectLock((ULONG_PTR)v12, v21, v19);
    goto LABEL_28;
  }
  return result;
}
