/*
 * XREFs of UsbhCanSuspend @ 0x14004A054
 * Callers:
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x14004AF80 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004B3D0 (UsbhFdoSxIoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

bool __fastcall UsbhCanSuspend(__int64 a1, int a2)
{
  return FdoExt(a1)[a2 + 1252] == 3;
}
