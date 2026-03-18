/*
 * XREFs of UsbhSignalSyncDeviceReset @ 0x1400482B8
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x1400011C0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x14001EC90 (UsbhHubDispatchPortEvent.c)
 *     UsbhBusConnectPdo @ 0x140032B60 (UsbhBusConnectPdo.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140045820 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1400467AC (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1400482F0 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x140048CD4 (Usbh_BusPause_PdoEvent.c)
 *     UsbhDriverResetPort @ 0x140057E20 (UsbhDriverResetPort.c)
 *     UsbhFailDriverResetPort @ 0x140057F70 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x140058A70 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x140059728 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1400088C8 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSignalDriverResetEvent @ 0x1400242C0 (UsbhSignalDriverResetEvent.c)
 */

void __fastcall UsbhSignalSyncDeviceReset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  UsbhSignalSyncDeviceResetPdo(a1, a2, (unsigned int)a4, a4);
  UsbhSignalDriverResetEvent(a1, a3);
}
