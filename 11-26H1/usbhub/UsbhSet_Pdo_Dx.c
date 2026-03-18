/*
 * XREFs of UsbhSet_Pdo_Dx @ 0x14001451C
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1400370A0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x140038F0C (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoSetD0_Finish @ 0x14004BA84 (UsbhPdoSetD0_Finish.c)
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 */

POWER_STATE __fastcall UsbhSet_Pdo_Dx(PDEVICE_OBJECT DeviceObject, POWER_STATE State)
{
  POWER_STATE result; // eax
  __int32 v5; // ebx
  __int32 v6; // ebx
  unsigned __int16 v7; // bx
  __int64 v8; // rax
  __int64 v9; // r8

  *(POWER_STATE *)(PdoExt(DeviceObject) + 788) = State;
  result.SystemState = PoSetPowerState(DeviceObject, DevicePowerState, State).SystemState;
  v5 = State.SystemState - 1;
  if ( !v5 )
  {
    v7 = *(_WORD *)(PdoExt(DeviceObject) + 1428);
    v8 = PdoExt(DeviceObject);
    v9 = 2LL;
    return (POWER_STATE)UsbhSshSetPortsBusyState(*(_QWORD *)(v8 + 1184), v7, v9, 0LL);
  }
  v6 = v5 - 1;
  if ( !v6 || (unsigned int)(v6 - 1) < 2 )
  {
    v7 = *(_WORD *)(PdoExt(DeviceObject) + 1428);
    v8 = PdoExt(DeviceObject);
    v9 = 1LL;
    return (POWER_STATE)UsbhSshSetPortsBusyState(*(_QWORD *)(v8 + 1184), v7, v9, 0LL);
  }
  return result;
}
