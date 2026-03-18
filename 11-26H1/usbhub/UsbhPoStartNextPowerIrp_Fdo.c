/*
 * XREFs of UsbhPoStartNextPowerIrp_Fdo @ 0x14002A57C
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x140028454 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoS0IoComplete_Action @ 0x14002A080 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoSetPowerDx_Action @ 0x14003743C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x14004A3D0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoDevicePowerState @ 0x14004A658 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x14004A9E0 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoPower_QueryPower @ 0x14004ABF0 (UsbhFdoPower_QueryPower.c)
 *     UsbhFdoPower_SetPower @ 0x14004ACE0 (UsbhFdoPower_SetPower.c)
 *     UsbhFdoQueryDevicePowerDxPoCompletion @ 0x14004ADA0 (UsbhFdoQueryDevicePowerDxPoCompletion.c)
 *     UsbhFdoQuerySystemPowerState @ 0x14004AE44 (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x14004AF80 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 *     UsbhFdoSetPowerD0_Action @ 0x14004B074 (UsbhFdoSetPowerD0_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004B3D0 (UsbhFdoSxIoComplete_Action.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
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
