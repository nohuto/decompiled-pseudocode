/*
 * XREFs of UsbhResumeSuspendedPort @ 0x14002ED10
 * Callers:
 *     UsbhHandleSuspend @ 0x140021430 (UsbhHandleSuspend.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhSignalResumeEvent @ 0x14000BD28 (UsbhSignalResumeEvent.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhSyncSendCommand @ 0x1400175B0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhResumeSuspendedPort(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  signed __int32 v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // rcx
  signed __int32 v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  signed __int32 v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rdx
  _DWORD *v36; // rax
  int v37; // r10d
  int v38; // r10d
  __int64 v39; // [rsp+20h] [rbp-40h]
  int v40; // [rsp+50h] [rbp-10h] BYREF
  __int16 v41; // [rsp+54h] [rbp-Ch]
  __int16 v42; // [rsp+56h] [rbp-Ah]
  int v43; // [rsp+98h] [rbp+38h] BYREF
  int v44; // [rsp+9Ch] [rbp+3Ch]
  int v45; // [rsp+A0h] [rbp+40h] BYREF

  v44 = HIDWORD(a2);
  v5 = a3;
  v43 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids);
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v45 = 1297249139;
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 880), 0xFFFFFFFF);
        v10 = *(_DWORD *)(v8 + 884);
        v11 = *(_QWORD *)(v8 + 888);
        v12 = 32LL * ((v9 - 1) & v10);
        *(_DWORD *)(v12 + v11) = v45;
        *(_QWORD *)(v12 + v11 + 8) = 0LL;
        *(_QWORD *)(v12 + v11 + 16) = a4;
        *(_QWORD *)(v12 + v11 + 24) = v5;
      }
    }
  }
  FdoExt(a1);
  if ( (v5 & 0x18) == 0x18 && (v5 & 2) == 0 && a5 )
  {
    v36 = PdoExt(a5);
    v36[355] |= 0x2000u;
  }
  if ( (v5 & 0x12) != 0x12 )
    goto LABEL_22;
  v15 = *(unsigned __int16 *)(a4 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v45 = 1884115794;
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 880), 0xFFFFFFFF);
        v18 = *(_DWORD *)(v16 + 884);
        v19 = *(_QWORD *)(v16 + 888);
        v20 = 32LL * ((v17 - 1) & v18);
        *(_DWORD *)(v20 + v19) = v45;
        *(_QWORD *)(v20 + v19 + 8) = 0LL;
        *(_QWORD *)(v20 + v19 + 16) = v15;
        *(_QWORD *)(v20 + v19 + 24) = 0LL;
      }
    }
  }
  v41 = *(_WORD *)(a4 + 4);
  LOWORD(v45) = 0;
  v40 = 131363;
  v42 = 0;
  v21 = UsbhSyncSendCommand(a1, (__int64)&v40, 0LL, &v45, v39, &v43);
  v22 = *(unsigned __int16 *)(a4 + 4);
  v23 = v21;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v45 = 2018333522;
        v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 880), 0xFFFFFFFF);
        v26 = *(_DWORD *)(v24 + 884);
        v27 = *(_QWORD *)(v24 + 888);
        v28 = 32LL * ((v25 - 1) & v26);
        *(_DWORD *)(v28 + v27) = v45;
        *(_QWORD *)(v28 + v27 + 8) = 0LL;
        *(_QWORD *)(v28 + v27 + 16) = v22;
        *(_QWORD *)(v28 + v27 + 24) = v23;
      }
    }
  }
  v29 = *(unsigned __int16 *)(a4 + 4);
  if ( (int)v23 < 0 )
  {
    Log(a1, 16, 1347568944, v23, *(unsigned __int16 *)(a4 + 4));
    if ( !Usb_Disconnected(v37) )
      UsbhException(a1, *(_WORD *)(a4 + 4), 47, 0LL, 0, v38, v43, usbfile_busfunc_c, 3115, 0);
LABEL_22:
    UsbhSignalResumeEvent(a1, a4, v13, v14);
    return 0LL;
  }
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v30 = *(_QWORD *)(a1 + 64);
      if ( v30 )
      {
        v45 = 1397912695;
        v31 = _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 880), 0xFFFFFFFF);
        v32 = *(_DWORD *)(v30 + 884);
        v33 = *(_QWORD *)(v30 + 888);
        v34 = 32LL * ((v31 - 1) & v32);
        *(_DWORD *)(v34 + v33) = v45;
        *(_QWORD *)(v34 + v33 + 8) = 0LL;
        *(_QWORD *)(v34 + v33 + 16) = 0LL;
        *(_QWORD *)(v34 + v33 + 24) = v29;
      }
    }
  }
  return 0LL;
}
