/*
 * XREFs of DrvSetDisplayConfig @ 0x140175E80
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14011F640 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvChangeDisplaySettings @ 0x140175A14 (DrvChangeDisplaySettings.c)
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14002CEA8 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002D2B4 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x14002D5F8 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     GetPathsModality @ 0x14002D62C (GetPathsModality.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14002D7BC (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002DDE8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x14002F138 (--0AUTO_TGO@@IEAA@XZ.c)
 *     DispBrokerGetCurrentMode @ 0x14007D610 (DispBrokerGetCurrentMode.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14007EC3C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvIsWddmDriverPresent @ 0x14011FF98 (DrvIsWddmDriverPresent.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x14014E374 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     LogDiagSDC @ 0x14014FCB0 (LogDiagSDC.c)
 *     DrvDxgkLogCodePointPacket @ 0x14014FF40 (DrvDxgkLogCodePointPacket.c)
 *     ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017CB24 (-DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$03$04@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x14017DE18 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$03$04@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x140198C8C (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401B8CE8 (-DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1401BC974 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1401BE804 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401BEBC8 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x1401D60EC (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     UserNotifyExternalMonitorConnectedStatus @ 0x1401D6AC8 (UserNotifyExternalMonitorConnectedStatus.c)
 *     ApplyPathsModality @ 0x1401F498C (ApplyPathsModality.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1401F5174 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvIsModeChangeHandledByDispBroker@@YA_NXZ @ 0x1401F53EC (-DrvIsModeChangeHandledByDispBroker@@YA_NXZ.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401F5860 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1401F6320 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        char a6,
        __int64 a7,
        struct _DISPLAYCONFIG_CDS_REQUEST *a8,
        struct _MDEV *a9,
        struct _MDEV **a10,
        unsigned int *a11,
        unsigned int *a12,
        char *a13,
        _BYTE *a14,
        _BYTE *a15,
        __int64 a16,
        _DWORD *a17)
{
  struct _MDEV *v18; // rdi
  int v20; // r15d
  __int64 v21; // r13
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 UserSessionState; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  struct _DISPLAYCONFIG_CDS_REQUEST *v33; // rcx
  bool v34; // al
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // r14
  int v40; // edi
  __int64 DxgkWin32kInterface; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rbx
  char v46; // si
  char v47; // r13
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // edi
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  int v59; // eax
  int v60; // edi
  char v61; // si
  unsigned int v62; // r13d
  __int64 v63; // rdx
  __int64 v64; // rdx
  unsigned int v65; // esi
  char *v66; // rbx
  unsigned int v67; // edx
  unsigned int v68; // eax
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rcx
  int v72; // ecx
  int v73; // r8d
  __int16 v74; // bx
  struct _DISPLAYCONFIG_CDS_REQUEST *v75; // r15
  char v76; // di
  unsigned __int16 v77; // si
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  bool v82; // r14
  unsigned int v83; // ebx
  __int64 v84; // rcx
  int v85; // ebx
  int v86; // eax
  __int16 v87; // si
  int PathPersistentMonitorsIfNeeded; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  int v91; // eax
  unsigned int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // rax
  int v95; // eax
  __int64 v96; // rcx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v97; // r13
  __int64 v98; // rax
  __int64 v99; // rax
  int v100; // eax
  unsigned int v101; // eax
  __int64 v102; // rdx
  struct _DISPLAYCONFIG_CDS_REQUEST *v103; // rcx
  unsigned int v104; // ebx
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 (__fastcall *v107)(__int64, PVOID); // rax
  int v108; // eax
  __int64 v109; // rcx
  unsigned int v110; // ebx
  __int64 v111; // rax
  unsigned int v112; // edi
  __int64 v113; // r9
  __int64 v114; // rcx
  bool v115; // zf
  unsigned int v116; // eax
  __int64 v117; // r8
  struct _MDEV **v118; // rbx
  int v119; // edi
  struct _MDEV *v120; // rsi
  char v121; // di
  __int64 v122; // rax
  int v123; // eax
  char v124; // al
  struct _MDEV **v125; // rdi
  struct _MDEV *v126; // rbx
  int v127; // ebx
  int v128; // eax
  int v129; // eax
  __int64 v130; // rcx
  __int64 v131; // rsi
  __int64 v132; // rax
  __int64 v133; // rdx
  char *v134; // rcx
  int v135; // edi
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  PVOID v141; // rdx
  char v142; // r10
  unsigned int v143; // ecx
  unsigned int v144; // r9d
  __int64 v145; // r8
  __int64 v146; // rax
  int v147; // eax
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rcx
  char v151; // al
  char v152; // di
  __int64 v153; // r8
  __int64 v154; // r9
  char v155; // bl
  struct _DISPLAYCONFIG_CDS_REQUEST *v156; // rax
  _DWORD *v157; // r15
  unsigned int v158; // ebx
  __int64 v159; // rcx
  int v161; // [rsp+20h] [rbp-E0h]
  int v162; // [rsp+28h] [rbp-D8h]
  bool v163; // [rsp+60h] [rbp-A0h]
  char v164; // [rsp+61h] [rbp-9Fh]
  unsigned int v165; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int8 v166; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 v167; // [rsp+69h] [rbp-97h]
  char v168; // [rsp+6Ah] [rbp-96h]
  bool v169; // [rsp+6Bh] [rbp-95h]
  char v170; // [rsp+6Ch] [rbp-94h]
  char v171; // [rsp+6Dh] [rbp-93h]
  char v172; // [rsp+6Eh] [rbp-92h] BYREF
  char v173; // [rsp+6Fh] [rbp-91h] BYREF
  bool v174[4]; // [rsp+70h] [rbp-90h] BYREF
  int v175; // [rsp+74h] [rbp-8Ch] BYREF
  bool v176; // [rsp+78h] [rbp-88h]
  char v177; // [rsp+79h] [rbp-87h]
  int v178; // [rsp+7Ch] [rbp-84h]
  unsigned int v179; // [rsp+80h] [rbp-80h]
  unsigned int v180; // [rsp+84h] [rbp-7Ch]
  unsigned int v181; // [rsp+88h] [rbp-78h]
  struct _MDEV *v182; // [rsp+90h] [rbp-70h]
  unsigned int v183; // [rsp+98h] [rbp-68h]
  int v184; // [rsp+9Ch] [rbp-64h]
  int v185; // [rsp+A0h] [rbp-60h]
  __int64 v186; // [rsp+A8h] [rbp-58h]
  unsigned int v187; // [rsp+B0h] [rbp-50h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v188; // [rsp+B8h] [rbp-48h]
  struct _DISPLAYCONFIG_CDS_REQUEST *v189; // [rsp+C0h] [rbp-40h]
  int v190; // [rsp+C8h] [rbp-38h]
  int v191; // [rsp+CCh] [rbp-34h]
  struct _MDEV **v192; // [rsp+D0h] [rbp-30h]
  _QWORD v193[6]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID Buffer[2]; // [rsp+110h] [rbp+10h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v195; // [rsp+120h] [rbp+20h] BYREF
  char v196; // [rsp+128h] [rbp+28h]
  void *v197; // [rsp+130h] [rbp+30h] BYREF
  int v198; // [rsp+140h] [rbp+40h]
  void *v199; // [rsp+148h] [rbp+48h]
  __int64 v200; // [rsp+150h] [rbp+50h]
  void *v201; // [rsp+158h] [rbp+58h] BYREF
  _DWORD *v202; // [rsp+160h] [rbp+60h]
  unsigned int *v203; // [rsp+168h] [rbp+68h]
  unsigned int *v204; // [rsp+170h] [rbp+70h]
  _BYTE *v205; // [rsp+178h] [rbp+78h]
  _BYTE *v206; // [rsp+180h] [rbp+80h]
  __int64 v207; // [rsp+188h] [rbp+88h]
  char *v208; // [rsp+190h] [rbp+90h]
  int v209; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v210[12]; // [rsp+19Ch] [rbp+9Ch]
  int v211; // [rsp+1A8h] [rbp+A8h]
  __int64 v212; // [rsp+1ACh] [rbp+ACh]
  int v213; // [rsp+1B4h] [rbp+B4h]
  void *retaddr; // [rsp+208h] [rbp+108h]

  v18 = a9;
  v199 = a5;
  v189 = a8;
  v203 = a11;
  v204 = a12;
  v208 = a13;
  v206 = a15;
  v200 = a16;
  v181 = a1;
  v202 = a17;
  v179 = a4;
  v188 = a2;
  v182 = a9;
  v192 = a10;
  v205 = a14;
  v191 = 2;
  v180 = 0;
  v20 = 0;
  v176 = 0;
  v186 = *(_QWORD *)(W32GetSessionState(a14) + 88);
  LODWORD(v21) = -5;
  v173 = 0;
  v170 = 0;
  v22 = *(_DWORD *)(v186 + 1148);
  v167 = 0;
  v163 = v22 != 0;
  v166 = 0;
  v171 = 0;
  v165 = 0;
  v178 = -5;
  v175 = -5;
  v187 = v22 != 0 ? 3 : 0;
  v183 = 0;
  v177 = 0;
  WdLogSingleEntry1(4LL, a3);
  WdLogGlobalForLineNumber = 15316;
  v207 = DrvDxgkLogCodePointPacket(120LL, 0LL, 0, 0);
  UserSessionState = W32GetUserSessionState(v24, v23, v25);
  DisplayScenarioJournalBegin(a3, a4, *(unsigned __int16 *)(UserSessionState + 68744));
  DisplayScenarioJournalSetSDCPathsAndModes(216 * v181, v181, v188);
  v201 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<4,5>::NotifyStatusChange(&v201, 4LL);
  v27 = v186;
  *a10 = 0LL;
  if ( *(_DWORD *)(v27 + 1220) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15363;
  }
  if ( (a3 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v169 = (a4 & 2) != 0 && (a3 & 0x88F) == 0x88F;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v193);
  v193[0] = &off_14025ECB0;
  v195 = 0LL;
  v196 = 0;
  v197 = 0LL;
  *(_OWORD *)Buffer = 0LL;
  if ( !(unsigned int)UserIsWddmConnectedSession(v29, v28, v30, v31)
    || !(unsigned int)DrvIsWddmDriverPresent(v32)
    || (a4 & 1) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 15431;
    }
    v127 = a4 & 1;
    LODWORD(v39) = DrvChangeDisplayFallback(
                     v199,
                     BYTE1(a3) & 1,
                     v127,
                     a9,
                     a10,
                     (enum _DXGK_DIAG_SDC_STAGE *)&v165,
                     (bool *)&v166,
                     &v175);
    if ( (int)v39 >= 0 )
    {
      v128 = v165;
      if ( v127 )
        v128 = 30;
      v165 = v128;
    }
    v167 = v166;
    v178 = v175;
    goto LABEL_259;
  }
  if ( (a3 & 0x40000000) != 0 )
  {
    v34 = DrvIsModeChangeHandledByDispBroker();
    v36 = 0LL;
    if ( v34 || (a3 & 0x10000) != 0 )
    {
      LODWORD(v39) = -1073741811;
      v165 = 37;
      goto LABEL_266;
    }
    v37 = v186;
    if ( *(_DWORD *)(v186 + 1148) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 15469;
    }
    LODWORD(v39) = GetPathsModality(v36, Buffer, 0xFu, 0);
    if ( (int)v39 < 0 )
    {
      v165 = 2;
LABEL_259:
      v45 = 0LL;
      goto LABEL_260;
    }
    v40 = *((_DWORD *)Buffer[0] + 8) & 0xF;
    if ( v40 == 1 || v40 == 8 )
    {
      v18 = v182;
      LODWORD(v39) = -1073741637;
      v165 = 25;
      goto LABEL_267;
    }
    v168 = 1;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v38, v35);
    LOBYTE(v42) = v40 == 4;
    LOBYTE(v43) = 1;
    (*(void (__fastcall **)(__int64, __int64))(DxgkWin32kInterface + 528))(v43, v42);
    v45 = 0LL;
    if ( v40 == 4 )
    {
      LODWORD(v39) = 0;
      v165 = 26;
      v46 = 1;
      goto LABEL_280;
    }
    a3 = 132;
    v47 = -124;
    goto LABEL_32;
  }
  if ( (a3 & 0x80000000) == 0 )
  {
    if ( (a3 & 0xF) == 0xF )
    {
      if ( (a4 & 0x20) == 0 || (v33 = v189, (*((_DWORD *)v189 + 3) & 1) == 0) )
      {
        v53 = DxDdGetDxgkWin32kInterface(v33, 1LL);
        v168 = (*(__int64 (**)(void))(v53 + 536))();
        if ( v168 )
          a3 = a3 & 0xFFFFFFF0 | 4;
        goto LABEL_42;
      }
    }
    else
    {
      v33 = v189;
    }
    if ( (a3 & 0x200) != 0
      || (a4 & 0x20) != 0 && (*((_DWORD *)v33 + 3) & 1) != 0
      || (a3 & 0x1F) != 0 && (a3 & 0x40) == 0 )
    {
      v45 = 0LL;
      v168 = 0;
      v56 = DxDdGetDxgkWin32kInterface(v33, 1LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(v56 + 528))(0LL, 0LL);
      goto LABEL_43;
    }
    v55 = DxDdGetDxgkWin32kInterface(v33, 1LL);
    v168 = (*(__int64 (**)(void))(v55 + 536))();
LABEL_42:
    v45 = 0LL;
LABEL_43:
    v50 = a3 & 0x80;
    v47 = a3;
    if ( (a3 & 0x10000) != 0 )
    {
      v54 = DxDdGetDxgkWin32kInterface(v44, v35);
      v45 = 0LL;
      LODWORD(v39) = (*(__int64 (__fastcall **)(__int64, _QWORD, void **))(v54 + 728))(
                       a7,
                       v50 != 0 ? 2031616 : 0x20000,
                       &v197);
      if ( (int)v39 < 0 )
      {
        v165 = 42;
        goto LABEL_260;
      }
    }
    goto LABEL_33;
  }
  v45 = 0LL;
  if ( DrvIsModeChangeHandledByDispBroker() || (a3 & 0x10000) != 0 )
  {
    LODWORD(v39) = -1073741811;
    v165 = 38;
    goto LABEL_266;
  }
  v168 = 0;
  v49 = DxDdGetDxgkWin32kInterface(v48, v35);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(v49 + 528))(0LL, 0LL) )
  {
    LODWORD(v39) = 0;
    v165 = 18;
    v46 = 1;
    goto LABEL_280;
  }
  a3 = 2191;
  v47 = -113;
LABEL_32:
  v50 = 128;
LABEL_33:
  v51 = DxDdGetDxgkWin32kInterface(v44, v35);
  LODWORD(v39) = (*(__int64 (**)(void))(v51 + 272))();
  if ( (int)v39 < 0 )
  {
    v165 = 12;
    v20 = 6;
    goto LABEL_260;
  }
  v196 = 1;
  if ( v50 )
  {
    v57 = 1LL;
    if ( !v168 && (a3 & 0xF) != 0 && (v179 & 0x20) == 0 )
      v57 = 3LL;
    v58 = DxDdGetDxgkWin32kInterface(v52, v35);
    v59 = (*(__int64 (__fastcall **)(__int64))(v58 + 296))(v57);
    LODWORD(v39) = v59;
    if ( v59 < 0 )
    {
      WdLogSingleEntry1(4LL, v59);
      WdLogGlobalForLineNumber = 15675;
      DrvDxgkLogCodePointPacket(4LL, (unsigned int)v39, 0, 0);
      LODWORD(v39) = 0;
    }
  }
  LOBYTE(v45) = (a3 & 0x240) == 512;
  v164 = v45;
  v60 = a3 & 0x10000;
  v190 = v47 & 0xF;
  v61 = v163;
  v184 = a3 & 0x10000;
  v198 = a3 & 0x80;
  while ( 1 )
  {
    WdLogSingleEntry2(4LL, v180, (int)v39);
    WdLogGlobalForLineNumber = 15698;
    v62 = 0;
    v171 = 0;
    v172 = 0;
    v167 = 0;
    v166 = 0;
    v173 = 0;
    FreePathsModality(Buffer[0], v63);
    FreePathsModality(Buffer[1], v64);
    Buffer[1] = 0LL;
    Buffer[0] = 0LL;
    if ( v61 )
      break;
    if ( v190 )
    {
      if ( (!DrvIsModeChangeHandledByDispBroker() || (a3 & 0xA8F) == 0x88F) && !v60 )
      {
        v74 = v179;
        v75 = v189;
        if ( (v179 & 0x20) != 0 && *((_QWORD *)v189 + 2) )
        {
          v76 = 1;
          v77 = 1;
        }
        else
        {
          v76 = 0;
          v77 = 0;
        }
        if ( v168 || (v164 = 1, (a3 & 0x40) != 0) )
          v164 = 0;
        if ( (unsigned int)DispBrokerGetCurrentMode(v72, v35, v73) )
        {
          v164 = 0;
          if ( v76 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 15841;
          }
          if ( UserIsConsoleConnection(v79, v78, v80, v81) && (v74 & 0xC00) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 15842;
          }
          DrvDxgkLogCodePointPacket(127LL, 0LL, 0, 0);
          v82 = v169;
          v83 = (v74 & 0x800) != 0 ? 0x10000000 : 64;
          if ( !v169 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 15860;
          }
          v176 = v82;
          DisplayScenarioJournalCCDRetrieval(16LL);
        }
        else
        {
          v84 = (v74 & 0x20) != 0 ? 0x9000 : 0;
          if ( !v76 || (*((_DWORD *)v75 + 3) & 1) != 0 )
            v85 = a3 & 0xF;
          else
            v85 = 0x2000000;
          v83 = v84 | v85;
          if ( (v83 & 0x2000000) != 0 && (a3 & 0xF) != 0xF )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 15886;
          }
        }
        LODWORD(v39) = GetPathsModality(v84, Buffer, v83, v77);
        if ( (int)v39 < 0 )
        {
          v165 = 2;
          goto LABEL_115;
        }
        if ( !*((_WORD *)Buffer[0] + 10) )
        {
          v20 = 7;
          LODWORD(v39) = -1071774922;
LABEL_73:
          v165 = 2;
LABEL_74:
          LOBYTE(v45) = v164;
LABEL_75:
          v61 = v163;
          goto LABEL_76;
        }
        DrvSetDisplayConfigApplyDeviceHack((struct D3DKMT_GETPATHSMODALITY *)Buffer[0]);
        if ( v76 )
        {
          v86 = *((_DWORD *)v75 + 3);
          if ( (v86 & 1) == 0 || (v164 = 1, (v86 & 2) == 0) )
            v164 = 0;
          LODWORD(v39) = DrvValidateAndApplyDevMode(v75, (struct D3DKMT_GETPATHSMODALITY **)Buffer);
          if ( (int)v39 < 0 )
          {
            v91 = *((_DWORD *)v75 + 8);
            v20 = *((_DWORD *)v75 + 9);
            v178 = v91;
            v175 = v91;
            v92 = 2;
            if ( (_DWORD)v39 == -1073741266 )
              v92 = 23;
            v165 = v92;
            goto LABEL_74;
          }
          v62 = *((_DWORD *)v75 + 3) & 1;
        }
        v60 = v184;
        v20 = 10;
LABEL_125:
        LOBYTE(v45) = v164;
LABEL_126:
        v87 = v179;
LABEL_127:
        if ( (a3 & 0x800) != 0 )
        {
          *(_WORD *)v174 = 0;
          PathPersistentMonitorsIfNeeded = CreatePathPersistentMonitorsIfNeeded(
                                             v71,
                                             (const struct D3DKMT_GETPATHSMODALITY *)Buffer[0],
                                             (unsigned __int16 *)v174);
          LODWORD(v39) = PathPersistentMonitorsIfNeeded;
          if ( PathPersistentMonitorsIfNeeded < 0 )
          {
            WdLogSingleEntry1(2LL, PathPersistentMonitorsIfNeeded);
            WdLogGlobalForLineNumber = 16112;
            v165 = 10;
            goto LABEL_75;
          }
          v99 = DxDdGetDxgkWin32kInterface(v90, v89);
          v100 = (*(__int64 (__fastcall **)(__int64, PVOID))(v99 + 176))(0x80000000LL, Buffer[0]);
          LODWORD(v39) = v100;
          if ( v100 == -1073741266 )
          {
            WdLogSingleEntry2(4LL, v180, -1073741266LL);
            WdLogGlobalForLineNumber = 16124;
            v165 = 23;
            goto LABEL_75;
          }
          if ( v100 < 0 )
          {
            WdLogSingleEntry1(2LL, v100);
            WdLogGlobalForLineNumber = 16132;
            v165 = 22;
            goto LABEL_75;
          }
          if ( *(_WORD *)v174 )
          {
            WdLogSingleEntry2(3LL, v180, v100);
            WdLogGlobalForLineNumber = 16147;
            LODWORD(v39) = -1073741266;
            goto LABEL_75;
          }
        }
        if ( *((_WORD *)Buffer[0] + 10) )
        {
          v101 = GetCcdRawmodeFlag(v71, v35) | 0x8000;
          if ( (v87 & 0x20) != 0 )
          {
            v103 = v189;
            if ( !*((_QWORD *)v189 + 2)
              || (v103 = (struct _DISPLAYCONFIG_CDS_REQUEST *)*((unsigned int *)v189 + 3),
                  ((unsigned __int8)v103 & 4) != 0) )
            {
              v101 |= 0x20000u;
            }
          }
          v104 = v101 | 0x1000000;
          if ( !v60 )
            v104 = v101;
          v105 = DxDdGetDxgkWin32kInterface(v103, v102);
          v106 = v104;
          LODWORD(v106) = v104 | 0x20000000;
          v107 = *(__int64 (__fastcall **)(__int64, PVOID))(v105 + 152);
          if ( (v87 & 0x800) == 0 )
            v106 = v104;
          v108 = v107(v106, Buffer[0]);
          LODWORD(v39) = v108;
          if ( v108 < 0 )
          {
            WdLogSingleEntry2(4LL, Buffer[0], v108);
            WdLogGlobalForLineNumber = 16192;
            v165 = 11;
LABEL_115:
            v20 = 7;
            goto LABEL_74;
          }
        }
        v165 = 18;
        v20 = 10;
        v185 = 10;
        if ( v198 )
        {
          *(_DWORD *)v174 = GetPathsModality(v71, &Buffer[1], 0x100040u, 0);
          LODWORD(v39) = *(_DWORD *)v174;
          if ( *(int *)v174 < 0 )
          {
            v165 = 13;
            goto LABEL_115;
          }
          v110 = (16 * (a3 & 0x1000)) | 0x4000;
          if ( (a3 & 0x1100) == 0 )
            v110 = 16 * (a3 & 0x1000);
          if ( v110 )
          {
            v111 = DxDdGetDxgkWin32kInterface(v109, v35);
            *(_DWORD *)v174 = (*(__int64 (__fastcall **)(_QWORD, PVOID, _QWORD))(v111 + 144))(v110, Buffer[0], 0LL);
            LODWORD(v39) = *(_DWORD *)v174;
            if ( *(int *)v174 < 0 )
            {
              v20 = v185;
              v165 = 14;
              goto LABEL_74;
            }
          }
          if ( (v179 & 0x10) != 0 )
            v110 |= 0x400000u;
          v112 = v110 | 0x1000000;
          v113 = 0LL;
          v114 = *(_QWORD *)(v186 + 1184);
          if ( !v184 )
            v112 = v110;
          while ( v114 )
          {
            v115 = (*(_DWORD *)(v114 + 160) & 0x800000) == 0;
            v116 = v113 + 1;
            v114 = *(_QWORD *)(v114 + 128);
            if ( v115 )
              v116 = v113;
            v113 = v116;
          }
          DisplayScenarioJournalSetExpectedPathModality(
            296 * (unsigned int)*((unsigned __int16 *)Buffer[0] + 10),
            *((unsigned __int16 *)Buffer[0] + 10),
            (char *)Buffer[0] + 56,
            v113);
          LOBYTE(v117) = (a3 & 0x1100) != 0;
          v118 = v192;
          v191 = ApplyPathsModality(Buffer[0], v112, v117, v199, v182, &v172, &v173, v192, v174, &v165, v200);
          v119 = v191;
          v178 = v191;
          v175 = v191;
          if ( v191 < 0 )
          {
            v20 = 5;
            LODWORD(v39) = *(_DWORD *)v174;
            v171 = v172;
            goto LABEL_74;
          }
          if ( v191 == 1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 16298;
          }
          LODWORD(v39) = *(_DWORD *)v174;
          v120 = 0LL;
          if ( *(int *)v174 < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 16299;
          }
          v171 = v172;
          if ( v172 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 16300;
          }
          if ( v119 == 2 )
          {
            if ( (a3 & 0x1100) != 0 || *v118 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 16304;
            }
            v121 = 1;
            v167 = 1;
            v166 = 1;
            goto LABEL_216;
          }
          if ( !*v118 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 16315;
          }
          v121 = v167;
          v182 = 0LL;
        }
        else
        {
          if ( (a3 & 0x40) == 0 )
          {
            WdLogSingleEntry1(1LL, a3);
            WdLogGlobalForLineNumber = 16334;
            LODWORD(v39) = -1073741811;
            v165 = 21;
            goto LABEL_74;
          }
          v121 = v167;
          v178 = 0;
          v175 = 0;
LABEL_216:
          v120 = v182;
        }
        LOBYTE(v45) = v164;
        v20 = 10;
        if ( v164 )
        {
          v122 = DxDdGetDxgkWin32kInterface(v71, v35);
          v123 = (*(__int64 (__fastcall **)(_QWORD, PVOID))(v122 + 176))(v62, Buffer[0]);
          LODWORD(v39) = v123;
          if ( a6 )
          {
            if ( v123 == -1073741266 )
            {
              if ( (a3 & 0x10) != 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 16360;
              }
              WdLogSingleEntry2(4LL, v180, -1073741266LL);
              WdLogGlobalForLineNumber = 16364;
              if ( !v121 )
              {
                if ( v120 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 16372;
                }
                v170 = 1;
                v182 = *v192;
                *v192 = 0LL;
              }
              v165 = 24;
              v20 = 9;
            }
            else
            {
              v20 = 10;
              if ( v123 < 0 )
              {
                v165 = 29;
                v20 = 9;
                LODWORD(v39) = 0;
              }
            }
          }
          else
          {
            if ( v123 < 0 )
            {
              WdLogSingleEntry1(2LL, v123);
              WdLogGlobalForLineNumber = 16353;
              LODWORD(v39) = 0;
            }
            v20 = 10;
          }
        }
        goto LABEL_75;
      }
      LODWORD(v39) = -1073741811;
      v165 = 39;
    }
    else if ( (a3 & 0x10) != 0 )
    {
      if ( DrvIsModeChangeHandledByDispBroker() || v60 )
      {
        LODWORD(v39) = -1073741811;
        v165 = 40;
      }
      else
      {
        LODWORD(v39) = AllocatePathModalityForDisplayConfig(v181, v188, (struct D3DKMT_GETPATHSMODALITY **)Buffer);
        if ( (int)v39 >= 0 )
        {
          LODWORD(v39) = ConvertDisplayConfigToPathModality(
                           v181,
                           v188,
                           (struct D3DKMT_GETPATHSMODALITY *)Buffer[0],
                           0LL);
          if ( (int)v39 >= 0 )
          {
            v94 = DxDdGetDxgkWin32kInterface(v93, v35);
            LODWORD(v39) = (*(__int64 (__fastcall **)(_QWORD, PVOID, _QWORD))(v94 + 144))(
                             a3 & 0x2000 | 0x2F,
                             Buffer[0],
                             0LL);
            if ( (int)v39 >= 0 )
            {
              if ( v168 || (a3 & 0x40) != 0 )
              {
                LOBYTE(v45) = 0;
                v164 = 0;
              }
              else
              {
                v71 = 1LL;
                LOBYTE(v45) = 1;
                v164 = 1;
              }
              goto LABEL_126;
            }
            v165 = 5;
          }
          else
          {
            v165 = 4;
          }
        }
        else
        {
          v165 = 3;
        }
      }
    }
    else
    {
      if ( (a3 & 0x20) != 0 )
      {
        v87 = v179;
        v174[0] = 0;
        if ( (v179 & 8) != 0 )
        {
          v95 = SetDisplayConfigHandleOnlyProvidedPath(
                  v188,
                  (struct D3DKMT_GETPATHSMODALITY **)Buffer,
                  v174,
                  (enum _DXGK_DIAG_SDC_STAGE *)&v165);
LABEL_152:
          LODWORD(v39) = v95;
          if ( v95 < 0 )
            goto LABEL_75;
        }
        else
        {
          if ( v60 )
          {
            v95 = SetDisplayConfigHandleBrokerProvidedPaths(
                    (__int64)v197,
                    0,
                    v181,
                    v188,
                    (struct D3DKMT_GETPATHSMODALITY **)Buffer,
                    v174,
                    (enum _DXGK_DIAG_SDC_STAGE *)&v165);
            goto LABEL_152;
          }
          v97 = v188;
          LODWORD(v39) = AllocatePathModalityForDisplayConfig(v181, v188, (struct D3DKMT_GETPATHSMODALITY **)Buffer);
          if ( (int)v39 < 0 )
          {
            v165 = 6;
            goto LABEL_75;
          }
          LODWORD(v39) = ConvertDisplayConfigToPathModality(
                           v181,
                           v97,
                           (struct D3DKMT_GETPATHSMODALITY *)Buffer[0],
                           v174);
          if ( (int)v39 < 0 )
          {
            v165 = 7;
            goto LABEL_75;
          }
        }
        if ( v174[0] )
        {
          if ( DrvIsModeChangeHandledByDispBroker() )
          {
            LODWORD(v39) = -1073741811;
            v165 = 41;
            goto LABEL_75;
          }
          LODWORD(v39) = SetDisplayConfigHandlePreferredScaling(
                           (struct D3DKMT_GETPATHSMODALITY *)Buffer[0],
                           (enum _DXGK_DIAG_SDC_STAGE *)&v165);
          if ( (int)v39 < 0 )
            goto LABEL_75;
        }
        v98 = DxDdGetDxgkWin32kInterface(v96, v35);
        LODWORD(v39) = (*(__int64 (__fastcall **)(__int64, PVOID, _QWORD))(v98 + 144))(256LL, Buffer[0], 0LL);
        if ( (int)v39 < 0 )
        {
          v165 = 8;
          goto LABEL_75;
        }
        v62 = 1;
        goto LABEL_127;
      }
      WdLogSingleEntry1(1LL, a3);
      WdLogGlobalForLineNumber = 16095;
      LODWORD(v39) = -1073741811;
      v165 = 9;
    }
LABEL_76:
    v68 = ++v180;
    if ( v176 )
    {
      v45 = 0LL;
      if ( !v169 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 16404;
      }
      DisplayScenarioJournalRetry((unsigned int)v39);
      goto LABEL_260;
    }
    if ( (_DWORD)v39 == -1073741266 )
    {
      if ( !v61 && v68 < 4 )
      {
        v69 = 3221226030LL;
        goto LABEL_246;
      }
      v45 = 0LL;
    }
    else
    {
      v45 = 0LL;
      if ( (int)v39 >= 0 )
        goto LABEL_235;
    }
    if ( !v169 )
      goto LABEL_260;
    v61 = 1;
    v163 = 1;
    v69 = (unsigned int)v39;
    v164 = 0;
LABEL_246:
    DisplayScenarioJournalRetry(v69);
    v60 = v184;
  }
  if ( v190 != 15 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15720;
  }
  if ( (_BYTE)v45 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15721;
  }
  v65 = v187;
  if ( v187 < 6 )
  {
    v66 = (char *)&unk_140279C00 + 12 * v187;
    DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v66 + 1), *((_DWORD *)v66 + 2), 0);
    if ( *v66 )
    {
      v187 = v65 + 1;
      LODWORD(v39) = GetPathsModality(0LL, Buffer, 0xFu, 0);
      v183 = 0;
      if ( (int)v39 < 0 )
        goto LABEL_73;
    }
    else
    {
      v67 = v183++;
      LODWORD(v39) = DrvCreatePathModalityFromAllPaths(&v195, v67, (struct D3DKMT_GETPATHSMODALITY **)Buffer);
      if ( (int)v39 < 0 )
      {
        v183 = 0;
        v187 = v65 + 1;
        goto LABEL_73;
      }
      if ( *((_WORD *)Buffer[0] + 10) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 15773;
      }
    }
    v70 = DrvFunctionalizeBaseVidMode((const struct RETRY_MODE *)v66, (struct D3DKMT_GETPATHSMODALITY *)Buffer[0]);
    LODWORD(v39) = v70;
    if ( v70 < 0 )
    {
      WdLogSingleEntry1(2LL, v70);
      WdLogGlobalForLineNumber = 15792;
      goto LABEL_73;
    }
    goto LABEL_125;
  }
  v45 = 0LL;
  if ( (int)v39 < 0 )
    goto LABEL_261;
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 15728;
LABEL_260:
  if ( (int)v39 >= 0 )
  {
LABEL_235:
    v124 = v170;
    goto LABEL_236;
  }
LABEL_261:
  v124 = v170;
  if ( v170 )
  {
    v165 = 29;
    LODWORD(v39) = 0;
    v20 = 9;
    v178 = 0;
    LODWORD(v21) = 0;
    v175 = 0;
  }
  else
  {
    LODWORD(v21) = v178;
  }
  if ( (int)v39 >= 0 )
  {
LABEL_236:
    if ( !v124 || (v125 = v192, *v192) )
    {
      LODWORD(v21) = v178;
    }
    else
    {
      v126 = v182;
      if ( !v182 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 16453;
      }
      LODWORD(v21) = v178;
      *v125 = v126;
      v45 = 0LL;
      if ( (_DWORD)v21 == 2 )
        LODWORD(v21) = 0;
      v175 = v21;
    }
    goto LABEL_278;
  }
  v18 = v182;
LABEL_266:
  v37 = v186;
LABEL_267:
  if ( !v169 )
  {
    v45 = 0LL;
LABEL_278:
    v46 = v167;
    goto LABEL_279;
  }
  if ( a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 16471;
  }
  v129 = DrvChangeDisplayFallback(
           v199,
           BYTE1(a3) & 1,
           1,
           v18,
           v192,
           (enum _DXGK_DIAG_SDC_STAGE *)&v165,
           (bool *)&v166,
           &v175);
  v39 = v129;
  if ( v129 >= 0 )
  {
    v20 = 10;
    v165 = 31;
    goto LABEL_273;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 16490;
  if ( *(_BYTE *)(v37 + 1352) )
  {
LABEL_273:
    LODWORD(v21) = v175;
  }
  else
  {
    v131 = (int)v165;
    *(_BYTE *)(v37 + 1352) = 1;
    v21 = v175;
    v132 = DxDdGetDxgkWin32kInterface(v130, v35);
    LOBYTE(v162) = 0;
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, int))(v132 + 720))(
      400LL,
      22LL,
      v39,
      v21,
      v131,
      v162);
  }
  v46 = v166;
  v45 = 0LL;
LABEL_279:
  if ( (_DWORD)v39 == -1073741811 )
    goto LABEL_306;
LABEL_280:
  FreePathsModality(Buffer[1], v35);
  Buffer[1] = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality((struct D3DKMT_GETPATHSMODALITY **)&Buffer[1], v133) < 0 )
    goto LABEL_301;
  DisplayScenarioJournalSetActualPathModality(
    296 * (unsigned int)*((unsigned __int16 *)Buffer[1] + 10),
    *((unsigned __int16 *)Buffer[1] + 10),
    (char *)Buffer[1] + 56);
  v134 = (char *)Buffer[1];
  v135 = 0;
  if ( !*((_WORD *)Buffer[1] + 10) )
    goto LABEL_288;
  while ( 2 )
  {
    v136 = *(_QWORD *)&v134[v45 + 56];
    if ( v136 >= 0 || (v136 & 0x1000000000LL) != 0 )
    {
LABEL_287:
      ++v135;
      v45 += 296LL;
      if ( v135 >= *((unsigned __int16 *)v134 + 10) )
        goto LABEL_288;
      continue;
    }
    break;
  }
  v212 = 0LL;
  v213 = 0;
  v209 = 9;
  *(_DWORD *)v210 = 32;
  *(_QWORD *)&v210[4] = *(_QWORD *)&v134[v45 + 72];
  v211 = *(_DWORD *)&v134[v45 + 84];
  if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)&v209, 0) < 0
    || (v212 & 1) == 0 )
  {
    v134 = (char *)Buffer[1];
    goto LABEL_287;
  }
  v177 = 1;
LABEL_288:
  if ( !(unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline()
    && (a3 & 0x80) != 0
    && UserIsConsoleConnection(v138, v137, v139, v140) )
  {
    v141 = Buffer[1];
    v142 = 0;
    v143 = 0;
    v144 = *((unsigned __int16 *)Buffer[1] + 10);
    if ( (_WORD)v144 )
    {
      while ( 1 )
      {
        v145 = 296LL * v143;
        v146 = *(_QWORD *)((char *)Buffer[1] + v145 + 56);
        if ( v146 < 0 && (v146 & 0x1800000000000000LL) == 0 )
        {
          v147 = *(_DWORD *)((char *)Buffer[1] + v145 + 144);
          if ( v147 != 0x80000000 && ((v147 - 11) & 0xFFFFFFFD) != 0 )
            break;
        }
        if ( ++v143 >= v144 )
          goto LABEL_300;
      }
      v142 = 1;
    }
LABEL_300:
    LOBYTE(v141) = v142;
    v148 = v179 >> 11;
    LOBYTE(v148) = (v179 & 0x800) != 0;
    UserNotifyExternalMonitorConnectedStatus(v148, v141);
  }
LABEL_301:
  if ( *v192 )
  {
    v149 = *((_QWORD *)*v192 + 5);
    if ( v149 )
    {
      v150 = *(_QWORD *)(v149 + 2568);
      if ( v150 )
      {
        if ( v150 != -4 )
          DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v150 + 160) & 0x2000000) != 0);
      }
    }
  }
LABEL_306:
  if ( v203 )
    *v203 = v180;
  if ( v204 )
    *v204 = v165;
  if ( v208 )
  {
    if ( v170 || (v151 = 1, !v46) )
      v151 = 0;
    *v208 = v151;
  }
  v152 = v171;
  if ( v205 )
    *v205 = v171;
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() && v206 )
    *v206 = v173;
  v155 = v179;
  if ( (v179 & 0x20) != 0 )
  {
    v156 = v189;
    *((_DWORD *)v189 + 8) = v21;
    *((_DWORD *)v156 + 9) = v20;
    if ( (int)v39 >= 0 != (int)v21 >= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 16627;
    }
    *(_QWORD *)v210 = 20LL;
    v209 = 0;
    *(_DWORD *)&v210[8] = v21;
    v211 = v20;
    DisplayScenarioJournalSetSpecializedData(&v209);
  }
  v157 = v202;
  v115 = (v155 & 0x40) == 0;
  v158 = v180;
  if ( v115 )
    LogDiagSDC(v181, (__int64)v188, a3, (unsigned int)v39, v180, v165, v207, v46, v202);
  v159 = *(_QWORD *)(v186 + 1856);
  if ( v159 )
    DisplayScenarioJournalSetUniqueness(*(unsigned int *)(v159 + 1573024), *(unsigned int *)(v159 + 1573008));
  LOBYTE(v154) = v152;
  LOBYTE(v153) = v46;
  LOBYTE(v161) = v177;
  DisplayScenarioJournalSetResult(v165, v158, v153, v154, v161, v191, v157);
  DisplayScenarioJournalFinalize(v200, (unsigned int)v39);
  WdLogSingleEntry1(4LL, (int)v39);
  WdLogGlobalForLineNumber = 16658;
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v193);
  AUTO_STATUS_CHANGE_NOTIFY<4,5>::NotifyStatusChange(&v201, 5LL);
  return (unsigned int)v39;
}
