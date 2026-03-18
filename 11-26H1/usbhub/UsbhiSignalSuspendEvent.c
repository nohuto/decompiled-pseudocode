/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x14002394C
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x140001DA0 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x140002870 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x140004A34 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x140005470 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x140020AB0 (Usbh_PCE_wChange_Action.c)
 *     UsbhRemoveQueuedSuspend @ 0x1400445B0 (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x140023414 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x14002EC50 (UsbhSetPcqEventStatus.c)
 */

__int64 __fastcall UsbhiSignalSuspendEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = UsbhLogSignalSuspendEvent(a1, a2);
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a2, 0LL, 30LL);
  return result;
}
