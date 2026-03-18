/*
 * XREFs of Crashdump_ResetDevice @ 0x140051590
 * Callers:
 *     <none>
 * Callees:
 *     Crashdump_Register_ResetPort @ 0x140052384 (Crashdump_Register_ResetPort.c)
 *     Crashdump_UsbDevice_GetPortType @ 0x140054E94 (Crashdump_UsbDevice_GetPortType.c)
 *     Crashdump_UsbDevice_ReConfigureOnPortReset @ 0x14005524C (Crashdump_UsbDevice_ReConfigureOnPortReset.c)
 *     Crashdump_UsbDevice_ResetPort @ 0x14005534C (Crashdump_UsbDevice_ResetPort.c)
 */

__int64 __fastcall Crashdump_ResetDevice(__int64 a1)
{
  bool v2; // zf
  int PortType; // edi
  unsigned int v4; // ecx
  unsigned int v5; // ebp
  __int64 v6; // r14
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_ResetDevice: begin\n");
  v2 = *(_BYTE *)(a1 + 626) == 0;
  v10 = 0;
  if ( v2 )
  {
    v4 = *(_DWORD *)(a1 + 536) - 1;
    *(_BYTE *)(a1 + 625) = 0;
    v5 = *(_DWORD *)(a1 + 4LL * v4 + 544);
    if ( v4 )
    {
      v6 = *(_QWORD *)(a1 + 568) + 376LL * (v4 - 1);
      PortType = Crashdump_UsbDevice_GetPortType(v6, v5, &v10);
      if ( PortType < 0 )
        goto LABEL_9;
      v7 = v10;
      v8 = Crashdump_UsbDevice_ResetPort(v6, v5, v10);
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 528);
      v8 = Crashdump_Register_ResetPort(a1, v5, v7);
    }
    PortType = v8;
    if ( v8 >= 0 )
      PortType = Crashdump_UsbDevice_ReConfigureOnPortReset(*(_QWORD *)(a1 + 576), v7);
  }
  else
  {
    *(_BYTE *)(a1 + 626) = 0;
    PortType = 0;
  }
LABEL_9:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_ResetDevice: end 0x%X\n", PortType);
  return (unsigned int)PortType;
}
