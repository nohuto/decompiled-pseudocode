/*
 * XREFs of IopQueryXxxInformation @ 0x140989BF0
 * Callers:
 *     IoIsPagingFileUsable @ 0x140799034 (IoIsPagingFileUsable.c)
 *     IopQueryNameInternal @ 0x140920D34 (IopQueryNameInternal.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IoQueryVolumeInformation @ 0x140988DC0 (IoQueryVolumeInformation.c)
 *     IoQueryFileInformation @ 0x140989BC0 (IoQueryFileInformation.c)
 *     PfSnGetSectionObject @ 0x14098A718 (PfSnGetSectionObject.c)
 *     PfpPrefetchEntireDirectory @ 0x140A58878 (PfpPrefetchEntireDirectory.c)
 *     MiAttemptPageFileExtension @ 0x140B318D8 (MiAttemptPageFileExtension.c)
 *     IopGetNetworkOpenInformation @ 0x140B534BC (IopGetNetworkOpenInformation.c)
 *     IopValidateJunctionTarget @ 0x140B62430 (IopValidateJunctionTarget.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopWaitForSynchronousIo @ 0x1404634B0 (IopWaitForSynchronousIo.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
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
