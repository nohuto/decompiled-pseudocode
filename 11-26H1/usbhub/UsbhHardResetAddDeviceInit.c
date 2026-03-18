/*
 * XREFs of UsbhHardResetAddDeviceInit @ 0x14004C040
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

void __fastcall UsbhHardResetAddDeviceInit(__int64 a1)
{
  _DWORD *v1; // rbx

  v1 = FdoExt(a1);
  KeInitializeEvent((PRKEVENT)(v1 + 712), NotificationEvent, 1u);
  KeInitializeSemaphore((PRKSEMAPHORE)v1 + 88, 1, 1);
  v1[702] = 1;
}
