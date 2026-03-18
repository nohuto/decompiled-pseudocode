/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC
 * Callers:
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140048BFC (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     DrvGetDeviceFromName @ 0x14004A170 (DrvGetDeviceFromName.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x14004D030 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x14004D190 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x14004D980 (UserRemoteConnectedSessionUsingXddm.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E29C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E2F4 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x14004E400 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     UserIsDisconnectConnection @ 0x14006BBA0 (UserIsDisconnectConnection.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x14006D21C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x14007230C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140086794 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087950 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087D5C (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     AlignRects @ 0x1400CDB98 (AlignRects.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E2640 (DrvDxgkLogCodePointPacket.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1400EE3B8 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x140118CB0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401190B8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvGetDisplayDriverNames @ 0x14011D910 (DrvGetDisplayDriverNames.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x14012DDC0 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x14012DE38 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x140134164 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401398CC (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x14013EED4 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?CalculateUniformSpaceMapping@@YAXPEAU_MDEV@@@Z @ 0x14013EF98 (-CalculateUniformSpaceMapping@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140143DF0 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014711C (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140148008 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x14014D8A0 (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x140157644 (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     GetDpiSetting @ 0x1401583EC (GetDpiSetting.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019CA20 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     wcsncmp @ 0x1401A33BC (wcsncmp.c)
 *     UserGetDpiInfoFromPrimaryMonitor @ 0x1401AEC9C (UserGetDpiInfoFromPrimaryMonitor.c)
 *     ?AdjustForOrientation@@YA?AUtagSIZE@@II_N@Z @ 0x1401C9CE8 (-AdjustForOrientation@@YA-AUtagSIZE@@II_N@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401CC238 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline @ 0x1401CFF84 (Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline.c)
 *     SetDpiSetting @ 0x14023F2A8 (SetDpiSetting.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 *     memcmp @ 0x140243810 (memcmp.c)
 */

struct _MDEV *__fastcall DrvCreateMDEV(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        void *a3,
        unsigned int a4,
        struct _MDEV *a5,
        unsigned int a6,
        int a7,
        int a8,
        struct D3DKMT_GETPATHSMODALITY *a9)
{
  __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rdx
  struct _devicemodeW *v15; // rbx
  struct D3DKMT_GETPATHSMODALITY *v16; // r12
  int v17; // r14d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // r13d
  bool v22; // sf
  HDEV v23; // rsi
  __int64 v24; // rdi
  int v25; // eax
  unsigned int v26; // eax
  struct _ERESOURCE *v27; // rbx
  struct _GRETHREAD *v28; // rax
  struct _ERESOURCE *v29; // rbx
  struct _GRETHREAD *v30; // rax
  struct _ERESOURCE *v31; // rbx
  struct _GRETHREAD *v32; // rax
  unsigned int *v33; // r14
  __int64 v34; // rbx
  int j; // eax
  __int64 v36; // rsi
  __int16 v37; // cx
  unsigned int v38; // ebx
  unsigned int v39; // eax
  HDEV v40; // rbx
  int v41; // ecx
  unsigned __int16 i; // cx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r13
  __int16 v47; // dx
  int v48; // eax
  bool v49; // zf
  int v50; // eax
  unsigned int *DisplayDriverNames; // r12
  int v52; // ecx
  unsigned int v53; // esi
  unsigned int DriverCapableOverRide; // r14d
  unsigned int DriverAccelerationsLevel; // r15d
  struct _devicemodeW *v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  struct _devicemodeW *v59; // rax
  char *v60; // rcx
  struct _devicemodeW *v61; // rbx
  struct _devicemodeW *v62; // rbx
  int v63; // eax
  _DWORD *v64; // r8
  int v65; // eax
  int dmPelsHeight; // r9d
  int dmPelsWidth; // r8d
  int v68; // edx
  int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  HDEV *v72; // rdx
  __int64 v73; // r8
  HDEV v74; // rcx
  HDEV v75; // rax
  _DWORD *v76; // rbx
  unsigned int v77; // ecx
  _QWORD *v78; // rdi
  unsigned __int64 v79; // rcx
  _QWORD *v80; // r14
  unsigned int v81; // esi
  unsigned int *v82; // r13
  MULTIDEVLOCKOBJ *v83; // rax
  MULTIDEVLOCKOBJ *v84; // rbx
  unsigned int v85; // r12d
  int v86; // edi
  unsigned int v87; // edi
  unsigned int v88; // edx
  unsigned int *v89; // rcx
  unsigned int v90; // eax
  unsigned int v91; // edi
  _DWORD *v92; // rbx
  void *v93; // rax
  void *v94; // r15
  unsigned int v95; // r10d
  unsigned int v96; // r9d
  __int64 v97; // rdx
  __int64 v98; // rax
  _DWORD *v99; // r8
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r15
  int v104; // eax
  unsigned int v105; // eax
  __int64 k; // rdx
  __int64 v107; // rdi
  MULTIDEVLOCKOBJ *v108; // rdi
  __int64 v109; // rbx
  int v110; // ecx
  __int64 v111; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v113; // eax
  int v114; // eax
  int DpiInfoFromPrimaryMonitor; // eax
  int v116; // eax
  unsigned int v117; // eax
  _WORD *v118; // r8
  int v119; // eax
  unsigned int m; // r9d
  int v121; // eax
  int v122; // edx
  unsigned int v123; // eax
  unsigned int v124; // eax
  int v125; // ecx
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rdx
  unsigned int v129; // r13d
  unsigned int v130; // r12d
  __int64 v131; // rbx
  struct tagSIZE v132; // rax
  unsigned int v133; // edx
  unsigned int v134; // ecx
  bool v135; // r8
  struct tagSIZE v136; // rax
  unsigned int v137; // r12d
  int v138; // r10d
  unsigned int v139; // r9d
  __int64 v140; // rdx
  int v141; // ecx
  unsigned int v142; // edi
  unsigned int v143; // esi
  __int64 v144; // r12
  __int64 v145; // rbx
  void (__fastcall *v146)(__int64, __int64); // rax
  __int128 v147; // xmm0
  MULTIDEVLOCKOBJ *v148; // rdi
  void *v149; // rsi
  char *v150; // rax
  struct _MDEV *result; // rax
  unsigned int Src; // [rsp+20h] [rbp-E0h]
  int v153; // [rsp+30h] [rbp-D0h]
  int v154; // [rsp+30h] [rbp-D0h]
  int v155; // [rsp+30h] [rbp-D0h]
  int v156; // [rsp+38h] [rbp-C8h]
  int v157; // [rsp+38h] [rbp-C8h]
  struct _DPI_INFORMATION *v158; // [rsp+38h] [rbp-C8h]
  unsigned int v159; // [rsp+40h] [rbp-C0h]
  unsigned int v160; // [rsp+50h] [rbp-B0h]
  int v161; // [rsp+54h] [rbp-ACh]
  __int64 v162; // [rsp+58h] [rbp-A8h]
  __int64 v163; // [rsp+58h] [rbp-A8h]
  PVOID Buffer; // [rsp+60h] [rbp-A0h] BYREF
  int v165; // [rsp+68h] [rbp-98h]
  unsigned int v166; // [rsp+6Ch] [rbp-94h]
  void *Buf2; // [rsp+70h] [rbp-90h]
  MULTIDEVLOCKOBJ *v168; // [rsp+78h] [rbp-88h]
  int PruneFlag; // [rsp+80h] [rbp-80h]
  int v170; // [rsp+84h] [rbp-7Ch]
  unsigned int v171; // [rsp+88h] [rbp-78h] BYREF
  int v172; // [rsp+8Ch] [rbp-74h] BYREF
  int v173; // [rsp+90h] [rbp-70h]
  HDEV v174; // [rsp+98h] [rbp-68h] BYREF
  __int64 v175; // [rsp+A0h] [rbp-60h]
  _QWORD *v176; // [rsp+A8h] [rbp-58h]
  void *Buf1; // [rsp+B0h] [rbp-50h]
  unsigned int v178; // [rsp+B8h] [rbp-48h] BYREF
  int v179; // [rsp+BCh] [rbp-44h] BYREF
  int v180; // [rsp+C0h] [rbp-40h] BYREF
  int v181; // [rsp+C4h] [rbp-3Ch]
  __int64 DeviceFromName; // [rsp+C8h] [rbp-38h]
  int CurrentWin32kSessionId; // [rsp+D0h] [rbp-30h] BYREF
  HDEV v184; // [rsp+D8h] [rbp-28h] BYREF
  struct _ERESOURCE *v185; // [rsp+E0h] [rbp-20h] BYREF
  HSEMAPHORE v186; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v187; // [rsp+F0h] [rbp-10h] BYREF
  HSEMAPHORE v188; // [rsp+F8h] [rbp-8h] BYREF
  HSEMAPHORE v189; // [rsp+100h] [rbp+0h] BYREF
  __int64 v190; // [rsp+108h] [rbp+8h] BYREF
  struct tagSIZE v191; // [rsp+110h] [rbp+10h] BYREF
  struct tagSIZE v192; // [rsp+118h] [rbp+18h] BYREF
  void *v193; // [rsp+120h] [rbp+20h]
  _DWORD v194[2]; // [rsp+128h] [rbp+28h] BYREF
  struct tagSIZE *v195; // [rsp+130h] [rbp+30h]
  struct tagSIZE v196[2]; // [rsp+138h] [rbp+38h] BYREF
  __int128 v197; // [rsp+148h] [rbp+48h]
  bool v202; // [rsp+1C8h] [rbp+C8h]
  unsigned int v203; // [rsp+1D0h] [rbp+D0h]

  v161 = 0;
  v165 = 0;
  v173 = a4 & 1;
  v170 = 0;
  v181 = 0;
  v11 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v162 = v11;
  WdLogSingleEntry4(4LL, a1, a3);
  WdLogGlobalForLineNumber = 22145;
  v12 = PALLOCMEM(96LL, 1936876615LL);
  v176 = (_QWORD *)v12;
  v13 = (_QWORD *)v12;
  if ( !v12 )
    goto LABEL_331;
  *(_DWORD *)(v12 + 20) = 0;
  *(_QWORD *)(v12 + 24) = a3;
  Buf2 = (void *)PALLOCNOZ(220LL, 1986356295LL);
  v193 = Buf2;
  v15 = (struct _devicemodeW *)Buf2;
  if ( !Buf2 )
    goto LABEL_326;
  v16 = a9;
  PruneFlag = a6 != 0;
  v17 = a9 != 0LL ? 4 : 1;
LABEL_4:
  LODWORD(Buf1) = v17;
  while ( 2 )
  {
    while ( 2 )
    {
      v18 = v161;
      v19 = 1LL;
      v14 = 0LL;
      v160 = 1;
      v166 = 0;
      v20 = 0LL;
      v174 = 0LL;
      v21 = 0;
      DeviceFromName = 0LL;
      v171 = 0;
      v178 = 0;
      LODWORD(v175) = 0;
      while ( 1 )
      {
        v22 = v18 < 0;
        if ( v18 )
          break;
        v23 = 0LL;
        v168 = 0LL;
        v174 = 0LL;
        if ( a1 )
        {
          if ( !v20 )
          {
            DeviceFromName = DrvGetDeviceFromName(a1);
            v24 = DeviceFromName;
            if ( a5 )
              goto LABEL_42;
            v19 = 0LL;
            v160 = 0;
            goto LABEL_43;
          }
        }
        else if ( !v20 )
        {
          goto LABEL_51;
        }
        if ( a5 )
        {
          if ( (unsigned int)v14 >= *((_DWORD *)a5 + 5) )
            goto LABEL_126;
          v23 = (HDEV)*((_QWORD *)a5 + 7 * (unsigned int)v14 + 5);
          v168 = (MULTIDEVLOCKOBJ *)v23;
          v166 = v14 + 1;
          v184 = v23;
          v24 = *((_QWORD *)v23 + 321);
          if ( v24 == v20 )
            goto LABEL_120;
          v25 = v165;
          if ( (*(_DWORD *)(v24 + 160) & 8) != 0 )
            v25 = v165 ^ 1;
          if ( v25 )
            goto LABEL_120;
          SEMOBJ<1>::SEMOBJ<1>(&v190, (_QWORD *)v162);
          SEMOBJ<4>::SEMOBJ<4>((struct _ERESOURCE **)&v189, (__int64)&v184);
          SEMOBJ<6>::SEMOBJ<6>((struct _ERESOURCE **)&v188, (struct _ERESOURCE **)v162);
          SEMOBJ<8>::SEMOBJ<8>(&v187, (__int64)&v184);
          SEMOBJ<10>::SEMOBJ<10>((struct _ERESOURCE **)&v186, (struct _ERESOURCE **)v162);
          SEMOBJ<19>::SEMOBJ<19>(&v185, (struct _ERESOURCE **)v162);
          ++*((_DWORD *)v23 + 3);
          PDEV::IncrementClientReferenceCount((PDEV *)v23);
          if ( ((_DWORD)v23[10] & 0x400) != 0 )
          {
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              *(_QWORD *)v162);
            DrvEnableDisplay(v23);
            GreAcquireSemaphore<19,>((struct _ERESOURCE **)v162);
          }
          v26 = (*(_DWORD *)(v24 + 160) >> 2) & 1;
          v171 = 1;
          v178 = v26;
          if ( v185 )
          {
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              (__int64)v185);
            v185 = 0LL;
          }
          v27 = (struct _ERESOURCE *)v186;
          if ( v186 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v186);
            v28 = GreGetCurrentThreadCrossSessionCheck();
            if ( v28 )
            {
              v49 = (*((_BYTE *)v28 + 18))-- == 1;
              if ( v49 )
                *(_QWORD *)v28 &= ~0x400uLL;
            }
            GreReleaseSemaphoreSharedInternal(v27);
            v186 = 0LL;
          }
          if ( v187 )
          {
            GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              v187);
            v187 = 0LL;
          }
          v29 = (struct _ERESOURCE *)v188;
          if ( v188 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v188);
            v30 = GreGetCurrentThreadCrossSessionCheck();
            if ( v30 )
            {
              v49 = (*((_BYTE *)v30 + 14))-- == 1;
              if ( v49 )
                *(_QWORD *)v30 &= ~0x40uLL;
            }
            GreReleaseSemaphoreSharedInternal(v29);
            v188 = 0LL;
          }
          v31 = (struct _ERESOURCE *)v189;
          if ( v189 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v189);
            v32 = GreGetCurrentThreadCrossSessionCheck();
            if ( v32 )
            {
              v49 = (*((_BYTE *)v32 + 12))-- == 1;
              if ( v49 )
                *(_QWORD *)v32 &= ~0x10uLL;
            }
            GreReleaseSemaphoreSharedInternal(v31);
            v189 = 0LL;
          }
          v14 = v190;
          if ( v190 )
          {
            GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              v190);
            v190 = 0LL;
          }
          v15 = (struct _devicemodeW *)Buf2;
LABEL_42:
          v19 = v160;
LABEL_43:
          if ( v17 == 4 )
          {
            if ( v23 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 22396;
            }
            goto LABEL_46;
          }
LABEL_93:
          if ( !v24 )
            goto LABEL_126;
          if ( (*(_DWORD *)(v24 + 164) & 1) != 0 )
            goto LABEL_121;
          if ( a6 == -1 )
            PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v24);
          if ( v23 )
            goto LABEL_183;
          v46 = *(_QWORD *)(W32GetSessionState(v19) + 88);
          if ( *(_DWORD *)(v46 + 1128) || v17 == 3 )
            v47 = -1;
          else
            v47 = *(_WORD *)(W32GetUserSessionState(v45, v44) + 68752);
          if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)v24, v47, &v178, &v171) )
            goto LABEL_126;
          if ( v17 == 1 || v17 == 3 )
          {
            if ( !v171 )
              goto LABEL_120;
            if ( (*(_DWORD *)(v24 + 160) & 8) != 0 )
            {
              if ( !v165 )
                goto LABEL_120;
            }
            else if ( v165 )
            {
              goto LABEL_120;
            }
            goto LABEL_132;
          }
          if ( v17 == 2 )
          {
            v48 = *(_DWORD *)(v24 + 160);
            if ( (v48 & 8) != 0 )
            {
              if ( !v171 || !v165 )
                goto LABEL_120;
LABEL_132:
              DisplayDriverNames = DrvGetDisplayDriverNames(v24);
              if ( !DisplayDriverNames )
                goto LABEL_120;
              v52 = *(_DWORD *)(v24 + 160);
              Buffer = 0LL;
              v172 = 0;
              if ( (v52 & 8) != 0 )
              {
                v53 = 4;
                DriverCapableOverRide = 0;
                DriverAccelerationsLevel = 0;
              }
              else
              {
                v53 = 1;
                DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)v24);
                DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)v24);
              }
              if ( a2 )
              {
                v56 = a2;
              }
              else
              {
                memset(v15, 0, sizeof(struct _devicemodeW));
                v56 = v15;
                v15->dmSize = 220;
              }
              v57 = DrvProbeAndCaptureDevmode(
                      (struct tagGRAPHICS_DEVICE *)v24,
                      (struct _devicemodeW **)&Buffer,
                      &v172,
                      0LL,
                      v56,
                      0,
                      PruneFlag,
                      a7,
                      a8,
                      0LL);
              if ( v57 == 1073741839 )
              {
                DrvLogDisplayDriverEvent(4LL);
                goto LABEL_141;
              }
              if ( v57 == -1073741776 )
              {
                v62 = *(struct _devicemodeW **)(v176[5] + 2584LL);
                if ( Buffer && Buffer != Buf2 )
                {
                  GreDeleteFastMutex((char *)Buffer);
                  Buffer = 0LL;
                }
                v57 = DrvProbeAndCaptureDevmode(
                        (struct tagGRAPHICS_DEVICE *)v24,
                        (struct _devicemodeW **)&Buffer,
                        &v172,
                        0LL,
                        v62,
                        0,
                        PruneFlag,
                        a7,
                        a8,
                        0LL);
              }
              if ( v57 >= 0 )
              {
LABEL_141:
                v23 = hCreateHDEV(
                        (struct tagGRAPHICS_DEVICE *)v24,
                        (struct _DRV_NAMES *)DisplayDriverNames,
                        (struct _devicemodeW *)Buffer,
                        a3,
                        DriverCapableOverRide,
                        DriverAccelerationsLevel,
                        v173,
                        (a4 >> 2) & 1,
                        v53,
                        &v174);
                if ( !v23 && (*(_DWORD *)(v24 + 160) & 0x2000000) != 0 )
                  *(_DWORD *)(v46 + 1056) = 5;
              }
              else
              {
                DrvDxgkLogCodePointPacket(58LL, 2, 0, 0);
                v23 = (HDEV)v168;
                if ( (*(_DWORD *)(v24 + 160) & 0x2000000) != 0 )
                  *(_DWORD *)(v46 + 1056) = 4;
              }
              v59 = a2;
              if ( (*(_DWORD *)(v24 + 160) & 8) != 0 || a2 )
                goto LABEL_175;
              if ( !v23 )
              {
                DrvLogDisplayDriverEvent(4LL);
                v60 = (char *)Buffer;
                if ( Buffer )
                {
                  if ( *((_DWORD *)Buffer + 42) == 4 )
                  {
                    DrvLogDisplayDriverEvent(5LL);
                    v60 = (char *)Buffer;
                  }
                  v61 = (struct _devicemodeW *)Buf2;
                  if ( v60 != Buf2 )
                  {
                    GreDeleteFastMutex(v60);
                    Buffer = 0LL;
                  }
                }
                else
                {
                  v61 = (struct _devicemodeW *)Buf2;
                }
                memset(v61, 0, sizeof(struct _devicemodeW));
                v159 = a8;
                v156 = a7;
                v154 = PruneFlag;
                v61->dmSize = 220;
                v63 = DrvProbeAndCaptureDevmode(
                        (struct tagGRAPHICS_DEVICE *)v24,
                        (struct _devicemodeW **)&Buffer,
                        &v172,
                        0LL,
                        v61,
                        1,
                        v154,
                        v156,
                        v159,
                        0LL);
                v64 = Buffer;
                if ( v63 >= 0 )
                {
                  v23 = hCreateHDEV(
                          (struct tagGRAPHICS_DEVICE *)v24,
                          (struct _DRV_NAMES *)DisplayDriverNames,
                          (struct _devicemodeW *)Buffer,
                          a3,
                          DriverCapableOverRide,
                          DriverAccelerationsLevel,
                          v173,
                          (a4 >> 2) & 1,
                          1u,
                          &v174);
                  if ( v23 )
                    goto LABEL_170;
                  v64 = Buffer;
                  if ( *((_DWORD *)Buffer + 43) != 640
                    || *((_DWORD *)Buffer + 44) != 480
                    || *((_DWORD *)Buffer + 42) != 4 )
                  {
                    if ( Buffer != v61 )
                    {
                      GreDeleteFastMutex((char *)Buffer);
                      Buffer = 0LL;
                    }
                    memset(v61, 0, sizeof(struct _devicemodeW));
                    v61->dmSize = 220;
                    v65 = a8;
                    v61->dmBitsPerPel = (*(_DWORD *)(v24 + 160) & 0x800000) != 0 ? 32 : 4;
                    v157 = a7;
                    v155 = PruneFlag;
                    v61->dmPelsWidth = 640;
                    v61->dmPelsHeight = 480;
                    v61->dmFields = 1835008;
                    if ( (int)DrvProbeAndCaptureDevmode(
                                (struct tagGRAPHICS_DEVICE *)v24,
                                (struct _devicemodeW **)&Buffer,
                                &v172,
                                0LL,
                                v61,
                                0,
                                v155,
                                v157,
                                v65,
                                0LL) >= 0 )
                      v23 = hCreateHDEV(
                              (struct tagGRAPHICS_DEVICE *)v24,
                              (struct _DRV_NAMES *)DisplayDriverNames,
                              (struct _devicemodeW *)Buffer,
                              a3,
                              DriverCapableOverRide,
                              DriverAccelerationsLevel,
                              v173,
                              (a4 >> 2) & 1,
                              1u,
                              &v174);
LABEL_170:
                    v64 = Buffer;
                  }
                }
                if ( v64 )
                {
                  dmPelsHeight = v64[44];
                  dmPelsWidth = v64[43];
                  v68 = v23 != 0LL;
                }
                else
                {
                  dmPelsHeight = v61->dmPelsHeight;
                  v68 = 2;
                  dmPelsWidth = v61->dmPelsWidth;
                }
                DrvDxgkLogCodePointPacket(26LL, v68, dmPelsWidth, dmPelsHeight);
                v59 = 0LL;
LABEL_175:
                if ( !v23 && !v59 )
                {
                  *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v58) + 88) + 1168LL) = v24;
                  DrvLogDisplayDriverEvent(2LL);
                }
              }
              if ( Buffer && Buffer != Buf2 )
                GreDeleteFastMutex((char *)Buffer);
              GreDeleteFastMutex((char *)DisplayDriverNames);
              v13 = v176;
              goto LABEL_182;
            }
            if ( (v48 & 0x2000000) != 0 || v170 )
              goto LABEL_120;
            v49 = !UserIsDisconnectConnection(v19, v14);
          }
          else
          {
            WdLogSingleEntry0(1LL);
            v50 = *(_DWORD *)(v24 + 160);
            WdLogGlobalForLineNumber = 22563;
            if ( (v50 & 8) != 0 )
              goto LABEL_120;
            v49 = v170 == 0;
          }
          if ( !v49 )
            goto LABEL_120;
          goto LABEL_132;
        }
LABEL_51:
        if ( v17 == 4 )
        {
          if ( v21 >= *((unsigned __int16 *)v16 + 10) )
            goto LABEL_128;
          v34 = 296LL * v21;
          if ( !_bittest64((const signed __int64 *)((char *)v16 + v34 + 56), 0x24u) )
          {
            if ( IsPrimaryPathInCloneGroup(v16, v21) && *(int *)((char *)v16 + v34 + 248) >= 0 )
            {
              v24 = *(_QWORD *)(v11 + 1096);
              if ( v24 )
              {
                while ( (*(_DWORD *)(v24 + 160) & 0x800000) == 0
                     || *(_DWORD *)(v24 + 240) != *(_DWORD *)((char *)v16 + v34 + 72)
                     || *(_DWORD *)(v24 + 244) != *(_DWORD *)((char *)v16 + v34 + 76)
                     || *(_DWORD *)(v24 + 248) != *(_DWORD *)((char *)v16 + v34 + 80) )
                {
                  v24 = *(_QWORD *)(v24 + 128);
                  if ( !v24 )
                    goto LABEL_85;
                }
              }
LABEL_46:
              if ( !v24 || (*(_DWORD *)(v24 + 164) & 1) != 0 )
              {
                if ( !v23 )
                  goto LABEL_85;
              }
              else
              {
                v33 = DrvGetDisplayDriverNames(v24);
                if ( v33 )
                {
                  if ( v21 >= *((unsigned __int16 *)v16 + 10) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 22407;
                  }
                  v36 = 296LL * v21;
                  if ( _bittest64((const signed __int64 *)((char *)v16 + v36 + 56), 0x24u) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 22408;
                  }
                  if ( !*(_QWORD *)((char *)v16 + v36 + 304) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 22410;
                  }
                  v37 = *(_WORD *)(v162 + 1080);
                  if ( !v37 )
                  {
                    v179 = 0;
                    GetDpiSetting(1LL, (__int64)&v179);
                    v37 = v179;
                    *(_WORD *)(v162 + 1080) = v179;
                  }
                  *(_WORD *)(*(_QWORD *)((char *)v16 + v36 + 304) + 166LL) = v37;
                  v38 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)v24);
                  v39 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)v24);
                  v40 = hCreateHDEV(
                          (struct tagGRAPHICS_DEVICE *)v24,
                          (struct _DRV_NAMES *)v33,
                          *(struct _devicemodeW **)((char *)v16 + v36 + 304),
                          a3,
                          v39,
                          v38,
                          v173,
                          (a4 >> 2) & 1,
                          1u,
                          &v174);
                  GreDeleteFastMutex((char *)v33);
                  if ( v40 )
                  {
                    v41 = *(_DWORD *)((char *)v16 + v36 + 276);
                    v23 = v40;
                    *((_DWORD *)v40 + 634) = v41;
                    goto LABEL_92;
                  }
                  v23 = 0LL;
LABEL_83:
                  *(_QWORD *)(v162 + 1168) = v24;
                  DrvLogDisplayDriverEvent(2LL);
LABEL_85:
                  if ( !IsPrimaryPathInCloneGroup(v16, v21) || *((int *)v16 + 74 * v21 + 62) < 0 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 22455;
                  }
                  for ( i = 0; i < *((_WORD *)v16 + 10); ++i )
                  {
                    v43 = 296LL * i;
                    if ( *(_DWORD *)((char *)v16 + v43 + 240) == *((_DWORD *)v16 + 74 * v21 + 60) )
                      *(_DWORD *)((char *)v16 + v43 + 248) = -1073741823;
                  }
                }
                else if ( !v23 )
                {
                  goto LABEL_83;
                }
              }
LABEL_92:
              LODWORD(v175) = v21 + 1;
LABEL_182:
              if ( v23 )
              {
LABEL_183:
                WdLogSingleEntry0(5LL);
                v69 = *(_DWORD *)(v24 + 160);
                WdLogGlobalForLineNumber = 22897;
                v170 = 1;
                if ( v178 )
                  v70 = v69 | 4;
                else
                  v70 = v69 & 0xFFFFFFFB;
                *(_DWORD *)(v24 + 160) = v70;
                if ( !v174 )
                {
                  if ( a5 )
                  {
                    v71 = *((_DWORD *)a5 + 5);
                    if ( v71 )
                    {
                      v72 = (HDEV *)((char *)a5 + 40);
                      v73 = v71;
                      do
                      {
                        v74 = *v72;
                        v72 += 7;
                        v75 = v174;
                        if ( v24 == *((_QWORD *)v74 + 321) )
                          v75 = v74;
                        v174 = v75;
                        --v73;
                      }
                      while ( v73 );
                    }
                  }
                }
                v76 = (_DWORD *)v13 + 5;
                v13[7 * *((unsigned int *)v13 + 5) + 5] = v23;
                v13[7 * *((unsigned int *)v13 + 5) + 6] = v174;
                v77 = *((_DWORD *)v13 + 5);
                if ( v77 + 2 >= v77 )
                {
                  v78 = v13;
                  *v76 = v77 + 1;
                  v79 = 96LL * (v77 + 2);
                  if ( v79 > 0xFFFFFFFF || (v176 = (_QWORD *)PALLOCMEM(v79, 1936876615LL), (v13 = v176) == 0LL) )
                  {
                    v19 = v160;
                    v18 = -1073741670;
                    v13 = v78;
                    v176 = v78;
                    v11 = v162;
                    v161 = -1073741670;
                    goto LABEL_123;
                  }
                  memmove(v176, v78, 96LL * (unsigned int)*v76);
                  GreDeleteFastMutex((char *)v78);
                }
              }
LABEL_120:
              v19 = v160;
LABEL_121:
              v11 = v162;
              goto LABEL_122;
            }
            v19 = v160;
          }
          LODWORD(v175) = v21 + 1;
        }
        else
        {
          v24 = *(_QWORD *)(v11 + 1096);
          for ( j = 0; v24 && j != (_DWORD)v14; ++j )
            v24 = *(_QWORD *)(v24 + 128);
          v14 = (unsigned int)(v14 + 1);
          v166 = v14;
          if ( !*(_DWORD *)(v162 + 1060) )
            goto LABEL_93;
          if ( !v24 )
            goto LABEL_126;
          if ( (*(_DWORD *)(v24 + 160) & 0x2800000) != 0 )
            goto LABEL_43;
          v11 = v162;
        }
LABEL_122:
        v18 = v161;
LABEL_123:
        v15 = (struct _devicemodeW *)Buf2;
        v17 = (int)Buf1;
        v16 = a9;
        v21 = v175;
        v14 = v166;
        v20 = DeviceFromName;
        if ( !(_DWORD)v19 )
        {
          v22 = v18 < 0;
          break;
        }
      }
      if ( v22 )
        goto LABEL_325;
LABEL_126:
      if ( v17 != 4 )
      {
        if ( !v170 )
        {
          if ( v17 == 1 )
          {
            WdLogSingleEntry0(5LL);
            v11 = v162;
            v17 = 2;
            WdLogGlobalForLineNumber = 23039;
            LODWORD(Buf1) = 2;
            if ( a8 )
              a8 = 0;
            continue;
          }
          if ( v17 == 2 && (unsigned int)UserIsWddmConnectedSession(v19, v14) )
          {
            WdLogSingleEntry0(5LL);
            v11 = v162;
            v17 = 3;
            WdLogGlobalForLineNumber = 23067;
            goto LABEL_4;
          }
          if ( v166 )
          {
            WdLogSingleEntry0(5LL);
            WdLogGlobalForLineNumber = 23124;
          }
          else
          {
            WdLogSingleEntry0(5LL);
            WdLogGlobalForLineNumber = 23110;
          }
          goto LABEL_325;
        }
        if ( !v165 )
        {
          WdLogSingleEntry0(5LL);
          v11 = v162;
          WdLogGlobalForLineNumber = 23081;
          goto LABEL_130;
        }
        v80 = v13;
        if ( (a4 & 2) != 0 )
          goto LABEL_327;
        v203 = 0;
        v176 = 0LL;
        v81 = 0;
        v82 = 0LL;
        v83 = (MULTIDEVLOCKOBJ *)Win32AllocPoolImpl(256LL, 0x60uLL, 0x6C6D6847u);
        v84 = v83;
        if ( !v83 )
          goto LABEL_325;
        *(_QWORD *)v83 = 1LL;
        *((_QWORD *)v83 + 1) = 0LL;
        MULTIDEVLOCKOBJ::vInit(v83, (struct _MDEV *)v13);
        v85 = 0;
        v86 = 0;
        if ( (*(_DWORD *)v84 & 1) == 0 )
          goto LABEL_323;
        MULTIDEVLOCKOBJ::vLock(v84);
        v87 = *((_DWORD *)v13 + 5);
        v88 = 0;
        v168 = v84;
        LODWORD(a9) = 0;
        if ( !v87 )
          goto LABEL_228;
        v168 = v84;
        LODWORD(a9) = 0;
        while ( 1 )
        {
          v89 = *(unsigned int **)(v13[7 * v88 + 5] + 2568LL);
          v90 = v89[40];
          if ( (v90 & 8) == 0 )
            break;
          if ( (v90 & 4) != 0 )
          {
            v90 &= ~4u;
            v89[40] = v90;
LABEL_222:
            if ( (v90 & 4) != 0 )
            {
              if ( v82 )
              {
                LODWORD(a9) = -1073741438;
                v89[40] = v90 & 0xFFFFFFFB;
              }
              else
              {
                v82 = v89;
                v81 = v88;
              }
            }
          }
          v87 = *((_DWORD *)v13 + 5);
          if ( ++v88 >= v87 )
          {
            v203 = v81;
            v176 = v82;
LABEL_228:
            v91 = 16 * v87;
            Buf2 = (void *)PALLOCNOZ(v91, 1936876615LL);
            v92 = Buf2;
            v93 = (void *)PALLOCNOZ(v91, 1936876615LL);
            Buf1 = v93;
            v94 = v93;
            if ( v92 )
            {
              if ( v93 )
              {
                v95 = 0;
                v166 = 0;
                v96 = 0;
                if ( *((_DWORD *)v80 + 5) )
                {
                  do
                  {
                    v97 = 2LL * v96;
                    v98 = v80[7 * v96 + 5];
                    v99 = *(_DWORD **)(v98 + 2584);
                    v92[2 * v97] = v99[19];
                    v92[2 * v97 + 1] = v99[20];
                    v92[2 * v97 + 2] = v99[19] + v99[43];
                    v92[2 * v97 + 3] = v99[20] + v99[44];
                    if ( (*(_DWORD *)(*(_QWORD *)(v98 + 2568) + 160LL) & 8) == 0 )
                    {
                      if ( !v82 && !v99[19] && !v99[20] )
                      {
                        v81 = v96;
                        v82 = *(unsigned int **)(v98 + 2568);
                      }
                      ++v95;
                    }
                    ++v96;
                  }
                  while ( v96 < *((_DWORD *)v80 + 5) );
                  v94 = Buf1;
                  v166 = v95;
                  v203 = v81;
                  v176 = v82;
                }
                memmove(v94, v92, v91);
                v103 = *(_QWORD *)(W32GetSessionState(v100) + 88);
                v175 = v103;
                if ( !*(_DWORD *)(v103 + 1112) )
                {
                  v104 = (unsigned int)UserIsRemoteAndNotDisconnectConnection(v102, v101) ? 0 : *(_DWORD *)(v103 + 1120);
                  *(_DWORD *)(v103 + 1124) = v104;
                  if ( v104 )
                  {
                    v105 = *(_DWORD *)(v103 + 1136);
                    v102 = 96LL;
                    if ( v105 > 0x60 )
                    {
                      v102 = 480LL;
                      if ( v105 >= 0x1E0 )
                        LOWORD(v105) = 480;
                    }
                    else
                    {
                      LOWORD(v105) = 96;
                    }
                    *(_WORD *)(v103 + 1080) = v105;
                  }
                }
                k = 32LL;
                v107 = v80[7 * v81 + 5];
                v163 = v107;
                *(_DWORD *)(*(_QWORD *)(v107 + 2568) + 160LL) |= 4u;
                if ( *((_DWORD *)v80 + 5) )
                {
                  v108 = v168;
                  while ( 1 )
                  {
                    DeviceFromName = 56LL * v85;
                    v109 = *(_QWORD *)((char *)v80 + DeviceFromName + 40);
                    if ( (*(_DWORD *)(*(_QWORD *)(v109 + 2568) + 160LL) & 0x800000) != 0 )
                    {
                      v110 = 0;
                      if ( v85 == v203 )
                        v110 = 32;
                      v111 = *(_DWORD *)(v109 + 2532) & 0xFFFFFFDF | v110;
                      *(_DWORD *)(v109 + 2532) = v111;
                      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v111);
                      v113 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(DxgkWin32kInterface
                                                                                                 + 520))(
                               *(_QWORD *)(*(_QWORD *)(v109 + 2568) + 232LL),
                               *(unsigned int *)(*(_QWORD *)(v109 + 2568) + 248LL),
                               0LL,
                               v109 + 2120,
                               v109 + 2440);
                      if ( v113 < 0 )
                      {
                        WdLogSingleEntry3(
                          2LL,
                          v113,
                          *(_QWORD *)(*(_QWORD *)(v109 + 2568) + 232LL),
                          *(unsigned int *)(*(_QWORD *)(v109 + 2568) + 248LL));
                        WdLogGlobalForLineNumber = 23329;
                      }
                      v114 = *(_DWORD *)(v109 + 2536);
                    }
                    else
                    {
                      if ( !(unsigned int)Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline(
                                            v102,
                                            32LL)
                        || (*(_DWORD *)(*(_QWORD *)(v109 + 2568) + 160LL) & 0x2000000) == 0 )
                      {
                        goto LABEL_265;
                      }
                      v180 = 0;
                      DpiInfoFromPrimaryMonitor = UserGetDpiInfoFromPrimaryMonitor(v109 + 2440, &v180);
                      if ( DpiInfoFromPrimaryMonitor < 0 )
                      {
                        if ( DpiInfoFromPrimaryMonitor == -1073741275 )
                        {
                          WdLogSingleEntry0(4LL);
                          WdLogGlobalForLineNumber = 23352;
                        }
                        else
                        {
                          WdLogSingleEntry1(2LL, DpiInfoFromPrimaryMonitor);
                          WdLogGlobalForLineNumber = 23357;
                        }
                        goto LABEL_265;
                      }
                      v114 = v180;
                    }
                    v102 = DeviceFromName;
                    *(_DWORD *)((char *)v80 + DeviceFromName + 92) = v114;
LABEL_265:
                    ++v85;
                    k = 32LL;
                    if ( v85 >= *((_DWORD *)v80 + 5) )
                    {
                      v103 = v175;
                      v82 = (unsigned int *)v176;
                      v92 = Buf2;
                      v168 = v108;
                      v107 = v163;
                      break;
                    }
                  }
                }
                if ( !*(_DWORD *)(v103 + 1112) )
                {
                  *(_DWORD *)(v103 + 1124) = 0;
                  a6 = 0;
                  if ( (unsigned int)UserRemoteConnectedSessionUsingXddm(v102, 32LL) )
                  {
                    v123 = *(_DWORD *)(v107 + 3544);
                    if ( v123 )
                    {
                      v102 = 96 * HIWORD(v123) + 50;
                      *(_WORD *)(v103 + 1080) = (unsigned int)v102 / 0x64;
                    }
                    else
                    {
                      if ( wcsncmp(*((const wchar_t **)v82 + 25), L"WORKERDD", v82[64])
                        && wcsncmp(*((const wchar_t **)v82 + 25), L"TSDDD", v82[64]) )
                      {
                        *(_DWORD *)(v103 + 1120) = 1;
                        *(_DWORD *)(v103 + 1124) = 1;
                      }
                      GetDpiSetting(2LL, (__int64)&a6);
                      v124 = a6;
                      *(_DWORD *)(v103 + 1136) = a6;
                      if ( v124 <= 0x60 )
                      {
                        v124 = 96;
                        a6 = 96;
                      }
                      v102 = 480LL;
                      if ( v124 >= 0x1E0 )
                      {
                        LOWORD(v124) = 480;
                        a6 = 480;
                      }
                      *(_WORD *)(v103 + 1080) = v124;
                    }
                    for ( k = 0LL; (unsigned int)k < *((_DWORD *)v80 + 5); *(_WORD *)(v102 + 166) = *(_WORD *)(v103 + 1080) )
                    {
                      v125 = *(unsigned __int16 *)(v103 + 1080);
                      v126 = (unsigned int)k;
                      k = (unsigned int)(k + 1);
                      v127 = v80[7 * v126 + 5];
                      *(_DWORD *)(v127 + 2164) = v125;
                      *(_DWORD *)(v127 + 2160) = v125;
                      v102 = *(_QWORD *)(v127 + 2584);
                    }
                  }
                  else
                  {
                    v102 = (unsigned int)(96 * *(_DWORD *)(v107 + 2452) + 50);
                    k = (unsigned int)v102 / 0x64;
                    if ( (_WORD)k )
                      SetDpiSetting(v102, (unsigned __int16)k);
                    v116 = *(_DWORD *)(v103 + 1120);
                    *(_DWORD *)(v103 + 1124) = v116;
                    if ( v116 )
                    {
                      v117 = *(_DWORD *)(v103 + 1136);
                      a6 = v117;
                      if ( v117 <= 0x60 )
                      {
                        v117 = 96;
                        a6 = 96;
                      }
                      v102 = 480LL;
                      if ( v117 >= 0x1E0 )
                      {
                        LOWORD(v117) = 480;
                        a6 = 480;
                      }
                      v118 = (_WORD *)(v103 + 1080);
                      *(_WORD *)(v103 + 1080) = v117;
                    }
                    else
                    {
                      v119 = *(_DWORD *)(v107 + 2448);
                      v118 = (_WORD *)(v103 + 1080);
                      if ( v119 )
                      {
                        v102 = (unsigned int)(96 * v119 + 50);
                        k = (unsigned int)v102 / 0x64;
                        *v118 = k;
                      }
                      else
                      {
                        *v118 = 96;
                      }
                    }
                    for ( m = 0; m < *((_DWORD *)v80 + 5); ++m )
                    {
                      v121 = (unsigned __int16)*v118;
                      v102 = v80[7 * m + 5];
                      k = *(_QWORD *)(v102 + 2584);
                      *(_DWORD *)(v102 + 2164) = v121;
                      *(_DWORD *)(v102 + 2160) = v121;
                      *(_WORD *)(k + 166) = *v118;
                      if ( *(_DWORD *)(v103 + 1124) )
                      {
                        v122 = 100 * (unsigned __int16)*v118;
                        *(_DWORD *)(v102 + 2524) = 1234568;
                        k = (v122 + 48) / 0x60u;
                        *(_DWORD *)(v102 + 2448) = k;
                      }
                    }
                  }
                  *(_DWORD *)(v103 + 1112) = 1;
                }
                if ( (unsigned int)UserRemoteConnectedSessionUsingXddm(v102, k) )
                {
                  v129 = 0;
                  v130 = 1;
                  LODWORD(v175) = 1;
                  if ( *((_DWORD *)v80 + 5) )
                  {
                    do
                    {
                      v131 = v80[7 * v129 + 5];
                      v202 = ((*(_DWORD *)(*(_QWORD *)(v131 + 2584) + 84LL) - 1) & 0xFFFFFFFD) == 0;
                      v132 = AdjustForOrientation(
                               *(_DWORD *)(v131 + 2128) / 0x3E8u,
                               *(_DWORD *)(v131 + 2132) / 0x3E8u,
                               v202);
                      v133 = *(_DWORD *)(v131 + 2140);
                      v134 = *(_DWORD *)(v131 + 2136);
                      v192 = v132;
                      v136 = AdjustForOrientation(v134, v133, v135);
                      v137 = *(_DWORD *)(v131 + 3544);
                      v191 = v136;
                      v194[0] = v138;
                      v195 = v196;
                      *(_OWORD *)&v196[0].cx = 0LL;
                      v194[1] = 32;
                      v197 = 0LL;
                      if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v194) < 0 )
                      {
                        WdLogSingleEntry0(1LL);
                        WdLogGlobalForLineNumber = 23546;
                      }
                      v158 = (struct _DPI_INFORMATION *)(v131 + 2440);
                      if ( v137 )
                      {
                        FillDpiInfo(&v192, &v191, (struct tagSIZE)v196, v139, 0, HIWORD(v137), v153, v158);
                        *(_DWORD *)(v131 + 2532) |= 0x200u;
                        v130 = v175;
                      }
                      else
                      {
                        *(_DWORD *)(v131 + 2532) &= ~0x200u;
                        v130 = 0;
                        Src = *(unsigned __int16 *)(v103 + 1080);
                        LODWORD(v175) = 0;
                        FillDpiInfo(&v192, &v191, (struct tagSIZE)v196, v139, Src, 0, v153, v158);
                      }
                      GetRemoteScaleOverrideTestHook(
                        (const unsigned __int16 *)(*(_QWORD *)(v131 + 2568) + 64LL),
                        v140,
                        (struct _DPI_INFORMATION *)(v131 + 2440));
                      ++v129;
                      *(_DWORD *)(v131 + 2532) = *(_DWORD *)(v131 + 2532) & 0xFFFFFF7F | (v202 << 7);
                    }
                    while ( v129 < *((_DWORD *)v80 + 5) );
                    v107 = v163;
                  }
                  v92 = Buf2;
                  v181 = 1;
                }
                else
                {
                  v130 = 0;
                }
                UserSetScaleFactorsFromRemoteMetric(v130, v128);
                v141 = *(_DWORD *)(v107 + 2452);
                v142 = v166;
                *(_WORD *)(v103 + 1082) = (96 * v141 + 50) / 0x64u;
                v94 = Buf1;
                AlignRects((struct tagRECT *)Buf1, v142, v203);
                if ( memcmp(v94, v92, 16LL * v142) )
                {
                  WdLogSingleEntry0(3LL);
                  WdLogGlobalForLineNumber = 23627;
                }
                v143 = 0;
                if ( *((_DWORD *)v80 + 5) )
                {
                  do
                  {
                    v144 = 7LL * v143;
                    v145 = v80[v144 + 5];
                    *(_QWORD *)(v145 + 2576) = *((_QWORD *)v94 + 2 * v143);
                    v146 = *(void (__fastcall **)(__int64, __int64))(v145 + 3376);
                    if ( v146 )
                      v146((*(_QWORD *)(v145 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v145 + 2544) != 0LL), 2LL);
                    v147 = *((_OWORD *)v94 + v143++);
                    *(_OWORD *)&v80[v144 + 7] = v147;
                    LODWORD(v80[v144 + 9]) = *(_DWORD *)(v145 + 2448);
                  }
                  while ( v143 < *((_DWORD *)v80 + 5) );
                  v92 = Buf2;
                }
                CalculateUniformSpaceMapping((struct _MDEV *)v80);
              }
              GreDeleteFastMutex((char *)v92);
            }
            v148 = v168;
            v84 = v168;
            if ( v94 )
              GreDeleteFastMutex((char *)v94);
            MULTIDEVLOCKOBJ::vUnlock(v148);
            v149 = v193;
            v13 = v80;
            Buf2 = v193;
            if ( v181 )
            {
              CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
              ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &CurrentWin32kSessionId);
              Buf2 = v149;
            }
            v86 = (int)a9;
            if ( v84 )
LABEL_323:
              MULTIDEVLOCKOBJ::`scalar deleting destructor'(v84);
            if ( v86 < 0 )
              goto LABEL_325;
LABEL_327:
            v150 = (char *)Buf2;
            if ( Buf2 )
              goto LABEL_330;
            goto LABEL_331;
          }
        }
        if ( !v82 )
          v81 = v88;
        goto LABEL_222;
      }
      break;
    }
    v11 = v162;
LABEL_128:
    if ( v170 )
    {
      WdLogSingleEntry0(5LL);
      WdLogGlobalForLineNumber = 23013;
      v17 = 1;
      LODWORD(Buf1) = 1;
LABEL_130:
      v165 = 1;
      continue;
    }
    break;
  }
  WdLogSingleEntry1(2LL, -1073741823LL);
  WdLogGlobalForLineNumber = 23023;
LABEL_325:
  if ( v13 )
  {
LABEL_326:
    DrvBackoutMDEV((struct _MDEV *)v13, v14);
    GreDeleteFastMutex((char *)v13);
    v13 = 0LL;
    goto LABEL_327;
  }
  v150 = (char *)Buf2;
LABEL_330:
  GreDeleteFastMutex(v150);
LABEL_331:
  WdLogSingleEntry1(5LL, v13);
  result = (struct _MDEV *)v13;
  WdLogGlobalForLineNumber = 23803;
  return result;
}
