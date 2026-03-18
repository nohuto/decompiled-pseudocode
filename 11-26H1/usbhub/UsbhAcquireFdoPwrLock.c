/*
 * XREFs of UsbhAcquireFdoPwrLock @ 0x14002AFD0
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhFdoSystemPowerState @ 0x140028454 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x140029C80 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x14002A080 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhPdoSystemPowerState @ 0x14002A640 (UsbhPdoSystemPowerState.c)
 *     UsbhFdoD0Worker_Action @ 0x14002B2F0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoResetPdoPort @ 0x14004063C (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x14004964C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoD0PoComplete_Action @ 0x14004A3D0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoDevicePowerState @ 0x14004A658 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x14004A9E0 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004B3D0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhPdoSetD0_Finish @ 0x14004BA84 (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D810 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
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
