/*
 * XREFs of IopRemoveDevice @ 0x1409B1DD8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404CBC6C (PnpRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x1407A7170 (PnpDisableDevice.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x1407A782C (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409B7700 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140AE19D4 (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PnpFindMountableDevice @ 0x1404DEC20 (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1404F83B0 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1404F871C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1404F87B4 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1405CCFB4 (IopDecrementDeviceObjectHandleCount.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopInvalidateVolumesForDevice @ 0x14091958C (IopInvalidateVolumesForDevice.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeFlags @ 0x1409B01B0 (PipClearDevNodeFlags.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 *     PipClearDevNodeUserFlags @ 0x1409B1158 (PipClearDevNodeUserFlags.c)
 *     PiSwStopDestroy @ 0x1409B2018 (PiSwStopDestroy.c)
 *     IopUncacheInterfaceInformation @ 0x1409B21E4 (IopUncacheInterfaceInformation.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409B2334 (PiSwProcessParentRemoveIrp.c)
 *     PoFxAbandonDevice @ 0x140B083E4 (PoFxAbandonDevice.c)
 *     IopDecDisableableDepends @ 0x140B4C090 (IopDecDisableableDepends.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, int a2)
{
  int v2; // r15d
  _DWORD *DeviceNode; // rsi
  PDEVICE_OBJECT v6; // rbp
  int v7; // r14d
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rbp
  __int128 v16; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v17[80]; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v16 = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  PiPnpRtlBeginOperation(&P);
  if ( a2 == 2 )
    IopUncacheInterfaceInformation(DeviceObject, 1LL);
  memset_0(v17, 0, 0x48uLL);
  v17[0] = 27;
  v17[1] = a2;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v2 = 1;
    PnpLockMountableDevice(DeviceObject);
    v6 = (PDEVICE_OBJECT)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)&v16);
    PnpUnlockMountableDevice((__int64)DeviceObject);
  }
  else
  {
    v6 = DeviceObject;
  }
  if ( a2 == 23 || a2 == 2 )
  {
    if ( (DeviceNode[100] & 8) != 0 )
    {
      PipClearDevNodeUserFlags((__int64)DeviceNode, 8);
      IopDecDisableableDepends(DeviceNode);
    }
    if ( a2 == 2 )
    {
      PiSwProcessParentRemoveIrp(DeviceObject);
      PiSwStopDestroy(v9, *((_QWORD *)DeviceNode + 6), *((_QWORD *)DeviceNode + 4));
    }
  }
  v7 = IopSynchronousCall(v6, (__int64)v17, -1073741637, 0LL, 0LL);
  if ( v2 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( (unsigned int)(a2 - 2) <= 1 )
      PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 0, (ULONG_PTR *)&v16);
    v15 = (void *)*((_QWORD *)&v16 + 1);
    if ( *((_QWORD *)&v16 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v16 + 1), v12, v13, v14);
      ObfDereferenceObject(v15);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( (a2 != 1 || v7 < 0) && a2 != 23 )
    {
LABEL_11:
      if ( a2 != 2 )
        goto LABEL_12;
      goto LABEL_19;
    }
    v7 = IopInvalidateVolumesForDevice(DeviceObject);
  }
  if ( a2 != 23 )
    goto LABEL_11;
LABEL_19:
  PoFxAbandonDevice(DeviceNode);
  DeviceNode[39] = 0;
  if ( a2 == 2 )
  {
    PipClearDevNodeFlags((__int64)DeviceNode, 4104);
    v10 = *((_QWORD *)DeviceNode + 81);
    if ( v10 )
    {
      if ( (v10 & 1) != 0 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        *((_QWORD *)DeviceNode + 81) = v11;
        --*(_DWORD *)(v11 + 656);
      }
    }
  }
LABEL_12:
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return (unsigned int)v7;
}
