/*
 * XREFs of Crashdump_UsbDevice_GetPortType @ 0x140054E94
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1400510C0 (Crashdump_InitializeWithControllerReset.c)
 *     Crashdump_ResetDevice @ 0x140051590 (Crashdump_ResetDevice.c)
 *     Crashdump_UsbDevice_SuspendPort @ 0x140055A0C (Crashdump_UsbDevice_SuspendPort.c)
 * Callees:
 *     Crashdump_UsbDevice_GetPortStatus @ 0x140054CF8 (Crashdump_UsbDevice_GetPortStatus.c)
 */

__int64 __fastcall Crashdump_UsbDevice_GetPortType(_QWORD *a1, int a2, _DWORD *a3)
{
  int PortStatus; // eax
  unsigned int v7; // ebx
  _WORD *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_GetPortType: begin: port %u\n", a2);
  PortStatus = Crashdump_UsbDevice_GetPortStatus(a1, a2, &v9);
  v7 = PortStatus;
  if ( PortStatus >= 0 )
    *a3 = (*v9 & 0x400) != 0 ? 20 : 30;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_GetPortType: end 0x%X\n", PortStatus);
  return v7;
}
