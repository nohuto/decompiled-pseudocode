/*
 * XREFs of IopRemoveDevice @ 0x14090FCA8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404D23F4 (PnpRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x1407A4630 (PnpDisableDevice.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x1407A4CEC (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A8A8E0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140AE3ECC (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PnpFindMountableDevice @ 0x1404E5680 (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1404FEBC8 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1404FEF2C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1404FEFC4 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1405CA6E4 (IopDecrementDeviceObjectHandleCount.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PipClearDevNodeFlags @ 0x14090E080 (PipClearDevNodeFlags.c)
 *     IopSynchronousCall @ 0x14090E5F0 (IopSynchronousCall.c)
 *     PipClearDevNodeUserFlags @ 0x14090F028 (PipClearDevNodeUserFlags.c)
 *     PiSwStopDestroy @ 0x14090FEE8 (PiSwStopDestroy.c)
 *     IopUncacheInterfaceInformation @ 0x1409100B4 (IopUncacheInterfaceInformation.c)
 *     PiSwProcessParentRemoveIrp @ 0x140910204 (PiSwProcessParentRemoveIrp.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     IopInvalidateVolumesForDevice @ 0x140A34D8C (IopInvalidateVolumesForDevice.c)
 *     PoFxAbandonDevice @ 0x140B062B4 (PoFxAbandonDevice.c)
 *     IopDecDisableableDepends @ 0x140B4A300 (IopDecDisableableDepends.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  int v2; // r15d
  int v3; // ebx
  _DWORD *DeviceNode; // rsi
  PDEVICE_OBJECT v6; // rbp
  int v7; // r14d
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  void *v12; // rbp
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v14[80]; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a2;
  v13 = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  PiPnpRtlBeginOperation(&P, a2);
  if ( v3 == 2 )
    IopUncacheInterfaceInformation(DeviceObject, 1LL);
  memset_0(v14, 0, 0x48uLL);
  v14[0] = 27;
  v14[1] = v3;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v2 = 1;
    PnpLockMountableDevice(DeviceObject);
    v6 = (PDEVICE_OBJECT)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)&v13);
    PnpUnlockMountableDevice((__int64)DeviceObject);
  }
  else
  {
    v6 = DeviceObject;
  }
  if ( v3 == 23 || v3 == 2 )
  {
    if ( (DeviceNode[100] & 8) != 0 )
    {
      PipClearDevNodeUserFlags((__int64)DeviceNode, 8);
      IopDecDisableableDepends(DeviceNode);
    }
    if ( v3 == 2 )
    {
      PiSwProcessParentRemoveIrp(DeviceObject);
      PiSwStopDestroy(v9, *((_QWORD *)DeviceNode + 6), *((_QWORD *)DeviceNode + 4));
    }
  }
  v7 = IopSynchronousCall(v6, (__int64)v14, -1073741637, 0LL, 0LL);
  if ( v2 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( (unsigned int)(v3 - 2) <= 1 )
      PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 0, (ULONG_PTR *)&v13);
    v12 = (void *)*((_QWORD *)&v13 + 1);
    if ( *((_QWORD *)&v13 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v13 + 1));
      ObfDereferenceObject(v12);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( (v3 != 1 || v7 < 0) && v3 != 23 )
    {
LABEL_11:
      if ( v3 != 2 )
        goto LABEL_12;
      goto LABEL_19;
    }
    v7 = IopInvalidateVolumesForDevice(DeviceObject);
  }
  if ( v3 != 23 )
    goto LABEL_11;
LABEL_19:
  PoFxAbandonDevice(DeviceNode);
  DeviceNode[39] = 0;
  if ( v3 == 2 )
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
    PiPnpRtlEndOperation(P);
  return (unsigned int)v7;
}
