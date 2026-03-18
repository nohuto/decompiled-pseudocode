/*
 * XREFs of UsbhSetHubRemoteWake @ 0x140006EC8
 * Callers:
 *     UsbhArmHubWakeOnConnect @ 0x140006E74 (UsbhArmHubWakeOnConnect.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x140007630 (UsbhDisarmHubWakeOnConnect.c)
 * Callees:
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhSyncSendCommand @ 0x1400175B0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 */

__int64 __fastcall UsbhSetHubRemoteWake(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rcx
  signed __int32 v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rcx
  signed __int32 v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v25; // r8d
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  int v27; // [rsp+88h] [rbp+28h] BYREF
  int v28; // [rsp+90h] [rbp+30h]
  int v29; // [rsp+98h] [rbp+38h]

  v29 = 0;
  LOWORD(v27) = 0;
  LOBYTE(v26) = 0;
  BYTE1(v26) = (_BYTE)a2 != 0 ? 3 : 1;
  v5 = *(unsigned int *)(FdoExt(a1, a2, a3, a4) + 1376);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v28 = 1801549651;
        v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 880), 0xFFFFFFFF);
        v8 = *(_DWORD *)(v6 + 884);
        v9 = *(_QWORD *)(v6 + 888);
        v10 = 32LL * ((v7 - 1) & v8);
        *(_DWORD *)(v10 + v9) = v28;
        *(_QWORD *)(v10 + v9 + 8) = 0LL;
        *(_QWORD *)(v10 + v9 + 16) = v5;
        *(_QWORD *)(v10 + v9 + 24) = 0LL;
      }
    }
  }
  *(_DWORD *)((char *)&v26 + 2) = 1;
  HIWORD(v26) = 0;
  v11 = UsbhSyncSendCommand(a1, (unsigned int)&v26, 0, (unsigned int)&v27);
  v13 = v29;
  v14 = v11;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v27 = 829126515;
        v16 = _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 880), 0xFFFFFFFF);
        v17 = *(_DWORD *)(v15 + 884);
        v18 = *(_QWORD *)(v15 + 888);
        v12 = 32LL * ((v16 - 1) & v17);
        *(_DWORD *)(v12 + v18) = v27;
        *(_QWORD *)(v12 + v18 + 8) = 0LL;
        *(_QWORD *)(v12 + v18 + 16) = v14;
        *(_QWORD *)(v12 + v18 + 24) = v13;
      }
    }
  }
  if ( (v14 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v14, v12, v13) )
    UsbhException(a1, 0, 123, 0, 0, v14, v25, (__int64)usbfile_hub_c, 3746, 0, v26);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v27 = 845903731;
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 880), 0xFFFFFFFF);
        v21 = *(_DWORD *)(v19 + 884);
        v22 = *(_QWORD *)(v19 + 888);
        v23 = 32LL * ((v20 - 1) & v21);
        *(_DWORD *)(v23 + v22) = v27;
        *(_QWORD *)(v23 + v22 + 8) = 0LL;
        *(_QWORD *)(v23 + v22 + 16) = v14;
        *(_QWORD *)(v23 + v22 + 24) = 0LL;
      }
    }
  }
  return (unsigned int)v14;
}
