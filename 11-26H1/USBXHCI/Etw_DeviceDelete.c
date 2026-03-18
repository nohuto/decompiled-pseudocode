/*
 * XREFs of Etw_DeviceDelete @ 0x140003A7C
 * Callers:
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1400038A0 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x140003224 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall Etw_DeviceDelete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+60h] [rbp-D8h]

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
  {
    v3 = *(_DWORD *)(a2 + 152);
    return McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
             *(unsigned __int8 *)(a2 + 666),
             (__int64)&USBXHCI_ETW_EVENT_DEVICE_DELETE_V3,
             0LL,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             *(_QWORD *)(a2 + 24),
             *(_QWORD *)a2,
             *(_DWORD *)(a2 + 20),
             *(_DWORD *)(a2 + 36),
             a2 + 44,
             *(_BYTE *)(a2 + 143),
             *(_BYTE *)(a2 + 144) != 0,
             *(_DWORD *)(a2 + 148),
             v3);
  }
  return result;
}
