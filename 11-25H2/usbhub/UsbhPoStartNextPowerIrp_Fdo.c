/*
 * XREFs of UsbhPoStartNextPowerIrp_Fdo @ 0x140030C98
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x14002F8C0 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1400307B0 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400325B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x14004A820 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoDevicePowerState @ 0x14004AAA8 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x14004AE30 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoPower_QueryPower @ 0x14004B040 (UsbhFdoPower_QueryPower.c)
 *     UsbhFdoPower_SetPower @ 0x14004B130 (UsbhFdoPower_SetPower.c)
 *     UsbhFdoQueryDevicePowerDxPoCompletion @ 0x14004B1F0 (UsbhFdoQueryDevicePowerDxPoCompletion.c)
 *     UsbhFdoQuerySystemPowerState @ 0x14004B294 (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x14004B3D0 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 *     UsbhFdoSetPowerD0_Action @ 0x14004B4C0 (UsbhFdoSetPowerD0_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004B820 (UsbhFdoSxIoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

void __fastcall UsbhPoStartNextPowerIrp_Fdo(__int64 a1, IRP *a2, int a3)
{
  _DWORD *v6; // rax
  __int64 CurrentStackLocation; // rsi
  _DWORD *v8; // r11
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // r11

  v6 = FdoExt(a1);
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v8 = v6;
  v9 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v9 <= 1 )
  {
    Log(a1, 16, 1347374641, *(_QWORD *)&v8[2 * v9 + 210], (__int64)a2);
    Log(a1, 16, 1347374642, *(_QWORD *)(v11 + 8 * v10 + 856), CurrentStackLocation);
    *(_QWORD *)(v13 + 8 * v12 + 840) = 0LL;
    *(_QWORD *)(v13 + 8 * v12 + 856) = 0LL;
    *(_DWORD *)(v13 + 4 * v12 + 872) = a3;
    PoStartNextPowerIrp(a2);
  }
}
