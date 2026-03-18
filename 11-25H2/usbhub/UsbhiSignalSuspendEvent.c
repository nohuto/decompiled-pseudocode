/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x14001EB0C
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x140001AF4 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_wChange_Action @ 0x140024610 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x140025670 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1400275AC (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1400283A0 (Usbh_PCE_Disable_Action.c)
 *     UsbhRemoveQueuedSuspend @ 0x140044A8C (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x14001E76C (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x140033F60 (UsbhSetPcqEventStatus.c)
 */

__int64 __fastcall UsbhiSignalSuspendEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = UsbhLogSignalSuspendEvent(a1, a2);
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a2, 0LL);
  return result;
}
