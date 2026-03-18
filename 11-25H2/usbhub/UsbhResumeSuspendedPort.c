/*
 * XREFs of UsbhResumeSuspendedPort @ 0x140011AE8
 * Callers:
 *     UsbhHandleSuspend @ 0x140034A58 (UsbhHandleSuspend.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x140007D40 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     UsbhSignalResumeEvent @ 0x1400138D4 (UsbhSignalResumeEvent.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhResumeSuspendedPort(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  _DWORD *v21; // rax
  int v22; // r10d
  int v23; // r10d
  __int64 v24; // [rsp+20h] [rbp-40h]
  int v25; // [rsp+50h] [rbp-10h] BYREF
  int v26; // [rsp+58h] [rbp-8h] BYREF
  __int16 v27; // [rsp+5Ch] [rbp-4h]
  __int16 v28; // [rsp+5Eh] [rbp-2h]
  int v29; // [rsp+A0h] [rbp+40h] BYREF

  v5 = a3;
  v25 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a4 + 4));
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1297249139;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a4;
        *(_QWORD *)(v9 + 24) = v5;
      }
    }
  }
  FdoExt(a1);
  if ( (v5 & 0x18) == 0x18 )
  {
    if ( (v5 & 2) == 0 )
    {
      if ( a5 )
      {
        v21 = PdoExt(a5);
        v21[355] |= 0x2000u;
      }
      goto LABEL_23;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
LABEL_23:
    UsbhSignalResumeEvent(a1, a4);
    return 0LL;
  }
  if ( (v5 & 0x10) == 0 )
    goto LABEL_23;
  v10 = *(unsigned __int16 *)(a4 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v29 = 1884115794;
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = v29;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = v10;
        *(_QWORD *)(v12 + 24) = 0LL;
      }
    }
  }
  v27 = *(_WORD *)(a4 + 4);
  LOWORD(v29) = 0;
  v26 = 131363;
  v28 = 0;
  v13 = UsbhSyncSendCommand(a1, (unsigned __int8 *)&v26, 0LL, &v29, v24, &v25);
  v14 = *(unsigned __int16 *)(a4 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 2018333522;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = v14;
        *(_QWORD *)(v16 + 24) = v13;
      }
    }
  }
  v17 = *(unsigned __int16 *)(a4 + 4);
  if ( v13 < 0 )
  {
    Log(a1, 16, 1347568944, v13, *(unsigned __int16 *)(a4 + 4));
    if ( !Usb_Disconnected(v22) )
      UsbhException(a1, *(_WORD *)(a4 + 4), 47, 0LL, 0, v23, v25, usbfile_busfunc_c, 3115, 0);
    goto LABEL_23;
  }
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( v18 )
      {
        v29 = 1397912695;
        v19 = *(_QWORD *)(v18 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
        *(_DWORD *)v19 = v29;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = 0LL;
        *(_QWORD *)(v19 + 24) = v17;
      }
    }
  }
  return 0LL;
}
