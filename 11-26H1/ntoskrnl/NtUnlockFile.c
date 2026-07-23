/*
 * XREFs of NtUnlockFile @ 0x1409810F0
 * Callers:
 *     DifNtUnlockFileWrapper @ 0x140693FA0 (DifNtUnlockFileWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MmIsDriverVerifying @ 0x1403C18E0 (MmIsDriverVerifying.c)
 *     IoGetAttachedDevice @ 0x1404472B0 (IoGetAttachedDevice.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousApiServiceTail @ 0x1409829A4 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  char v8; // r12
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v10; // rbx
  int ULongFromUser; // eax
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _KLOCK_ENTRIES *v13; // r9
  struct _DEVICE_OBJECT *v14; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  ULONG_PTR FastIoUnlockSingle; // rsi
  void *v17; // rdi
  char v18; // r14
  struct _KEVENT *Pool2; // rax
  struct _KEVENT *v20; // rsi
  NTSTATUS v21; // edi
  char v22; // r14
  bool v23; // di
  struct _KTHREAD *v24; // rax
  AutoBoost *v25; // rax
  void *v26; // rdx
  __int64 v27; // r8
  KPROCESSOR_MODE v28; // si
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 Irp; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  IRP *v34; // rdi
  PIO_STATUS_BLOCK p_Src; // rax
  struct _KEVENT *v36; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 *v38; // rax
  __int64 v39; // r9
  struct _DRIVER_OBJECT *DriverObject; // rdi
  KPROCESSOR_MODE v41[8]; // [rsp+40h] [rbp-78h] BYREF
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  struct _KEVENT *HandleInformation; // [rsp+50h] [rbp-68h] BYREF
  __int64 QuadPart; // [rsp+58h] [rbp-60h]
  __int64 ULong64FromUser; // [rsp+60h] [rbp-58h] BYREF
  __int128 Src; // [rsp+68h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-38h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-30h]

  Src = 0LL;
  ULong64FromUser = 0LL;
  QuadPart = 0LL;
  HandleInformation = 0LL;
  CurrentThread = KeGetCurrentThread();
  v41[0] = CurrentThread->PreviousMode;
  v8 = v41[0];
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             v41[0],
             &Object,
             (POBJECT_HANDLE_INFORMATION)&HandleInformation);
  v10 = (struct _FILE_OBJECT *)Object;
  BugCheckParameter2 = (ULONG_PTR)Object;
  if ( result < 0 )
    return result;
  if ( v41[0] )
  {
    if ( (BYTE4(HandleInformation) & 3) == 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741790;
    }
    ULongFromUser = RtlReadULongFromUser((unsigned int *)IoStatusBlock);
    RtlWriteULongToUser(IoStatusBlock, ULongFromUser);
    if ( ((unsigned __int8)ByteOffset & 3) != 0
      || (ULong64FromUser = RtlReadULong64FromUser(ByteOffset), ((unsigned __int8)Length & 3) != 0) )
    {
      ExRaiseDatatypeMisalignment();
    }
    QuadPart = RtlReadULong64FromUser(Length);
  }
  else
  {
    ULong64FromUser = ByteOffset->QuadPart;
    QuadPart = Length->QuadPart;
  }
  if ( (v10->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v10->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v10);
  v14 = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    FastIoUnlockSingle = (ULONG_PTR)FastIoDispatch->FastIoUnlockSingle;
    if ( FastIoUnlockSingle )
    {
      if ( (MmVerifierData & 0x10) != 0
        && (DriverObject = AttachedDevice->DriverObject, MmIsDriverVerifying(DriverObject)) )
      {
        v17 = (void *)VfFastIoSnapState(DriverObject);
      }
      else
      {
        v17 = 0LL;
      }
      v18 = guard_dispatch_icall_no_overrides((__int64)v10, (__int64)&ULong64FromUser);
      if ( v17 )
        VfFastIoCheckState(v17, FastIoUnlockSingle);
      if ( v18 )
      {
        if ( v41[0] )
          RtlCopyToUser(IoStatusBlock, &Src, 0x10uLL);
        else
          RtlCopyVolatileMemory(IoStatusBlock, &Src, 0x10uLL);
        ObfDereferenceObject(v10);
        return Src;
      }
    }
  }
  if ( (v10->Flags & 2) != 0 )
  {
    v22 = 1;
    v23 = (v10->Flags & 4) != 0;
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    v25 = (AutoBoost *)KeAbPreAcquire((__int64)&v10->Lock, 0LL, 0LL, v13);
    v28 = 0;
    v41[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v10->Busy, 1) )
    {
      LOBYTE(v27) = v23;
      LOBYTE(v26) = v8;
      v21 = IopWaitAndAcquireFileObjectLock(v10, v26, v27, v25, v41);
      v28 = v41[0];
    }
    else
    {
      if ( v25 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v25, v26);
        else
          *((_BYTE *)v25 + 10) = 1;
      }
      PsReferenceSiloContext(v10);
      v21 = 0;
    }
    if ( v28 )
      goto LABEL_26;
    v20 = 0LL;
    HandleInformation = 0LL;
  }
  else
  {
    Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
    v20 = Pool2;
    HandleInformation = Pool2;
    if ( !Pool2 )
    {
LABEL_25:
      v21 = -1073741670;
LABEL_26:
      ObfDereferenceObject(v10);
      return v21;
    }
    KeInitializeEvent(Pool2, SynchronizationEvent, 0);
    v22 = 0;
  }
  IopResetEvent((__int64)v10, v29);
  LOBYTE(v30) = v14->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v14, v30, 0LL);
  v34 = (IRP *)Irp;
  Object = (PVOID)Irp;
  if ( !Irp )
  {
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( (v10->Flags & 2) != 0 )
      IopReleaseFileObjectLock((ULONG_PTR)v10, v32, v33);
    goto LABEL_25;
  }
  *(_QWORD *)(Irp + 192) = v10;
  *(_QWORD *)(Irp + 152) = CurrentThread;
  *(_BYTE *)(Irp + 64) = v8;
  Src = 0LL;
  if ( v22 )
  {
    p_Src = IoStatusBlock;
    v36 = 0LL;
  }
  else
  {
    *(_DWORD *)(Irp + 16) = 4;
    p_Src = (PIO_STATUS_BLOCK)&Src;
    v36 = v20;
  }
  v34->UserEvent = v36;
  v34->UserIosb = p_Src;
  v34->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v34->Tail.Overlay.CurrentStackLocation;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 529;
  CurrentStackLocation[-1].FileObject = v10;
  v38 = (__int64 *)ExAllocatePool2(0x61uLL);
  *v38 = QuadPart;
  v34->Tail.Overlay.AuxiliaryBuffer = (PCHAR)v38;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v38;
  CurrentStackLocation[-1].Parameters.Create.Options = Key;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = ULong64FromUser;
  result = IopSynchronousServiceTail(v14, v34, (ULONG_PTR)v10, v8, v22, 2);
  if ( !v22 )
  {
    LOBYTE(v39) = v8;
    return IopSynchronousApiServiceTail((unsigned int)result, v20, v34, v39, &Src, IoStatusBlock);
  }
  return result;
}
