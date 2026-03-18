/*
 * XREFs of UsbhBuildHardwareID @ 0x14000DCB8
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
 *     WPP_RECORDER_SF_dDD @ 0x1400546DC (WPP_RECORDER_SF_dDD.c)
 *     WPP_RECORDER_SF_Sd @ 0x14005A754 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x14005A8B8 (WPP_RECORDER_SF_Sqd.c)
 */

__int64 __fastcall UsbhBuildHardwareID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int v7; // r10d
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v14; // edx
  __int64 v15; // r13
  int v16; // eax
  int v17; // r8d
  __int64 v18; // r12
  __int16 v19; // r13
  __int64 v20; // rcx
  signed __int32 v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 Id; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // r8d
  char v31; // dl
  int v32; // r8d
  int v33; // eax
  int v34; // r8d
  __int64 v35; // r11
  int v36; // edx
  int v37; // r8d
  __int64 v38; // r10
  char v39; // r11
  int v40; // [rsp+20h] [rbp-58h]
  int v41; // [rsp+20h] [rbp-58h]
  int v42; // [rsp+20h] [rbp-58h]
  int v43; // [rsp+20h] [rbp-58h]
  int v44; // [rsp+20h] [rbp-58h]
  int v45; // [rsp+28h] [rbp-50h]
  int v46; // [rsp+28h] [rbp-50h]
  int v47; // [rsp+28h] [rbp-50h]
  int v48; // [rsp+28h] [rbp-50h]
  int v49; // [rsp+28h] [rbp-50h]
  int v50; // [rsp+30h] [rbp-48h]
  int v51; // [rsp+30h] [rbp-48h]
  int v52; // [rsp+30h] [rbp-48h]
  int v53; // [rsp+30h] [rbp-48h]
  int v54; // [rsp+30h] [rbp-48h]
  __int16 v55; // [rsp+88h] [rbp+10h]
  unsigned int v56; // [rsp+98h] [rbp+20h] BYREF

  v56 = 0;
  if ( a2 )
  {
    v15 = PdoExt(a2);
    v16 = *(_DWORD *)(v15 + 1420);
    if ( (v16 & 0x10000) != 0 && (v16 & 4) == 0 )
    {
      v33 = UsbhBuildUxdPnpId(4LL, a2, a3);
      if ( v33 >= 0 )
      {
        Log(a1, 4096, 1752651096, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_QWORD *)(a3 + 8),
            v34,
            14,
            (__int64)&WPP_98a52ec283cc3c01b3a718f7732a7c3c_Traceguids,
            *(_QWORD *)(a3 + 8),
            *(_QWORD *)(a3 + 8),
            *(_DWORD *)(a3 + 4));
        return 0LL;
      }
      Log(a1, 4096, 1752651845, 0LL, v33);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          15,
          (__int64)&WPP_98a52ec283cc3c01b3a718f7732a7c3c_Traceguids);
    }
    v17 = *(unsigned __int16 *)(v15 + 1408);
    v18 = *(unsigned __int16 *)(v15 + 1410);
    v19 = *(_WORD *)(v15 + 1412);
    v55 = v17;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dDD(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        v17,
        16,
        (__int64)&WPP_98a52ec283cc3c01b3a718f7732a7c3c_Traceguids,
        v17,
        v18,
        v19);
      LOWORD(v17) = v55;
    }
    if ( (UsbhLogMask & 0x1000) != 0 )
    {
      if ( a1 )
      {
        v20 = *(_QWORD *)(a1 + 64);
        if ( v20 )
        {
          v21 = _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 880), 0xFFFFFFFF);
          v22 = *(_DWORD *)(v20 + 884);
          v23 = *(_QWORD *)(v20 + 888);
          v24 = 32LL * ((v21 - 1) & v22);
          *(_DWORD *)(v24 + v23) = 1145665384;
          *(_QWORD *)(v24 + v23 + 16) = (unsigned __int16)v17;
          *(_QWORD *)(v24 + v23 + 8) = 0LL;
          *(_QWORD *)(v24 + v23 + 24) = v18;
        }
      }
    }
    LOWORD(v50) = v17;
    LOWORD(v45) = 4;
    LOWORD(v40) = 0;
    Id = UsbhMakeId(0LL, L"USB\\VID_nnnn", 0LL, &v56, v40, v45, v50, 0LL);
    if ( Id )
    {
      LOWORD(v51) = v18;
      LOWORD(v46) = 4;
      LOWORD(v41) = 0;
      v26 = UsbhMakeId(0LL, L"&PID_nnnn", Id, &v56, v41, v46, v51, 0LL);
      if ( v26 )
      {
        LOWORD(v52) = v19;
        LOWORD(v47) = 4;
        LOWORD(v42) = 1;
        v27 = UsbhMakeId(1LL, L"&REV_nnnn", v26, &v56, v42, v47, v52, 0LL);
        LOWORD(v53) = v55;
        LOWORD(v48) = 4;
        LOWORD(v43) = 0;
        v28 = UsbhMakeId(0LL, L"USB\\VID_nnnn", v27, &v56, v43, v48, v53, 0LL);
        if ( v28 )
        {
          LOWORD(v54) = v18;
          LOWORD(v49) = 4;
          LOWORD(v44) = 2;
          v29 = UsbhMakeId(0LL, L"&PID_nnnn", v28, &v56, v44, v49, v54, 0LL);
          if ( v29 )
          {
            v31 = v56;
            *(_DWORD *)(a3 + 4) = v56;
            *(_QWORD *)(a3 + 8) = v29;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_Sd(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                v30,
                18,
                (__int64)&WPP_98a52ec283cc3c01b3a718f7732a7c3c_Traceguids,
                v29,
                v31);
            }
            return 0LL;
          }
          v32 = 1751725089;
        }
        else
        {
          v32 = 1751725345;
        }
      }
      else
      {
        v32 = 1751724321;
      }
    }
    else
    {
      v32 = 1751724577;
    }
    Log(a1, 4096, v32, a2, -1073741670LL);
    return v7;
  }
  v6 = UsbhMakeId(0LL, L"USB\\UNKNOWN", 0LL, &v56, 2, 0, 0, 0LL);
  if ( !v6 )
  {
    v7 = -1073741670;
    if ( (UsbhLogMask & 0x1000) != 0 && a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 880), 0xFFFFFFFF);
        v10 = *(_DWORD *)(v8 + 884);
        v11 = *(_QWORD *)(v8 + 888);
        v12 = 32LL * ((v9 - 1) & v10);
        *(_DWORD *)(v12 + v11) = 557017448;
        *(_QWORD *)(v12 + v11 + 8) = 0LL;
        *(_QWORD *)(v12 + v11 + 16) = 0LL;
        *(_QWORD *)(v12 + v11 + 24) = -1073741670LL;
      }
    }
    return v7;
  }
  v35 = v56;
  *(_DWORD *)(a3 + 4) = v56;
  *(_QWORD *)(a3 + 8) = v6;
  Log(a1, 4096, 1751733537, v6, v35);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_Sqd(
      WPP_GLOBAL_Control->DeviceExtension,
      v36,
      v37,
      17,
      (__int64)&WPP_98a52ec283cc3c01b3a718f7732a7c3c_Traceguids,
      v38,
      v38,
      v39);
  return 0LL;
}
