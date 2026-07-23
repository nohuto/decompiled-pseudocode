/*
 * XREFs of IopCloseFile @ 0x140A285C0
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpMustSucceed @ 0x14026BB50 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x1403311D0 (IopDequeueIrpFromThread.c)
 *     MmIsDriverVerifying @ 0x1403C18E0 (MmIsDriverVerifying.c)
 *     IopCloseFileObjectExtension @ 0x1403DEE30 (IopCloseFileObjectExtension.c)
 *     IoGetAttachedDevice @ 0x1404472B0 (IoGetAttachedDevice.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     IopSetLockOperationProcess @ 0x14044F7F0 (IopSetLockOperationProcess.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     IopCleanupProcessResources @ 0x140A288F0 (IopCleanupProcessResources.c)
 *     IopFreeBandwidthContract @ 0x140B71E1C (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
 */

int __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  int v5; // r15d
  _QWORD *FileObjectExtension; // rax
  __int64 v9; // r14
  _QWORD *v10; // rbx
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _KLOCK_ENTRIES *v12; // r9
  struct _DEVICE_OBJECT *v13; // r13
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 MustSucceed; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  struct _KTHREAD *v20; // rcx
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v27; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _KLOCK_ENTRIES *v29; // r9
  struct _DEVICE_OBJECT *v30; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  struct _KTHREAD *v32; // rax
  AutoBoost *v33; // rax
  ULONG_PTR FastIoUnlockAll; // r14
  struct _DRIVER_OBJECT *DriverObject; // rbx
  void *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  char v39; // r12
  __int64 v40; // rdx
  IRP *v41; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v43; // rdx
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  char v46; // [rsp+A0h] [rbp+40h] BYREF

  v5 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( a3 == 1 )
  {
    FileObjectExtension = a2->FileObjectExtension;
    if ( FileObjectExtension )
      v9 = FileObjectExtension[3];
    else
      v9 = 0LL;
    v10 = a2->FileObjectExtension;
    if ( v10 )
      v10 = (_QWORD *)v10[5];
    if ( a4 == 1 )
    {
      if ( (a2->Flags & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      else
        AttachedDevice = IoGetRelatedDeviceObject(a2);
      v13 = AttachedDevice;
      v14 = a2->Flags | 0x40000;
      a2->Flags = v14;
      if ( a1 && (v14 & 2) != 0 )
      {
        v5 = 1;
        while ( 1 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v27 = (AutoBoost *)KeAbPreAcquire((__int64)&a2->Lock, 0LL, 0LL, v12);
          if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
            break;
          if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((__int64)a2, 0LL, 0, v27, &v46) )
            goto LABEL_10;
        }
        if ( v27 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v27, v27);
          else
            *((_BYTE *)v27 + 10) = 1;
        }
        PsReferenceSiloContext(a2);
      }
LABEL_10:
      if ( v10 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)a2, v15);
      LOBYTE(v16) = v13->StackSize;
      MustSucceed = IopAllocateIrpMustSucceed((__int64)v13, v16);
      *(_QWORD *)(MustSucceed + 192) = a2;
      *(_QWORD *)(MustSucceed + 152) = KeGetCurrentThread();
      *(_QWORD *)(MustSucceed + 72) = MustSucceed + 48;
      v18 = *(_QWORD *)(MustSucceed + 184);
      *(_BYTE *)(MustSucceed + 64) = 0;
      *(_QWORD *)(MustSucceed + 80) = &Event;
      *(_QWORD *)(MustSucceed + 88) = 0LL;
      *(_DWORD *)(MustSucceed + 16) = 1028;
      *(_BYTE *)(v18 - 72) = 18;
      *(_QWORD *)(v18 - 24) = a2;
      IopQueueThreadIrp(MustSucceed, v19);
      v20 = KeGetCurrentThread();
      ++v20->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v13, (PIRP)MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      *(_QWORD *)(MustSucceed + 152) = KeGetCurrentThread();
      IopDequeueIrpFromThread((_QWORD *)MustSucceed, v21);
      v22 = a5;
      if ( a5 && *a5 )
      {
        a5[1] = 1;
        v22[2] = *(_DWORD *)(MustSucceed + 56);
      }
      IoFreeIrp((PIRP)MustSucceed);
      if ( v5 )
        IopReleaseFileObjectLock((ULONG_PTR)a2, v23, v24);
      IopCleanupProcessResources(a2, a1, v9);
      LODWORD(v25) = (unsigned int)IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      IopCleanupProcessResources(a2, a1, v9);
      LODWORD(v25) = IopSetLockOperationProcess((__int64)a2, a1, 1);
      if ( (int)v25 >= 0 )
      {
        if ( (a2->Flags & 0x800) != 0 )
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        else
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
        v30 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (a2->Flags & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v5 = 1;
          while ( 1 )
          {
            v32 = KeGetCurrentThread();
            --v32->KernelApcDisable;
            v33 = (AutoBoost *)KeAbPreAcquire((__int64)&a2->Lock, 0LL, 0LL, v29);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)IopWaitAndAcquireFileObjectLock((__int64)a2, 0LL, 0, v33, &v46) )
              goto LABEL_52;
          }
          if ( v33 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v33, v33);
            else
              *((_BYTE *)v33 + 10) = 1;
          }
          PsReferenceSiloContext(a2);
        }
LABEL_52:
        if ( !FastIoDispatch )
          goto LABEL_61;
        FastIoUnlockAll = (ULONG_PTR)FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_61;
        if ( (MmVerifierData & 0x10) != 0 && (DriverObject = v30->DriverObject, MmIsDriverVerifying(DriverObject)) )
          v36 = (void *)VfFastIoSnapState(DriverObject);
        else
          v36 = 0LL;
        LODWORD(v25) = guard_dispatch_icall_no_overrides((__int64)a2, (__int64)KeGetCurrentThread()->ApcState.Process);
        v39 = (char)v25;
        if ( v36 )
          LODWORD(v25) = VfFastIoCheckState(v36, FastIoUnlockAll);
        if ( !v39 )
        {
LABEL_61:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          LOBYTE(v40) = v30->StackSize;
          v41 = (IRP *)IopAllocateIrpMustSucceed((__int64)v30, v40);
          v41->Tail.Overlay.OriginalFileObject = a2;
          v41->Tail.Overlay.Thread = KeGetCurrentThread();
          v41->UserIosb = &v41->IoStatus;
          CurrentStackLocation = v41->Tail.Overlay.CurrentStackLocation;
          v41->RequestorMode = 0;
          v41->UserEvent = &Event;
          v41->Flags = 4100;
          v41->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 785;
          CurrentStackLocation[-1].FileObject = a2;
          PsReferenceSiloContext(a2);
          IopQueueThreadIrp((__int64)v41, v43);
          LODWORD(v25) = IofCallDriver(v30, v41);
          if ( (_DWORD)v25 == 259 )
            LODWORD(v25) = KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v5 == 1 )
          LODWORD(v25) = IopReleaseFileObjectLock((ULONG_PTR)a2, v37, v38);
      }
    }
  }
  else
  {
    v25 = a5;
    if ( a5 && *a5 )
    {
      a5[1] = 1;
      v25[2] = 2;
    }
  }
  return (int)v25;
}
