/*
 * XREFs of UsbhFdoColdStartCheckPort @ 0x140031278
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 */

__int64 __fastcall UsbhFdoColdStartCheckPort(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // r8
  const void *v13; // r9
  int v15; // [rsp+80h] [rbp+18h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0;
  v16 = 0;
  FdoExt(a1);
  v5 = UsbhQueryPortState(a1, *(_WORD *)(a3 + 4), (__int64)&v15, &v16);
  v6 = *(unsigned __int16 *)(a3 + 4);
  v7 = v5;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 880), 0xFFFFFFFF);
        v10 = *(_DWORD *)(v8 + 884);
        v11 = *(_QWORD *)(v8 + 888);
        v12 = 32LL * ((v9 - 1) & v10);
        *(_DWORD *)(v12 + v11) = 826500195;
        *(_QWORD *)(v12 + v11 + 8) = 0LL;
        *(_QWORD *)(v12 + v11 + 16) = v6;
        *(_QWORD *)(v12 + v11 + 24) = v7;
      }
    }
  }
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 16, 1667515186, 0LL, v7);
    if ( Usb_Disconnected(v7) )
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT);
      return 0LL;
    }
    UsbhException(a1, *(_WORD *)(a3 + 4), 48, v13, (unsigned int)v13, v7, v16, usbfile_fdopwr_c, 3011, (char)v13);
  }
  else if ( (v15 & 1) != 0 && (v15 & 0x10000) == 0 )
  {
    Log(a1, 16, 1667515187, 0LL, v7);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_CONNECT);
    *(_BYTE *)(a3 + 2841) = 1;
  }
  return (unsigned int)v7;
}
