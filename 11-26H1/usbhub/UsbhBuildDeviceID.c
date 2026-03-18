/*
 * XREFs of UsbhBuildDeviceID @ 0x14000D9A8
 * Callers:
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x14000C9F0 (UsbhCreatePdo.c)
 *     UsbhUpdateUxdSettings @ 0x1400220B4 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhMakeId @ 0x14000E1C0 (UsbhMakeId.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhBuildUxdPnpId @ 0x1400391C0 (UsbhBuildUxdPnpId.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x14005A688 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_Sd @ 0x14005A754 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x14005A8B8 (WPP_RECORDER_SF_Sqd.c)
 */

__int64 __fastcall UsbhBuildDeviceID(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  unsigned __int16 v8; // r13
  unsigned __int16 v9; // r15
  __int64 v10; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 Id; // rax
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rdx
  char v19; // al
  __int64 v21; // rcx
  __int64 v22; // r15
  int v23; // eax
  int v24; // r8d
  int v25; // r10d
  int v26; // r8d
  unsigned int v27; // r10d
  int v28; // [rsp+20h] [rbp-48h]
  int v29; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+28h] [rbp-40h]
  int v31; // [rsp+28h] [rbp-40h]
  int v32; // [rsp+30h] [rbp-38h]
  int v33; // [rsp+30h] [rbp-38h]
  int v34; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v34 = 0;
  v5 = a3;
  if ( a2 )
  {
    v22 = PdoExt(a2);
    LODWORD(a3) = *(_DWORD *)(v22 + 1420) & 0x10004;
    if ( (_DWORD)a3 == 0x10000 )
    {
      v23 = UsbhBuildUxdPnpId(v21, a2, v5);
      if ( v23 >= 0 )
      {
        Log(a1, 4096, 1684624728, *(_QWORD *)(v5 + 8), *(unsigned int *)(v5 + 4));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v25 )
        {
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_QWORD *)(v5 + 8),
            v24,
            v25 + 10,
            (__int64)&WPP_98a52ec283cc3c01b3a718f7732a7c3c_Traceguids,
            *(_QWORD *)(v5 + 8),
            *(_QWORD *)(v5 + 8),
            *(_DWORD *)(v5 + 4));
        }
        return 0LL;
      }
      Log(a1, 4096, 1684625477, 0LL, v23);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v4 )
      {
        goto LABEL_25;
      }
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        11,
        (__int64)&WPP_98a52ec283cc3c01b3a718f7732a7c3c_Traceguids);
    }
    v4 = 0LL;
LABEL_25:
    v8 = *(_WORD *)(v22 + 1408);
    v9 = *(_WORD *)(v22 + 1410);
    goto LABEL_3;
  }
  v8 = 0;
  v9 = 0;
LABEL_3:
  if ( (UsbhLogMask & 0x1000) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 880), 0xFFFFFFFF);
        v12 = *(_DWORD *)(v10 + 884);
        v13 = *(_QWORD *)(v10 + 888);
        v14 = 32LL * ((v11 - 1) & v12);
        *(_DWORD *)(v14 + v13) = 1145665124;
        *(_QWORD *)(v14 + v13 + 16) = v8;
        *(_QWORD *)(v14 + v13 + 24) = v9;
        *(_QWORD *)(v14 + v13 + 8) = v4;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v4 )
  {
    WPP_RECORDER_SF_DD(WPP_GLOBAL_Control->DeviceExtension, v8, a3, a4, v28, v8, v9);
  }
  LOWORD(v32) = v8;
  LOWORD(v30) = 4;
  LOWORD(v28) = 0;
  Id = UsbhMakeId(0LL, L"USB\\VID_nnnn", 0LL, &v34, v28, v30, v32, 0LL);
  if ( Id )
  {
    LOWORD(v33) = v9;
    LOWORD(v31) = 4;
    LOWORD(v29) = 2;
    v16 = UsbhMakeId(0LL, L"&PID_nnnn", Id, &v34, v29, v31, v33, 0LL);
    v18 = v16;
    if ( v16 )
    {
      *(_QWORD *)(v5 + 8) = v16;
      v19 = v34;
      *(_DWORD *)(v5 + 4) = v34;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sd(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            v17,
            13,
            (__int64)&WPP_98a52ec283cc3c01b3a718f7732a7c3c_Traceguids,
            v18,
            v19);
      }
      return 0LL;
    }
    v26 = 1684615474;
  }
  else
  {
    v26 = 1684615457;
  }
  Log(a1, 4096, v26, a2, -1073741670LL);
  return v27;
}
