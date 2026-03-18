/*
 * XREFs of Usbh_iSignalSyncDeviceReset @ 0x1400499D8
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x140001DA0 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x140002018 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140003290 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x140043540 (UsbhFreePortChangeQueueTimeoutObject.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1400088C8 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhLogSignalDriverResetEvent @ 0x140024420 (UsbhLogSignalDriverResetEvent.c)
 *     UsbhSetPcqEventStatus @ 0x14002EC50 (UsbhSetPcqEventStatus.c)
 */

_DWORD *__fastcall Usbh_iSignalSyncDeviceReset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *result; // rax

  UsbhSignalSyncDeviceResetPdo(a1, a2, 3221225473LL, a4);
  result = (_DWORD *)UsbhLogSignalDriverResetEvent(a1, a3);
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a3, 3, 30);
  return result;
}
