/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x140797D78
 * Callers:
 *     NtSetQuotaInformationFile @ 0x14079C7F0 (NtSetQuotaInformationFile.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     IopProbeAndLockPages @ 0x1403A16EC (IopProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     IoCheckQuotaBufferValidity @ 0x140798B10 (IoCheckQuotaBufferValidity.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     IopSynchronousApiServiceTail @ 0x1409829A4 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140AAB204 (IopAllocateIrpCleanup.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetEaOrQuotaInformationFile(
        void *a1,
        struct _IO_STATUS_BLOCK *a2,
        volatile void *a3,
        ULONG a4,
        char a5)
{
  struct _KEVENT *v9; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  int ULongFromUser; // eax
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v13; // r9
  struct _FILE_OBJECT *v14; // r14
  bool v15; // bl
  struct _KTHREAD *v16; // rax
  AutoBoost *v17; // rax
  void *v18; // rdx
  __int64 v19; // r8
  char v20; // di
  __int64 v21; // rdx
  int v22; // ebx
  char v23; // di
  struct _KEVENT *v24; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  __int64 v26; // rdx
  IRP *v27; // rax
  IRP *Irp; // rsi
  struct _IO_STATUS_BLOCK *v29; // rax
  struct _KEVENT *v30; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG Flags; // eax
  ULONG v33; // eax
  _FILE_QUOTA_INFORMATION *Pool2; // rdi
  int v35; // eax
  __int64 v36; // r9
  bool v37; // zf
  PMDL Mdl; // rcx
  ULONG ErrorOffset; // [rsp+48h] [rbp-70h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  PIRP v44; // [rsp+70h] [rbp-48h]
  __int128 v45; // [rsp+78h] [rbp-40h] BYREF

  Object = 0LL;
  v9 = 0LL;
  P = 0LL;
  v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)a2);
    RtlWriteULongToUser(a2, ULongFromUser);
    ProbeForRead(a3, a4, 4u);
  }
  result = IopReferenceFileObject(a1, 2u, PreviousMode, (ULONG_PTR *)&Object, 0LL);
  if ( (int)result >= 0 )
  {
    v14 = (struct _FILE_OBJECT *)Object;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v15 = (*((_DWORD *)Object + 20) & 4) != 0;
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
      v17 = (AutoBoost *)KeAbPreAcquire((__int64)&v14->Lock, 0LL, 0LL, v13);
      v20 = 0;
      a5 = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v14->Busy, 1) )
      {
        LOBYTE(v19) = v15;
        LOBYTE(v18) = PreviousMode;
        v22 = IopWaitAndAcquireFileObjectLock(v14, v18, v19, v17, &a5);
        v20 = a5;
      }
      else
      {
        if ( v17 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v17, v18);
          else
            *((_BYTE *)v17 + 10) = 1;
        }
        PsReferenceSiloContext(v14);
        v22 = 0;
      }
      if ( !v20 )
      {
        v23 = 1;
LABEL_19:
        a5 = v23;
        IopResetEvent((__int64)v14, v21);
        RelatedDeviceObject = IoGetRelatedDeviceObject(v14);
        DeviceObject = RelatedDeviceObject;
        LOBYTE(v26) = RelatedDeviceObject->StackSize;
        v27 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v26, 0LL);
        Irp = v27;
        v44 = v27;
        if ( !v27 )
        {
          if ( (v14->Flags & 2) == 0 )
            ExFreePoolWithTag(v9, 0);
          IopAllocateIrpCleanup((ULONG_PTR)v14, 0LL);
          return 3221225626LL;
        }
        v27->Tail.Overlay.OriginalFileObject = v14;
        v27->Tail.Overlay.Thread = CurrentThread;
        v27->RequestorMode = PreviousMode;
        if ( v23 )
        {
          v27->AllocationFlags |= 2u;
          v29 = a2;
          v30 = 0LL;
        }
        else
        {
          v27->Flags = 4;
          v29 = (struct _IO_STATUS_BLOCK *)&v45;
          v30 = v9;
        }
        Irp->UserEvent = v30;
        Irp->UserIosb = v29;
        Irp->Overlay.AllocationSize.QuadPart = 0LL;
        CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
        CurrentThread = (struct _KTHREAD *)CurrentStackLocation;
        CurrentStackLocation[-1].MajorFunction = 26;
        CurrentStackLocation[-1].FileObject = v14;
        Flags = RelatedDeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          ErrorOffset = 0;
          v33 = a4;
          if ( a4 )
          {
            Pool2 = (_FILE_QUOTA_INFORMATION *)ExAllocatePool2(0x63uLL);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
            memmove(Pool2, (const void *)a3, a4);
            v35 = IoCheckQuotaBufferValidity(Pool2, a4, &ErrorOffset);
            if ( v35 < 0 )
            {
              a2->Status = v35;
              a2->Information = ErrorOffset;
              RtlRaiseStatus(v35);
            }
            Irp->Flags |= 0x30u;
            v23 = a5;
            goto LABEL_31;
          }
          Irp->AssociatedIrp.MasterIrp = 0LL;
          goto LABEL_36;
        }
        v37 = (Flags & 0x10) == 0;
        v33 = a4;
        if ( v37 )
        {
LABEL_36:
          Irp->UserBuffer = (PVOID)a3;
          goto LABEL_32;
        }
        if ( !a4 )
        {
LABEL_32:
          LODWORD(CurrentThread[-1].KcsanThread) = v33;
          result = IopSynchronousServiceTail(RelatedDeviceObject, Irp, (ULONG_PTR)v14, PreviousMode, v23, 2);
          if ( !v23 )
          {
            LOBYTE(v36) = PreviousMode;
            return IopSynchronousApiServiceTail((unsigned int)result, v9, Irp, v36, &v45, a2);
          }
          return result;
        }
        Mdl = IoAllocateMdl((PVOID)a3, a4, 0, 1u, Irp);
        if ( Mdl )
        {
          v22 = IopProbeAndLockPages(
                  (__int64)Mdl,
                  PreviousMode,
                  0,
                  (__int64)RelatedDeviceObject,
                  LOBYTE(CurrentThread[-1].Spare32));
          if ( v22 >= 0 )
          {
LABEL_31:
            RelatedDeviceObject = DeviceObject;
            v33 = a4;
            goto LABEL_32;
          }
        }
        else
        {
          v22 = -1073741670;
        }
        IopExceptionCleanupEx((ULONG_PTR)v14, Irp, 0LL, v9, (v14->Flags & 2) != 0);
        return (unsigned int)v22;
      }
    }
    else
    {
      v24 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
      v9 = v24;
      P = v24;
      if ( v24 )
      {
        KeInitializeEvent(v24, SynchronizationEvent, 0);
        v23 = 0;
        goto LABEL_19;
      }
      v22 = -1073741670;
    }
    ObfDereferenceObject(v14);
    return (unsigned int)v22;
  }
  return result;
}
