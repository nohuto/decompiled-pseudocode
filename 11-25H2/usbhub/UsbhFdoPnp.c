/*
 * XREFs of UsbhFdoPnp @ 0x140038270
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhFdoPnp_StartDevice @ 0x1400504F0 (UsbhFdoPnp_StartDevice.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall UsbhFdoPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  _DWORD *v6; // rbx
  int MinorFunction; // r9d
  KIRQL v8; // al
  PDEVICE_OBJECT *v10; // rax

  v4 = FdoExt((__int64)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v4[5] = MinorFunction;
  *((_BYTE *)v4 + (((unsigned __int8)_InterlockedExchangeAdd(v4 + 316, 1u) + 1) & 0xF) + 1268) = MinorFunction;
  v8 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5A0 = (__int64)&dword_14006F5A8;
  if ( v6[314] && CurrentStackLocation->MinorFunction < 0x20u )
  {
    qword_14006F5A0 = 0LL;
    KeReleaseSpinLock(&HubG, v8);
    return funcs_140038321[2 * CurrentStackLocation->MinorFunction](DeviceObject, Irp);
  }
  else
  {
    qword_14006F5A0 = 0LL;
    KeReleaseSpinLock(&HubG, v8);
    v10 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(v10[151], Irp);
  }
}
