/*
 * XREFs of IopReadFile @ 0x1409284FC
 * Callers:
 *     NtReadFile @ 0x1409293A0 (NtReadFile.c)
 *     NtCopyFileChunk @ 0x140ADF550 (NtCopyFileChunk.c)
 *     IopIoRingDispatchRead @ 0x140B02B40 (IopIoRingDispatchRead.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     MmIsDriverVerifying @ 0x1403C18E0 (MmIsDriverVerifying.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     IopUpdateReadTransferCount @ 0x14044FEB0 (IopUpdateReadTransferCount.c)
 *     IopSetCopyInformationExtension @ 0x1404664C4 (IopSetCopyInformationExtension.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140467B40 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1404BC654 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopExceptionFilter @ 0x1405CD104 (IopExceptionFilter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopReadFile(
        struct _FILE_OBJECT *BugCheckParameter2,
        HANDLE Handle,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _IRP *Address,
        SIZE_T Length,
        __int64 a8,
        unsigned int *a9,
        unsigned int *a10,
        struct _IO_STATUS_BLOCK *a11,
        int a12,
        _QWORD *a13,
        _OWORD *a14)
{
  IRP *v16; // r14
  char v17; // r13
  struct _KEVENT *v18; // r12
  char v19; // dl
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r9
  int ULongFromUser; // eax
  __int64 v25; // r13
  KPROCESSOR_MODE v26; // al
  unsigned int SectorSize; // ecx
  int v28; // esi
  struct _KTHREAD *v29; // rax
  AutoBoost *v30; // rax
  void *v31; // rdx
  __int64 v32; // r8
  ULONG_PTR FastIoRead; // r13
  struct _DRIVER_OBJECT *DriverObject; // rsi
  void *v35; // rsi
  char v36; // al
  struct _KTHREAD *v37; // rcx
  int v38; // edx
  size_t v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  unsigned int *v42; // rsi
  __int64 Irp; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  ULONG Flags; // eax
  ULONG v48; // ebx
  __int64 Pool2; // rax
  PMDL Mdl; // rax
  unsigned __int64 v51; // rdx
  _OWORD *v52; // rdx
  _DWORD *FileObjectExtension; // rax
  _QWORD *v54; // rcx
  char v56; // [rsp+50h] [rbp-98h]
  KPROCESSOR_MODE AccessMode; // [rsp+51h] [rbp-97h]
  char v58; // [rsp+52h] [rbp-96h] BYREF
  char v59; // [rsp+53h] [rbp-95h]
  bool v60; // [rsp+54h] [rbp-94h]
  __int64 ULong64FromUser; // [rsp+58h] [rbp-90h] BYREF
  int v62; // [rsp+60h] [rbp-88h]
  unsigned int v63; // [rsp+64h] [rbp-84h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-80h]
  PVOID Object; // [rsp+70h] [rbp-78h] BYREF
  __int128 Src; // [rsp+78h] [rbp-70h] BYREF
  int v67; // [rsp+88h] [rbp-60h]
  unsigned int v68; // [rsp+98h] [rbp-50h]
  PFAST_IO_DISPATCH FastIoDispatch; // [rsp+A0h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-40h]
  __int64 v72; // [rsp+100h] [rbp+18h] BYREF
  unsigned int *v73; // [rsp+108h] [rbp+20h]

  v73 = a4;
  v72 = a3;
  v16 = 0LL;
  v62 = 0;
  v17 = 0;
  v18 = 0LL;
  Object = 0LL;
  v63 = 0;
  ULong64FromUser = 0LL;
  v19 = 1;
  v59 = 1;
  if ( a10 && (a3 || Handle || BugCheckParameter2->CompletionContext)
    || a13 && *a13 && *(_DWORD *)(*a13 + 40LL) < (unsigned int)Length )
  {
    v20 = -1073741811;
    goto LABEL_40;
  }
  CurrentThread = KeGetCurrentThread();
  AccessMode = CurrentThread->PreviousMode;
  if ( (BugCheckParameter2->Flags & 2) != 0 && a12 >= 0 )
    v17 = 1;
  v56 = v17;
  v67 = a12 & 0x40000000;
  v60 = (a12 & 0x40000000) == 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(BugCheckParameter2);
  DeviceObject = RelatedDeviceObject;
  if ( !AccessMode || a10 )
  {
    v25 = a8;
    if ( a8 )
      ULong64FromUser = *(_QWORD *)a8;
    if ( a9 )
      v63 = *a9;
  }
  else
  {
    ULongFromUser = RtlReadULongFromUser(a5);
    RtlWriteULongToUser(a5, ULongFromUser);
    IopMarkApcRoutineIfAsynchronousIo32((__int64 *)&a5, &v72, v17);
    if ( !a14 )
      ProbeForWrite(Address, (unsigned int)Length, 1u);
    if ( BugCheckParameter2->CompletionContext && (v72 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v62 = -1073741811;
      v20 = -1073741811;
      v19 = 1;
      goto LABEL_40;
    }
    v25 = a8;
    if ( a8 )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      ULong64FromUser = RtlReadULong64FromUser((volatile void *)a8);
    }
    if ( a9 )
    {
      v63 = RtlReadULongFromUser(a9);
      v68 = v63;
    }
    RelatedDeviceObject = DeviceObject;
  }
  v26 = AccessMode;
  if ( AccessMode )
  {
    if ( (BugCheckParameter2->Flags & 8) != 0 )
    {
      if ( ((SectorSize = RelatedDeviceObject->SectorSize, v22 = (unsigned int)Length, (_WORD)SectorSize)
         && ((SectorSize - 1) & (unsigned int)Length) != 0
         || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Address) != 0)
        && ((_WORD)SectorSize && (v21 = (unsigned int)Length % SectorSize) != 0
         || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Address) != 0)
        || v25 && (_WORD)SectorSize && ((SectorSize - 1) & (unsigned int)ULong64FromUser) != 0 )
      {
LABEL_37:
        v20 = -1073741811;
LABEL_38:
        v17 = v56;
LABEL_39:
        v19 = 1;
        goto LABEL_40;
      }
    }
    v26 = AccessMode;
  }
  if ( Handle )
  {
    Object = 0LL;
    v20 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, v26, &Object, 0LL);
    v18 = (struct _KEVENT *)Object;
    if ( v20 < 0 )
      goto LABEL_38;
    KeResetEvent((PRKEVENT)Object);
  }
  FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
  if ( v56 )
  {
    v28 = BugCheckParameter2->Flags & 4;
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v30 = (AutoBoost *)KeAbPreAcquire(
                         (__int64)&BugCheckParameter2->Lock,
                         0LL,
                         0LL,
                         (struct _KLOCK_ENTRIES *)RelatedDeviceObject);
    v58 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&BugCheckParameter2->Busy, 1) )
    {
      LOBYTE(v32) = v28 != 0;
      LOBYTE(v31) = AccessMode;
      v20 = IopWaitAndAcquireFileObjectLock(BugCheckParameter2, v31, v32, v30, &v58);
    }
    else
    {
      if ( v30 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v30, v31);
        else
          *((_BYTE *)v30 + 10) = 1;
      }
      PsReferenceSiloContext(BugCheckParameter2);
      v20 = 0;
    }
    if ( v58 )
    {
      if ( v18 )
        ObfDereferenceObject(v18);
      goto LABEL_38;
    }
    if ( !v25 || ULong64FromUser == -2 )
      ULong64FromUser = BugCheckParameter2->CurrentByteOffset.QuadPart;
    if ( BugCheckParameter2->PrivateCacheMap && !a14 )
    {
      Src = 0LL;
      FastIoRead = (ULONG_PTR)FastIoDispatch->FastIoRead;
      if ( ULong64FromUser < 0 )
      {
        if ( v18 )
          ObfDereferenceObject(v18);
        IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2, v21, v22);
        goto LABEL_37;
      }
      if ( (MmVerifierData & 0x10) != 0
        && (DriverObject = DeviceObject->DriverObject, MmIsDriverVerifying(DriverObject)) )
      {
        v35 = (void *)VfFastIoSnapState(DriverObject);
      }
      else
      {
        v35 = 0LL;
      }
      v36 = guard_dispatch_icall_no_overrides((__int64)BugCheckParameter2, (__int64)&ULong64FromUser);
      v58 = v36;
      if ( v35 )
      {
        VfFastIoCheckState(v35, FastIoRead);
        v36 = v58;
      }
      if ( v36 && (!(_DWORD)Src || (_DWORD)Src == -2147483643 || (_DWORD)Src == -1073741807) )
      {
        v37 = KeGetCurrentThread();
        ++v37->ReadOperationCount;
        __incgsdword(0x2EDCu);
        IopUpdateReadTransferCount(DWORD2(Src), 0LL);
        v39 = (unsigned int)(v38 + 16);
        if ( AccessMode )
          RtlCopyToUser(a5, &Src, v39);
        else
          RtlCopyVolatileMemory(a5, &Src, v39);
        v17 = v56;
        if ( Handle )
        {
          if ( (BugCheckParameter2->Flags & 0x8000000) == 0 )
            KeSetEvent(v18, 0, 0);
          ObfDereferenceObject(v18);
        }
        IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2, v40, v41);
        v20 = Src;
        v19 = v59;
        goto LABEL_40;
      }
    }
  }
  else if ( !v25 && (BugCheckParameter2->Flags & 0x280) == 0 )
  {
    if ( v18 )
      ObfDereferenceObject(v18);
    goto LABEL_37;
  }
  if ( ULong64FromUser < 0 )
  {
    if ( v18 )
      ObfDereferenceObject(v18);
    v17 = v56;
    if ( v56 )
      IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2, v21, v22);
    v20 = -1073741811;
    goto LABEL_39;
  }
  v42 = a10;
  if ( !a10 )
    IopResetEvent((__int64)BugCheckParameter2, v21);
  v17 = v56;
  LOBYTE(v22) = v56 ^ 1;
  LOBYTE(v21) = DeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)DeviceObject, v21, v22);
  v16 = (IRP *)Irp;
  if ( !Irp )
  {
    if ( v18 )
      ObfDereferenceObject(v18);
    if ( v56 )
      IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2, v44, v45);
    v20 = -1073741670;
    goto LABEL_39;
  }
  *(_QWORD *)(Irp + 192) = BugCheckParameter2;
  *(_QWORD *)(Irp + 152) = CurrentThread;
  *(_QWORD *)(Irp + 160) = 0LL;
  *(_BYTE *)(Irp + 64) = AccessMode;
  *(_BYTE *)(Irp + 65) = 0;
  *(_BYTE *)(Irp + 68) = 0;
  *(_QWORD *)(Irp + 104) = 0LL;
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 80) = v18;
  if ( v42 )
  {
    ObfReferenceObjectWithTag(v42, 0x49526F49u);
    v16->Flags |= 0x200000u;
    v16->UserIosb = a11;
    v73 = v42;
    a10 = a5;
  }
  else
  {
    a10 = a5;
    *(_QWORD *)(Irp + 72) = a5;
    *(_QWORD *)(Irp + 88) = v72;
  }
  v16->Overlay.AsynchronousParameters.UserApcContext = v73;
  CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
  *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
  CurrentStackLocation[-1].FileObject = BugCheckParameter2;
  v16->AssociatedIrp.MasterIrp = 0LL;
  v16->MdlAddress = 0LL;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    v48 = Length;
    if ( (_DWORD)Length )
    {
      if ( a14 )
      {
        v16->AssociatedIrp.MasterIrp = Address;
        v16->Flags |= 0x50u;
      }
      else
      {
        Pool2 = ExAllocatePool2(0x49uLL);
        v16->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
        if ( !Pool2 )
        {
          v20 = -1073741670;
          goto LABEL_38;
        }
        v16->Flags |= 0x70u;
      }
      v16->UserBuffer = Address;
    }
    else
    {
      v16->Flags |= 0x50u;
    }
    goto LABEL_130;
  }
  if ( (Flags & 0x10) != 0 )
  {
    if ( !(_DWORD)Length )
    {
      v48 = 0;
      goto LABEL_130;
    }
    Mdl = IoAllocateMdl(Address, Length, 0, 1u, v16);
    if ( Mdl )
    {
      if ( a14 )
        v51 = 2LL;
      else
        v51 = AccessMode & 1 | 2LL;
      v20 = MmProbeAndLockPagesEx((__int64)Mdl, v51);
    }
    else
    {
      v20 = -1073741670;
    }
    if ( v20 < 0 )
      goto LABEL_38;
  }
  else
  {
    v16->UserBuffer = Address;
    v54 = a13;
    if ( a13 )
    {
      if ( *a13 )
      {
        v16->MdlAddress = (PMDL)*a13;
        *v54 = 0LL;
        if ( v42 )
          v16->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)v16->Overlay.AsynchronousParameters.UserApcContext | 1);
      }
    }
  }
  v48 = Length;
LABEL_130:
  v16->Flags |= 0x100u;
  if ( (BugCheckParameter2->Flags & 8) != 0 )
    v16->Flags |= 1u;
  if ( !v67 )
    v16->Flags |= 0x800u;
  v52 = a14;
  if ( a14 )
  {
    v16->RequestorMode = 0;
    v16->UserBuffer = Address;
    v20 = IopSetCopyInformationExtension((__int64)v16, v52);
    if ( v20 < 0 )
      goto LABEL_38;
  }
  CurrentStackLocation[-1].Parameters.Read.Length = v48;
  CurrentStackLocation[-1].Parameters.Create.Options = v63;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = ULong64FromUser;
  FileObjectExtension = BugCheckParameter2->FileObjectExtension;
  if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
    CurrentStackLocation[-1].Parameters.Read.Flags = a10[2];
  v17 = v56;
  v20 = IopSynchronousServiceTail(DeviceObject, v16, (ULONG_PTR)BugCheckParameter2, AccessMode, v56, 0);
  v19 = 0;
LABEL_40:
  if ( v19 )
  {
    if ( a14 )
      IopFreeCopyObjectsFromDataBuffer((__int64)Address, 1);
    if ( v16 )
      IopExceptionCleanupEx((ULONG_PTR)BugCheckParameter2, v16, v18, 0LL, v17);
    else
      ObfDereferenceObject(BugCheckParameter2);
  }
  return (unsigned int)v20;
}
