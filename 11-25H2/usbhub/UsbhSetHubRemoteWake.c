/*
 * XREFs of UsbhSetHubRemoteWake @ 0x140029E28
 * Callers:
 *     UsbhArmHubWakeOnConnect @ 0x140029DD4 (UsbhArmHubWakeOnConnect.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x14002A284 (UsbhDisarmHubWakeOnConnect.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x140007D40 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 */

__int64 __fastcall UsbhSetHubRemoteWake(__int64 a1, char a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // r8d
  __int64 v15; // [rsp+20h] [rbp-40h]
  unsigned __int8 v16[2]; // [rsp+50h] [rbp-10h] BYREF
  int v17; // [rsp+52h] [rbp-Eh]
  __int16 v18; // [rsp+56h] [rbp-Ah]
  int v19; // [rsp+88h] [rbp+28h] BYREF
  int v20; // [rsp+90h] [rbp+30h]
  int v21; // [rsp+98h] [rbp+38h] BYREF

  v21 = 0;
  LOWORD(v19) = 0;
  v16[0] = 0;
  v16[1] = a2 != 0 ? 3 : 1;
  v3 = (unsigned int)FdoExt(a1)[344];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v4 = *(_QWORD *)(a1 + 64);
      if ( v4 )
      {
        v20 = 1801549651;
        v5 = *(_QWORD *)(v4 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
        *(_DWORD *)v5 = v20;
        *(_QWORD *)(v5 + 8) = 0LL;
        *(_QWORD *)(v5 + 16) = v3;
        *(_QWORD *)(v5 + 24) = 0LL;
      }
    }
  }
  v17 = 1;
  v18 = 0;
  v6 = (int)UsbhSyncSendCommand(a1, v16, 0LL, &v19, v15, &v21);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v20 = 829126515;
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 880), 0xFFFFFFFF);
        v9 = v21;
        v10 = *(_QWORD *)(v7 + 888) + 32LL * ((unsigned int)(v8 - 1) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v10 = v20;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = v6;
        *(_QWORD *)(v10 + 24) = v9;
      }
    }
  }
  if ( (v6 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v6) )
    UsbhException(a1, 0, 123, 0LL, 0, v6, v14, usbfile_hub_c, 3746, 0);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v19 = 845903731;
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = v19;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = v6;
        *(_QWORD *)(v12 + 24) = 0LL;
      }
    }
  }
  return (unsigned int)v6;
}
