/*
 * XREFs of UsbhBusIf_SuspendChildHub @ 0x1400370A0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSyncSuspendPdoPort @ 0x1400113C4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhSetPdoIdleReady @ 0x1400116C0 (UsbhSetPdoIdleReady.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     UsbhSet_Pdo_Dx @ 0x14001451C (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhBusIf_SuspendChildHub(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rsi
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
  v7 = UsbhSyncSuspendPdoPort((__int64)(v6 + 236), (__int64)DeviceObject, 0);
  if ( v7 >= 0 )
  {
    UsbhSet_Pdo_Dx(DeviceObject, (POWER_STATE)3);
    v8 = FdoExt(v3);
    UsbhSetPdoIdleReady(v3, (__int64)DeviceObject, (__int64)(v8 + 478));
  }
  UsbhUnlatchPdo(v3, v5, 0LL, 0x48536942u);
  return (unsigned int)v7;
}
