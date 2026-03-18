/*
 * XREFs of UsbhFdoPnp @ 0x1400365D0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhFdoPnp_StartDevice @ 0x1400509D0 (UsbhFdoPnp_StartDevice.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall UsbhFdoPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  _DWORD *v6; // rbx
  int MinorFunction; // r8d
  KIRQL v8; // al
  PDEVICE_OBJECT *v10; // rax

  v4 = FdoExt((__int64)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v4[5] = MinorFunction;
  *((_BYTE *)v4 + (((unsigned __int8)_InterlockedExchangeAdd(v4 + 316, 1u) + 1) & 0xF) + 1268) = MinorFunction;
  v8 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_140070600 = (__int64)&dword_140070608;
  if ( v6[314] && CurrentStackLocation->MinorFunction < 0x20u )
  {
    qword_140070600 = 0LL;
    KeReleaseSpinLock(&HubG, v8);
    return funcs_140036681[2 * CurrentStackLocation->MinorFunction](DeviceObject, Irp);
  }
  else
  {
    qword_140070600 = 0LL;
    KeReleaseSpinLock(&HubG, v8);
    v10 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(v10[151], Irp);
  }
}
