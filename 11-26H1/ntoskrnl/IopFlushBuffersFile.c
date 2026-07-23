/*
 * XREFs of IopFlushBuffersFile @ 0x140981E10
 * Callers:
 *     IopIoRingDispatchFlush @ 0x14079AAD0 (IopIoRingDispatchFlush.c)
 *     NtFlushBuffersFileEx @ 0x140981D70 (NtFlushBuffersFileEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopExceptionFilter @ 0x1405CD104 (IopExceptionFilter.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     IopSynchronousApiServiceTail @ 0x1409829A4 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFlushBuffersFile(
        PFILE_OBJECT FileObject,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned __int8 a5,
        PVOID Object,
        struct _IO_STATUS_BLOCK *a7,
        unsigned int *a8)
{
  char v8; // r13
  PFILE_OBJECT v9; // rdi
  struct _KEVENT *v10; // r15
  char v11; // si
  PVOID v12; // r14
  unsigned int *v13; // r12
  int ULongFromUser; // eax
  ULONG Flags; // ebx
  bool v16; // bl
  struct _KTHREAD *v17; // rax
  AutoBoost *v18; // rax
  void *v19; // rdx
  __int64 v20; // r8
  char v21; // si
  unsigned int v22; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  __int64 v24; // rdx
  __int64 Irp; // rax
  IRP *v26; // rsi
  char v27; // dl
  char v28; // cl
  struct _IO_STATUS_BLOCK *v29; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v31; // r9
  struct _KEVENT *Pool2; // rax
  char v34; // [rsp+40h] [rbp-58h]
  char PreviousMode; // [rsp+41h] [rbp-57h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  __int128 v37; // [rsp+58h] [rbp-40h] BYREF
  char v38; // [rsp+B0h] [rbp+18h] BYREF

  v8 = a2;
  v9 = FileObject;
  v37 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v38 = 0;
  if ( a3 || (_DWORD)a4 )
    goto LABEL_51;
  v12 = Object;
  v13 = a8;
  if ( Object )
  {
    if ( !a8 )
      goto LABEL_5;
LABEL_51:
    v22 = -1073741811;
    goto LABEL_30;
  }
  if ( !a8 )
    goto LABEL_51;
LABEL_5:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( (FileObject->Flags & 2) != 0 && !Object )
    v11 = 1;
  v34 = v11;
  if ( CurrentThread->PreviousMode && !Object )
  {
    ULongFromUser = RtlReadULongFromUser(a8);
    RtlWriteULongToUser(v13, ULongFromUser);
  }
  Flags = v9->Flags;
  if ( ((~(unsigned __int8)(Flags >> 5) & 4 | 2) & a5) == 0 )
  {
    v22 = -1073741790;
    goto LABEL_44;
  }
  if ( v11 )
  {
    v16 = (Flags & 4) != 0;
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = (AutoBoost *)KeAbPreAcquire((__int64)&v9->Lock, 0LL, 0LL, a4);
    v21 = 0;
    v38 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v9->Busy, 1) )
    {
      LOBYTE(v20) = v16;
      LOBYTE(v19) = PreviousMode;
      v22 = IopWaitAndAcquireFileObjectLock(v9, v19, v20, v18, &v38);
      v21 = v38;
    }
    else
    {
      if ( v18 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v18, v19);
        else
          *((_BYTE *)v18 + 10) = 1;
      }
      PsReferenceSiloContext(v9);
      v22 = 0;
    }
    if ( !v21 )
    {
      v38 = 1;
      goto LABEL_18;
    }
    goto LABEL_44;
  }
  if ( !v12 )
  {
    Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
    v10 = Pool2;
    if ( Pool2 )
    {
      KeInitializeEvent(Pool2, SynchronizationEvent, 0);
LABEL_18:
      if ( !v12 )
        IopResetEvent((__int64)v9, a2);
      goto LABEL_20;
    }
    v22 = -1073741670;
LABEL_44:
    v11 = 0;
    goto LABEL_30;
  }
LABEL_20:
  RelatedDeviceObject = IoGetRelatedDeviceObject(v9);
  LOBYTE(v24) = RelatedDeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v24, 0LL);
  v26 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v9;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v27 = PreviousMode;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_DWORD *)(Irp + 16) = 0;
    if ( v12 )
    {
      ObfReferenceObjectWithTag(v12, 0x49526F49u);
      v26->Flags |= 0x200000u;
      v26->Overlay.AsynchronousParameters.UserApcContext = v12;
      v29 = a7;
      v28 = v34;
      v27 = PreviousMode;
    }
    else
    {
      v28 = v34;
      if ( v34 )
      {
        *(_QWORD *)(Irp + 80) = 0LL;
        v29 = (struct _IO_STATUS_BLOCK *)v13;
      }
      else
      {
        *(_QWORD *)(Irp + 80) = v10;
        *(_DWORD *)(Irp + 16) = 4;
        v29 = (struct _IO_STATUS_BLOCK *)&v37;
      }
    }
    v26->UserIosb = v29;
    v26->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v26->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 9;
    CurrentStackLocation[-1].FileObject = v9;
    if ( (v8 & 1) != 0 )
    {
      CurrentStackLocation[-1].MinorFunction = 2;
    }
    else if ( (v8 & 2) != 0 )
    {
      CurrentStackLocation[-1].MinorFunction = 3;
    }
    else if ( (v8 & 4) != 0 )
    {
      CurrentStackLocation[-1].MinorFunction = 4;
    }
    else
    {
      CurrentStackLocation[-1].MinorFunction = (v8 & 8) != 0;
    }
    v22 = IopSynchronousServiceTail(RelatedDeviceObject, v26, (ULONG_PTR)v9, v27, v28, 2);
    v9 = 0LL;
    if ( !v34 && !v12 )
    {
      LOBYTE(v31) = PreviousMode;
      v22 = IopSynchronousApiServiceTail(v22, v10, v26, v31, &v37, v13);
      v10 = 0LL;
    }
  }
  else
  {
    v22 = -1073741670;
  }
  v11 = v38;
LABEL_30:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
  {
    if ( v11 )
      IopReleaseFileObjectLock((ULONG_PTR)v9, a2, a3);
    ObfDereferenceObject(v9);
  }
  return v22;
}
