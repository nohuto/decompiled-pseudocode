/*
 * XREFs of UsbhDisablePort @ 0x140024098
 * Callers:
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x14000BF90 (UsbhPortConnect.c)
 *     UsbhBusPnpStop_Action @ 0x140011CAC (UsbhBusPnpStop_Action.c)
 *     UsbhCancelResetTimeout @ 0x140023BD8 (UsbhCancelResetTimeout.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 *     UsbhFinishStart @ 0x140046A70 (UsbhFinishStart.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1400493F8 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x140050050 (UsbhDriverNotFoundWorker.c)
 *     UsbhReset1TimeoutBadEnable @ 0x140059070 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x140059630 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x140059728 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhSyncSendCommand @ 0x1400175B0 (UsbhSyncSendCommand.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
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
  v4 = UsbhSyncSendCommand(a1, (__int64)&v9, 0LL, &v7, v6, &v8);
  if ( (v4 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v4) )
    UsbhException(a1, *(_WORD *)(a2 + 4), 20, 0LL, 0, v5, v8, usbfile_bus_c, 2257, 0);
}
