/*
 * XREFs of IoVerifyVolume @ 0x140B49570
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     IopDecrementVpbRefCount @ 0x1402FB760 (IopDecrementVpbRefCount.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopDereferenceVpbAndFree @ 0x140463630 (IopDereferenceVpbAndFree.c)
 *     IopReferenceVerifyVpb @ 0x1404F7A80 (IopReferenceVerifyVpb.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 *     PoVolumeDevice @ 0x140B55568 (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x140B66E14 (IopCreateVpb.c)
 */

NTSTATUS __stdcall IoVerifyVolume(PDEVICE_OBJECT DeviceObject, BOOLEAN AllowRawMount)
{
  struct _KEVENT *p_DeviceLock; // r15
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v6; // edi
  __int64 v7; // rdx
  PDEVICE_OBJECT v8; // r12
  PDEVICE_OBJECT v9; // rsi
  struct _DEVICE_OBJECT *i; // rax
  __int64 Irp; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  IRP *v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int128 v23; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF
  PDEVICE_OBJECT DeviceObjecta; // [rsp+B0h] [rbp+50h] BYREF

  p_DeviceLock = &DeviceObject->DeviceLock;
  memset(&Event, 0, sizeof(Event));
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  DeviceObjecta = 0LL;
  v25 = 0LL;
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !IopReferenceVerifyVpb((__int64)DeviceObject, (ULONG_PTR *)&v25, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_11:
    if ( (int)IopCreateVpb(DeviceObject) < 0
      || (PoVolumeDevice(DeviceObject),
          v25 = 0LL,
          (int)IopMountVolume(DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v25) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v25 )
    {
      LOBYTE(v19) = 1;
      IopDecrementVpbRefCount(v25, v19, v20, v21);
    }
LABEL_16:
    KeSetEvent(p_DeviceLock, 0, 0);
    goto LABEL_17;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = DeviceObjecta;
  v9 = DeviceObjecta;
  for ( i = DeviceObjecta->AttachedDevice; i; i = i->AttachedDevice )
    v9 = i;
  LOBYTE(v7) = v9->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v9, v7, 0LL);
  v14 = (IRP *)Irp;
  if ( Irp )
  {
    *(_BYTE *)(Irp + 64) = 0;
    v15 = v25;
    *(_DWORD *)(Irp + 16) = 66;
    *(_QWORD *)(Irp + 80) = &Event;
    *(_QWORD *)(Irp + 72) = &v23;
    v16 = *(_QWORD *)(Irp + 184);
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_WORD *)(v16 - 72) = 525;
    *(_BYTE *)(v16 - 70) = AllowRawMount != 0;
    *(_QWORD *)(v16 - 64) = v15;
    *(_QWORD *)(v16 - 56) = v8;
    IopQueueThreadIrp(Irp, v16);
    v6 = IofCallDriver(v9, v14);
    if ( v6 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v6 = v23;
    }
    IopDereferenceVpbAndFree(v15, v17, v18);
    if ( v6 != -1073741806 )
      goto LABEL_16;
    goto LABEL_11;
  }
  IopDereferenceVpbAndFree(v25, v12, v13);
  KeSetEvent(p_DeviceLock, 0, 0);
  v6 = -1073741670;
LABEL_17:
  KeLeaveCriticalRegion();
  return v6;
}
