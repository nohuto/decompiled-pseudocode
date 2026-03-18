/*
 * XREFs of UsbhReset2CycleDevice @ 0x140058C00
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCancelResetTimeout @ 0x140012034 (UsbhCancelResetTimeout.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14001B830 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhAssertBusLock @ 0x140038DE4 (UsbhAssertBusLock.c)
 *     UsbhPortCycle @ 0x140057F20 (UsbhPortCycle.c)
 */

__int64 __fastcall UsbhReset2CycleDevice(__int64 a1, __int64 a2, __int64 a3)
{
  UsbhCancelResetTimeout(a1, a2, 1);
  UsbhAssertBusLock(a1);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  return UsbhPortCycle(a1, a2, a3);
}
