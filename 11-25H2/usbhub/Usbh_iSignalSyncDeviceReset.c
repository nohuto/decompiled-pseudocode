/*
 * XREFs of Usbh_iSignalSyncDeviceReset @ 0x140049E24
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x140001AF4 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x140024E40 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140026210 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x140043A1C (UsbhFreePortChangeQueueTimeoutObject.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1400101F4 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSetPcqEventStatus @ 0x140033F60 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalDriverResetEvent @ 0x14003759C (UsbhLogSignalDriverResetEvent.c)
 */

_DWORD *__fastcall Usbh_iSignalSyncDeviceReset(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *result; // rax

  UsbhSignalSyncDeviceResetPdo(a1, a2, -1073741823);
  result = (_DWORD *)UsbhLogSignalDriverResetEvent(a1, a3);
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a3, 3, 30);
  return result;
}
