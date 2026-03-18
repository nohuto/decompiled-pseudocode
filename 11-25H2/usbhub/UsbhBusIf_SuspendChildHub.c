/*
 * XREFs of UsbhBusIf_SuspendChildHub @ 0x140034DF0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1400082B0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     UsbhSet_Pdo_Dx @ 0x140010FD8 (UsbhSet_Pdo_Dx.c)
 *     UsbhSetPdoIdleReady @ 0x140017984 (UsbhSetPdoIdleReady.c)
 *     UsbhSyncSuspendPdoPort @ 0x140034ED4 (UsbhSyncSuspendPdoPort.c)
 */

__int64 __fastcall UsbhBusIf_SuspendChildHub(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v5; // rdi
  _DWORD *v6; // rax
  int v7; // ebp
  _DWORD *v8; // rax

  v2 = PdoExt((__int64)DeviceObject);
  v3 = *((_QWORD *)v2 + 148);
  FdoExt(v3);
  if ( (v2[355] & 4) == 0 )
    return 3221225473LL;
  v5 = UsbhLatchPdo(v3, *((_WORD *)v2 + 714), 0LL, 0x48536942u);
  if ( !v5 )
    return 3221225635LL;
  v6 = PdoExt((__int64)DeviceObject);
  v7 = UsbhSyncSuspendPdoPort(v6 + 236, DeviceObject, 0LL);
  if ( v7 >= 0 )
  {
    UsbhSet_Pdo_Dx(DeviceObject, (POWER_STATE)3);
    v8 = FdoExt(v3);
    UsbhSetPdoIdleReady(v3, (__int64)DeviceObject, (__int64)(v8 + 478));
  }
  UsbhUnlatchPdo(v3, v5, 0LL, 0x48536942u);
  return (unsigned int)v7;
}
