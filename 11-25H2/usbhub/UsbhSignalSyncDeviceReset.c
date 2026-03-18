/*
 * XREFs of UsbhSignalSyncDeviceReset @ 0x140048768
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x140002204 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x140004D00 (UsbhHubDispatchPortEvent.c)
 *     UsbhBusConnectPdo @ 0x14002DB28 (UsbhBusConnectPdo.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140045CE4 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x140046C6C (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1400487A0 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x140049174 (Usbh_BusPause_PdoEvent.c)
 *     UsbhDriverResetPort @ 0x1400578C0 (UsbhDriverResetPort.c)
 *     UsbhFailDriverResetPort @ 0x140057A10 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x140058510 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1400591B8 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1400101F4 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSignalDriverResetEvent @ 0x14003744C (UsbhSignalDriverResetEvent.c)
 */

void __fastcall UsbhSignalSyncDeviceReset(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  UsbhSignalSyncDeviceResetPdo(a1, a2, a4);
  UsbhSignalDriverResetEvent(a1, a3);
}
