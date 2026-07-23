/*
 * XREFs of NtLockFile @ 0x140B720D0
 * Callers:
 *     DifNtLockFileWrapper @ 0x14067E8A0 (DifNtLockFileWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx2 @ 0x140266A90 (IoSetIoCompletionEx2.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     MmIsDriverVerifying @ 0x1403C18E0 (MmIsDriverVerifying.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     IopSetLockOperationProcess @ 0x14044F7F0 (IopSetLockOperationProcess.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x140463E10 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140467B40 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopDecrementCompletionContextUsageCount @ 0x140476A68 (IopDecrementCompletionContextUsageCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140AAB204 (IopAllocateIrpCleanup.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtLockFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock)
{
  struct _KEVENT *v11; // r14
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS result; // eax
  int ULongFromUser; // eax
  struct _FILE_OBJECT *v15; // rsi
  NTSTATUS v16; // ebx
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  struct _KLOCK_ENTRIES *v19; // r9
  struct _DRIVER_OBJECT *v20; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  ULONG_PTR FastIoLock; // r15
  void *v23; // rbx
  char v24; // r12
  PIO_STATUS_BLOCK v25; // rbx
  __int64 v26; // rbx
  int v27; // eax
  int v28; // edx
  char v29; // bl
  struct _KTHREAD *v30; // rax
  AutoBoost *v31; // rax
  struct _KLOCK_ENTRY *v32; // rdx
  KPROCESSOR_MODE v33; // r15
  char v34; // r12
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 Irp; // rax
  __int64 v38; // r8
  IRP *v39; // r15
  __int64 v40; // rbx
  char v41; // al
  __int64 *Pool2; // rax
  KPROCESSOR_MODE v43[8]; // [rsp+50h] [rbp-78h] BYREF
  PVOID RelatedDeviceObject; // [rsp+58h] [rbp-70h] BYREF
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  __int128 Src; // [rsp+68h] [rbp-60h] BYREF
  PVOID v47; // [rsp+78h] [rbp-50h] BYREF
  __int64 ULong64FromUser; // [rsp+80h] [rbp-48h] BYREF
  __int64 QuadPart; // [rsp+88h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-30h]
  PIO_APC_ROUTINE v51; // [rsp+E0h] [rbp+18h] BYREF
  PVOID v52; // [rsp+E8h] [rbp+20h]

  v52 = ApcContext;
  v51 = ApcRoutine;
  Object = 0LL;
  v11 = 0LL;
  v47 = 0LL;
  ULong64FromUser = 0LL;
  QuadPart = 0LL;
  RelatedDeviceObject = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v43[0] = PreviousMode;
  result = IopReferenceFileObject(
             FileHandle,
             0,
             PreviousMode,
             (ULONG_PTR *)&Object,
             (POBJECT_HANDLE_INFORMATION)&RelatedDeviceObject);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (BYTE4(RelatedDeviceObject) & 3) == 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
      ULongFromUser = RtlReadULongFromUser((unsigned int *)IoStatusBlock);
      RtlWriteULongToUser(IoStatusBlock, ULongFromUser);
      v15 = (struct _FILE_OBJECT *)Object;
      IopMarkApcRoutineIfAsynchronousIo32((__int64 *)&IoStatusBlock, (__int64 *)&v51, *((_BYTE *)Object + 80) & 2);
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      ULong64FromUser = RtlReadULong64FromUser(ByteOffset);
      if ( ((unsigned __int8)Length & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = RtlReadULong64FromUser(Length);
      if ( v15->CompletionContext && ((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        v16 = -1073741811;
LABEL_54:
        ObfDereferenceObject(v15);
        return v16;
      }
    }
    else
    {
      ULong64FromUser = ByteOffset->QuadPart;
      QuadPart = Length->QuadPart;
      v15 = (struct _FILE_OBJECT *)Object;
    }
    v15->LockOperation = 1;
    result = IopSetLockOperationProcess((__int64)v15, (__int64)KeGetCurrentThread()->ApcState.Process, 0);
    if ( result >= 0 )
    {
      if ( Event )
      {
        RelatedDeviceObject = 0LL;
        v17 = ObReferenceObjectByHandle(
                Event,
                2u,
                (POBJECT_TYPE)ExEventObjectType,
                PreviousMode,
                &RelatedDeviceObject,
                0LL);
        v11 = (struct _KEVENT *)RelatedDeviceObject;
        v47 = RelatedDeviceObject;
        if ( v17 >= 0 )
          KeResetEvent((PRKEVENT)RelatedDeviceObject);
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v15);
      v20 = (struct _DRIVER_OBJECT *)*((_QWORD *)RelatedDeviceObject + 1);
      FastIoDispatch = v20->FastIoDispatch;
      if ( !FastIoDispatch )
        goto LABEL_43;
      FastIoLock = (ULONG_PTR)FastIoDispatch->FastIoLock;
      if ( !FastIoLock )
        goto LABEL_43;
      Src = 0LL;
      if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(v20) )
        v23 = (void *)VfFastIoSnapState(v20);
      else
        v23 = 0LL;
      v24 = guard_dispatch_icall_no_overrides((__int64)v15, (__int64)&ULong64FromUser);
      if ( v23 )
        VfFastIoCheckState(v23, FastIoLock);
      if ( v24 )
      {
        if ( ((unsigned __int8)v51 & 1) != 0 )
        {
          v25 = IoStatusBlock;
          RtlWriteULongToUser((_DWORD *)&IoStatusBlock->Pointer + 1, SDWORD2(Src));
          RtlWriteULongToUser(v25, Src);
        }
        else if ( PreviousMode )
        {
          RtlCopyToUser(IoStatusBlock, &Src, 0x10uLL);
        }
        else
        {
          RtlCopyVolatileMemory(IoStatusBlock, &Src, 0x10uLL);
        }
        if ( v11 )
        {
          if ( (v15->Flags & 0x8000000) == 0 )
            KeSetEvent(v11, 0, 0);
          ObfDereferenceObject(v11);
        }
        if ( v15->CompletionContext )
        {
          v26 = (__int64)v52;
          if ( v52 )
          {
            if ( (v15->Flags & 0x2000000) == 0 )
            {
              RelatedDeviceObject = 0LL;
              v47 = 0LL;
              v43[0] = 0;
              IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v15, v43, &RelatedDeviceObject, &v47);
              if ( RelatedDeviceObject )
              {
                v27 = IoSetIoCompletionEx2(
                        (__int64)RelatedDeviceObject,
                        (__int64)v47,
                        v26,
                        Src,
                        *((__int64 *)&Src + 1),
                        1u,
                        0LL,
                        (int)&Src);
                v28 = Src;
                if ( v27 < 0 )
                  v28 = -1073741670;
                LODWORD(Src) = v28;
              }
              if ( v43[0] )
                IopDecrementCompletionContextUsageCount((ULONG_PTR)v15);
            }
          }
        }
        ObfDereferenceObject(v15);
        return Src;
      }
      else
      {
LABEL_43:
        if ( (v15->Flags & 2) != 0 )
        {
          v29 = (v15->Flags & 4) != 0;
          v30 = KeGetCurrentThread();
          --v30->KernelApcDisable;
          v31 = (AutoBoost *)KeAbPreAcquire((__int64)&v15->Lock, 0LL, 0LL, v19);
          v33 = 0;
          v43[0] = 0;
          if ( _InterlockedExchange((volatile __int32 *)&v15->Busy, 1) )
          {
            LOBYTE(v32) = PreviousMode;
            v16 = IopWaitAndAcquireFileObjectLock((__int64)v15, v32, v29, v31, v43);
            v33 = v43[0];
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
            PsReferenceSiloContext(v15);
            v16 = 0;
          }
          if ( v33 )
          {
            if ( v11 )
              ObfDereferenceObject(v11);
            goto LABEL_54;
          }
          v34 = 1;
        }
        else
        {
          v34 = 0;
        }
        IopResetEvent((__int64)v15, v18);
        LOBYTE(v35) = v34 ^ 1;
        LOBYTE(v36) = *((_BYTE *)RelatedDeviceObject + 76);
        Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v36, v35);
        v39 = (IRP *)Irp;
        *(_QWORD *)&Src = Irp;
        if ( Irp )
        {
          *(_QWORD *)(Irp + 192) = v15;
          *(_QWORD *)(Irp + 152) = CurrentThread;
          *(_BYTE *)(Irp + 64) = PreviousMode;
          *(_QWORD *)(Irp + 80) = v11;
          *(_QWORD *)(Irp + 72) = IoStatusBlock;
          *(_QWORD *)(Irp + 88) = v51;
          *(_QWORD *)(Irp + 96) = v52;
          v40 = *(_QWORD *)(Irp + 184);
          *(_WORD *)(v40 - 72) = 273;
          *(_QWORD *)(v40 - 24) = v15;
          *(_BYTE *)(v40 - 70) = 0;
          v41 = 0;
          if ( FailImmediately )
          {
            *(_BYTE *)(v40 - 70) = 1;
            v41 = 1;
          }
          if ( ExclusiveLock )
            *(_BYTE *)(v40 - 70) = v41 | 2;
          *(_DWORD *)(v40 - 56) = Key;
          *(_QWORD *)(v40 - 48) = ULong64FromUser;
          Pool2 = (__int64 *)ExAllocatePool2(0x61uLL);
          *Pool2 = QuadPart;
          v39->Tail.Overlay.AuxiliaryBuffer = (PCHAR)Pool2;
          *(_QWORD *)(v40 - 64) = Pool2;
          return IopSynchronousServiceTail((PDEVICE_OBJECT)RelatedDeviceObject, v39, v15, 0, PreviousMode, v34, 2u);
        }
        else
        {
          IopAllocateIrpCleanup(v15, v11, v38);
          return -1073741670;
        }
      }
    }
  }
  return result;
}
