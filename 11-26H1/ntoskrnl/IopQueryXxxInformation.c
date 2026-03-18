/*
 * XREFs of IopQueryXxxInformation @ 0x1409B8C10
 * Callers:
 *     IoIsPagingFileUsable @ 0x140796504 (IoIsPagingFileUsable.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IoQueryVolumeInformation @ 0x1409B7DE0 (IoQueryVolumeInformation.c)
 *     IoQueryFileInformation @ 0x1409B8BE0 (IoQueryFileInformation.c)
 *     PfSnGetSectionObject @ 0x1409B9738 (PfSnGetSectionObject.c)
 *     IopQueryNameInternal @ 0x1409FC134 (IopQueryNameInternal.c)
 *     PfpPrefetchEntireDirectory @ 0x140A4F588 (PfpPrefetchEntireDirectory.c)
 *     MiAttemptPageFileExtension @ 0x140B2FAF8 (MiAttemptPageFileExtension.c)
 *     IopGetNetworkOpenInformation @ 0x140B50AAC (IopGetNetworkOpenInformation.c)
 *     IopValidateJunctionTarget @ 0x140B5F2B0 (IopValidateJunctionTarget.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026C640 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     IopQueueThreadIrp @ 0x14032F090 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IopWaitForSynchronousIo @ 0x140469D30 (IopWaitForSynchronousIo.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409B6E40 (IopWaitAndAcquireFileObjectLock.c)
 */

__int64 __fastcall IopQueryXxxInformation(
        struct _FILE_OBJECT *BugCheckParameter2,
        int a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        _DWORD *a6,
        char a7)
{
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned __int8 v12; // bp
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v14; // r8
  int v15; // r14d
  struct _DEVICE_OBJECT *v16; // rsi
  __int64 Irp; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  IRP *v20; // rbx
  struct _KEVENT *p_Event; // rax
  bool v22; // zf
  __int64 CurrentStackLocation; // rdx
  char v24; // al
  __int64 v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int FinalStatus; // esi
  struct _KTHREAD *CurrentThread; // rax
  char v32; // bl
  AutoBoost *v33; // rax
  unsigned __int64 v34; // rdx
  unsigned int v35; // ebx
  __int128 v36; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  char v38; // [rsp+90h] [rbp+8h] BYREF

  memset(&Event, 0, sizeof(Event));
  v36 = 0LL;
  PsReferenceSiloContext(BugCheckParameter2);
  if ( (BugCheckParameter2->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v32 = (BugCheckParameter2->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v33 = (AutoBoost *)KeAbPreAcquire((__int64)&BugCheckParameter2->Lock, 0LL, 0LL, v11);
    v38 = 0;
    v34 = (unsigned int)_InterlockedExchange((volatile __int32 *)&BugCheckParameter2->Busy, 1);
    if ( (_DWORD)v34 )
    {
      v35 = IopWaitAndAcquireFileObjectLock((__int64)BugCheckParameter2, (struct _KLOCK_ENTRY *)a4, v32, v33, &v38);
      if ( v38 )
      {
        ObfDereferenceObject(BugCheckParameter2);
        return v35;
      }
    }
    else
    {
      if ( v33 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v33, (void *)v34);
        else
          *((_BYTE *)v33 + 10) = 1;
      }
      PsReferenceSiloContext(BugCheckParameter2);
    }
    KeResetEvent(&BugCheckParameter2->Event);
    v12 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v12 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(BugCheckParameter2);
  v14 = v12;
  v15 = 71;
  if ( a2 != 75 )
    v15 = a2;
  v16 = RelatedDeviceObject;
  LOBYTE(v14) = v12 ^ 1;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v14);
  v20 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = BugCheckParameter2;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v12 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v22 = a7 == 0;
    v20->UserEvent = p_Event;
    CurrentStackLocation = (__int64)v20->Tail.Overlay.CurrentStackLocation;
    v20->UserIosb = (PIO_STATUS_BLOCK)&v36;
    v24 = 5;
    if ( v22 )
      v24 = 10;
    v20->Overlay.AllocationSize.QuadPart = 0LL;
    *(_BYTE *)(CurrentStackLocation - 72) = v24;
    v25 = a5;
    *(_QWORD *)(CurrentStackLocation - 24) = BugCheckParameter2;
    v20->Flags |= 0x10u;
    v20->AssociatedIrp.MasterIrp = (struct _IRP *)v25;
    *(_DWORD *)(CurrentStackLocation - 64) = a3;
    *(_DWORD *)(CurrentStackLocation - 56) = v15;
    if ( a2 == 75 )
      *(_BYTE *)(CurrentStackLocation - 70) |= 1u;
    IopQueueThreadIrp((__int64)v20, CurrentStackLocation);
    v26 = IofCallDriver(v16, v20);
    FinalStatus = v26;
    if ( v12 )
    {
      if ( v26 == 259 )
      {
        IopWaitForSynchronousIo(v20, (unsigned int *)BugCheckParameter2, a4);
        FinalStatus = BugCheckParameter2->FinalStatus;
      }
      IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2, v27, v28);
    }
    else if ( v26 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v36;
    }
    *a6 = DWORD2(v36);
    return FinalStatus;
  }
  else
  {
    if ( (BugCheckParameter2->Flags & 2) != 0 )
      IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2, v18, v19);
    ObfDereferenceObject(BugCheckParameter2);
    return 3221225626LL;
  }
}
