/*
 * XREFs of UsbhDisablePort @ 0x14001C650
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x140001FCC (UsbhBusPnpStop_Action.c)
 *     UsbhCancelResetTimeout @ 0x140012034 (UsbhCancelResetTimeout.c)
 *     UsbhPortConnect @ 0x140013B30 (UsbhPortConnect.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhQueueSoftConnectChange @ 0x1400448AC (UsbhQueueSoftConnectChange.c)
 *     UsbhFinishStart @ 0x140046F2C (UsbhFinishStart.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x14004986C (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x14004FB80 (UsbhDriverNotFoundWorker.c)
 *     UsbhReset1TimeoutBadEnable @ 0x140058B00 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1400590C0 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1400591B8 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x140007D40 (UsbhSyncSendCommand.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 */

void __fastcall UsbhDisablePort(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // edx
  __int64 v6; // [rsp+20h] [rbp-48h]
  __int16 v7; // [rsp+78h] [rbp+10h] BYREF
  int v8; // [rsp+80h] [rbp+18h] BYREF
  int v9; // [rsp+88h] [rbp+20h] BYREF
  __int16 v10; // [rsp+8Ch] [rbp+24h]
  __int16 v11; // [rsp+8Eh] [rbp+26h]

  v10 = *(_WORD *)(a2 + 4);
  v8 = 0;
  v7 = 0;
  v9 = 65827;
  v11 = 0;
  v4 = UsbhSyncSendCommand(a1, (unsigned __int8 *)&v9, 0LL, &v7, v6, &v8);
  if ( (v4 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v4) )
    UsbhException(a1, *(_WORD *)(a2 + 4), 20, 0LL, 0, v5, v8, usbfile_bus_c, 2257, 0);
}
