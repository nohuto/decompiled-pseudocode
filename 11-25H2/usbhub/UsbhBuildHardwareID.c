/*
 * XREFs of UsbhBuildHardwareID @ 0x1400154A0
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
 *     WPP_RECORDER_SF_dDD @ 0x1400541CC (WPP_RECORDER_SF_dDD.c)
 *     WPP_RECORDER_SF_Sd @ 0x14005A1D8 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x14005A33C (WPP_RECORDER_SF_Sqd.c)
 */

__int64 __fastcall UsbhBuildHardwareID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int v7; // r10d
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v11; // edx
  _DWORD *v12; // r13
  int v13; // eax
  int v14; // r8d
  __int64 v15; // r12
  __int16 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 Id; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // r8d
  char v25; // dl
  int v26; // r8d
  int v27; // eax
  int v28; // r8d
  __int64 v29; // r11
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r10
  char v33; // r11
  int v34; // [rsp+20h] [rbp-58h]
  int v35; // [rsp+20h] [rbp-58h]
  int v36; // [rsp+20h] [rbp-58h]
  int v37; // [rsp+20h] [rbp-58h]
  int v38; // [rsp+20h] [rbp-58h]
  int v39; // [rsp+28h] [rbp-50h]
  int v40; // [rsp+28h] [rbp-50h]
  int v41; // [rsp+28h] [rbp-50h]
  int v42; // [rsp+28h] [rbp-50h]
  int v43; // [rsp+28h] [rbp-50h]
  int v44; // [rsp+30h] [rbp-48h]
  int v45; // [rsp+30h] [rbp-48h]
  int v46; // [rsp+30h] [rbp-48h]
  int v47; // [rsp+30h] [rbp-48h]
  int v48; // [rsp+30h] [rbp-48h]
  __int16 v49; // [rsp+88h] [rbp+10h]
  unsigned int v50; // [rsp+98h] [rbp+20h] BYREF

  v50 = 0;
  if ( a2 )
  {
    v12 = PdoExt(a2);
    v13 = v12[355];
    if ( (v13 & 0x10000) != 0 && (v13 & 4) == 0 )
    {
      v27 = UsbhBuildUxdPnpId(4LL, a2, a3);
      if ( v27 >= 0 )
      {
        Log(a1, 4096, 1752651096, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_QWORD *)(a3 + 8),
            v28,
            14,
            (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids,
            *(_QWORD *)(a3 + 8),
            *(_QWORD *)(a3 + 8),
            *(_DWORD *)(a3 + 4));
        return 0LL;
      }
      Log(a1, 4096, 1752651845, 0, v27);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          15,
          (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids);
    }
    v14 = *((unsigned __int16 *)v12 + 704);
    v15 = *((unsigned __int16 *)v12 + 705);
    v16 = *((_WORD *)v12 + 706);
    v49 = v14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dDD(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        v14,
        16,
        (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids,
        v14,
        v15,
        v16);
      LOWORD(v14) = v49;
    }
    if ( (UsbhLogMask & 0x1000) != 0 )
    {
      if ( a1 )
      {
        v17 = *(_QWORD *)(a1 + 64);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v18 = 1145665384;
          *(_QWORD *)(v18 + 16) = (unsigned __int16)v14;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 24) = v15;
        }
      }
    }
    LOWORD(v44) = v14;
    LOWORD(v39) = 4;
    LOWORD(v34) = 0;
    Id = UsbhMakeId(0LL, L"USB\\VID_nnnn", 0LL, &v50, v34, v39, v44, 0LL);
    if ( Id )
    {
      LOWORD(v45) = v15;
      LOWORD(v40) = 4;
      LOWORD(v35) = 0;
      v20 = UsbhMakeId(0LL, L"&PID_nnnn", Id, &v50, v35, v40, v45, 0LL);
      if ( v20 )
      {
        LOWORD(v46) = v16;
        LOWORD(v41) = 4;
        LOWORD(v36) = 1;
        v21 = UsbhMakeId(1LL, L"&REV_nnnn", v20, &v50, v36, v41, v46, 0LL);
        LOWORD(v47) = v49;
        LOWORD(v42) = 4;
        LOWORD(v37) = 0;
        v22 = UsbhMakeId(0LL, L"USB\\VID_nnnn", v21, &v50, v37, v42, v47, 0LL);
        if ( v22 )
        {
          LOWORD(v48) = v15;
          LOWORD(v43) = 4;
          LOWORD(v38) = 2;
          v23 = UsbhMakeId(0LL, L"&PID_nnnn", v22, &v50, v38, v43, v48, 0LL);
          if ( v23 )
          {
            v25 = v50;
            *(_DWORD *)(a3 + 4) = v50;
            *(_QWORD *)(a3 + 8) = v23;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_Sd(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                v24,
                18,
                (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids,
                v23,
                v25);
            }
            return 0LL;
          }
          v26 = 1751725089;
        }
        else
        {
          v26 = 1751725345;
        }
      }
      else
      {
        v26 = 1751724321;
      }
    }
    else
    {
      v26 = 1751724577;
    }
    Log(a1, 4096, v26, a2, -1073741670LL);
    return v7;
  }
  v6 = UsbhMakeId(0LL, L"USB\\UNKNOWN", 0LL, &v50, 2, 0, 0, 0LL);
  if ( !v6 )
  {
    v7 = -1073741670;
    if ( (UsbhLogMask & 0x1000) != 0 && a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 557017448;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_QWORD *)(v9 + 24) = -1073741670LL;
      }
    }
    return v7;
  }
  v29 = v50;
  *(_DWORD *)(a3 + 4) = v50;
  *(_QWORD *)(a3 + 8) = v6;
  Log(a1, 4096, 1751733537, v6, v29);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_Sqd(
      WPP_GLOBAL_Control->DeviceExtension,
      v30,
      v31,
      17,
      (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids,
      v32,
      v32,
      v33);
  return 0LL;
}
