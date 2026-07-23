/*
 * XREFs of PiIrpQueryRemoveDevice @ 0x140AE1AFC
 * Callers:
 *     PnpDisableDevice @ 0x1407A7170 (PnpDisableDevice.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140AE19D4 (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PnpFindMountableDevice @ 0x1404DEC20 (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1404F83B0 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1404F871C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1404F87B4 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1405CCFB4 (IopDecrementDeviceObjectHandleCount.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopInvalidateVolumesForDevice @ 0x14091958C (IopInvalidateVolumesForDevice.c)
 *     PnpAsynchronousCall @ 0x140AE1C5C (PnpAsynchronousCall.c)
 */

__int64 __fastcall PiIrpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  int v4; // r14d
  PDEVICE_OBJECT v5; // rdi
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID v10; // rsi
  __int64 v12; // [rsp+38h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-21h] BYREF
  int v14; // [rsp+58h] [rbp-9h]
  int v15; // [rsp+5Ch] [rbp-5h]
  PVOID Object[2]; // [rsp+60h] [rbp-1h] BYREF
  _WORD v17[36]; // [rsp+70h] [rbp+Fh] BYREF

  v15 = 0;
  v4 = 0;
  *(_OWORD *)Object = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset_0(v17, 0, sizeof(v17));
  v17[0] = 283;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v4 = 1;
    PnpLockMountableDevice(DeviceObject);
    v5 = (PDEVICE_OBJECT)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)Object);
    PnpUnlockMountableDevice((__int64)DeviceObject);
  }
  else
  {
    v5 = DeviceObject;
  }
  v14 = -1073741823;
  v12 = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = PnpAsynchronousCall(v5, v17, PnpDiagnosticCompletionRoutine, &v12);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v14;
  }
  if ( a2 )
    *a2 = v12;
  if ( v4 )
  {
    PnpLockMountableDevice(DeviceObject);
    v10 = Object[1];
    if ( Object[1] )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)Object[1], v7, v8, v9);
      ObfDereferenceObject(v10);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( v6 >= 0 )
      return (unsigned int)IopInvalidateVolumesForDevice(DeviceObject);
  }
  return (unsigned int)v6;
}
