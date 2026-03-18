/*
 * XREFs of UsbhFdoPowerWorkerInternal @ 0x1400336E8
 * Callers:
 *     UsbhFdoPower @ 0x140033670 (UsbhFdoPower.c)
 *     UsbhFdoPowerWorker @ 0x14004AB70 (UsbhFdoPowerWorker.c)
 * Callees:
 *     UsbhFdoPower_WaitWake @ 0x14000B1F0 (UsbhFdoPower_WaitWake.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall UsbhFdoPowerWorkerInternal(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _DWORD *v6; // r10
  char QuadPart; // r8
  int MinorFunction; // r11d
  __int64 v9; // rax
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  PDEVICE_OBJECT *v17; // rax

  v4 = FdoExt((__int64)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  QuadPart = -1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( CurrentStackLocation->MinorFunction )
  {
    if ( (unsigned int)CurrentStackLocation->MinorFunction - 2 <= 1 )
    {
      QuadPart = LOBYTE(CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart) | 0x80;
      if ( CurrentStackLocation->Parameters.Create.Options != 1 )
        QuadPart = CurrentStackLocation->Parameters.LockControl.ByteOffset.QuadPart;
    }
  }
  else
  {
    QuadPart = CurrentStackLocation->Parameters.SetLock.Lock;
  }
  v9 = ((unsigned __int8)_InterlockedExchangeAdd(v4 + 321, 1u) + 1) & 0xF;
  *((_BYTE *)v6 + v9 + 1288) = MinorFunction;
  *((_BYTE *)v6 + v9 + 1304) = QuadPart;
  v6[4] = MinorFunction;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v11 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v12 = *((_DWORD *)DeviceExtension + 221);
        v13 = *((_QWORD *)DeviceExtension + 111);
        v14 = 32LL * ((v11 - 1) & v12);
        *(_DWORD *)(v14 + v13) = 1349477478;
        *(_QWORD *)(v14 + v13 + 8) = 0LL;
        *(_QWORD *)(v14 + v13 + 16) = 0LL;
        *(_QWORD *)(v14 + v13 + 24) = Irp;
      }
    }
  }
  v15 = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)v15 < 4u )
    return funcs_1400337C2[2 * v15](DeviceObject, Irp);
  v17 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(v17[151], Irp);
}
