/*
 * XREFs of UsbhiSignalResumeEvent @ 0x1400130A0
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x140001AF4 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x140025670 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x140044B94 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_BusReset_Action @ 0x140044D84 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1400452C4 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x140045688 (Usbh_PCE_ResumeTimeout_Action.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1400139C4 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x140033F60 (UsbhSetPcqEventStatus.c)
 */

__int64 __fastcall UsbhiSignalResumeEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = UsbhLogSignalResumeEvent();
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a2, 1LL);
  return result;
}
