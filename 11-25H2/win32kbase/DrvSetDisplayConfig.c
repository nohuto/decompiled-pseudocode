/*
 * XREFs of DrvSetDisplayConfig @ 0x14013C960
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x14013C570 (DrvChangeDisplaySettings.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015ED90 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     InitVideo @ 0x1401B6588 (InitVideo.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x14002C1E0 (DispBrokerGetCurrentMode.c)
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     DrvIsWddmDriverPresent @ 0x14006BE78 (DrvIsWddmDriverPresent.c)
 *     LogDiagSDC @ 0x1400E2360 (LogDiagSDC.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E2640 (DrvDxgkLogCodePointPacket.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x140111C64 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x140111E40 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140112D64 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x140112DA4 (GetPathsModality.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x14013E2BC (--0AUTO_TGO@@IEAA@XZ.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$03$04@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x140143FE0 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$03$04@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140147A08 (-DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x140156E18 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x140157D0C (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     Feature_DispBroker_EmulateKernelSdcReset__private_IsEnabledPreCheck @ 0x140159D40 (Feature_DispBroker_EmulateKernelSdcReset__private_IsEnabledPreCheck.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x140159DAC (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017C3B8 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019CE28 (-DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x14019E0D8 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019EF5C (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401ABE78 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     UserNotifyExternalMonitorConnectedStatus @ 0x1401B0F74 (UserNotifyExternalMonitorConnectedStatus.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1401C9A2C (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ApplyPathsModality @ 0x1401C9D0C (ApplyPathsModality.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1401CB6F4 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvIsModeChangeHandledByDispBroker@@YA_NXZ @ 0x1401CB9C0 (-DrvIsModeChangeHandledByDispBroker@@YA_NXZ.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401CBDE8 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1401CCA14 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        char a6,
        __int64 a7,
        __int64 a8,
        struct _MDEV *a9,
        struct _MDEV **a10,
        unsigned int *a11,
        signed int *a12,
        char *a13,
        _BYTE *a14,
        _BYTE *a15,
        __int64 a16,
        _DWORD *a17)
{
  struct _MDEV *v18; // r12
  int v20; // r13d
  int v21; // r14d
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 UserSessionState; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  bool v30; // al
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rbx
  int v35; // ebx
  __int64 DxgkWin32kInterface; // rax
  char v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // edi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  unsigned int v51; // r12d
  unsigned int v52; // esi
  char *v53; // rdi
  __int64 v54; // rcx
  unsigned int v55; // edx
  int v56; // eax
  unsigned int v57; // ecx
  __int16 v58; // bx
  struct _DISPLAYCONFIG_CDS_REQUEST *v59; // r13
  char v60; // di
  unsigned __int16 v61; // si
  __int64 v62; // rdx
  __int64 v63; // rcx
  bool v64; // r13
  unsigned int v65; // ebx
  __int64 v66; // rcx
  int v67; // ebx
  struct _DISPLAYCONFIG_CDS_REQUEST *v68; // rsi
  int v69; // eax
  int v70; // esi
  int v71; // eax
  __int64 v72; // rcx
  signed int v73; // eax
  signed int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v78; // r12
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rcx
  unsigned int CcdRawmodeFlag; // eax
  struct _DISPLAYCONFIG_CDS_REQUEST *v84; // rcx
  __int16 v85; // r13
  int v86; // eax
  unsigned int v87; // ebx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 (__fastcall *v90)(__int64, PVOID); // rax
  int v91; // eax
  __int64 v92; // rcx
  unsigned int v93; // edi
  __int64 v94; // rax
  __int64 v95; // r9
  unsigned int v96; // ebx
  __int64 v97; // rcx
  bool v98; // zf
  unsigned int v99; // eax
  __int64 v100; // r8
  struct _MDEV **v101; // rdi
  int v102; // eax
  int v103; // r13d
  struct _MDEV *v104; // rsi
  __int64 v105; // rax
  int v106; // eax
  unsigned int v107; // eax
  __int64 v108; // rcx
  char v109; // al
  struct _MDEV **v110; // rsi
  struct _MDEV *v111; // rdi
  int v112; // edi
  int v113; // eax
  int v114; // eax
  int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rdx
  unsigned __int16 *v119; // rcx
  int v120; // esi
  char v121; // r8
  __int64 v122; // rdx
  char *v123; // rcx
  int v124; // eax
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rcx
  unsigned int v128; // r12d
  char v129; // al
  char v130; // si
  __int64 v131; // r8
  __int64 v132; // r9
  char v133; // di
  struct _DISPLAYCONFIG_CDS_REQUEST *v134; // rax
  _DWORD *v135; // rdi
  __int64 v136; // rcx
  int v138; // [rsp+20h] [rbp-E0h]
  int v139; // [rsp+28h] [rbp-D8h]
  char v140; // [rsp+60h] [rbp-A0h]
  signed int v141; // [rsp+64h] [rbp-9Ch] BYREF
  int PathsModality; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 v143; // [rsp+6Ch] [rbp-94h] BYREF
  char v144; // [rsp+6Dh] [rbp-93h]
  bool v145; // [rsp+6Eh] [rbp-92h]
  char v146; // [rsp+6Fh] [rbp-91h]
  char v147; // [rsp+70h] [rbp-90h]
  bool v148; // [rsp+71h] [rbp-8Fh] BYREF
  char v149; // [rsp+72h] [rbp-8Eh] BYREF
  bool v150; // [rsp+73h] [rbp-8Dh]
  char v151[4]; // [rsp+74h] [rbp-8Ch] BYREF
  int v152; // [rsp+78h] [rbp-88h] BYREF
  bool v153; // [rsp+7Ch] [rbp-84h]
  char v154; // [rsp+7Dh] [rbp-83h]
  unsigned int v155; // [rsp+80h] [rbp-80h]
  int v156; // [rsp+84h] [rbp-7Ch]
  unsigned int v157; // [rsp+88h] [rbp-78h]
  unsigned int v158; // [rsp+8Ch] [rbp-74h]
  int v159; // [rsp+90h] [rbp-70h]
  unsigned __int16 v160; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v161; // [rsp+98h] [rbp-68h]
  int v162; // [rsp+9Ch] [rbp-64h]
  struct _MDEV *v163; // [rsp+A0h] [rbp-60h]
  __int64 v164; // [rsp+A8h] [rbp-58h]
  unsigned int v165; // [rsp+B0h] [rbp-50h]
  struct _MDEV **v166; // [rsp+B8h] [rbp-48h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v167; // [rsp+C0h] [rbp-40h]
  int v168; // [rsp+C8h] [rbp-38h]
  int v169; // [rsp+CCh] [rbp-34h]
  struct _DISPLAYCONFIG_CDS_REQUEST *v170; // [rsp+D0h] [rbp-30h]
  _QWORD v171[6]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID Buffer[2]; // [rsp+110h] [rbp+10h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v173; // [rsp+120h] [rbp+20h] BYREF
  char v174; // [rsp+128h] [rbp+28h]
  void *v175; // [rsp+130h] [rbp+30h] BYREF
  void *v176; // [rsp+140h] [rbp+40h]
  _DWORD *v177; // [rsp+148h] [rbp+48h]
  void *v178; // [rsp+150h] [rbp+50h] BYREF
  __int64 v179; // [rsp+158h] [rbp+58h]
  unsigned int *v180; // [rsp+160h] [rbp+60h]
  signed int *v181; // [rsp+168h] [rbp+68h]
  char *v182; // [rsp+170h] [rbp+70h]
  _BYTE *v183; // [rsp+178h] [rbp+78h]
  __int64 v184; // [rsp+180h] [rbp+80h]
  _BYTE *v185; // [rsp+188h] [rbp+88h]
  int v186; // [rsp+190h] [rbp+90h] BYREF
  __int64 v187; // [rsp+194h] [rbp+94h]
  int v188; // [rsp+19Ch] [rbp+9Ch]
  int v189; // [rsp+1A0h] [rbp+A0h]
  _DWORD v190[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v191; // [rsp+1B0h] [rbp+B0h]
  int v192; // [rsp+1B8h] [rbp+B8h]
  __int64 v193; // [rsp+1BCh] [rbp+BCh]
  int v194; // [rsp+1C4h] [rbp+C4h]
  void *retaddr; // [rsp+218h] [rbp+118h]

  v18 = a9;
  v176 = a5;
  v166 = a10;
  v181 = a12;
  v182 = a13;
  v183 = a15;
  v158 = a1;
  v179 = a16;
  v180 = a11;
  v177 = a17;
  v157 = a4;
  v167 = a2;
  v170 = (struct _DISPLAYCONFIG_CDS_REQUEST *)a8;
  v163 = a9;
  v185 = a14;
  v168 = 2;
  v155 = 0;
  v20 = 0;
  v153 = 0;
  v164 = *(_QWORD *)(W32GetSessionState(a14) + 88);
  v21 = -5;
  v151[0] = 0;
  v146 = 0;
  v22 = *(_DWORD *)(v164 + 1060);
  v143 = 0;
  v150 = v22 != 0;
  v147 = 0;
  v149 = 0;
  v141 = 0;
  v162 = -5;
  v152 = -5;
  v165 = v22 != 0 ? 3 : 0;
  v161 = 0;
  v154 = 0;
  WdLogSingleEntry1(4LL, a3);
  WdLogGlobalForLineNumber = 15468;
  v184 = DrvDxgkLogCodePointPacket(120LL, 0, 0, 0);
  UserSessionState = W32GetUserSessionState(v24, v23);
  DisplayScenarioJournalBegin(a3, a4, *(unsigned __int16 *)(UserSessionState + 68752));
  DisplayScenarioJournalSetSDCPathsAndModes(216 * v158, v158, v167);
  v178 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<4,5>::NotifyStatusChange(&v178, 4LL);
  *a10 = 0LL;
  if ( *(_DWORD *)(v164 + 1132) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15515;
  }
  if ( (a3 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v145 = (a4 & 2) != 0 && (a3 & 0x88F) == 0x88F;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v171);
  v171[0] = &off_140257BC8;
  v173 = 0LL;
  v174 = 0;
  v175 = 0LL;
  *(_OWORD *)Buffer = 0LL;
  if ( !(unsigned int)UserIsWddmConnectedSession(v27, v26)
    || !(unsigned int)DrvIsWddmDriverPresent(v28)
    || (a4 & 1) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 15583;
    }
    v112 = a4 & 1;
    v113 = DrvChangeDisplayFallback(
             v176,
             BYTE1(a3) & 1,
             v112,
             a9,
             v166,
             (enum _DXGK_DIAG_SDC_STAGE *)&v141,
             &v143,
             &v152);
    v21 = v152;
    LODWORD(v34) = v113;
    PathsModality = v113;
    if ( v113 >= 0 )
    {
      v114 = v141;
      if ( v112 )
        v114 = 30;
      v141 = v114;
    }
    goto LABEL_257;
  }
  if ( (a3 & 0x40000000) != 0 )
  {
    v30 = DrvIsModeChangeHandledByDispBroker();
    v31 = 0LL;
    if ( v30 || (a3 & 0x10000) != 0 )
    {
      LODWORD(v34) = -1073741811;
      v141 = 37;
      PathsModality = -1073741811;
      goto LABEL_263;
    }
    v32 = v164;
    if ( *(_DWORD *)(v164 + 1060) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 15621;
    }
    PathsModality = GetPathsModality(v31, (char **)Buffer, 0xFu, 0);
    LODWORD(v34) = PathsModality;
    if ( PathsModality < 0 )
    {
      v141 = 2;
LABEL_257:
      v40 = 0LL;
      goto LABEL_258;
    }
    v35 = *((_DWORD *)Buffer[0] + 8) & 0xF;
    if ( v35 == 1 || v35 == 8 )
    {
      LODWORD(v34) = -1073741637;
      v141 = 25;
      PathsModality = -1073741637;
      goto LABEL_264;
    }
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v33);
    v37 = 1;
    v144 = 1;
    LOBYTE(v38) = v35 == 4;
    (*(void (__fastcall **)(__int64, __int64))(DxgkWin32kInterface + 528))(1LL, v38);
    if ( v35 == 4 )
    {
      v40 = 0LL;
      v141 = 26;
      LODWORD(v34) = 0;
      PathsModality = 0;
      v143 = 1;
      goto LABEL_275;
    }
    a3 = 132;
    v159 = 132;
  }
  else
  {
    if ( (a3 & 0x80000000) == 0 )
    {
      if ( (a3 & 0xF) != 0xF || (a4 & 0x20) != 0 && (*(_DWORD *)(a8 + 12) & 1) != 0 )
      {
        if ( (a3 & 0x200) != 0
          || (a4 & 0x20) != 0 && (*(_DWORD *)(a8 + 12) & 1) != 0
          || (a3 & 0x1F) != 0 && (a3 & 0x40) == 0 )
        {
          v47 = DxDdGetDxgkWin32kInterface(v29);
          v37 = 0;
          v144 = 0;
          (*(void (__fastcall **)(_QWORD, _QWORD))(v47 + 528))(0LL, 0LL);
        }
        else
        {
          v46 = DxDdGetDxgkWin32kInterface(v29);
          v37 = (*(__int64 (**)(void))(v46 + 536))();
          v144 = v37;
        }
      }
      else
      {
        v45 = DxDdGetDxgkWin32kInterface(v29);
        v144 = (*(__int64 (**)(void))(v45 + 536))();
        v37 = v144;
        if ( v144 )
          a3 = a3 & 0xFFFFFFF0 | 4;
      }
      v159 = a3;
      v43 = a3 & 0x80;
      if ( (a3 & 0x10000) != 0 )
      {
        v48 = DxDdGetDxgkWin32kInterface(v39);
        PathsModality = (*(__int64 (__fastcall **)(__int64, _QWORD, void **))(v48 + 728))(
                          a7,
                          v43 != 0 ? 2031616 : 0x20000,
                          &v175);
        LODWORD(v34) = PathsModality;
        if ( PathsModality < 0 )
        {
          v141 = 42;
          goto LABEL_257;
        }
      }
      goto LABEL_33;
    }
    v40 = 0LL;
    if ( DrvIsModeChangeHandledByDispBroker() || (a3 & 0x10000) != 0 )
    {
      LODWORD(v34) = -1073741811;
      v141 = 38;
      PathsModality = -1073741811;
      goto LABEL_263;
    }
    v42 = DxDdGetDxgkWin32kInterface(v41);
    v144 = 0;
    v37 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(v42 + 528))(0LL, 0LL) )
    {
      LODWORD(v34) = 0;
      v141 = 18;
      PathsModality = 0;
      v143 = 1;
      goto LABEL_275;
    }
    a3 = 2191;
    v159 = 2191;
  }
  v43 = 128;
LABEL_33:
  v44 = DxDdGetDxgkWin32kInterface(v39);
  PathsModality = (*(__int64 (**)(void))(v44 + 272))();
  LODWORD(v34) = PathsModality;
  if ( PathsModality < 0 )
  {
    v141 = 12;
    v20 = 6;
    goto LABEL_257;
  }
  v174 = 1;
  if ( v43 )
  {
    v34 = 1LL;
    if ( !v37 && (a3 & 0xF) != 0 && (v157 & 0x20) == 0 )
      v34 = 3LL;
    v49 = DxDdGetDxgkWin32kInterface(1LL);
    v50 = (*(__int64 (__fastcall **)(__int64))(v49 + 296))(v34);
    LODWORD(v34) = v50;
    PathsModality = v50;
    if ( v50 < 0 )
    {
      WdLogSingleEntry1(4LL, v50);
      WdLogGlobalForLineNumber = 15827;
      DrvDxgkLogCodePointPacket(4LL, v34, 0, 0);
      LODWORD(v34) = 0;
      PathsModality = 0;
    }
  }
  LOBYTE(v40) = (a3 & 0x240) == 512;
  v159 &= 0xFu;
  v140 = v40;
  v169 = a3 & 0x80;
  v156 = a3 & 0x10000;
  while ( 1 )
  {
    WdLogSingleEntry2(4LL, v155, (int)v34);
    WdLogGlobalForLineNumber = 15850;
    v51 = 0;
    v147 = 0;
    v149 = 0;
    v143 = 0;
    v151[0] = 0;
    FreePathsModality((char *)Buffer[0]);
    FreePathsModality((char *)Buffer[1]);
    Buffer[1] = 0LL;
    Buffer[0] = 0LL;
    if ( v150 )
      break;
    if ( v159 )
    {
      if ( DrvIsModeChangeHandledByDispBroker() && (a3 & 0xA8F) != 0x88F || v156 )
      {
        v141 = 39;
        goto LABEL_226;
      }
      v58 = v157;
      v59 = v170;
      if ( (v157 & 0x20) != 0 && *((_QWORD *)v170 + 2) )
      {
        v60 = 1;
        v61 = 1;
      }
      else
      {
        v60 = 0;
        v61 = 0;
      }
      if ( v144 || (v140 = 1, (a3 & 0x40) != 0) )
        v140 = 0;
      Feature_DispBroker_EmulateKernelSdcReset__private_IsEnabledPreCheck();
      if ( (unsigned int)DispBrokerGetCurrentMode(v63, v62) )
      {
        v140 = 0;
        if ( v60 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 15994;
        }
        if ( (v58 & 0xC00) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 15995;
        }
        DrvDxgkLogCodePointPacket(127LL, 0, 0, 0);
        v64 = v145;
        v65 = (v58 & 0x800) != 0 ? 0x10000000 : 64;
        if ( !v145 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 16013;
        }
        v153 = v64;
        DisplayScenarioJournalCCDRetrieval(16LL);
      }
      else
      {
        v66 = (v58 & 0x20) != 0 ? 0x9000 : 0;
        if ( !v60 || (*((_DWORD *)v59 + 3) & 1) != 0 )
          v67 = a3 & 0xF;
        else
          v67 = 0x2000000;
        v65 = v66 | v67;
        if ( (v65 & 0x2000000) != 0 && (a3 & 0xF) != 0xF )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 16039;
        }
      }
      PathsModality = GetPathsModality(v66, (char **)Buffer, v65, v61);
      LODWORD(v34) = PathsModality;
      if ( PathsModality < 0 )
      {
        v20 = 7;
LABEL_73:
        v141 = 2;
LABEL_74:
        LOBYTE(v40) = v140;
        goto LABEL_228;
      }
      if ( !*((_WORD *)Buffer[0] + 10) )
      {
        LOBYTE(v40) = v140;
        LODWORD(v34) = -1071774922;
        v141 = 2;
        v20 = 7;
LABEL_227:
        PathsModality = v34;
        goto LABEL_228;
      }
      DrvSetDisplayConfigApplyDeviceHack((struct D3DKMT_GETPATHSMODALITY *)Buffer[0]);
      if ( v60 )
      {
        v68 = v170;
        v69 = *((_DWORD *)v170 + 3);
        if ( (v69 & 1) == 0 || (v140 = 1, (v69 & 2) == 0) )
          v140 = 0;
        PathsModality = DrvValidateAndApplyDevMode(v170, (struct D3DKMT_GETPATHSMODALITY **)Buffer);
        LODWORD(v34) = PathsModality;
        if ( PathsModality < 0 )
        {
          v21 = *((_DWORD *)v68 + 8);
          v73 = 2;
          v20 = *((_DWORD *)v68 + 9);
          v162 = v21;
          v152 = v21;
          if ( PathsModality == -1073741266 )
            v73 = 23;
          v141 = v73;
          goto LABEL_74;
        }
        v51 = *((_DWORD *)v68 + 3) & 1;
      }
      v20 = 10;
      goto LABEL_115;
    }
    if ( (a3 & 0x10) != 0 )
    {
      if ( DrvIsModeChangeHandledByDispBroker() || (v70 = v156) != 0 )
      {
        v141 = 40;
        goto LABEL_226;
      }
      PathsModality = AllocatePathModalityForDisplayConfig(v158, v167, (struct D3DKMT_GETPATHSMODALITY **)Buffer);
      LODWORD(v34) = PathsModality;
      if ( PathsModality < 0 )
      {
        v74 = v70 + 3;
LABEL_127:
        v141 = v74;
        goto LABEL_228;
      }
      PathsModality = ConvertDisplayConfigToPathModality(v158, v167, (struct D3DKMT_GETPATHSMODALITY *)Buffer[0], 0LL);
      LODWORD(v34) = PathsModality;
      if ( PathsModality < 0 )
      {
        v141 = 4;
        goto LABEL_228;
      }
      v76 = DxDdGetDxgkWin32kInterface(v75);
      LODWORD(v34) = (*(__int64 (__fastcall **)(_QWORD, PVOID, _QWORD))(v76 + 144))(a3 & 0x2000 | 0x2F, Buffer[0], 0LL);
      PathsModality = v34;
      if ( (int)v34 < 0 )
      {
        v141 = 5;
        goto LABEL_228;
      }
      if ( v144 || (a3 & 0x40) != 0 )
      {
        LOBYTE(v40) = 0;
        v140 = 0;
      }
      else
      {
        v57 = 1;
        LOBYTE(v40) = 1;
        v140 = 1;
      }
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
      {
        WdLogSingleEntry1(1LL, a3);
        WdLogGlobalForLineNumber = 16248;
        v141 = 9;
        goto LABEL_226;
      }
      v148 = 0;
      if ( (v157 & 8) != 0 )
      {
        PathsModality = SetDisplayConfigHandleOnlyProvidedPath(
                          v167,
                          (struct D3DKMT_GETPATHSMODALITY **)Buffer,
                          &v148,
                          (enum _DXGK_DIAG_SDC_STAGE *)&v141);
        LODWORD(v34) = PathsModality;
        if ( PathsModality < 0 )
          goto LABEL_228;
        v70 = v156;
      }
      else
      {
        v70 = v156;
        if ( v156 )
        {
          PathsModality = SetDisplayConfigHandleBrokerProvidedPaths(
                            v175,
                            0,
                            v158,
                            v167,
                            (struct D3DKMT_GETPATHSMODALITY **)Buffer,
                            &v148,
                            (enum _DXGK_DIAG_SDC_STAGE *)&v141);
          LODWORD(v34) = PathsModality;
          if ( PathsModality < 0 )
            goto LABEL_228;
        }
        else
        {
          v78 = v167;
          PathsModality = AllocatePathModalityForDisplayConfig(v158, v167, (struct D3DKMT_GETPATHSMODALITY **)Buffer);
          LODWORD(v34) = PathsModality;
          if ( PathsModality < 0 )
          {
            v141 = 6;
            goto LABEL_228;
          }
          PathsModality = ConvertDisplayConfigToPathModality(
                            v158,
                            v78,
                            (struct D3DKMT_GETPATHSMODALITY *)Buffer[0],
                            &v148);
          LODWORD(v34) = PathsModality;
          if ( PathsModality < 0 )
          {
            v141 = 7;
            goto LABEL_228;
          }
        }
      }
      if ( v148 )
      {
        if ( DrvIsModeChangeHandledByDispBroker() )
        {
          v141 = 41;
          goto LABEL_226;
        }
        PathsModality = SetDisplayConfigHandlePreferredScaling(
                          (struct D3DKMT_GETPATHSMODALITY *)Buffer[0],
                          (enum _DXGK_DIAG_SDC_STAGE *)&v141);
        LODWORD(v34) = PathsModality;
        if ( PathsModality < 0 )
          goto LABEL_228;
      }
      v79 = DxDdGetDxgkWin32kInterface(v77);
      LODWORD(v34) = (*(__int64 (__fastcall **)(__int64, PVOID, _QWORD))(v79 + 144))(256LL, Buffer[0], 0LL);
      PathsModality = v34;
      if ( (int)v34 < 0 )
      {
        v141 = 8;
        goto LABEL_228;
      }
      v51 = 1;
    }
LABEL_116:
    if ( (a3 & 0x800) != 0 )
    {
      v160 = 0;
      v71 = CreatePathPersistentMonitorsIfNeeded(v57, (const struct D3DKMT_GETPATHSMODALITY *)Buffer[0], &v160);
      LODWORD(v34) = v71;
      PathsModality = v71;
      if ( v71 < 0 )
      {
        WdLogSingleEntry1(2LL, v71);
        WdLogGlobalForLineNumber = 16265;
        v141 = 10;
        goto LABEL_228;
      }
      v80 = DxDdGetDxgkWin32kInterface(v72);
      v81 = (*(__int64 (__fastcall **)(__int64, PVOID))(v80 + 176))(0x80000000LL, Buffer[0]);
      LODWORD(v34) = v81;
      PathsModality = v81;
      if ( v81 == -1073741266 )
      {
        WdLogSingleEntry2(4LL, v155, -1073741266LL);
        v74 = 23;
        WdLogGlobalForLineNumber = 16277;
        goto LABEL_127;
      }
      if ( v81 < 0 )
      {
        WdLogSingleEntry1(2LL, v81);
        WdLogGlobalForLineNumber = 16285;
        v141 = 22;
        goto LABEL_228;
      }
      if ( v160 )
      {
        WdLogSingleEntry2(3LL, v155, v81);
        WdLogGlobalForLineNumber = 16300;
        LODWORD(v34) = -1073741266;
        goto LABEL_227;
      }
    }
    v82 = 0LL;
    if ( *((_WORD *)Buffer[0] + 10) )
    {
      CcdRawmodeFlag = GetCcdRawmodeFlag();
      v85 = v157;
      v86 = CcdRawmodeFlag | 0x8000;
      if ( (v157 & 0x20) != 0 )
      {
        v84 = v170;
        if ( !*((_QWORD *)v170 + 2)
          || (v84 = (struct _DISPLAYCONFIG_CDS_REQUEST *)*((unsigned int *)v170 + 3), ((unsigned __int8)v84 & 4) != 0) )
        {
          v86 |= 0x20000u;
        }
      }
      v87 = v86 | 0x1000000;
      if ( !v70 )
        v87 = v86;
      v88 = DxDdGetDxgkWin32kInterface(v84);
      v89 = v87;
      LODWORD(v89) = v87 | 0x20000000;
      v90 = *(__int64 (__fastcall **)(__int64, PVOID))(v88 + 152);
      if ( (v85 & 0x800) == 0 )
        v89 = v87;
      v91 = v90(v89, Buffer[0]);
      LODWORD(v34) = v91;
      PathsModality = v91;
      if ( v91 < 0 )
      {
        WdLogSingleEntry2(4LL, Buffer[0], v91);
        WdLogGlobalForLineNumber = 16345;
        v141 = 11;
LABEL_172:
        v20 = 7;
        goto LABEL_228;
      }
    }
    v20 = 10;
    v141 = 18;
    if ( !v169 )
    {
      if ( (a3 & 0x40) != 0 )
      {
        v21 = 0;
        v162 = 0;
        v152 = 0;
        goto LABEL_208;
      }
      WdLogSingleEntry1(1LL, a3);
      WdLogGlobalForLineNumber = 16487;
      v141 = 21;
LABEL_226:
      LODWORD(v34) = -1073741811;
      goto LABEL_227;
    }
    PathsModality = GetPathsModality(v82, (char **)&Buffer[1], 0x100040u, 0);
    LODWORD(v34) = PathsModality;
    if ( PathsModality < 0 )
    {
      v141 = 13;
      goto LABEL_172;
    }
    v93 = (16 * (a3 & 0x1000)) | 0x4000;
    if ( (a3 & 0x1100) == 0 )
      v93 = 16 * (a3 & 0x1000);
    if ( v93 )
    {
      v94 = DxDdGetDxgkWin32kInterface(v92);
      LODWORD(v34) = (*(__int64 (__fastcall **)(_QWORD, PVOID, _QWORD))(v94 + 144))(v93, Buffer[0], 0LL);
      PathsModality = v34;
      if ( (int)v34 < 0 )
      {
        v21 = v162;
        v141 = 14;
        goto LABEL_74;
      }
    }
    if ( (v157 & 0x10) != 0 )
      v93 |= 0x400000u;
    v95 = 0LL;
    v96 = v93 | 0x1000000;
    if ( !v156 )
      v96 = v93;
    v97 = *(_QWORD *)(v164 + 1096);
    while ( v97 )
    {
      v98 = (*(_DWORD *)(v97 + 160) & 0x800000) == 0;
      v99 = v95 + 1;
      v97 = *(_QWORD *)(v97 + 128);
      if ( v98 )
        v99 = v95;
      v95 = v99;
    }
    DisplayScenarioJournalSetExpectedPathModality(
      296 * (unsigned int)*((unsigned __int16 *)Buffer[0] + 10),
      *((unsigned __int16 *)Buffer[0] + 10),
      (char *)Buffer[0] + 56,
      v95);
    LOBYTE(v100) = (a3 & 0x1100) != 0;
    v101 = v166;
    v102 = ApplyPathsModality(Buffer[0], v96, v100, v176, v163, &v149, v151, v166, &PathsModality, &v141, v179);
    v168 = v102;
    v103 = v102;
    v162 = v102;
    v21 = v102;
    v152 = v102;
    if ( v102 < 0 )
    {
      v20 = 5;
      LODWORD(v34) = PathsModality;
      v147 = v149;
      goto LABEL_74;
    }
    v82 = 1LL;
    if ( v102 == 1 )
    {
      WdLogSingleEntry0(1LL);
      v82 = 1LL;
      WdLogGlobalForLineNumber = 16451;
    }
    LODWORD(v34) = PathsModality;
    if ( PathsModality < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 16452;
    }
    v147 = v149;
    if ( v149 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 16453;
    }
    if ( v103 != 2 )
    {
      if ( !*v101 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 16468;
      }
      LOBYTE(v40) = v140;
      v104 = 0LL;
      v163 = 0LL;
      goto LABEL_209;
    }
    if ( (a3 & 0x1100) != 0 || *v101 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 16457;
    }
    LOBYTE(v40) = v140;
    v82 = 1LL;
    v143 = 1;
LABEL_208:
    v104 = v163;
LABEL_209:
    v20 = 10;
    if ( (_BYTE)v40 )
    {
      v105 = DxDdGetDxgkWin32kInterface(v82);
      v106 = (*(__int64 (__fastcall **)(_QWORD, PVOID))(v105 + 176))(v51, Buffer[0]);
      v34 = v106;
      PathsModality = v106;
      if ( a6 )
      {
        if ( v106 == -1073741266 )
        {
          if ( (a3 & 0x10) != 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 16513;
          }
          WdLogSingleEntry2(4LL, v155, v34);
          WdLogGlobalForLineNumber = 16517;
          if ( !v143 )
          {
            if ( v104 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 16525;
            }
            v146 = 1;
            v163 = *v166;
            *v166 = 0LL;
          }
          v141 = 24;
          v20 = 9;
        }
        else
        {
          v20 = 10;
          if ( v106 < 0 )
          {
            v141 = 29;
            v20 = 9;
            LODWORD(v34) = 0;
            PathsModality = 0;
          }
        }
      }
      else
      {
        if ( v106 < 0 )
        {
          WdLogSingleEntry1(2LL, v106);
          LODWORD(v34) = 0;
          WdLogGlobalForLineNumber = 16506;
          PathsModality = 0;
        }
        v20 = 10;
      }
    }
LABEL_228:
    v107 = ++v155;
    if ( v153 )
    {
      v40 = 0LL;
      if ( !v145 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 16557;
      }
      DisplayScenarioJournalRetry((unsigned int)v34);
      goto LABEL_258;
    }
    if ( (_DWORD)v34 == -1073741266 )
    {
      if ( !v150 && v107 < 4 )
      {
        v108 = 3221226030LL;
        goto LABEL_245;
      }
      v40 = 0LL;
    }
    else
    {
      v40 = 0LL;
      if ( (int)v34 >= 0 )
        goto LABEL_234;
    }
    if ( !v145 )
      goto LABEL_258;
    v150 = 1;
    v108 = (unsigned int)v34;
    v140 = 0;
LABEL_245:
    DisplayScenarioJournalRetry(v108);
  }
  if ( v159 != 15 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15872;
  }
  if ( (_BYTE)v40 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15873;
  }
  v52 = v165;
  if ( v165 < 6 )
  {
    v53 = (char *)&unk_1402711D0 + 12 * v165;
    DrvDxgkLogCodePointPacket(75LL, *((_DWORD *)v53 + 1), *((_DWORD *)v53 + 2), 0);
    if ( *v53 )
    {
      v161 = 0;
      v165 = v52 + 1;
      LODWORD(v34) = GetPathsModality(v54, (char **)Buffer, 0xFu, 0);
      PathsModality = v34;
    }
    else
    {
      v55 = v161++;
      PathsModality = DrvCreatePathModalityFromAllPaths(&v173, v55, (struct D3DKMT_GETPATHSMODALITY **)Buffer);
      LODWORD(v34) = PathsModality;
      if ( PathsModality >= 0 )
      {
        if ( *((_WORD *)Buffer[0] + 10) != 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 15925;
        }
      }
      else
      {
        v165 = v52 + 1;
        v161 = 0;
      }
    }
    if ( (int)v34 < 0 )
      goto LABEL_73;
    v56 = DrvFunctionalizeBaseVidMode((const struct RETRY_MODE *)v53, (struct D3DKMT_GETPATHSMODALITY *)Buffer[0]);
    LODWORD(v34) = v56;
    PathsModality = v56;
    if ( v56 < 0 )
    {
      WdLogSingleEntry1(2LL, v56);
      WdLogGlobalForLineNumber = 15944;
      v141 = 2;
      goto LABEL_74;
    }
LABEL_115:
    v70 = v156;
    LOBYTE(v40) = v140;
    goto LABEL_116;
  }
  v40 = 0LL;
  if ( (int)v34 < 0 )
    goto LABEL_259;
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 15880;
LABEL_258:
  if ( (int)v34 >= 0 )
  {
LABEL_234:
    v109 = v146;
LABEL_235:
    if ( v109 )
    {
      v110 = v166;
      if ( !*v166 )
      {
        v111 = v163;
        if ( !v163 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 16606;
        }
        *v110 = v111;
        v40 = 0LL;
        if ( v21 == 2 )
          v21 = 0;
        v152 = v21;
      }
    }
    goto LABEL_274;
  }
LABEL_259:
  v109 = v146;
  if ( v146 )
  {
    LODWORD(v34) = 0;
    v141 = 29;
    PathsModality = 0;
    v20 = 9;
    v21 = 0;
    v152 = 0;
  }
  if ( (int)v34 >= 0 )
    goto LABEL_235;
  v18 = v163;
LABEL_263:
  v32 = v164;
LABEL_264:
  if ( v145 )
  {
    if ( a6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 16624;
    }
    v115 = DrvChangeDisplayFallback(
             v176,
             BYTE1(a3) & 1,
             1u,
             v18,
             v166,
             (enum _DXGK_DIAG_SDC_STAGE *)&v141,
             &v143,
             &v152);
    v34 = v115;
    PathsModality = v115;
    if ( v115 >= 0 )
    {
      v20 = 10;
      v141 = 31;
      goto LABEL_269;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 16643;
    if ( *(_BYTE *)(v32 + 1264) )
    {
LABEL_269:
      v21 = v152;
      v40 = 0LL;
    }
    else
    {
      *(_BYTE *)(v32 + 1264) = 1;
      v117 = DxDdGetDxgkWin32kInterface(v116);
      v40 = 0LL;
      v21 = v152;
      LOBYTE(v139) = 0;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, int))(v117 + 720))(
        400LL,
        22LL,
        v34,
        v152,
        v141,
        v139);
    }
  }
  else
  {
    v40 = 0LL;
  }
LABEL_274:
  if ( (_DWORD)v34 == -1073741811 )
    goto LABEL_300;
LABEL_275:
  FreePathsModality((char *)Buffer[1]);
  Buffer[1] = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality((struct D3DKMT_GETPATHSMODALITY **)&Buffer[1]) < 0 )
    goto LABEL_296;
  DisplayScenarioJournalSetActualPathModality(
    296 * (unsigned int)*((unsigned __int16 *)Buffer[1] + 10),
    *((unsigned __int16 *)Buffer[1] + 10),
    (char *)Buffer[1] + 56);
  v119 = (unsigned __int16 *)Buffer[1];
  v120 = 0;
  if ( !*((_WORD *)Buffer[1] + 10) )
    goto LABEL_284;
  while ( 2 )
  {
    v118 = 0x8000001000000000uLL;
    if ( (*(_QWORD *)((_BYTE *)v119 + v40 + 56) & 0x8000001000000000uLL) != 0x8000000000000000uLL )
    {
LABEL_281:
      ++v120;
      v40 += 296LL;
      if ( v120 >= v119[10] )
        goto LABEL_284;
      continue;
    }
    break;
  }
  v190[0] = 9;
  v193 = 0LL;
  v194 = 0;
  v190[1] = 32;
  v191 = *(_QWORD *)((char *)v119 + v40 + 72);
  v192 = *(_DWORD *)((char *)v119 + v40 + 84);
  if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v190, 0) < 0
    || (v193 & 1) == 0 )
  {
    v119 = (unsigned __int16 *)Buffer[1];
    goto LABEL_281;
  }
  v154 = 1;
LABEL_284:
  if ( (a3 & 0x80) != 0 && UserIsConsoleConnection((__int64)v119, v118) )
  {
    v121 = 0;
    v122 = 0LL;
    if ( *((_WORD *)Buffer[1] + 10) )
    {
      v123 = (char *)Buffer[1] + 56;
      while ( 1 )
      {
        if ( (*(_QWORD *)v123 & 0x9800000000000000uLL) == 0x8000000000000000uLL )
        {
          v124 = *((_DWORD *)v123 + 22);
          if ( v124 != 0x80000000 && v124 != 11 && v124 != 13 )
            break;
        }
        v122 = (unsigned int)(v122 + 1);
        v123 += 296;
        if ( (unsigned int)v122 >= *((unsigned __int16 *)Buffer[1] + 10) )
          goto LABEL_295;
      }
      v121 = 1;
    }
LABEL_295:
    LOBYTE(v122) = v121;
    v125 = v157 >> 11;
    LOBYTE(v125) = (v157 & 0x800) != 0;
    UserNotifyExternalMonitorConnectedStatus(v125, v122);
  }
LABEL_296:
  if ( *v166 )
  {
    v126 = *((_QWORD *)*v166 + 5);
    if ( v126 )
    {
      v127 = *(_QWORD *)(v126 + 2568);
      if ( ((v127 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v127 + 160) & 0x2000000) != 0);
    }
  }
LABEL_300:
  v128 = v155;
  if ( v180 )
    *v180 = v155;
  if ( v181 )
    *v181 = v141;
  if ( v182 )
  {
    if ( v146 || (v129 = 1, !v143) )
      v129 = 0;
    *v182 = v129;
  }
  v130 = v147;
  if ( v185 )
    *v185 = v147;
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() && v183 )
    *v183 = v151[0];
  v133 = v157;
  if ( (v157 & 0x20) != 0 )
  {
    v134 = v170;
    *((_DWORD *)v170 + 8) = v21;
    *((_DWORD *)v134 + 9) = v20;
    if ( (int)v34 >= 0 != v21 >= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 16777;
    }
    v187 = 20LL;
    v186 = 0;
    v188 = v21;
    v189 = v20;
    DisplayScenarioJournalSetSpecializedData(&v186);
  }
  v98 = (v133 & 0x40) == 0;
  v135 = v177;
  if ( v98 )
    LogDiagSDC(v158, (__int64)v167, a3, v34, v128, v141, v184, v143, v177);
  v136 = *(_QWORD *)(v164 + 1768);
  if ( v136 )
    DisplayScenarioJournalSetUniqueness(*(unsigned int *)(v136 + 1573024), *(unsigned int *)(v136 + 1573008));
  LOBYTE(v132) = v130;
  LOBYTE(v131) = v143;
  LOBYTE(v138) = v154;
  DisplayScenarioJournalSetResult((unsigned int)v141, v128, v131, v132, v138, v168, v135);
  DisplayScenarioJournalFinalize(v179, (unsigned int)v34);
  WdLogSingleEntry1(4LL, (int)v34);
  WdLogGlobalForLineNumber = 16808;
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v171);
  AUTO_STATUS_CHANGE_NOTIFY<4,5>::NotifyStatusChange(&v178, 5LL);
  return (unsigned int)v34;
}
