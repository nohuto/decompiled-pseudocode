/*
 * XREFs of Etw_DeviceRundown @ 0x140002D24
 * Callers:
 *     Etw_DeviceListRundown @ 0x140002B50 (Etw_DeviceListRundown.c)
 * Callees:
 *     Etw_EndpointListRundown @ 0x140002F50 (Etw_EndpointListRundown.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x140003224 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall Etw_DeviceRundown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a3) = 0;
  LOBYTE(a4) = 0;
  if ( *(_BYTE *)(a2 + 664) )
  {
    LOBYTE(a3) = *(_BYTE *)(a2 + 680);
    LOBYTE(a4) = *(_BYTE *)(a2 + 682);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
      (unsigned __int8)a4,
      (unsigned int)&USBXHCI_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION_V3,
      a1,
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
      *(_QWORD *)(a2 + 24),
      *(_QWORD *)a2,
      *(_DWORD *)(a2 + 20),
      *(_DWORD *)(a2 + 36),
      a2 + 44,
      *(_BYTE *)(a2 + 143),
      *(_BYTE *)(a2 + 144) != 0,
      *(_DWORD *)(a2 + 148),
      *(_DWORD *)(a2 + 152));
  return Etw_EndpointListRundown(a1, a2, a3, a4);
}
