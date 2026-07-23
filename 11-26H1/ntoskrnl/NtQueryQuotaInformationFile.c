/*
 * XREFs of NtQueryQuotaInformationFile @ 0x14079C100
 * Callers:
 *     DifNtQueryQuotaInformationFileWrapper @ 0x140688BA0 (DifNtQueryQuotaInformationFileWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     MmUpdateMdlTracker @ 0x1404D9B5C (MmUpdateMdlTracker.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140796EC8 (IopCheckGetQuotaBufferValidity.c)
 *     RtlLengthRequiredSid @ 0x1408F0000 (RtlLengthRequiredSid.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     IopSynchronousApiServiceTail @ 0x1409829A4 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140AAB204 (IopAllocateIrpCleanup.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtQueryQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID SidList,
        ULONG SidListLength,
        PSID StartSid,
        BOOLEAN RestartScan)
{
  SIZE_T v9; // rsi
  char *Pool2; // rdi
  ULONG v11; // r12d
  char *v12; // r15
  unsigned int *v13; // rcx
  struct _KTHREAD *CurrentThread; // r14
  KPROCESSOR_MODE PreviousMode; // r13
  int ULongFromUser; // eax
  _KPROCESS *Process; // rax
  __int16 v18; // ax
  bool v19; // zf
  char v20; // al
  ULONG v21; // r8d
  ULONG v22; // esi
  ULONG v23; // ecx
  NTSTATUS result; // eax
  NTSTATUS v25; // r14d
  struct _KLOCK_ENTRIES *v26; // r9
  struct _FILE_OBJECT *v27; // r14
  bool v28; // r15
  struct _KTHREAD *v29; // rax
  void *v30; // rdx
  AutoBoost *v31; // rcx
  __int64 v32; // r8
  char v33; // r12
  __int64 v34; // rdx
  NTSTATUS v35; // r15d
  char v36; // r13
  struct _KEVENT *v37; // r12
  struct _KEVENT *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  IRP *Irp; // r15
  PIO_STATUS_BLOCK v42; // rax
  struct _KEVENT *v43; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  struct _DEVICE_OBJECT *v45; // rsi
  ULONG Flags; // eax
  __int64 v47; // rax
  PMDL Mdl; // r12
  NTSTATUS v49; // esi
  char v50; // al
  char v51; // di
  char v52; // r12
  __int64 v53; // r9
  char UCharFromUser; // [rsp+40h] [rbp-98h] BYREF
  char v55[7]; // [rsp+41h] [rbp-97h]
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-90h] BYREF
  PVOID v57; // [rsp+50h] [rbp-88h]
  PVOID P; // [rsp+58h] [rbp-80h]
  unsigned int *v59; // [rsp+60h] [rbp-78h]
  UNICODE_STRING *v60; // [rsp+68h] [rbp-70h]
  PVOID Object; // [rsp+70h] [rbp-68h] BYREF
  struct _KTHREAD *v62; // [rsp+78h] [rbp-60h]
  __int128 v63; // [rsp+80h] [rbp-58h] BYREF
  char *v64; // [rsp+90h] [rbp-48h]
  char *v65; // [rsp+98h] [rbp-40h]

  v9 = Length;
  Object = 0LL;
  v57 = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v11 = 0;
  v12 = 0LL;
  v60 = 0LL;
  v13 = 0LL;
  v59 = 0LL;
  v63 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v62 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v55[0] = PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)IoStatusBlock);
    RtlWriteULongToUser(IoStatusBlock, ULongFromUser);
    Process = CurrentThread->ApcState.Process;
    if ( !Process[1].ReadyTime )
      goto LABEL_7;
    v18 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v18 == 332 || (v19 = v18 == 452, v20 = 0, v19) )
      v20 = 1;
    v21 = 4;
    if ( !v20 )
LABEL_7:
      v21 = 8;
    ProbeForWrite(Buffer, v9, v21);
    if ( StartSid )
    {
      UCharFromUser = RtlReadUCharFromUser((char *)StartSid + 1);
      v11 = RtlLengthRequiredSid((unsigned __int8)UCharFromUser);
      ProbeForRead(StartSid, v11, 4u);
    }
    else
    {
      UCharFromUser = 0;
    }
    if ( SidList && (v22 = SidListLength) != 0 )
    {
      ProbeForRead(SidList, SidListLength, 4u);
      v23 = (SidListLength + 3) & 0xFFFFFFFC;
      if ( v23 > ~v11 )
        return -1073741811;
      if ( v23 < SidListLength )
        return -1073741811;
      Pool2 = (char *)ExAllocatePool2(0x61uLL);
      P = Pool2;
      v59 = (unsigned int *)Pool2;
      v64 = Pool2;
      memmove(Pool2, SidList, SidListLength);
    }
    else
    {
      v22 = 0;
      if ( StartSid )
      {
        Pool2 = (char *)ExAllocatePool2(0x121uLL);
        P = Pool2;
      }
    }
    if ( StartSid )
    {
      v12 = &Pool2[(v22 + 3) & 0xFFFFFFFC];
      v60 = (UNICODE_STRING *)v12;
      v65 = v12;
      memmove(v12, StartSid, v11);
      v12[1] = UCharFromUser;
    }
    else
    {
      v12 = 0LL;
    }
    v13 = v59;
    PreviousMode = v55[0];
  }
  else
  {
    v22 = SidListLength;
    if ( SidList )
    {
      if ( SidListLength )
        v13 = (unsigned int *)SidList;
      v59 = v13;
    }
    if ( StartSid )
      v12 = (char *)StartSid;
    v60 = (UNICODE_STRING *)v12;
  }
  if ( v13 )
  {
    DeviceObject = 0LL;
    v25 = IopCheckGetQuotaBufferValidity(v13, v22, &DeviceObject);
    if ( v25 < 0 )
    {
      IoStatusBlock->Information = (ULONG_PTR)DeviceObject;
LABEL_34:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      return v25;
    }
  }
  if ( v12 && !RtlValidSid(v12) )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return -1073741704;
  }
  v25 = IopReferenceFileObject(FileHandle, 0, PreviousMode, (ULONG_PTR *)&Object, 0LL);
  if ( v25 < 0 )
    goto LABEL_34;
  v27 = (struct _FILE_OBJECT *)Object;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v28 = (*((_DWORD *)Object + 20) & 4) != 0;
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v31 = (AutoBoost *)KeAbPreAcquire((__int64)&v27->Lock, 0LL, 0LL, v26);
    v33 = 0;
    UCharFromUser = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v27->Busy, 1) )
    {
      LOBYTE(v32) = v28;
      LOBYTE(v30) = PreviousMode;
      v35 = IopWaitAndAcquireFileObjectLock(v27, v30, v32, v31, &UCharFromUser);
      v33 = UCharFromUser;
    }
    else
    {
      if ( v31 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v31, v30);
        else
          *((_BYTE *)v31 + 10) = 1;
      }
      PsReferenceSiloContext(v27);
      v35 = 0;
    }
    if ( v33 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
LABEL_59:
      ObfDereferenceObject(v27);
      return v35;
    }
    v36 = 1;
    v37 = 0LL;
  }
  else
  {
    v38 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
    v37 = v38;
    v57 = v38;
    if ( !v38 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v35 = -1073741670;
      goto LABEL_59;
    }
    KeInitializeEvent(v38, SynchronizationEvent, 0);
    v36 = 0;
  }
  UCharFromUser = v36;
  IopResetEvent((__int64)v27, v34);
  DeviceObject = IoGetRelatedDeviceObject(v27);
  LOBYTE(v39) = DeviceObject->StackSize;
  v40 = IopAllocateIrpExReturn((__int64)DeviceObject, v39, 0LL);
  Irp = (IRP *)v40;
  if ( !v40 )
  {
    if ( (v27->Flags & 2) == 0 )
      ExFreePoolWithTag(v37, 0);
    IopAllocateIrpCleanup((ULONG_PTR)v27, 0LL);
    goto LABEL_72;
  }
  *(_QWORD *)(v40 + 192) = v27;
  *(_QWORD *)(v40 + 152) = v62;
  *(_BYTE *)(v40 + 64) = v55[0];
  if ( v36 )
  {
    v42 = IoStatusBlock;
    v43 = 0LL;
  }
  else
  {
    *(_DWORD *)(v40 + 16) = 4;
    v42 = (PIO_STATUS_BLOCK)&v63;
    v43 = (struct _KEVENT *)v57;
  }
  Irp->UserEvent = v43;
  Irp->UserIosb = v42;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 25;
  CurrentStackLocation[-1].FileObject = v27;
  Irp->Tail.Overlay.AuxiliaryBuffer = Pool2;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v59;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v22;
  v45 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v47 = ExAllocatePool2(0x41uLL);
      Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v47;
      if ( !v47 )
      {
        IopExceptionCleanupEx((ULONG_PTR)v27, Irp, 0LL, v57, (v27->Flags & 2) != 0);
LABEL_72:
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        return -1073741670;
      }
      Irp->Flags |= 0x70u;
    }
    else
    {
      Irp->AssociatedIrp.MasterIrp = 0LL;
    }
    goto LABEL_77;
  }
  if ( (Flags & 0x10) == 0 )
  {
LABEL_77:
    Irp->UserBuffer = Buffer;
LABEL_91:
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v60;
    CurrentStackLocation[-1].Flags = 0;
    v50 = 0;
    if ( RestartScan )
    {
      CurrentStackLocation[-1].Flags = 1;
      v50 = 1;
    }
    if ( ReturnSingleEntry )
    {
      v50 |= 2u;
      CurrentStackLocation[-1].Flags = v50;
    }
    if ( StartSid )
      CurrentStackLocation[-1].Flags = v50 | 4;
    v51 = UCharFromUser;
    v52 = v55[0];
    result = IopSynchronousServiceTail(v45, Irp, (ULONG_PTR)v27, v55[0], UCharFromUser, 2);
    if ( !v51 )
    {
      LOBYTE(v53) = v52;
      return IopSynchronousApiServiceTail((unsigned int)result, v57, Irp, v53, &v63, IoStatusBlock);
    }
    return result;
  }
  if ( !Length )
    goto LABEL_91;
  Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
  if ( Mdl )
  {
    v55[1] = CurrentStackLocation[-1].MajorFunction;
    v49 = MmProbeAndLockPagesEx((__int64)Mdl, v55[0] & 1 | 2LL);
    if ( v49 >= 0 )
    {
      if ( (MmTrackLockedPages & 1) != 0 )
        MmUpdateMdlTracker(
          (unsigned __int64)Mdl,
          (struct _LIST_ENTRY *)DeviceObject->DriverObject->MajorFunction[(unsigned __int8)v55[1]],
          (struct _LIST_ENTRY *)DeviceObject);
      v49 = 0;
    }
    if ( v49 >= 0 )
    {
      v45 = DeviceObject;
      goto LABEL_91;
    }
  }
  else
  {
    v49 = -1073741670;
  }
  IopExceptionCleanupEx((ULONG_PTR)v27, Irp, 0LL, v57, (v27->Flags & 2) != 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v49;
}
