/*
 * XREFs of UsbhUnlockPindicator @ 0x14003F8F8
 * Callers:
 *     Usbh_PIND_Disable_Action @ 0x14003F93C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_Enable_Action @ 0x14003FA0C (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x14003FAA4 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x14003FB70 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x14003FC60 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

LONG __fastcall UsbhUnlockPindicator(__int64 a1)
{
  struct _KSEMAPHORE *v2; // rax

  v2 = (struct _KSEMAPHORE *)FdoExt(*(_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 112) = 1734964085;
  return KeReleaseSemaphore(v2 + 160, 16, 1, 0);
}
