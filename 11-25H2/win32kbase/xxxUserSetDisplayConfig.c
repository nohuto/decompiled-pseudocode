/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1401683C0
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F7B3C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     NtUserSetDisplayConfig @ 0x1401744E0 (NtUserSetDisplayConfig.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401AED90 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AFF08 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401CD2F0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x14002C1E0 (DispBrokerGetCurrentMode.c)
 *     ReferenceDwmApiPort @ 0x14003F9B0 (ReferenceDwmApiPort.c)
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     UserReferenceDwmApiPort @ 0x140057B80 (UserReferenceDwmApiPort.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1400736E0 (GreIncrementDisplaySettingsUniqueness.c)
 *     SafeDisableMDEV @ 0x140075040 (SafeDisableMDEV.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxInternalInvalidate @ 0x1400AB274 (xxxInternalInvalidate.c)
 *     xxxResetDisplayDevice @ 0x1400AB7F0 (xxxResetDisplayDevice.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x1400CEB20 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     LogDiagSDC @ 0x1400E2360 (LogDiagSDC.c)
 *     DrvQueryMDEVPowerState @ 0x1400F7AD0 (DrvQueryMDEVPowerState.c)
 *     zzzUpdateCursorImage @ 0x14012D0F4 (zzzUpdateCursorImage.c)
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     PowerDimUndimResend @ 0x140142374 (PowerDimUndimResend.c)
 *     SetPointer @ 0x14014A2C0 (SetPointer.c)
 *     SafeEnableMDEV @ 0x14014C4A0 (SafeEnableMDEV.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x140151F78 (-TrackFullscreenMode@@YAXH@Z.c)
 *     FreeAllSpbs @ 0x1401536C4 (FreeAllSpbs.c)
 *     bSetDevDragRect @ 0x140157194 (bSetDevDragRect.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxUserResetDisplayDevice @ 0x1401A13BC (xxxUserResetDisplayDevice.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1401ABC94 (-DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENA.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401ABE78 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Bugfix_PassingRapidHpdInfoInSDC__private_IsEnabledDeviceUsageNoInline @ 0x1401AEBF4 (Feature_Bugfix_PassingRapidHpdInfoInSDC__private_IsEnabledDeviceUsageNoInline.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401CE890 (DrvSetDisplayConfigValidateParams.c)
 *     LogDiagSDCAccessDenied @ 0x1401D00F0 (LogDiagSDCAccessDenied.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x14023E780 (DwmAsyncNotifyRotationModeChange.c)
 *     StopFade @ 0x14023F2EC (StopFade.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        bool *a8,
        _BYTE *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10,
        _DWORD *a11)
{
  _DWORD *v11; // r12
  __int64 v12; // rsi
  unsigned int v13; // r14d
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rdi
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  struct _UNICODE_STRING *v27; // rbx
  struct _UNICODE_STRING *v28; // rax
  unsigned int v29; // ecx
  signed int v30; // edi
  int v31; // r12d
  char v32; // bl
  unsigned int v33; // r15d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 DxgkWin32kInterface; // rax
  _DWORD *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int (*v49)(void); // rax
  int (*v50)(void); // rax
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  void (__fastcall *v55)(__int64, _QWORD); // rax
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  signed int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  struct _MDEV *v72; // rdx
  void *v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  struct _MDEV *v77; // rdx
  void *v78; // rax
  _DWORD *v79; // r15
  __int64 *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int16 v84; // bx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rbx
  __int64 v92; // rcx
  __int64 v93; // rdx
  struct _MDEV *v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  char v99; // al
  char v101[4]; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v102; // [rsp+94h] [rbp-7Ch] BYREF
  char v103; // [rsp+98h] [rbp-78h] BYREF
  char v104; // [rsp+99h] [rbp-77h] BYREF
  char v105; // [rsp+9Ah] [rbp-76h]
  unsigned int v106; // [rsp+9Ch] [rbp-74h]
  _DWORD *v107; // [rsp+A0h] [rbp-70h]
  _BYTE v108[4]; // [rsp+A8h] [rbp-68h] BYREF
  unsigned int v109; // [rsp+ACh] [rbp-64h] BYREF
  int v110; // [rsp+B0h] [rbp-60h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v111; // [rsp+B8h] [rbp-58h]
  __int64 v112; // [rsp+C0h] [rbp-50h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v113; // [rsp+C8h] [rbp-48h]
  struct _MDEV *v114; // [rsp+D0h] [rbp-40h] BYREF
  bool *v115; // [rsp+D8h] [rbp-38h]
  _BYTE *v116; // [rsp+E0h] [rbp-30h]
  __int64 v117; // [rsp+E8h] [rbp-28h]
  _OWORD v118[2]; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v119; // [rsp+110h] [rbp+0h]

  v11 = a11;
  v12 = a5;
  v112 = a7;
  v13 = a4;
  v115 = a8;
  v116 = a9;
  v113 = a10;
  v119 = 0LL;
  v114 = 0LL;
  v110 = 0;
  v101[0] = 0;
  v103 = 0;
  v104 = 0;
  v102 = 0;
  memset(v118, 0, sizeof(v118));
  v111 = a2;
  v16 = MEMORY[0xFFFFF78000000320];
  v106 = a1;
  v107 = a11;
  v105 = 0;
  v117 = v16 * KeQueryTimeIncrement();
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v12 = *((_QWORD *)PtiCurrent() + 62);
  UserSessionState = W32GetUserSessionState(v18, v17);
  v21 = *(_QWORD *)(W32GetUserGdiSessionState(v20) + 40);
  if ( PsGetCurrentProcess(v23, v22) == v21 || !a6 || (v13 & 0x10) != 0 )
  {
    if ( !v12 )
      v12 = *(_QWORD *)(UserSessionState + 19144);
  }
  else
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v25, v24) + 62832) )
      v26 = *(_QWORD *)(UserSessionState + 19152);
    else
      v26 = *(_QWORD *)(UserSessionState + 19144);
    if ( v12 != v26 )
    {
      if ( v26 && ObQueryNameInfo(v26) )
        v27 = (struct _UNICODE_STRING *)(ObQueryNameInfo(v26) + 8);
      else
        v27 = 0LL;
      if ( v12 && ObQueryNameInfo(v12) )
        v28 = (struct _UNICODE_STRING *)(ObQueryNameInfo(v12) + 8);
      else
        v28 = 0LL;
      LogDiagSDCAccessDenied(v28, v27);
      v29 = 49;
      v30 = -1073741790;
      v102 = 49;
      goto LABEL_109;
    }
  }
  v31 = a3 & 0x10000;
  if ( ((a3 & 0x10000) != 0) == (v112 != 0) )
  {
    if ( v31 )
    {
      v13 |= 4u;
      if ( (a3 & 0x20000000) != 0 )
        v13 = a4 | 0x14;
      if ( (a3 & 0x10000000) != 0 )
        v13 |= 0x200u;
    }
    v32 = a6;
    v33 = v106;
    v30 = DrvSetDisplayConfigValidateParams(v106, (_DWORD)v111, a3, v13, a6);
    if ( v30 < 0 )
    {
      v11 = v107;
      v29 = 1;
      v102 = 1;
      goto LABEL_110;
    }
    if ( !v31 )
    {
      if ( UserIsConsoleConnection(v35, v34) || (v37 = 2191LL, (a3 & 0x88F) != 0x88F) )
      {
        if ( (v13 & 0xC01) == 0 )
        {
          if ( (unsigned int)DispBrokerGetCurrentMode(v37, v36) == 3 )
          {
            v30 = DispBrokerSetDisplayConfig(v106, v111, a3, v13, v113, a6 != 0);
            if ( v30 >= 0 || (v13 & 0x200) == 0 )
            {
              v29 = 56;
LABEL_39:
              v11 = v107;
              v102 = v29;
              goto LABEL_110;
            }
          }
          else if ( (unsigned int)DispBrokerGetCurrentMode(v39, v38) == 2 )
          {
            v29 = 55;
            v30 = -1073741790;
            goto LABEL_39;
          }
        }
      }
    }
    if ( (unsigned int)Feature_Bugfix_PassingRapidHpdInfoInSDC__private_IsEnabledDeviceUsageNoInline()
      && UserIsConsoleConnection(v41, v40)
      && v31 )
    {
      if ( v107 )
      {
        LODWORD(v107) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1636LL);
      }
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v41);
      (*(void (__fastcall **)(_OWORD *))(DxgkWin32kInterface + 808))(v118);
      v43 = v118;
      v107 = v118;
    }
    else
    {
      v43 = v107;
    }
    if ( (a3 & 0x80) != 0 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v41, v40) + 43276) )
      {
        v29 = 27;
LABEL_52:
        v102 = v29;
        v30 = -1073741823;
        goto LABEL_108;
      }
      v46 = W32GetUserSessionState(v45, v44);
      if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v46 + 56968) + 16LL)) )
      {
        v29 = 28;
        goto LABEL_52;
      }
      v48 = 536936448LL;
      if ( (a3 & 0x20010000) == 0x20010000 && v106 == 1 )
      {
        v48 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(536936448LL, v47) + 48);
        v49 = *(unsigned int (**)(void))(v48 + 3736);
        if ( v49 )
        {
          if ( v49() )
          {
            v48 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v48, v47) + 48);
            v50 = *(int (**)(void))(v48 + 4248);
            if ( v50 )
            {
              if ( v50() >= 0 )
              {
                v51 = ReferenceDwmApiPort();
                DwmAsyncNotifyRotationModeChange(v51, 1LL);
                v52 = UserReferenceDwmApiPort();
                LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v108, 1);
                v55 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v54, v53) + 48)
                                                             + 4224LL);
                if ( v55 )
                  v55(v52, 0LL);
                LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v108, v56);
                v105 = 1;
                if ( *(_DWORD *)(W32GetUserSessionState(v58, v57) + 43276) )
                {
                  v61 = 27;
LABEL_65:
                  v102 = v61;
                  v30 = -1073741823;
                  goto LABEL_107;
                }
                v62 = W32GetUserSessionState(v60, v59);
                if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v62 + 56968) + 16LL)) )
                {
                  v61 = 28;
                  goto LABEL_65;
                }
                v32 = a6;
              }
            }
          }
        }
      }
      if ( !(unsigned int)PreAllocateForPrimaryMonitorChange(v48, v47) )
      {
        v29 = 53;
        v30 = -1073741823;
        v102 = 53;
        goto LABEL_106;
      }
      SetPointer(0LL, v63);
      FreeAllSpbs(v65, v64);
      if ( *(_QWORD *)(W32GetUserSessionState(v67, v66) + 43000) )
        StopFade();
      v70 = W32GetUserSessionState(v69, v68);
      bSetDevDragRect(*(_QWORD *)(*(_QWORD *)(v70 + 56968) + 48LL), v71);
    }
    v72 = *(struct _MDEV **)(*(_QWORD *)(W32GetUserSessionState(v41, v40) + 56968) + 16LL);
    if ( v12 )
      v73 = ***(void ****)(v12 + 8);
    else
      v73 = 0LL;
    v74 = DrvSetDisplayConfig(
            v106,
            v111,
            a3,
            v13 | 0x140,
            v73,
            v32,
            v112,
            0LL,
            v72,
            &v114,
            (unsigned int *)&v110,
            (signed int *)&v102,
            v101,
            &v103,
            &v104,
            (__int64)v113,
            v43);
    v30 = v74;
    if ( (a3 & 0x80) == 0 )
    {
      v29 = v102;
      goto LABEL_106;
    }
    if ( v74 >= 0 )
    {
      v79 = v107;
    }
    else
    {
      if ( !v103 || v31 || v112 )
        goto LABEL_86;
      v77 = *(struct _MDEV **)(*(_QWORD *)(W32GetUserSessionState(v76, v75) + 56968) + 16LL);
      v78 = v12 ? ***(void ****)(v12 + 8) : 0LL;
      v79 = v107;
      v74 = DrvSetDisplayConfig(
              0,
              0LL,
              0x98Fu,
              0x102u,
              v78,
              0,
              0LL,
              0LL,
              v77,
              &v114,
              0LL,
              0LL,
              v101,
              0LL,
              0LL,
              (__int64)v113,
              v107);
      if ( v74 < 0 )
        goto LABEL_86;
    }
    v30 = v74;
    if ( (v13 & 0x200) != 0 )
    {
      v83 = *(_QWORD *)(W32GetSessionState(v76) + 88);
      v84 = *(_WORD *)(v83 + 1080);
      v86 = *(_QWORD *)(W32GetUserSessionState(v83, v85) + 19872);
      *(_WORD *)(v86 + 6998) = v84;
      v88 = *(_QWORD *)(W32GetUserSessionState(v86, v87) + 19872);
      ++*(_WORD *)(v88 + 7014);
      v91 = *(_QWORD *)(W32GetUserSessionState(v88, v89) + 36368);
      if ( v91 )
      {
        do
        {
          v90 = *(_QWORD *)(W32GetUserSessionState(v90, v75) + 19872);
          *(_WORD *)(v91 + 272) = *(_WORD *)(v90 + 6998);
          v91 = *(_QWORD *)(v91 + 360);
        }
        while ( v91 );
        v79 = v107;
      }
    }
    TrackFullscreenMode(0LL, v75);
    if ( !v101[0] )
    {
      v94 = v114;
      v95 = *(_QWORD *)(W32GetUserSessionState(v92, v80) + 56968);
      *(_QWORD *)(v95 + 16) = v94;
      GreIncrementDisplaySettingsUniqueness(v95);
      PowerDimUndimResend(v97, v96);
      v109 = (v31 != 0 ? 4 : 0) | ((v13 & 0x10 | HIBYTE(a3) & 8) >> 3);
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
        v109 = v109 & 0xFFFFFFF7 | (8 * (v104 & 1));
      v30 = xxxResetDisplayDevice(v12, (int *)&v109, (__int64)v79);
      if ( v30 < 0 )
        v102 = 36;
      goto LABEL_87;
    }
    if ( (v13 & 4) != 0 )
    {
LABEL_87:
      if ( v12 )
      {
        v80 = *(__int64 **)(v12 + 8);
        if ( (*(_DWORD *)(*v80 + 64) & 1) == 0 )
          xxxInternalInvalidate(v80[3], (__int64)v80);
      }
      SetPointer(1LL, (__int64)v80);
      zzzUpdateCursorImage(v82, v81);
      v29 = v102;
LABEL_106:
      if ( !v105 )
        goto LABEL_108;
LABEL_107:
      v98 = ReferenceDwmApiPort();
      DwmAsyncNotifyRotationModeChange(v98, 0LL);
      v29 = v102;
      goto LABEL_108;
    }
    if ( (unsigned int)SafeDisableMDEV(1LL, (__int64)v80) )
      SafeEnableMDEV(1LL, v93);
LABEL_86:
    xxxUserResetDisplayDevice();
    goto LABEL_87;
  }
  v30 = -1073741811;
  v29 = 1;
  v102 = 1;
LABEL_108:
  v11 = v107;
LABEL_109:
  v33 = v106;
LABEL_110:
  if ( v115 )
    *v115 = v29 - 27 <= 1;
  v99 = v101[0];
  if ( v116 )
    *v116 = v101[0];
  if ( v30 >= 0 && v29 == 29 )
    v30 = -1073741266;
  LogDiagSDC(v33, (__int64)v111, a3, v30, v110, v29, v117, v99, v11);
  return (unsigned int)v30;
}
