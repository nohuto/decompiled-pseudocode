/*
 * XREFs of UsbhiSignalResumeEvent @ 0x14000B4D8
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x140001DA0 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x140002870 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1400446B8 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_BusReset_Action @ 0x1400448AC (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x140044DF8 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1400451C0 (Usbh_PCE_ResumeTimeout_Action.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x14000BE24 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x14002EC50 (UsbhSetPcqEventStatus.c)
 */

__int64 __fastcall UsbhiSignalResumeEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = UsbhLogSignalResumeEvent(a1, a2, a3, a4);
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a2, 1LL, 30LL);
  return result;
}
