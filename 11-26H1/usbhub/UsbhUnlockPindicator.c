/*
 * XREFs of UsbhUnlockPindicator @ 0x14003F3E8
 * Callers:
 *     Usbh_PIND_Disable_Action @ 0x14003F42C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_Enable_Action @ 0x14003F4FC (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x14003F594 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x14003F660 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x14003F750 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

LONG __fastcall UsbhUnlockPindicator(__int64 a1)
{
  struct _KSEMAPHORE *v2; // rax

  v2 = (struct _KSEMAPHORE *)FdoExt(*(_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 112) = 1734964085;
  return KeReleaseSemaphore(v2 + 160, 16, 1, 0);
}
