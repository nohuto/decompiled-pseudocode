/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1401D2DF0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14013DC0C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401D2960 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D55B8 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401F6B40 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     PowerDimUndimResend @ 0x14000AD94 (PowerDimUndimResend.c)
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     ReferenceDwmApiPort @ 0x1400486C0 (ReferenceDwmApiPort.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DispBrokerGetCurrentMode @ 0x14007D610 (DispBrokerGetCurrentMode.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14007EC3C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     UserReferenceDwmApiPort @ 0x1400B2FC0 (UserReferenceDwmApiPort.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14011DB50 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     SafeEnableMDEV @ 0x14013AF00 (SafeEnableMDEV.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvQueryMDEVPowerState @ 0x14013DBA0 (DrvQueryMDEVPowerState.c)
 *     LogDiagSDC @ 0x14014FCB0 (LogDiagSDC.c)
 *     zzzUpdateCursorImage @ 0x140167748 (zzzUpdateCursorImage.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     SetPointer @ 0x1401853CC (SetPointer.c)
 *     ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x14018B1F4 (-DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENA.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x14018DB74 (-TrackFullscreenMode@@YAXH@Z.c)
 *     xxxInternalInvalidate @ 0x1401936D4 (xxxInternalInvalidate.c)
 *     bSetDevDragRect @ 0x1401947E4 (bSetDevDragRect.c)
 *     SafeDisableMDEV @ 0x14019B620 (SafeDisableMDEV.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     LogDiagSDCAccessDenied @ 0x1401B6E90 (LogDiagSDCAccessDenied.c)
 *     xxxUserResetDisplayDevice @ 0x1401C4F6C (xxxUserResetDisplayDevice.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401F81D4 (DrvSetDisplayConfigValidateParams.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x140248DE4 (DwmAsyncNotifyRotationModeChange.c)
 *     StopFade @ 0x1402494D8 (StopFade.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        bool *a8,
        _BYTE *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10,
        __int64 a11)
{
  _DWORD *v11; // r15
  __int64 v12; // rsi
  unsigned int v13; // r14d
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r8d
  __int64 UserSessionState; // rdi
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rbx
  struct _UNICODE_STRING *v28; // rbx
  struct _UNICODE_STRING *v29; // rax
  int v30; // ecx
  int v31; // edi
  int v32; // r15d
  char v33; // bl
  unsigned int v34; // r12d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // r8d
  __int64 DxgkWin32kInterface; // rax
  _DWORD *v46; // rdi
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // rax
  int v51; // edx
  int v52; // r8d
  __int64 v53; // rcx
  unsigned int (*v54)(void); // rax
  int (*v55)(void); // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rbx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rcx
  void (__fastcall *v63)(__int64, _QWORD); // rax
  int v64; // edx
  int v65; // r8d
  int v66; // edx
  int v67; // ecx
  int v68; // r8d
  int v69; // edx
  int v70; // ecx
  int v71; // r8d
  unsigned int v72; // ecx
  __int64 v73; // rax
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  int v77; // edx
  int v78; // ecx
  int v79; // r8d
  __int64 v80; // rax
  struct _MDEV *v81; // rdx
  void *v82; // rax
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  int v86; // r8d
  struct _MDEV *v87; // rdx
  void *v88; // rax
  __int64 v89; // r12
  __int64 *v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int16 v93; // bx
  int v94; // edx
  int v95; // r8d
  __int64 v96; // rcx
  int v97; // edx
  int v98; // r8d
  __int64 v99; // rcx
  int v100; // edx
  int v101; // r8d
  __int64 v102; // rcx
  __int64 v103; // rbx
  int v104; // edx
  int v105; // ecx
  int v106; // r8d
  int v107; // edx
  int v108; // r8d
  struct _MDEV *v109; // rbx
  __int64 v110; // rax
  char v111; // al
  _WORD v113[2]; // [rsp+90h] [rbp-80h] BYREF
  int v114; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned int v115[2]; // [rsp+98h] [rbp-78h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-70h]
  unsigned int v117; // [rsp+A8h] [rbp-68h] BYREF
  unsigned int v118[3]; // [rsp+ACh] [rbp-64h] BYREF
  __int64 v119; // [rsp+B8h] [rbp-58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v120; // [rsp+C0h] [rbp-50h]
  struct _MDEV *v121; // [rsp+C8h] [rbp-48h] BYREF
  bool *v122; // [rsp+D0h] [rbp-40h]
  _BYTE *v123; // [rsp+D8h] [rbp-38h]
  __int64 v124; // [rsp+E0h] [rbp-30h]
  __int64 v125[2]; // [rsp+E8h] [rbp-28h] BYREF
  __int128 v126; // [rsp+F8h] [rbp-18h]
  __int64 v127; // [rsp+108h] [rbp-8h]

  v11 = (_DWORD *)a11;
  v12 = a5;
  v119 = a7;
  v13 = a4;
  v122 = a8;
  v123 = a9;
  v120 = a10;
  v127 = 0LL;
  v121 = 0LL;
  v118[0] = 0;
  v113[0] = 0;
  LOWORD(v115[0]) = 0;
  v114 = 0;
  *(_OWORD *)v125 = 0LL;
  *(_QWORD *)&v118[1] = a2;
  v126 = 0LL;
  v16 = MEMORY[0xFFFFF78000000320];
  v115[1] = a1;
  v116 = a11;
  v124 = v16 * KeQueryTimeIncrement();
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v12 = *((_QWORD *)PtiCurrent(v18, v17) + 61);
  UserSessionState = W32GetUserSessionState(v18, v17, v19);
  v22 = *(_QWORD *)(W32GetUserGdiSessionState(v21) + 40);
  if ( PsGetCurrentProcess(v23) == v22 || !a6 || (v13 & 0x10) != 0 )
  {
    if ( !v12 )
      v12 = *(_QWORD *)(UserSessionState + 19176);
  }
  else
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v25, v24, v26) + 62824) )
      v27 = *(_QWORD *)(UserSessionState + 19184);
    else
      v27 = *(_QWORD *)(UserSessionState + 19176);
    if ( v12 != v27 )
    {
      if ( v27 && ObQueryNameInfo(v27) )
        v28 = (struct _UNICODE_STRING *)(ObQueryNameInfo(v27) + 8);
      else
        v28 = 0LL;
      if ( v12 && ObQueryNameInfo(v12) )
        v29 = (struct _UNICODE_STRING *)(ObQueryNameInfo(v12) + 8);
      else
        v29 = 0LL;
      LogDiagSDCAccessDenied(v29, v28);
      v30 = 49;
      v31 = -1073741790;
      v114 = 49;
      goto LABEL_108;
    }
  }
  v32 = a3 & 0x10000;
  if ( ((a3 & 0x10000) != 0) == (v119 != 0) )
  {
    if ( v32 )
    {
      v13 |= 4u;
      if ( (a3 & 0x20000000) != 0 )
        v13 = a4 | 0x14;
      if ( (a3 & 0x10000000) != 0 )
        v13 |= 0x200u;
    }
    v33 = a6;
    v34 = v115[1];
    v31 = DrvSetDisplayConfigValidateParams(v115[1], v118[1], a3, v13, a6);
    if ( v31 < 0 )
    {
      v11 = (_DWORD *)v116;
      v30 = 1;
      v114 = 1;
      goto LABEL_109;
    }
    if ( !v32 )
    {
      if ( UserIsConsoleConnection(v36, v35, v37, v38) || (v36 = 2191LL, (a3 & 0x88F) != 0x88F) )
      {
        if ( (v13 & 0xC01) == 0 )
        {
          if ( (unsigned int)DispBrokerGetCurrentMode(v36, v35, v37) == 3 )
          {
            v31 = DispBrokerSetDisplayConfig(
                    v115[1],
                    *(struct DISPLAYCONFIG_PATH_INFO_INTERNAL **)&v118[1],
                    a3,
                    v13,
                    v120,
                    a6 != 0);
            if ( v31 >= 0 || (v13 & 0x200) == 0 )
            {
              v30 = 56;
LABEL_39:
              v11 = (_DWORD *)v116;
              v114 = v30;
              goto LABEL_109;
            }
          }
          else if ( (unsigned int)DispBrokerGetCurrentMode(v40, v39, v41) == 2 )
          {
            v30 = 55;
            v31 = -1073741790;
            goto LABEL_39;
          }
        }
      }
    }
    if ( UserIsConsoleConnection(v36, v35, v37, v38) && v32 )
    {
      if ( v116 )
      {
        v117 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1622);
      }
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v43, v42);
      (*(void (__fastcall **)(__int64 *))(DxgkWin32kInterface + 808))(v125);
      v46 = v125;
      v116 = (__int64)v125;
    }
    else
    {
      v46 = (_DWORD *)v116;
    }
    if ( (a3 & 0x80) != 0 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v43, v42, v44) + 43276) )
      {
        v30 = 27;
LABEL_51:
        v114 = v30;
        v31 = -1073741823;
        goto LABEL_107;
      }
      v50 = W32GetUserSessionState(v48, v47, v49);
      if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v50 + 56968) + 16LL)) )
      {
        v30 = 28;
        goto LABEL_51;
      }
      LODWORD(v53) = 536936448;
      if ( (a3 & 0x20010000) == 0x20010000 && v115[1] == 1 )
      {
        v53 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(536936448LL) + 48);
        v54 = *(unsigned int (**)(void))(v53 + 3304);
        if ( v54 )
        {
          if ( v54() )
          {
            v53 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v53) + 48);
            v55 = *(int (**)(void))(v53 + 3800);
            if ( v55 )
            {
              if ( v55() >= 0 )
              {
                v56 = ReferenceDwmApiPort();
                DwmAsyncNotifyRotationModeChange(v56, 1LL);
                v57 = UserReferenceDwmApiPort();
                LOBYTE(v58) = 1;
                v59 = v57;
                LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)((char *)v113 + 1), v58, v60, v61);
                v63 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v62) + 48)
                                                             + 3776LL);
                if ( v63 )
                  v63(v59, 0LL);
                LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)((char *)v113 + 1), v64, v65);
                HIBYTE(v113[0]) = 1;
                if ( *(_DWORD *)(W32GetUserSessionState(v67, v66, v68) + 43276) )
                {
                  v72 = 27;
LABEL_64:
                  v114 = v72;
                  v31 = -1073741823;
                  goto LABEL_106;
                }
                v73 = W32GetUserSessionState(v70, v69, v71);
                if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v73 + 56968) + 16LL)) )
                {
                  v72 = 28;
                  goto LABEL_64;
                }
                v33 = a6;
              }
            }
          }
        }
      }
      if ( !(unsigned int)PreAllocateForPrimaryMonitorChange(v53, v51, v52) )
      {
        v30 = 53;
        v31 = -1073741823;
        v114 = 53;
        goto LABEL_105;
      }
      SetPointer(0LL);
      if ( *(_QWORD *)(W32GetUserSessionState(v75, v74, v76) + 43024) )
        StopFade();
      v80 = W32GetUserSessionState(v78, v77, v79);
      bSetDevDragRect(*(_QWORD *)(*(_QWORD *)(v80 + 56968) + 40LL));
    }
    v81 = *(struct _MDEV **)(*(_QWORD *)(W32GetUserSessionState(v43, v42, v44) + 56968) + 16LL);
    if ( v12 )
      v82 = ***(void ****)(v12 + 8);
    else
      v82 = 0LL;
    v83 = DrvSetDisplayConfig(
            v115[1],
            *(struct DISPLAYCONFIG_PATH_INFO_INTERNAL **)&v118[1],
            a3,
            v13 | 0x140,
            v82,
            v33,
            v119,
            0LL,
            v81,
            &v121,
            v118,
            (unsigned int *)&v114,
            (char *)v113,
            v115,
            (_BYTE *)v115 + 1,
            (__int64)v120,
            v46);
    v31 = v83;
    if ( (a3 & 0x80) == 0 )
    {
      v30 = v114;
      goto LABEL_105;
    }
    if ( v83 >= 0 )
    {
      v89 = v116;
    }
    else
    {
      if ( !LOBYTE(v115[0]) || v32 || v119 )
        goto LABEL_85;
      v87 = *(struct _MDEV **)(*(_QWORD *)(W32GetUserSessionState(v85, v84, v86) + 56968) + 16LL);
      v88 = v12 ? ***(void ****)(v12 + 8) : 0LL;
      v89 = v116;
      v83 = DrvSetDisplayConfig(
              0,
              0LL,
              0x98Fu,
              0x102u,
              v88,
              0,
              0LL,
              0LL,
              v87,
              &v121,
              0LL,
              0LL,
              (char *)v113,
              0LL,
              0LL,
              (__int64)v120,
              (_DWORD *)v116);
      if ( v83 < 0 )
        goto LABEL_85;
    }
    v31 = v83;
    if ( (v13 & 0x200) != 0 )
    {
      v92 = *(_QWORD *)(W32GetSessionState(v85) + 88);
      v93 = *(_WORD *)(v92 + 1168);
      v96 = *(_QWORD *)(W32GetUserSessionState(v92, v94, v95) + 19904);
      *(_WORD *)(v96 + 6998) = v93;
      v99 = *(_QWORD *)(W32GetUserSessionState(v96, v97, v98) + 19904);
      ++*(_WORD *)(v99 + 7014);
      v103 = *(_QWORD *)(W32GetUserSessionState(v99, v100, v101) + 36400);
      if ( v103 )
      {
        do
        {
          v102 = *(_QWORD *)(W32GetUserSessionState(v102, v84, v86) + 19904);
          *(_WORD *)(v103 + 272) = *(_WORD *)(v102 + 6998);
          v103 = *(_QWORD *)(v103 + 368);
        }
        while ( v103 );
        v89 = v116;
      }
    }
    TrackFullscreenMode(0LL, v84, v86);
    if ( !LOBYTE(v113[0]) )
    {
      v109 = v121;
      *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v105, v104, v106) + 56968) + 16LL) = v109;
      GreIncrementDisplaySettingsUniqueness(1LL);
      PowerDimUndimResend();
      v117 = (v32 != 0 ? 4 : 0) | ((v13 & 0x10 | HIBYTE(a3) & 8) >> 3);
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
        v117 = v117 & 0xFFFFFFF7 | (8 * (BYTE1(v115[0]) & 1));
      v31 = xxxResetDisplayDevice(v12, &v117, v89);
      if ( v31 < 0 )
        v114 = 36;
      goto LABEL_86;
    }
    if ( (v13 & 4) != 0 )
    {
LABEL_86:
      if ( v12 )
      {
        v90 = *(__int64 **)(v12 + 8);
        if ( (*(_DWORD *)(*v90 + 64) & 1) == 0 )
          xxxInternalInvalidate(v90[3]);
      }
      SetPointer(1LL);
      zzzUpdateCursorImage(v91);
      v30 = v114;
LABEL_105:
      if ( !HIBYTE(v113[0]) )
        goto LABEL_107;
LABEL_106:
      v110 = ReferenceDwmApiPort();
      DwmAsyncNotifyRotationModeChange(v110, 0LL);
      v30 = v114;
      goto LABEL_107;
    }
    if ( (unsigned int)SafeDisableMDEV(1u, v104, v106) )
      SafeEnableMDEV(1u, v107, v108);
LABEL_85:
    xxxUserResetDisplayDevice(v85);
    goto LABEL_86;
  }
  v31 = -1073741811;
  v30 = 1;
  v114 = 1;
LABEL_107:
  v11 = (_DWORD *)v116;
LABEL_108:
  v34 = v115[1];
LABEL_109:
  if ( v122 )
    *v122 = (unsigned int)(v30 - 27) <= 1;
  v111 = v113[0];
  if ( v123 )
    *v123 = v113[0];
  if ( v31 >= 0 && v30 == 29 )
    v31 = -1073741266;
  LogDiagSDC(v34, *(__int64 *)&v118[1], a3, (unsigned int)v31, v118[0], v30, v124, v111, v11);
  return (unsigned int)v31;
}
