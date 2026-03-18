/*
 * XREFs of NtSetEaFile @ 0x1409AFCE0
 * Callers:
 *     DifNtSetEaFileWrapper @ 0x14068AFD0 (DifNtSetEaFileWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026C640 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x14040BA40 (IoAllocateMdl.c)
 *     IopResetEvent @ 0x140455C40 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IopProbeAndLockPages_2 @ 0x1404E0418 (IopProbeAndLockPages_2.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     IopSynchronousApiServiceTail @ 0x1409B18E4 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1409B2704 (IopSynchronousServiceTail.c)
 *     IopExceptionCleanupEx @ 0x1409B6D64 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409B6E40 (IopWaitAndAcquireFileObjectLock.c)
 *     IoCheckEaBufferValidity @ 0x140AA8C90 (IoCheckEaBufferValidity.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetEaFile(void *a1, struct _IO_STATUS_BLOCK *a2, volatile void *a3, ULONG a4)
{
  SIZE_T v4; // rbx
  struct _KEVENT *v8; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 result; // rax
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
  struct _IO_STATUS_BLOCK *v22; // rax
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
  int v35; // ebx
  PMDL Mdl; // rcx
  struct _FILE_FULL_EA_INFORMATION *v37; // rdi
  NTSTATUS v38; // eax
  char v39; // [rsp+40h] [rbp-78h] BYREF
  char v40; // [rsp+41h] [rbp-77h]
  int v41; // [rsp+44h] [rbp-74h]
  ULONG ErrorOffset; // [rsp+48h] [rbp-70h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-68h]
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-58h] BYREF
  PVOID P; // [rsp+68h] [rbp-50h]
  struct _DEVICE_OBJECT *v46; // [rsp+70h] [rbp-48h]
  PIRP v47; // [rsp+78h] [rbp-40h]
  __int128 v48; // [rsp+80h] [rbp-38h] BYREF

  v4 = a4;
  FileObject = 0LL;
  v8 = 0LL;
  P = 0LL;
  v48 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)a2);
    RtlWriteULongToUser(a2, ULongFromUser);
    ProbeForRead(a3, v4, 4u);
  }
  result = IopReferenceFileObject(a1, 0x10u, PreviousMode, (ULONG_PTR *)&FileObject, 0LL);
  v41 = result;
  if ( (int)result >= 0 )
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
        return (unsigned int)v35;
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
        v22 = a2;
        v23 = 0LL;
      }
      else
      {
        v18->Flags = 4;
        v22 = (struct _IO_STATUS_BLOCK *)&v48;
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
        v26 = a4;
        if ( a4 )
        {
          v40 = 0;
          v37 = (struct _FILE_FULL_EA_INFORMATION *)ExAllocatePool2(0x61uLL);
          Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v37;
          memmove(v37, (const void *)a3, a4);
          v38 = IoCheckEaBufferValidity(v37, a4, &ErrorOffset);
          v41 = v38;
          if ( v38 < 0 )
          {
            v40 = 1;
            a2->Status = v38;
            a2->Information = ErrorOffset;
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
          Irp->UserBuffer = (PVOID)a3;
LABEL_13:
          v26 = a4;
          goto LABEL_14;
        }
        v26 = a4;
        if ( a4 )
        {
          Mdl = IoAllocateMdl((PVOID)a3, a4, 0, 1u, Irp);
          if ( !Mdl )
          {
            v35 = -1073741670;
LABEL_44:
            IopExceptionCleanupEx((ULONG_PTR)v12, Irp, 0LL, v8, (v12->Flags & 2) != 0);
            return (unsigned int)v35;
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
        return IopSynchronousApiServiceTail((unsigned int)result, v8, Irp, v27, &v48, a2);
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
