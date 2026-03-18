/*
 * XREFs of UsbhAcquireFdoPwrLock @ 0x1400316B0
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x14000EBA4 (UsbhPdoDevicePowerState.c)
 *     UsbhFdoD0Worker_Action @ 0x14002F4B0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSystemPowerState @ 0x14002F8C0 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x140030460 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1400307B0 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhPdoSystemPowerState @ 0x140030D54 (UsbhPdoSystemPowerState.c)
 *     UsbhFdoResetPdoPort @ 0x140040B3C (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140049AB8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoD0PoComplete_Action @ 0x14004A820 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoDevicePowerState @ 0x14004AAA8 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x14004AE30 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004B820 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhPdoSetD0_Finish @ 0x14004BED4 (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D220 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

__int64 __fastcall UsbhAcquireFdoPwrLock(__int64 a1, KSPIN_LOCK a2, int a3, int a4)
{
  KSPIN_LOCK *v7; // rdi
  KIRQL v8; // al
  int v9; // ecx
  __int64 result; // rax

  v7 = (KSPIN_LOCK *)FdoExt(a1);
  v8 = KeAcquireSpinLockRaiseToDpc(v7 + 632);
  v9 = *((_DWORD *)v7 + 1043);
  *((_BYTE *)v7 + 5064) = v8;
  *(_DWORD *)(a2 + 44) = a3;
  *(_DWORD *)(a2 + 36) = a4;
  *(_DWORD *)(a2 + 40) = v9;
  *(_DWORD *)(a2 + 32) = 844055622;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  result = *((unsigned int *)v7 + 1043);
  v7[168] = a2;
  return result;
}
