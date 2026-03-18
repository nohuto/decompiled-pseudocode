/*
 * XREFs of DrvGetDisplayDriverParameters @ 0x14004C840
 * Callers:
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401190B8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x14004CEEC (-DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x14004D190 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x14006D21C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     UserGetDisconnectDeviceResolutionHint @ 0x1401B6D74 (UserGetDisconnectDeviceResolutionHint.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall DrvGetDisplayDriverParameters(__int64 a1, struct _devicemodeW *a2, int a3, __int64 a4)
{
  DWORD *p_dmDisplayFixedOutput; // rdi
  NTSTATUS RegistryValues; // r12d
  int v9; // r13d
  DWORD *p_dmBitsPerPel; // rcx
  DWORD *v11; // rsi
  DWORD *p_dmPelsWidth; // rdx
  DWORD *p_dmDisplayFrequency; // r9
  int v14; // edi
  PCWSTR *p_Name; // rcx
  __int64 v16; // r9
  wchar_t **v17; // r8
  const WCHAR *v18; // rax
  unsigned int v19; // edi
  WCHAR *RegistryHandleFromDeviceMap; // r15
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  _OWORD *v25; // rdx
  __int128 v26; // xmm0
  _OWORD *v27; // rdx
  unsigned __int16 dmDriverExtra; // cx
  DWORD QueryRoutine_high; // eax
  int v30; // [rsp+30h] [rbp-D0h] BYREF
  int v31; // [rsp+34h] [rbp-CCh] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  __int64 v35; // [rsp+130h] [rbp+30h]
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *p_dmDisplayFlags; // [rsp+138h] [rbp+38h]
  int v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  int v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  int v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  DWORD *p_dmPanningWidth; // [rsp+170h] [rbp+70h]
  int v44; // [rsp+178h] [rbp+78h]
  __int64 v45; // [rsp+180h] [rbp+80h]
  int v46; // [rsp+188h] [rbp+88h]
  __int64 v47; // [rsp+190h] [rbp+90h]
  int v48; // [rsp+198h] [rbp+98h]
  __int64 v49; // [rsp+1A0h] [rbp+A0h]
  DWORD *p_dmPanningHeight; // [rsp+1A8h] [rbp+A8h]
  int v51; // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  int v53; // [rsp+1C0h] [rbp+C0h]
  __int64 v54; // [rsp+1C8h] [rbp+C8h]
  int v55; // [rsp+1D0h] [rbp+D0h]
  __int64 v56; // [rsp+1D8h] [rbp+D8h]
  DWORD *p_dmDisplayOrientation; // [rsp+1E0h] [rbp+E0h]
  int v58; // [rsp+1E8h] [rbp+E8h]
  __int64 v59; // [rsp+1F0h] [rbp+F0h]
  int v60; // [rsp+1F8h] [rbp+F8h]
  __int64 v61; // [rsp+200h] [rbp+100h]
  int v62; // [rsp+208h] [rbp+108h]
  __int64 v63; // [rsp+210h] [rbp+110h]
  DWORD *v64; // [rsp+218h] [rbp+118h]
  int v65; // [rsp+220h] [rbp+120h]
  __int64 v66; // [rsp+228h] [rbp+128h]
  int v67; // [rsp+230h] [rbp+130h]
  __int64 v68; // [rsp+238h] [rbp+138h]
  int v69; // [rsp+240h] [rbp+140h]
  __int64 v70; // [rsp+248h] [rbp+148h]
  union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *p_dmOrientation; // [rsp+250h] [rbp+150h]
  int v72; // [rsp+258h] [rbp+158h]
  __int64 v73; // [rsp+260h] [rbp+160h]
  int v74; // [rsp+268h] [rbp+168h]
  __int64 v75; // [rsp+270h] [rbp+170h]
  int v76; // [rsp+278h] [rbp+178h]
  __int64 v77; // [rsp+280h] [rbp+180h]
  LONG *p_y; // [rsp+288h] [rbp+188h]
  int v79; // [rsp+290h] [rbp+190h]
  __int64 v80; // [rsp+298h] [rbp+198h]
  int v81; // [rsp+2A0h] [rbp+1A0h]
  __int64 v82; // [rsp+2A8h] [rbp+1A8h]
  int v83; // [rsp+2B0h] [rbp+1B0h]
  __int64 v84; // [rsp+2B8h] [rbp+1B8h]
  int *v85; // [rsp+2C0h] [rbp+1C0h]
  int v86; // [rsp+2C8h] [rbp+1C8h]
  __int64 v87; // [rsp+2D0h] [rbp+1D0h]
  int v88; // [rsp+2D8h] [rbp+1D8h]
  int (*v89)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2E0h] [rbp+1E0h]
  int v90; // [rsp+2E8h] [rbp+1E8h]
  __int64 v91; // [rsp+2F0h] [rbp+1F0h]
  struct _devicemodeW *v92; // [rsp+2F8h] [rbp+1F8h]
  int v93; // [rsp+300h] [rbp+200h]
  int *v94; // [rsp+308h] [rbp+208h]
  int v95; // [rsp+310h] [rbp+210h]
  __int64 v96; // [rsp+318h] [rbp+218h]
  int v97; // [rsp+320h] [rbp+220h]
  __int64 v98; // [rsp+328h] [rbp+228h]
  __int128 v99; // [rsp+330h] [rbp+230h]
  __int128 v100; // [rsp+340h] [rbp+240h]

  p_dmDisplayFixedOutput = &a2->dmDisplayFixedOutput;
  v30 = 0;
  v31 = 0;
  RegistryValues = 0;
  v9 = 1;
  if ( a3 )
  {
    memset(a2, 0, sizeof(struct _devicemodeW));
  }
  else
  {
    p_dmBitsPerPel = &a2->dmBitsPerPel;
    v11 = &a2->dmDisplayFixedOutput;
    p_dmPelsWidth = &a2->dmPelsWidth;
    p_dmDisplayFrequency = &a2->dmDisplayFrequency;
    if ( a4 )
    {
      *p_dmBitsPerPel = *(_DWORD *)(a4 + 168);
      dmDriverExtra = a2->dmDriverExtra;
      *p_dmPelsWidth = *(_DWORD *)(a4 + 172);
      a2->dmPelsHeight = *(_DWORD *)(a4 + 176);
      *p_dmDisplayFrequency = *(_DWORD *)(a4 + 184);
      a2->dmDisplayFlags = *(_DWORD *)(a4 + 180);
      a2->dmPanningWidth = *(_DWORD *)(a4 + 212);
      a2->dmPanningHeight = *(_DWORD *)(a4 + 216);
      a2->dmPosition.x = *(_DWORD *)(a4 + 76);
      a2->dmPosition.y = *(_DWORD *)(a4 + 80);
      a2->dmDisplayOrientation = *(_DWORD *)(a4 + 84);
      *p_dmDisplayFixedOutput = *(_DWORD *)(a4 + 88);
      if ( dmDriverExtra >= *(_WORD *)(a4 + 70) )
        dmDriverExtra = *(_WORD *)(a4 + 70);
      a2->dmDriverExtra = dmDriverExtra;
      memmove(&a2[1], (const void *)(a4 + 220), dmDriverExtra);
      if ( (*(_DWORD *)(a4 + 72) & 0x20) != 0 )
        v30 = 1;
      goto LABEL_14;
    }
    QueryTable[0].QueryRoutine = 0LL;
    QueryTable[0].Name = 0LL;
    QueryTable[0].EntryContext = p_dmBitsPerPel;
    p_dmPanningHeight = &a2->dmPanningHeight;
    QueryTable[0].DefaultData = 0LL;
    QueryTable[0].DefaultLength = 0;
    QueryTable[1].QueryRoutine = 0LL;
    QueryTable[1].Name = 0LL;
    QueryTable[1].DefaultData = 0LL;
    QueryTable[1].DefaultLength = 0;
    QueryTable[2].QueryRoutine = 0LL;
    QueryTable[2].Name = 0LL;
    p_dmOrientation = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)&a2->dmOrientation;
    QueryTable[1].EntryContext = p_dmPelsWidth;
    QueryTable[2].EntryContext = &a2->dmPelsHeight;
    p_dmDisplayOrientation = &a2->dmDisplayOrientation;
    p_y = &a2->dmPosition.y;
    QueryTable[0].Flags = 288;
    QueryTable[0].DefaultType = 0x4000000;
    QueryTable[1].Flags = 288;
    QueryTable[1].DefaultType = 0x4000000;
    QueryTable[2].Flags = 288;
    QueryTable[2].DefaultType = 0x4000000;
    QueryTable[2].DefaultData = 0LL;
    QueryTable[2].DefaultLength = 0;
    QueryTable[3].QueryRoutine = 0LL;
    QueryTable[3].Flags = 288;
    QueryTable[3].Name = 0LL;
    QueryTable[3].EntryContext = &a2->dmDisplayFrequency;
    QueryTable[3].DefaultType = 0x4000000;
    QueryTable[3].DefaultData = 0LL;
    QueryTable[3].DefaultLength = 0;
    v33 = 0LL;
    v34 = 288;
    v35 = 0LL;
    p_dmDisplayFlags = (union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *)&a2->dmDisplayFlags;
    v37 = 0x4000000;
    v38 = 0LL;
    v39 = 0;
    v40 = 0LL;
    v41 = 288;
    v42 = 0LL;
    p_dmPanningWidth = &a2->dmPanningWidth;
    v44 = 0x4000000;
    v45 = 0LL;
    v46 = 0;
    v47 = 0LL;
    v48 = 288;
    v49 = 0LL;
    v51 = 0x4000000;
    v52 = 0LL;
    v53 = 0;
    v54 = 0LL;
    v55 = 288;
    v56 = 0LL;
    v58 = 0x4000000;
    v59 = 0LL;
    v60 = 0;
    v61 = 0LL;
    v62 = 288;
    v63 = 0LL;
    v64 = p_dmDisplayFixedOutput;
    v65 = 0x4000000;
    v66 = 0LL;
    v67 = 0;
    v68 = 0LL;
    v69 = 288;
    v70 = 0LL;
    v72 = 0x4000000;
    v73 = 0LL;
    v74 = 0;
    v75 = 0LL;
    v76 = 288;
    v77 = 0LL;
    v85 = &v30;
    v89 = DrvDriverExtraCallback;
    v94 = &v31;
    v79 = 0x4000000;
    v80 = 0LL;
    v81 = 0;
    v82 = 0LL;
    v83 = 288;
    v84 = 0LL;
    v86 = 0x4000000;
    v87 = 0LL;
    v88 = 0;
    v90 = 0;
    v91 = 0LL;
    v92 = a2;
    v93 = 4;
    v95 = 0x10000;
    v96 = 0LL;
    v97 = 0;
    v98 = 0LL;
    v99 = 0LL;
    v100 = 0LL;
    if ( !a2->dmDriverExtra )
    {
      v89 = 0LL;
      v90 = 0;
      v91 = 0LL;
      a2->dmDriverExtra = 0;
    }
    v14 = *(_DWORD *)(a1 + 160) & 8;
    if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection(
                          &a2->dmDisplayOrientation,
                          0x4000000LL,
                          0LL,
                          p_dmDisplayFrequency)
      || !v14
      || (v25 = *(_OWORD **)(a1 + 264)) == 0LL )
    {
      p_Name = &QueryTable[0].Name;
      v16 = 13LL;
      v17 = off_140247270;
      do
      {
        v18 = *v17++;
        *p_Name = v18;
        p_Name += 7;
        --v16;
      }
      while ( v16 );
      v19 = 1;
      while ( 1 )
      {
        RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                 (unsigned __int16 *)a1,
                                                 v9,
                                                 0LL,
                                                 0LL,
                                                 0,
                                                 0LL);
        if ( RegistryHandleFromDeviceMap )
        {
          RegistryValues = RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, QueryTable, 0LL, 0LL);
          ZwClose(RegistryHandleFromDeviceMap);
          if ( RegistryValues >= 0 )
          {
            v22 = *(_QWORD *)(W32GetSessionState(v21) + 88);
            if ( v30
              && !a2->dmBitsPerPel
              && !a2->dmPelsWidth
              && !a2->dmPelsHeight
              && !a2->dmDisplayFrequency
              && !a2->dmDisplayFlags
              && !*(_DWORD *)(v22 + 1060) )
            {
              DrvLogDisplayDriverEvent(6LL);
            }
            p_dmDisplayFixedOutput = v11;
            goto LABEL_14;
          }
        }
        else
        {
          RegistryValues = -1073741823;
        }
        ++v19;
        v9 = 0;
        if ( v19 > 2 )
          return (unsigned int)RegistryValues;
      }
    }
    *(_OWORD *)a2->dmDeviceName = *v25;
    *(_OWORD *)&a2->dmDeviceName[8] = v25[1];
    *(_OWORD *)&a2->dmDeviceName[16] = v25[2];
    *(_OWORD *)&a2->dmDeviceName[24] = v25[3];
    *(_OWORD *)&a2->dmSpecVersion = v25[4];
    *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4) = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C)v25[5];
    *(_OWORD *)&a2->dmYResolution = v25[6];
    v26 = v25[7];
    v27 = v25 + 8;
    *(_OWORD *)&a2->dmFormName[5] = v26;
    *(_OWORD *)&a2->dmFormName[13] = *v27;
    *(_OWORD *)&a2->dmFormName[21] = v27[1];
    *(_OWORD *)&a2->dmFormName[29] = v27[2];
    *(_OWORD *)&a2->dmPelsHeight = v27[3];
    *(_OWORD *)&a2->dmICMIntent = v27[4];
    *(_QWORD *)&a2->dmReserved2 = *((_QWORD *)v27 + 10);
    a2->dmPanningHeight = *((_DWORD *)v27 + 22);
    memmove(&a2[1], (const void *)(*(_QWORD *)(a1 + 264) + 220LL), a2->dmDriverExtra);
    p_dmDisplayFixedOutput = v11;
  }
LABEL_14:
  *(_DWORD *)&a2->dmSpecVersion = 67175425;
  a2->dmSize = 220;
  DrvGetDisplayDriverDpiSetting(a2);
  v23 = 410910848;
  a2->dmFields = 410910848;
  if ( v30 )
  {
    v23 = 410910880;
    a2->dmFields = 410910880;
  }
  if ( *p_dmDisplayFixedOutput )
    a2->dmFields = v23 | 0x20000000;
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    memset(QueryTable, 0, 0xDCuLL);
    UserGetDisconnectDeviceResolutionHint(QueryTable);
    if ( ((__int64)QueryTable[1].Name & 0x80000) != 0
      && ((__int64)QueryTable[1].Name & 0x100000) != 0
      && ((__int64)QueryTable[1].Name & 0x40000) != 0 )
    {
      QueryRoutine_high = HIDWORD(QueryTable[3].QueryRoutine);
      a2->dmFields |= 0x1C0000u;
      a2->dmPelsWidth = QueryRoutine_high;
      a2->dmPelsHeight = QueryTable[3].Flags;
      a2->dmBitsPerPel = (DWORD)QueryTable[3].QueryRoutine;
    }
  }
  return (unsigned int)RegistryValues;
}
