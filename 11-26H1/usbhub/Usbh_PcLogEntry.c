/*
 * XREFs of Usbh_PcLogEntry @ 0x140021228
 * Callers:
 *     UsbhHubSyncSuspendPortEvent @ 0x140043680 (UsbhHubSyncSuspendPortEvent.c)
 * Callees:
 *     Usbh_UsbdReadFrameCounter @ 0x14001FDB0 (Usbh_UsbdReadFrameCounter.c)
 */

__int64 __fastcall Usbh_PcLogEntry(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int16 a6, char a7, char a8)
{
  __int64 v8; // rax
  __int64 v9; // rbx

  v8 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  *(_DWORD *)(a2 + 856) = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v9 = a2 + 32 * (v8 + 27);
  *(_DWORD *)v9 = *(_DWORD *)(a2 + 400);
  *(_BYTE *)(v9 + 18) = a7;
  *(_WORD *)(v9 + 16) = a6;
  *(_DWORD *)(v9 + 4) = a4;
  *(_QWORD *)(v9 + 8) = a3;
  *(_BYTE *)(v9 + 19) = a8;
  *(_DWORD *)(v9 + 20) = a5;
  *(_DWORD *)(v9 + 28) = 1;
  if ( !a8 )
    *(_DWORD *)(v9 + 24) = Usbh_UsbdReadFrameCounter(a1) - a5;
  return v9;
}
