/*
 * XREFs of IopMountVolume @ 0x140B1E87C
 * Callers:
 *     IopCheckVpbMounted @ 0x14044A8C8 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x140B47540 (IoVerifyVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1403EAEB0 (IopIncrementDeviceObjectRefCount.c)
 *     IopMountInitializeVpb @ 0x14044A814 (IopMountInitializeVpb.c)
 *     IopAllocateIrpWithExtension @ 0x14045DC8C (IopAllocateIrpWithExtension.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     FsRtlIsTotalDeviceFailure @ 0x14046DC60 (FsRtlIsTotalDeviceFailure.c)
 *     IoGetActivityIdThread @ 0x14046F440 (IoGetActivityIdThread.c)
 *     McTemplateK0jhzr1_EtwWriteTransfer @ 0x14049E764 (McTemplateK0jhzr1_EtwWriteTransfer.c)
 *     IopWaitForLockAlertable @ 0x1404AA8E8 (IopWaitForLockAlertable.c)
 *     IopQueryVpbFlagsSafe @ 0x1404CFBEC (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x1404E6E00 (MmIsThisAnNtAsSystem.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     McTemplateK0jhzr1d_EtwWriteTransfer @ 0x1405CAC9C (McTemplateK0jhzr1d_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     IopLoadFileSystemDriver @ 0x140795094 (IopLoadFileSystemDriver.c)
 *     IoVolumeDeviceToGuid @ 0x140907B30 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToDosName @ 0x1409FB9E0 (IoVolumeDeviceToDosName.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int128 *p_Lock; // rsi
  __int128 *v19; // r15
  char v20; // dl
  int v21; // ecx
  __int128 *v22; // rax
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _DEVICE_OBJECT *v27; // r14
  char v28; // bl
  struct _DEVICE_OBJECT *v29; // rax
  __int64 v30; // rcx
  __int64 IrpWithExtension; // rax
  IRP *v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  NTSTATUS v37; // eax
  struct _DEVICE_OBJECT *v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r8
  ULONG_PTR v41; // rax
  struct _KTHREAD *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  char v45; // al
  __int64 v46; // rdx
  __int64 v47; // rcx
  BOOLEAN IsThisAnNtAsSystem; // [rsp+42h] [rbp-BEh]
  char v50; // [rsp+43h] [rbp-BDh]
  char v51; // [rsp+44h] [rbp-BCh]
  int v54; // [rsp+48h] [rbp-B8h]
  struct _DEVICE_OBJECT *Object; // [rsp+50h] [rbp-B0h]
  __int64 v56; // [rsp+58h] [rbp-A8h]
  int v57; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *ActivityIdThread; // [rsp+68h] [rbp-98h]
  UNICODE_STRING DosName; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h]
  __int128 v61; // [rsp+88h] [rbp-78h] BYREF
  __int128 v62; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR *v63; // [rsp+A8h] [rbp-58h]
  __int128 *v64; // [rsp+B0h] [rbp-50h]
  struct _KEVENT Event; // [rsp+B8h] [rbp-48h] BYREF
  GUID v66; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v67[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v68; // [rsp+100h] [rbp+0h]
  int v69; // [rsp+108h] [rbp+8h]

  v63 = a5;
  v5 = 0LL;
  v50 = 0;
  memset(&Event, 0, sizeof(Event));
  ActivityIdThread = 0LL;
  v9 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v66 = 0LL;
  DosName = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v10 = IsThisAnNtAsSystem;
  v68 = 0LL;
  v69 = 0;
  memset(v67, 0, sizeof(v67));
  CurrentThread = KeGetCurrentThread();
  v56 = (__int64)CurrentThread;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&IopSessionNotificationLock.WaitBlockFill11[136]) )
    return 3221225865LL;
  if ( IsThisAnNtAsSystem )
  {
    ActivityIdThread = IoGetActivityIdThread();
    v5 = (__int64)ActivityIdThread;
    IoVolumeDeviceToGuid(BugCheckParameter1, &v66);
    IoVolumeDeviceToDosName(BugCheckParameter1, &DosName);
  }
  if ( !a3 )
  {
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
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
  ExAcquireResourceSharedLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 1u);
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
        (__int64)&v66,
        Length >> 1,
        (__int64)DosName.Buffer);
    v50 = 1;
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
    p_Lock = (__int128 *)&IopSessionNotificationLock.WaitBlock[2].Thread->Header.Lock;
    v19 = (__int128 *)&IopSessionNotificationLock.WaitBlockFill11[120];
  }
  else if ( DeviceType == 2 )
  {
    p_Lock = (__int128 *)IopSessionNotificationLock.WaitBlock[2].WaitListEntry.Blink;
    v19 = (__int128 *)&IopSessionNotificationLock.WaitBlockFill11[104];
  }
  else
  {
    p_Lock = (__int128 *)IopSessionNotificationLock.WaitBlock[1].SparePtr;
    v19 = (__int128 *)&IopSessionNotificationLock.WaitBlockFill11[88];
  }
  v20 = a2;
  v21 = BugCheckParameter1->Vpb->Flags & 0x10;
  v54 = v21;
  while ( 1 )
  {
    if ( p_Lock == v19 )
    {
LABEL_25:
      CurrentThread = (struct _KTHREAD *)v56;
      if ( v14 >= 0 )
        goto LABEL_26;
LABEL_22:
      ObfDereferenceObject(Object);
      goto LABEL_26;
    }
    if ( v14 >= 0 )
    {
      CurrentThread = (struct _KTHREAD *)v56;
      goto LABEL_26;
    }
    v22 = *(__int128 **)p_Lock;
    v23 = *(_QWORD *)p_Lock == (_QWORD)v19;
    v64 = *(__int128 **)p_Lock;
    v51 = v23;
    if ( !v20 && v22 == v19 && p_Lock != *(__int128 **)v19 )
      goto LABEL_21;
    if ( !v21 || v22 == v19 )
      break;
LABEL_18:
    p_Lock = *(__int128 **)p_Lock;
  }
  v27 = (struct _DEVICE_OBJECT *)(p_Lock - 5);
  v28 = 1;
  v29 = (struct _DEVICE_OBJECT *)*((_QWORD *)p_Lock - 7);
  BugCheckParameter2 = (ULONG_PTR)(p_Lock - 5);
  while ( v29 )
  {
    v27 = v29;
    ++v28;
    v29 = v29->AttachedDevice;
  }
  KeResetEvent(&Event);
  IrpWithExtension = IopAllocateIrpWithExtension(v30, Object->StackSize + v28, 0);
  v32 = (IRP *)IrpWithExtension;
  if ( !IrpWithExtension )
  {
    v14 = -1073741670;
LABEL_21:
    CurrentThread = (struct _KTHREAD *)v56;
    goto LABEL_22;
  }
  v33 = *(_QWORD *)(IrpWithExtension + 184);
  *(_DWORD *)(IrpWithExtension + 16) = 66;
  *(_QWORD *)(IrpWithExtension + 24) = v67;
  *(_QWORD *)(IrpWithExtension + 80) = &Event;
  *(_QWORD *)(IrpWithExtension + 72) = &v61;
  *(_QWORD *)(IrpWithExtension + 152) = v56;
  *(_BYTE *)(IrpWithExtension + 64) = 0;
  *(_BYTE *)(v33 - 70) = a2;
  *(_WORD *)(v33 - 72) = 269;
  *(_QWORD *)(v33 - 64) = BugCheckParameter1->Vpb;
  *(_QWORD *)(v33 - 56) = Object;
  v34 = IopFsRegistrationOps;
  *(_DWORD *)(v33 - 48) = 44;
  v57 = v34;
  PsReferenceSiloContext(v27);
  LOBYTE(v35) = 1;
  IopIncrementDeviceObjectRefCount(BugCheckParameter2, v35, v36);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16]);
  v37 = IofCallDriver(v27, v32);
  if ( v37 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    LODWORD(v61) = v37;
    *((_QWORD *)&v61 + 1) = 0LL;
  }
  ExAcquireResourceSharedLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 1u);
  _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
  if ( IopMountCompletionWaiters )
    KeSetEvent(&IopMountCompletionEvent, 0, 0);
  ObfDereferenceObject(v27);
  v38 = (struct _DEVICE_OBJECT *)BugCheckParameter2;
  IopDecrementDeviceObjectRef(BugCheckParameter2, 0LL, 0LL);
  v14 = v61;
  if ( (int)v61 >= 0 )
  {
    v41 = IopMountInitializeVpb((__int64)BugCheckParameter1, (__int64)Object, v54, v51);
    *v63 = v41;
LABEL_42:
    v21 = v54;
    v20 = a2;
    goto LABEL_18;
  }
  if ( ((_DWORD)v61 == -1073741661
     || (_DWORD)v61 == -1073741662
     || (unsigned int)(v61 + 1073741805) <= 1
     || (_DWORD)v61 == -2147483626
     || (_DWORD)v61 == -1073741643
     || (_DWORD)v61 == -1073741806)
    && *((_QWORD *)&v61 + 1) == 1LL )
  {
    goto LABEL_25;
  }
  if ( v57 != IopFsRegistrationOps )
  {
    p_Lock = &v62;
    *(_QWORD *)&v62 = *(_QWORD *)v19;
    v14 = -1073741489;
LABEL_79:
    if ( v14 != -1073741489 && FsRtlIsTotalDeviceFailure(v14) )
    {
      if ( !a2 || v64 == v19 )
        goto LABEL_25;
      p_Lock = *(__int128 **)(*((_QWORD *)v19 + 1) + 8LL);
    }
    goto LABEL_42;
  }
  if ( (_DWORD)v61 != -1073741412 )
    goto LABEL_79;
  LOBYTE(v39) = 1;
  IopIncrementDeviceObjectRefCount((ULONG_PTR)v38, v39, v40);
  ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16]);
  if ( !a3 )
  {
    KeSetEvent(&BugCheckParameter1->DeviceLock, 0, 0);
    v9 = 0;
  }
  CurrentThread = (struct _KTHREAD *)v56;
  KeLeaveCriticalRegionThread(v56, v43, v44);
  IopLoadFileSystemDriver(v38);
  if ( !a3 )
  {
    v14 = IopWaitForLockAlertable(&BugCheckParameter1->DeviceLock, *(_BYTE *)(v56 + 562), a4);
    if ( v14 < 0 )
    {
      ObfDereferenceObject(Object);
      KeLeaveCriticalRegion();
      goto LABEL_27;
    }
    v9 = 1;
  }
  --*(_WORD *)(v56 + 484);
  ExAcquireResourceSharedLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 1u);
  v45 = IopQueryVpbFlagsSafe((__int64)BugCheckParameter1);
  if ( (v45 & 8) != 0 )
  {
    v14 = -1073741632;
    goto LABEL_22;
  }
  if ( (v45 & 1) == 0 )
  {
    p_Lock = &v62;
    *(_QWORD *)&v62 = *(_QWORD *)v19;
    v14 = -1073741489;
    goto LABEL_42;
  }
  ObfDereferenceObject(Object);
  v14 = 0;
LABEL_26:
  ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16]);
LABEL_27:
  if ( v9 )
  {
    KeSetEvent(&BugCheckParameter1->DeviceLock, 0, 0);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v24, v25);
  if ( IsThisAnNtAsSystem )
  {
    if ( v50 && MmIsThisAnNtAsSystem() )
    {
      if ( v14 < 0 )
      {
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 2) != 0 )
          McTemplateK0jhzr1d_EtwWriteTransfer(
            v47,
            v46,
            (const GUID *)ActivityIdThread,
            (__int64)&v66,
            Length >> 1,
            (__int64)DosName.Buffer,
            v14);
      }
      else if ( (Microsoft_Windows_Kernel_IOEnableBits & 1) != 0 )
      {
        McTemplateK0jhzr1_EtwWriteTransfer(
          v47,
          (__int64)IoMgr_MountSucceeded,
          (__int64)ActivityIdThread,
          (__int64)&v66,
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
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&IopSessionNotificationLock.WaitBlockFill11[136]);
  return (unsigned int)v14;
}
