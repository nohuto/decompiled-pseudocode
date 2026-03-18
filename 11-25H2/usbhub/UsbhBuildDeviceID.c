/*
 * XREFs of UsbhBuildDeviceID @ 0x140015194
 * Callers:
 *     UsbhCreatePdo @ 0x140014360 (UsbhCreatePdo.c)
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x14001D3EC (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhMakeId @ 0x1400159A0 (UsbhMakeId.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhBuildUxdPnpId @ 0x140039B74 (UsbhBuildUxdPnpId.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x14005A110 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_Sd @ 0x14005A1D8 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x14005A33C (WPP_RECORDER_SF_Sqd.c)
 */

__int64 __fastcall UsbhBuildDeviceID(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r10
  unsigned __int16 v8; // r12
  unsigned __int16 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 Id; // rax
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rdx
  char v16; // al
  __int64 v18; // rcx
  _DWORD *v19; // r13
  int v20; // eax
  int v21; // eax
  int v22; // r8d
  int v23; // r10d
  int v24; // r8d
  unsigned int v25; // r10d
  int v26; // [rsp+20h] [rbp-48h]
  int v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+28h] [rbp-40h]
  int v29; // [rsp+28h] [rbp-40h]
  int v30; // [rsp+30h] [rbp-38h]
  int v31; // [rsp+30h] [rbp-38h]
  int v32; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v32 = 0;
  if ( a2 )
  {
    v19 = PdoExt(a2);
    v20 = v19[355];
    if ( (v20 & 0x10000) != 0 && (v20 & 4) == 0 )
    {
      v21 = UsbhBuildUxdPnpId(v18, a2, a3);
      if ( v21 >= 0 )
      {
        Log(a1, 4096, 1684624728, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v23 )
        {
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_QWORD *)(a3 + 8),
            v22,
            v23 + 10,
            (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids,
            *(_QWORD *)(a3 + 8),
            *(_QWORD *)(a3 + 8),
            *(_DWORD *)(a3 + 4));
        }
        return 0LL;
      }
      Log(a1, 4096, 1684625477, 0, v21);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v4 )
      {
        goto LABEL_26;
      }
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        11,
        (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids);
    }
    v4 = 0LL;
LABEL_26:
    v8 = *((_WORD *)v19 + 704);
    v9 = *((_WORD *)v19 + 705);
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
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 1145665124;
        *(_QWORD *)(v11 + 16) = v8;
        *(_QWORD *)(v11 + 24) = v9;
        *(_QWORD *)(v11 + 8) = v4;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v4 )
  {
    WPP_RECORDER_SF_DD(WPP_GLOBAL_Control->DeviceExtension, v8, a3, a4, v26, v8, v9);
  }
  LOWORD(v30) = v8;
  LOWORD(v28) = 4;
  LOWORD(v26) = 0;
  Id = UsbhMakeId(0LL, L"USB\\VID_nnnn", 0LL, &v32, v26, v28, v30, 0LL);
  if ( Id )
  {
    LOWORD(v31) = v9;
    LOWORD(v29) = 4;
    LOWORD(v27) = 2;
    v13 = UsbhMakeId(0LL, L"&PID_nnnn", Id, &v32, v27, v29, v31, 0LL);
    v15 = v13;
    if ( v13 )
    {
      *(_QWORD *)(a3 + 8) = v13;
      v16 = v32;
      *(_DWORD *)(a3 + 4) = v32;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sd(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            v14,
            13,
            (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids,
            v15,
            v16);
      }
      return 0LL;
    }
    v24 = 1684615474;
  }
  else
  {
    v24 = 1684615457;
  }
  Log(a1, 4096, v24, a2, -1073741670LL);
  return v25;
}
