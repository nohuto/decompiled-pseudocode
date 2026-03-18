/*
 * XREFs of UsbhSuspendPort @ 0x14001CA88
 * Callers:
 *     UsbhRequestPortSuspend @ 0x14001C704 (UsbhRequestPortSuspend.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140043B5C (UsbhHubSyncSuspendPortEvent.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x140007D40 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhGetPortStatus @ 0x1400395A0 (UsbhGetPortStatus.c)
 */

__int64 __fastcall UsbhSuspendPort(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  _DWORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // edx
  int PortStatus; // eax
  __int64 v16; // [rsp+20h] [rbp-40h]
  int v17; // [rsp+50h] [rbp-10h] BYREF
  int v18; // [rsp+58h] [rbp-8h] BYREF
  __int16 v19; // [rsp+5Ch] [rbp-4h]
  __int16 v20; // [rsp+5Eh] [rbp-2h]
  int v21; // [rsp+98h] [rbp+38h] BYREF
  int v22; // [rsp+A0h] [rbp+40h] BYREF
  int v23; // [rsp+A8h] [rbp+48h]

  v2 = a2;
  v22 = 0;
  LOWORD(v21) = 0;
  v17 = 0;
  v4 = FdoExt(a1);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v23 = 812676467;
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v6 = v23;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = v2;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
    }
  }
  v18 = 131875;
  v19 = v2;
  v20 = 0;
  v7 = (int)UsbhSyncSendCommand(a1, (unsigned __int8 *)&v18, 0LL, &v21, v16, &v22);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v23 = 829453683;
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        v10 = v22;
        *(_DWORD *)v9 = v23;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = v7;
        *(_QWORD *)(v9 + 24) = v10;
      }
    }
  }
  if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
    UsbhException(a1, v2, 51, 0LL, 0, v7, v14, usbfile_hub_c, 3663, 0);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v21 = 1349743987;
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = v21;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = v7;
        *(_QWORD *)(v12 + 24) = v2;
      }
    }
  }
  if ( (v4[641] & 2) != 0 )
  {
    PortStatus = UsbhGetPortStatus(a1, (unsigned __int16)v2, &v17, &v22);
    Log(a1, 8, 1937076307, PortStatus, v22);
  }
  return (unsigned int)v7;
}
