/*
 * XREFs of IopMountVolume @ 0x140B208FC
 * Callers:
 *     IopCheckVpbMounted @ 0x1404429F8 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x140B49570 (IoVerifyVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402F84A0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FD820 (IopDecrementDeviceObjectRef.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     IopMountInitializeVpb @ 0x140442944 (IopMountInitializeVpb.c)
 *     IopAllocateIrpWithExtension @ 0x14045782C (IopAllocateIrpWithExtension.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1404673E0 (FsRtlIsTotalDeviceFailure.c)
 *     IoGetActivityIdThread @ 0x140468BC0 (IoGetActivityIdThread.c)
 *     McTemplateK0jhzr1_EtwWriteTransfer @ 0x1404982B4 (McTemplateK0jhzr1_EtwWriteTransfer.c)
 *     IopWaitForLockAlertable @ 0x1404A3F78 (IopWaitForLockAlertable.c)
 *     IopQueryVpbFlagsSafe @ 0x1404C961C (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x1404E02A0 (MmIsThisAnNtAsSystem.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     McTemplateK0jhzr1d_EtwWriteTransfer @ 0x1405CD56C (McTemplateK0jhzr1d_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     IopLoadFileSystemDriver @ 0x140797BC4 (IopLoadFileSystemDriver.c)
 *     IoVolumeDeviceToDosName @ 0x1409205E0 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuid @ 0x140A2FC90 (IoVolumeDeviceToGuid.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopMountVolume(struct _DEVICE_OBJECT *BugCheckParameter1, char a2, char a3, char a4, ULONG_PTR *a5)
{
  __int64 v5; // r14
  char v9; // r12
  BOOLEAN v10; // bl
  struct _KTHREAD *CurrentThread; // rsi
  char VpbFlagsSafe; // al
  unsigned __int16 Length; // r13
  signed int v14; // ebx
  struct _DEVICE_OBJECT *v15; // rcx
  struct _DEVICE_OBJECT *i; // rax
  ULONG DeviceType; // eax
  __int64 **v18; // rsi
  __int64 *v19; // r15
  char v20; // dl
  int v21; // ecx
  __int64 *v22; // rax
  bool v23; // zf
  struct _DEVICE_OBJECT *v25; // r14
  char v26; // bl
  struct _DEVICE_OBJECT *v27; // rax
  __int64 v28; // rcx
  __int64 IrpWithExtension; // rax
  IRP *v30; // rbx
  __int64 v31; // rcx
  int KcsanThread; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  NTSTATUS v35; // eax
  struct _DEVICE_OBJECT *v36; // r14
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  ULONG_PTR v40; // rax
  struct _KTHREAD *v41; // rcx
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // rcx
  BOOLEAN IsThisAnNtAsSystem; // [rsp+42h] [rbp-BEh]
  char v47; // [rsp+43h] [rbp-BDh]
  char v48; // [rsp+44h] [rbp-BCh]
  int v51; // [rsp+48h] [rbp-B8h]
  struct _DEVICE_OBJECT *Object; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  int v54; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *ActivityIdThread; // [rsp+68h] [rbp-98h]
  UNICODE_STRING DosName; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h]
  __int128 v58; // [rsp+88h] [rbp-78h] BYREF
  __int128 v59; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR *v60; // [rsp+A8h] [rbp-58h]
  __int64 *v61; // [rsp+B0h] [rbp-50h]
  struct _KEVENT Event; // [rsp+B8h] [rbp-48h] BYREF
  GUID v63; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v64[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v65; // [rsp+100h] [rbp+0h]
  int v66; // [rsp+108h] [rbp+8h]

  v60 = a5;
  v5 = 0LL;
  v47 = 0;
  memset(&Event, 0, sizeof(Event));
  ActivityIdThread = 0LL;
  v9 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v63 = 0LL;
  DosName = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v10 = IsThisAnNtAsSystem;
  v65 = 0LL;
  v66 = 0;
  memset(v64, 0, sizeof(v64));
  CurrentThread = KeGetCurrentThread();
  v53 = (__int64)CurrentThread;
  if ( !ExAcquireRundownProtection_0(&IopFilesystemDatabaseShutdownRundown) )
    return 3221225865LL;
  if ( IsThisAnNtAsSystem )
  {
    ActivityIdThread = IoGetActivityIdThread();
    v5 = (__int64)ActivityIdThread;
    IoVolumeDeviceToGuid(BugCheckParameter1, &v63);
    IoVolumeDeviceToDosName(BugCheckParameter1, &DosName);
  }
  if ( !a3 )
  {
    v41 = KeGetCurrentThread();
    --v41->KernelApcDisable;
    v14 = IopWaitForLockAlertable(&BugCheckParameter1->DeviceLock, CurrentThread->PreviousMode, a4);
    if ( v14 < 0 )
    {
      KeLeaveCriticalRegion();
      if ( DosName.Buffer )
        ExFreePoolWithTag(DosName.Buffer, 0);
      goto LABEL_31;
    }
    v10 = IsThisAnNtAsSystem;
    v9 = 1;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  VpbFlagsSafe = IopQueryVpbFlagsSafe((__int64)BugCheckParameter1);
  Length = DosName.Length;
  if ( (VpbFlagsSafe & 9) != 0 )
  {
    v14 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
    goto LABEL_26;
  }
  if ( v10 )
  {
    if ( MmIsThisAnNtAsSystem() && (Microsoft_Windows_Kernel_IOEnableBits & 1) != 0 )
      McTemplateK0jhzr1_EtwWriteTransfer(
        (__int64)DosName.Buffer,
        (__int64)IoMgr_MountBegin,
        v5,
        (__int64)&v63,
        Length >> 1,
        (__int64)DosName.Buffer);
    v47 = 1;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v14 = -1073741823;
  v15 = BugCheckParameter1;
  BugCheckParameter1->Flags &= ~2u;
  for ( i = BugCheckParameter1->AttachedDevice; ; i = i->AttachedDevice )
  {
    Object = v15;
    if ( !i )
      break;
    v15 = i;
  }
  PsReferenceSiloContext(v15);
  DeviceType = BugCheckParameter1->DeviceType;
  if ( DeviceType == 7 || DeviceType == 36 )
  {
    v18 = (__int64 **)IopDiskFileSystemQueueHead;
    v19 = &IopDiskFileSystemQueueHead;
  }
  else if ( DeviceType == 2 )
  {
    v18 = (__int64 **)IopCdRomFileSystemQueueHead;
    v19 = &IopCdRomFileSystemQueueHead;
  }
  else
  {
    v18 = (__int64 **)IopTapeFileSystemQueueHead;
    v19 = &IopTapeFileSystemQueueHead;
  }
  v20 = a2;
  v21 = BugCheckParameter1->Vpb->Flags & 0x10;
  v51 = v21;
  while ( 1 )
  {
    if ( v18 == (__int64 **)v19 )
    {
LABEL_25:
      CurrentThread = (struct _KTHREAD *)v53;
      if ( v14 >= 0 )
        goto LABEL_26;
LABEL_22:
      ObfDereferenceObject(Object);
      goto LABEL_26;
    }
    if ( v14 >= 0 )
    {
      CurrentThread = (struct _KTHREAD *)v53;
      goto LABEL_26;
    }
    v22 = *v18;
    v23 = *v18 == v19;
    v61 = *v18;
    v48 = v23;
    if ( !v20 && v22 == v19 && v18 != (__int64 **)*v19 )
      goto LABEL_21;
    if ( !v21 || v22 == v19 )
      break;
LABEL_18:
    v18 = (__int64 **)*v18;
  }
  v25 = (struct _DEVICE_OBJECT *)(v18 - 10);
  v26 = 1;
  v27 = (struct _DEVICE_OBJECT *)*(v18 - 7);
  BugCheckParameter2 = (ULONG_PTR)(v18 - 10);
  while ( v27 )
  {
    v25 = v27;
    ++v26;
    v27 = v27->AttachedDevice;
  }
  KeResetEvent(&Event);
  IrpWithExtension = IopAllocateIrpWithExtension(v28, Object->StackSize + v26, 0);
  v30 = (IRP *)IrpWithExtension;
  if ( !IrpWithExtension )
  {
    v14 = -1073741670;
LABEL_21:
    CurrentThread = (struct _KTHREAD *)v53;
    goto LABEL_22;
  }
  v31 = *(_QWORD *)(IrpWithExtension + 184);
  *(_DWORD *)(IrpWithExtension + 16) = 66;
  *(_QWORD *)(IrpWithExtension + 24) = v64;
  *(_QWORD *)(IrpWithExtension + 80) = &Event;
  *(_QWORD *)(IrpWithExtension + 72) = &v58;
  *(_QWORD *)(IrpWithExtension + 152) = v53;
  *(_BYTE *)(IrpWithExtension + 64) = 0;
  *(_BYTE *)(v31 - 70) = a2;
  *(_WORD *)(v31 - 72) = 269;
  *(_QWORD *)(v31 - 64) = BugCheckParameter1->Vpb;
  *(_QWORD *)(v31 - 56) = Object;
  KcsanThread = IopPerfIoTrackingLock.KcsanThread;
  *(_DWORD *)(v31 - 48) = 44;
  v54 = KcsanThread;
  PsReferenceSiloContext(v25);
  LOBYTE(v33) = 1;
  IopIncrementDeviceObjectRefCount(BugCheckParameter2, v33, v34);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite(&IopDatabaseResource);
  v35 = IofCallDriver(v25, v30);
  if ( v35 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    LODWORD(v58) = v35;
    *((_QWORD *)&v58 + 1) = 0LL;
  }
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
  if ( IopMountCompletionWaiters )
    KeSetEvent((PRKEVENT)&IopPerfIoTrackingLock.PriorityFloorCounts[8], 0, 0);
  ObfDereferenceObject(v25);
  v36 = (struct _DEVICE_OBJECT *)BugCheckParameter2;
  IopDecrementDeviceObjectRef(BugCheckParameter2, 0LL, 0LL, v37);
  v14 = v58;
  if ( (int)v58 >= 0 )
  {
    v40 = IopMountInitializeVpb((__int64)BugCheckParameter1, (__int64)Object, v51, v48);
    *v60 = v40;
LABEL_42:
    v21 = v51;
    v20 = a2;
    goto LABEL_18;
  }
  if ( ((_DWORD)v58 == -1073741661
     || (_DWORD)v58 == -1073741662
     || (unsigned int)(v58 + 1073741805) <= 1
     || (_DWORD)v58 == -2147483626
     || (_DWORD)v58 == -1073741643
     || (_DWORD)v58 == -1073741806)
    && *((_QWORD *)&v58 + 1) == 1LL )
  {
    goto LABEL_25;
  }
  if ( v54 != LODWORD(IopPerfIoTrackingLock.KcsanThread) )
  {
    v18 = (__int64 **)&v59;
    *(_QWORD *)&v59 = *v19;
    v14 = -1073741489;
LABEL_79:
    if ( v14 != -1073741489 && FsRtlIsTotalDeviceFailure(v14) )
    {
      if ( !a2 || v61 == v19 )
        goto LABEL_25;
      v18 = *(__int64 ***)(v19[1] + 8);
    }
    goto LABEL_42;
  }
  if ( (_DWORD)v58 != -1073741412 )
    goto LABEL_79;
  LOBYTE(v38) = 1;
  IopIncrementDeviceObjectRefCount((ULONG_PTR)v36, v38, v39);
  ExReleaseResourceLite(&IopDatabaseResource);
  if ( !a3 )
  {
    KeSetEvent(&BugCheckParameter1->DeviceLock, 0, 0);
    v9 = 0;
  }
  CurrentThread = (struct _KTHREAD *)v53;
  KeLeaveCriticalRegionThread(v53);
  IopLoadFileSystemDriver(v36);
  if ( !a3 )
  {
    v14 = IopWaitForLockAlertable(&BugCheckParameter1->DeviceLock, *(_BYTE *)(v53 + 562), a4);
    if ( v14 < 0 )
    {
      ObfDereferenceObject(Object);
      KeLeaveCriticalRegion();
      goto LABEL_27;
    }
    v9 = 1;
  }
  --*(_WORD *)(v53 + 484);
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v42 = IopQueryVpbFlagsSafe((__int64)BugCheckParameter1);
  if ( (v42 & 8) != 0 )
  {
    v14 = -1073741632;
    goto LABEL_22;
  }
  if ( (v42 & 1) == 0 )
  {
    v18 = (__int64 **)&v59;
    *(_QWORD *)&v59 = *v19;
    v14 = -1073741489;
    goto LABEL_42;
  }
  ObfDereferenceObject(Object);
  v14 = 0;
LABEL_26:
  ExReleaseResourceLite(&IopDatabaseResource);
LABEL_27:
  if ( v9 )
  {
    KeSetEvent(&BugCheckParameter1->DeviceLock, 0, 0);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( IsThisAnNtAsSystem )
  {
    if ( v47 && MmIsThisAnNtAsSystem() )
    {
      if ( v14 < 0 )
      {
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 2) != 0 )
          McTemplateK0jhzr1d_EtwWriteTransfer(
            v44,
            v43,
            (const GUID *)ActivityIdThread,
            (__int64)&v63,
            Length >> 1,
            (__int64)DosName.Buffer,
            v14);
      }
      else if ( (Microsoft_Windows_Kernel_IOEnableBits & 1) != 0 )
      {
        McTemplateK0jhzr1_EtwWriteTransfer(
          v44,
          (__int64)IoMgr_MountSucceeded,
          (__int64)ActivityIdThread,
          (__int64)&v63,
          Length >> 1,
          (__int64)DosName.Buffer);
      }
    }
    if ( DosName.Buffer )
      ExFreePoolWithTag(DosName.Buffer, 0);
  }
  if ( v14 < 0 && (BugCheckParameter1->Flags & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
    KeBugCheckEx(0xEDu, (ULONG_PTR)BugCheckParameter1, v14, 0LL, 0LL);
LABEL_31:
  ExReleaseRundownProtection_0(&IopFilesystemDatabaseShutdownRundown);
  return (unsigned int)v14;
}
