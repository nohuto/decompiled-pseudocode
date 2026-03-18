/*
 * XREFs of UsbhSuspendPort @ 0x14002198C
 * Callers:
 *     UsbhRequestPortSuspend @ 0x140021600 (UsbhRequestPortSuspend.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140043680 (UsbhHubSyncSuspendPortEvent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhSyncSendCommand @ 0x1400175B0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhGetPortStatus @ 0x1400385D8 (UsbhGetPortStatus.c)
 */

__int64 __fastcall UsbhSuspendPort(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  _DWORD *v4; // r14
  __int64 v5; // rcx
  signed __int32 v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rcx
  signed __int32 v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  signed __int32 v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v24; // r8d
  int PortStatus; // eax
  __int64 v26; // [rsp+20h] [rbp-40h]
  __int64 v27; // [rsp+50h] [rbp-10h] BYREF
  int v28; // [rsp+58h] [rbp-8h] BYREF
  __int16 v29; // [rsp+5Ch] [rbp-4h]
  __int16 v30; // [rsp+5Eh] [rbp-2h]
  int v31; // [rsp+98h] [rbp+38h] BYREF
  int v32; // [rsp+A0h] [rbp+40h]
  int v33; // [rsp+A8h] [rbp+48h] BYREF

  v2 = a2;
  v33 = 0;
  LOWORD(v31) = 0;
  LODWORD(v27) = 0;
  v4 = FdoExt(a1);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v32 = 812676467;
        v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 880), 0xFFFFFFFF);
        v7 = *(_DWORD *)(v5 + 884);
        v8 = *(_QWORD *)(v5 + 888);
        v9 = 32LL * ((v6 - 1) & v7);
        *(_DWORD *)(v9 + v8) = v32;
        *(_QWORD *)(v9 + v8 + 8) = 0LL;
        *(_QWORD *)(v9 + v8 + 16) = v2;
        *(_QWORD *)(v9 + v8 + 24) = 0LL;
      }
    }
  }
  v28 = 131875;
  v29 = v2;
  v30 = 0;
  v10 = UsbhSyncSendCommand(a1, (__int64)&v28, 0LL, &v31, v26, &v33);
  v11 = v33;
  v12 = v10;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v31 = 829453683;
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 880), 0xFFFFFFFF);
        v15 = *(_DWORD *)(v13 + 884);
        v16 = *(_QWORD *)(v13 + 888);
        v17 = 32LL * ((v14 - 1) & v15);
        *(_DWORD *)(v17 + v16) = v31;
        *(_QWORD *)(v17 + v16 + 8) = 0LL;
        *(_QWORD *)(v17 + v16 + 16) = v12;
        *(_QWORD *)(v17 + v16 + 24) = v11;
      }
    }
  }
  if ( (v12 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v12) )
    UsbhException(a1, v2, 51, 0LL, 0, v12, v24, usbfile_hub_c, 3663, 0, v27);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( v18 )
      {
        v31 = 1349743987;
        v19 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 880), 0xFFFFFFFF);
        v20 = *(_DWORD *)(v18 + 884);
        v21 = *(_QWORD *)(v18 + 888);
        v22 = 32LL * ((v19 - 1) & v20);
        *(_DWORD *)(v22 + v21) = v31;
        *(_QWORD *)(v22 + v21 + 8) = 0LL;
        *(_QWORD *)(v22 + v21 + 16) = v12;
        *(_QWORD *)(v22 + v21 + 24) = v2;
      }
    }
  }
  if ( (v4[641] & 2) != 0 )
  {
    PortStatus = UsbhGetPortStatus(a1, (unsigned __int16)v2, &v27, &v33);
    Log(a1, 8, 1937076307, PortStatus, v33);
  }
  return (unsigned int)v12;
}
