/*
 * XREFs of UsbhReleaseFdoPwrLock @ 0x14002B05C
 * Callers:
 *     UsbhPdoSetDx @ 0x140012618 (UsbhPdoSetDx.c)
 *     UsbhSS_PdoWakeWorker @ 0x1400145D0 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 *     UsbhFdoReturnPortStatus @ 0x140017DD0 (UsbhFdoReturnPortStatus.c)
 *     UsbhFdoSystemPowerState @ 0x140028454 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x140029C80 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x14002A080 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002A47C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhPdoSystemPowerState @ 0x14002A640 (UsbhPdoSystemPowerState.c)
 *     UsbhFdoD0Worker_Action @ 0x14002B2F0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoResetPdoPort @ 0x14004063C (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x14004964C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoD0PoComplete_Action @ 0x14004A3D0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoDevicePowerState @ 0x14004A658 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x14004A9E0 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSetPowerS0_Action @ 0x14004B144 (UsbhFdoSetPowerS0_Action.c)
 *     UsbhFdoSetPowerSx_Action @ 0x14004B27C (UsbhFdoSetPowerSx_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004B3D0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhPdoSetD0_Finish @ 0x14004BA84 (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D810 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

void __fastcall UsbhReleaseFdoPwrLock(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  KIRQL v4; // dl

  v3 = FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 32) = 1734964085;
  v4 = *((_BYTE *)v3 + 5064);
  *((_QWORD *)v3 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v3 + 632, v4);
}
