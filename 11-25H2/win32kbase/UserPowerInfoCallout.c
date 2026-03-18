/*
 * XREFs of UserPowerInfoCallout @ 0x1401B1014
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     CitDisplayRequestChange @ 0x14007EB1C (CitDisplayRequestChange.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x14009B1F0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     UserLogError @ 0x1400B06D0 (UserLogError.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400BAB1C (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     SetPendingInput @ 0x1400E9010 (SetPendingInput.c)
 *     QueuePowerRequest @ 0x1400E9340 (QueuePowerRequest.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EE958 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     EtwTraceDisplayReqChange @ 0x140141834 (EtwTraceDisplayReqChange.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x140145FB4 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14014D7E0 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SendConsoleDisplayWnf@@YAXH@Z @ 0x140156DD0 (-SendConsoleDisplayWnf@@YAXH@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B003C (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401B0780 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DA4 (Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B6C6C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     IoControl @ 0x140216750 (IoControl.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, __int64 a2, int a3, int *a4, int a5, int *a6)
{
  int v6; // edi
  unsigned int v7; // r14d
  int v10; // ebx
  _DWORD *UserSessionState; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  BOOL v32; // r12d
  _QWORD *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdx
  _BYTE *v37; // rdx
  char v38; // dl
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // r13
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // r12
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  _DWORD *v59; // rcx
  int v60; // eax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  _QWORD *v65; // r14
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rdx
  int v69; // ebx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  _QWORD *v74; // r12
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rdx
  int v78; // r12d
  int v79; // esi
  bool v80; // zf
  bool v81; // sf
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rcx
  char v94; // r14
  __int64 v95; // r12
  _QWORD *v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rbx
  __int64 v99; // rcx
  _QWORD *v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rcx
  _QWORD *v106; // r12
  __int64 v107; // rax
  __int64 v108; // rbx
  _QWORD *v109; // r12
  __int64 v110; // rax
  __int64 v111; // rbx
  _QWORD *v112; // r12
  __int64 v113; // rax
  __int64 v114; // rbx
  __int64 v115; // rdx
  _QWORD *v116; // r12
  __int64 v117; // rax
  __int64 v118; // rbx
  __int64 v119; // rcx
  __int64 v120; // rcx
  enum POWER_MONITOR_REQUEST_REASON v121; // ecx
  _QWORD *v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rbx
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rcx
  _QWORD *v128; // r12
  __int64 v129; // rax
  __int64 v130; // rbx
  __int64 v131; // rdx
  _QWORD *v132; // r12
  __int64 v133; // rax
  __int64 v134; // rbx
  _QWORD *v135; // r12
  __int64 v136; // rax
  __int64 v137; // rbx
  __int64 v138; // rcx
  _QWORD *v139; // r12
  __int64 v140; // rax
  __int64 v141; // rbx
  _QWORD *v142; // r12
  __int64 v143; // rax
  __int64 v144; // rbx
  _QWORD *v145; // r12
  __int64 v146; // rax
  __int64 v147; // rbx
  _QWORD *v148; // rsi
  __int64 v149; // rax
  __int64 v150; // rbx
  __int64 v151; // rdx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rax
  _QWORD *v155; // r12
  __int64 v156; // rax
  __int64 v157; // rbx
  __int64 v158; // rdx
  BOOL v159; // eax
  __int64 v160; // rcx
  __int64 v161; // rdx
  _QWORD *v163; // [rsp+48h] [rbp-39h] BYREF
  bool v164[4]; // [rsp+50h] [rbp-31h] BYREF
  int v165; // [rsp+54h] [rbp-2Dh]
  __int64 v166; // [rsp+58h] [rbp-29h]
  int *v167; // [rsp+60h] [rbp-21h]
  __int128 v168; // [rsp+68h] [rbp-19h] BYREF
  __int128 v169; // [rsp+78h] [rbp-9h]

  v6 = 0;
  v167 = a6;
  v7 = 0;
  v168 = 0LL;
  v10 = a1;
  v169 = 0LL;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(W32GetUserSessionState(v13, v12) + 2728) )
    return (unsigned int)-1073741823;
  v15 = 1;
  if ( !v10 && !*(_DWORD *)(W32GetUserGdiSessionState(v14) + 32) )
  {
    v163 = (_QWORD *)W32GetUserSessionState(v14, v16);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v17 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              v163,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v17 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v163, 0);
    v166 = v17;
    v163[3] = v17;
    IsEnabledDeviceUsageNoInline = Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline();
    v20 = v166;
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( v166 )
      {
LABEL_11:
        if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v20) )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(v163 + 2461), v19);
          DestroyDeferredUnlockObjectAssignmentList(v163 + 2468);
          DestroyDeferredUnlockObjectAssignmentList(v163 + 2466);
        }
      }
    }
    else if ( v166 )
    {
      *(_BYTE *)(v166 + 1708) = 1;
      goto LABEL_11;
    }
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v19);
  }
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v14) + 32) )
    return (unsigned int)-1073741823;
  if ( !v10 )
  {
    if ( a3 != 20 || !a4 )
      return (unsigned int)-1073741823;
    if ( *(_QWORD *)&GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data4 == *((_QWORD *)a4 + 1) )
    {
      v100 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v101 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v100,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v101 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v100, 0);
      v102 = v101;
      v100[3] = v101;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v102 )
        {
LABEL_180:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v102) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v100 + 2461), v103);
            DestroyDeferredUnlockObjectAssignmentList(v100 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v100 + 2466);
          }
        }
      }
      else if ( v102 )
      {
        *(_BYTE *)(v102 + 1708) = 1;
        goto LABEL_180;
      }
      if ( !*(_WORD *)(W32GetUserSessionState(v104, v103) + 68752) || UserSessionState[687] )
        UpdateAdaptiveSessionState(v105, (__int64)v37);
      goto LABEL_163;
    }
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v106 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v107 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v106,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v107 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v106, 0);
      v108 = v107;
      v106[3] = v107;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v108 )
        {
LABEL_194:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v108) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v106 + 2461), (__int64)v37);
            DestroyDeferredUnlockObjectAssignmentList(v106 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v106 + 2466);
          }
        }
      }
      else if ( v108 )
      {
        *(_BYTE *)(v108 + 1708) = 1;
        goto LABEL_194;
      }
      UserSessionState[726] = a4[4];
      goto LABEL_163;
    }
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v109 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v110 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v109,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v110 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v109, 0);
      v111 = v110;
      v109[3] = v110;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v111 )
        {
LABEL_206:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v111) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v109 + 2461), (__int64)v37);
            DestroyDeferredUnlockObjectAssignmentList(v109 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v109 + 2466);
          }
        }
      }
      else if ( v111 )
      {
        *(_BYTE *)(v111 + 1708) = 1;
        goto LABEL_206;
      }
      UserSessionState[724] = a4[4];
      goto LABEL_163;
    }
    if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 == *((_QWORD *)a4 + 1) )
    {
      v112 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v113 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v112,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v113 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v112, 0);
      v114 = v113;
      v112[3] = v113;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v114 )
        {
LABEL_218:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v114) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v112 + 2461), v115);
            DestroyDeferredUnlockObjectAssignmentList(v112 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v112 + 2466);
          }
        }
      }
      else if ( v114 )
      {
        *(_BYTE *)(v114 + 1708) = 1;
        goto LABEL_218;
      }
      LODWORD(v163) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5299);
      UserSessionState[728] = a4[4];
      goto LABEL_163;
    }
    if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 == *((_QWORD *)a4 + 1)
      || *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v116 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v117 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v116,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v117 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v116, 0);
      v118 = v117;
      v116[3] = v117;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v118 )
        {
LABEL_232:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v118) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v116 + 2461), (__int64)v37);
            DestroyDeferredUnlockObjectAssignmentList(v116 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v116 + 2466);
          }
        }
      }
      else if ( v118 )
      {
        *(_BYTE *)(v118 + 1708) = 1;
        goto LABEL_232;
      }
      UserSessionState[692] = a4[4] == 0;
      if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4
        && *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 == *((_QWORD *)a4 + 1)
        || *(_BYTE *)W32GetUserGdiSessionState(v119)
        || *(_WORD *)(W32GetUserSessionState(v120, v37) + 68752) )
      {
        goto LABEL_163;
      }
      v121 = MonitorRequestReasonAcDcDisplayBurst;
LABEL_239:
      PowerDisplayBurst(v121);
      goto LABEL_163;
    }
    if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_BATTERY_COUNT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v122 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v123 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v122,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v123 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v122, 0);
      v124 = v123;
      v122[3] = v123;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v124 )
        {
LABEL_249:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v124) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v122 + 2461), v126);
            DestroyDeferredUnlockObjectAssignmentList(v122 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v122 + 2466);
          }
        }
      }
      else if ( v124 )
      {
        *(_BYTE *)(v124 + 1708) = 1;
        goto LABEL_249;
      }
      if ( *(_BYTE *)W32GetUserGdiSessionState(v125)
        || *(_WORD *)(W32GetUserSessionState(v127, v37) + 68752)
        || UserSessionState[692] )
      {
        goto LABEL_163;
      }
      v121 = MonitorRequestReasonBatteryCountChange;
      goto LABEL_239;
    }
    if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 == *((_QWORD *)a4 + 1) )
    {
      v128 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v129 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v128,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v129 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v128, 0);
      v130 = v129;
      v128[3] = v129;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v130 )
        {
LABEL_264:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v130) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v128 + 2461), v131);
            DestroyDeferredUnlockObjectAssignmentList(v128 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v128 + 2466);
          }
        }
      }
      else if ( v130 )
      {
        *(_BYTE *)(v130 + 1708) = 1;
        goto LABEL_264;
      }
      DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>((__int64)&v168, v131);
      LOBYTE(v6) = a4[4] != 0;
      UserSessionState[701] = v6;
LABEL_358:
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>((__int64)&v168);
      goto LABEL_163;
    }
    if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_LIDSWITCH_STATE_RELIABILITY.Data4 == *((_QWORD *)a4 + 1) )
    {
      v132 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v133 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v132,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v133 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v132, 0);
      v134 = v133;
      v132[3] = v133;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v134 )
        {
LABEL_276:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v134) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v132 + 2461), (__int64)v37);
            DestroyDeferredUnlockObjectAssignmentList(v132 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v132 + 2466);
          }
        }
      }
      else if ( v134 )
      {
        *(_BYTE *)(v134 + 1708) = 1;
        goto LABEL_276;
      }
      LOBYTE(v6) = a4[4] != 0;
      UserSessionState[703] = v6;
      goto LABEL_163;
    }
    if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 == *((_QWORD *)a4 + 1) )
    {
      v135 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v136 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v135,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v136 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v135, 0);
      v137 = v136;
      v135[3] = v136;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v137 )
        {
LABEL_288:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v137) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v135 + 2461), (__int64)v37);
            DestroyDeferredUnlockObjectAssignmentList(v135 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v135 + 2466);
          }
        }
      }
      else if ( v137 )
      {
        *(_BYTE *)(v137 + 1708) = 1;
        goto LABEL_288;
      }
      if ( !a4[4] )
      {
        UserSessionState[689] = 0;
        goto LABEL_163;
      }
      if ( *(_BYTE *)W32GetUserGdiSessionState(v138) )
      {
        LODWORD(v163) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5364);
      }
      UserSessionState[689] = 1;
      LODWORD(v169) = 5;
      *((_QWORD *)&v169 + 1) = 13LL;
      goto LABEL_68;
    }
    if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v139 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v140 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v139,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v140 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v139, 0);
      v141 = v140;
      v139[3] = v140;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v141 )
        {
LABEL_304:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v141) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v139 + 2461), (__int64)v37);
            DestroyDeferredUnlockObjectAssignmentList(v139 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v139 + 2466);
          }
        }
      }
      else if ( v141 )
      {
        *(_BYTE *)(v141 + 1708) = 1;
        goto LABEL_304;
      }
      UserSessionState[699] = a4[4];
      goto LABEL_163;
    }
    if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v142 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v143 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v142,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v143 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v142, 0);
      v144 = v143;
      v142[3] = v143;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v144 )
        {
LABEL_316:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v144) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v142 + 2461), (__int64)v37);
            DestroyDeferredUnlockObjectAssignmentList(v142 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v142 + 2466);
          }
        }
      }
      else if ( v144 )
      {
        *(_BYTE *)(v144 + 1708) = 1;
        goto LABEL_316;
      }
      UserSessionState[729] = a4[4];
      goto LABEL_163;
    }
    if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v145 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v146 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v145,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v146 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v145, 0);
      v147 = v146;
      v145[3] = v146;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v147 )
        {
LABEL_328:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v147) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v145 + 2461), (__int64)v37);
            DestroyDeferredUnlockObjectAssignmentList(v145 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v145 + 2466);
          }
        }
      }
      else if ( v147 )
      {
        *(_BYTE *)(v147 + 1708) = 1;
        goto LABEL_328;
      }
      UserSessionState[700] = a4[4];
      goto LABEL_163;
    }
    if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 == *((_QWORD *)a4 + 1) )
    {
      if ( !a4[4] )
        return v7;
      v148 = (_QWORD *)W32GetUserSessionState(v22, v21);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v149 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 v148,
                 1,
                 0,
                 (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v149 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v148, 0);
      v150 = v149;
      v148[3] = v149;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v150 )
        {
LABEL_341:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v150) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v148 + 2461), v151);
            DestroyDeferredUnlockObjectAssignmentList(v148 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v148 + 2466);
          }
        }
      }
      else if ( v150 )
      {
        *(_BYTE *)(v150 + 1708) = 1;
        goto LABEL_341;
      }
      if ( (unsigned int)Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline() )
      {
        IoControl(2LL);
      }
      else
      {
        v154 = W32GetUserSessionState(v153, v152);
        *(_DWORD *)(v154 + 12872) |= 2u;
      }
      goto LABEL_163;
    }
    if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 != *(_QWORD *)a4
      || *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 != *((_QWORD *)a4 + 1) )
    {
      return (unsigned int)-1073741823;
    }
    v155 = (_QWORD *)W32GetUserSessionState(v22, v21);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v156 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
               v155,
               1,
               0,
               (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v156 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v155, 0);
    v157 = v156;
    v155[3] = v156;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v157 )
      {
LABEL_355:
        if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v157) )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(v155 + 2461), v158);
          DestroyDeferredUnlockObjectAssignmentList(v155 + 2468);
          DestroyDeferredUnlockObjectAssignmentList(v155 + 2466);
        }
      }
    }
    else if ( v157 )
    {
      *(_BYTE *)(v157 + 1708) = 1;
      goto LABEL_355;
    }
    DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>((__int64)&v168, v158);
    v159 = a4[4] != 0;
    UserSessionState[702] = v159;
    UserLogError(-v159 - 2147482947);
    LOBYTE(v160) = a4[4] != 0;
    CBaseInput::OnInputSuppressedValueChanged(v160, v161);
    goto LABEL_358;
  }
  v23 = v10 - 1;
  if ( !v23 )
  {
    if ( *(_BYTE *)W32GetUserGdiSessionState(v22) )
    {
      LODWORD(v163) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5454);
    }
    if ( a3 != 8 || !a4 )
      return (unsigned int)-1073741811;
    v94 = *(_BYTE *)a4;
    v95 = a4[1];
    v96 = (_QWORD *)W32GetUserSessionState(v93, v92);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v97 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              v96,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v97 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v96, 0);
    v98 = v97;
    v96[3] = v97;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v98 )
      {
LABEL_158:
        if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v98) )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(v96 + 2461), (__int64)v37);
          DestroyDeferredUnlockObjectAssignmentList(v96 + 2468);
          DestroyDeferredUnlockObjectAssignmentList(v96 + 2466);
        }
      }
    }
    else if ( v98 )
    {
      *(_BYTE *)(v98 + 1708) = 1;
      goto LABEL_158;
    }
    if ( v94 && *(_DWORD *)(W32GetUserSessionState(v99, v37) + 19072) )
    {
      v7 = -1073741823;
    }
    else if ( UserSessionState[690] )
    {
      v7 = 259;
      v37 = *(_BYTE **)(W32GetUserSessionState(v99, v37) + 2720);
      if ( !*v37 )
        SetPendingInput(v95);
    }
    else
    {
      LODWORD(v169) = 16;
      *((_QWORD *)&v169 + 1) = v95;
      v7 = QueuePowerRequest(&v168, 0);
    }
    goto LABEL_163;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    if ( *(_BYTE *)W32GetUserGdiSessionState(v22) )
    {
      LODWORD(v163) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5549);
    }
    if ( a3 != 4 || !a4 || a5 != 4 || !v167 )
      return (unsigned int)-1073741811;
    v165 = *a4;
    v74 = (_QWORD *)W32GetUserSessionState(v73, v72);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v75 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              v74,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v75 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v74, 0);
    v76 = v75;
    v74[3] = v75;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v76 )
        goto LABEL_129;
    }
    else
    {
      if ( !v76 )
        goto LABEL_129;
      *(_BYTE *)(v76 + 1708) = 1;
    }
    if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v76) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v74 + 2461), v77);
      DestroyDeferredUnlockObjectAssignmentList(v74 + 2468);
      DestroyDeferredUnlockObjectAssignmentList(v74 + 2466);
    }
LABEL_129:
    v78 = UserSessionState[720];
    v79 = v78 + v165;
    UserSessionState[720] = v78 + v165;
    if ( v78 == 1 )
    {
      v80 = v79 == 0;
      v81 = v79 < 0;
      if ( v79 )
      {
LABEL_140:
        v164[0] = !v81 && !v80;
        LODWORD(v163) = W32GetCurrentWin32kSessionId();
        ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, v164, 1LL, 0LL, &v163);
        UserSessionSwitchLeaveCritWithNonPaged(0LL, v91);
        if ( v78 || v79 != 1 )
        {
          if ( v79 < 0 )
          {
LABEL_146:
            *v167 = v6;
            return v7;
          }
        }
        else if ( UserSessionState[722] == 2 )
        {
          LODWORD(v169) = 4;
          *((_QWORD *)&v169 + 1) = 48LL;
          QueuePowerRequest(&v168, 0);
        }
        v6 = v79;
        goto LABEL_146;
      }
      CitDisplayRequestChange(0LL, v77);
      EtwTraceDisplayReqChange(0LL);
      if ( !*(_WORD *)(W32GetUserSessionState(v83, v82) + 68752) )
        SendConsoleDisplayWnf(0);
      if ( !*(_DWORD *)(W32GetUserSessionState(v85, v84) + 19072) )
      {
        v88 = W32GetUserSessionState(v87, v86);
        CInputGlobals::UpdateLastInputTime(
          *(struct W32_PUSH_LOCK **)(v88 + 3056),
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          0xAu);
      }
    }
    else if ( !v78 && v79 == 1 )
    {
      CitDisplayRequestChange(1LL, v77);
      EtwTraceDisplayReqChange(1LL);
      if ( !*(_WORD *)(W32GetUserSessionState(v90, v89) + 68752) )
        SendConsoleDisplayWnf(1);
    }
    v80 = v79 == 0;
    v81 = v79 < 0;
    goto LABEL_140;
  }
  v25 = v24 - 1;
  if ( v25 )
  {
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 == 1 )
            {
              if ( !*(_BYTE *)W32GetUserGdiSessionState(v22) )
              {
                LODWORD(v163) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5514);
              }
              if ( a3 == 1 && a4 && !a5 && !v167 )
              {
                v32 = *(_BYTE *)a4 != 0;
                v33 = (_QWORD *)W32GetUserSessionState(v31, v30);
                if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
                  v34 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                          v33,
                          1,
                          0,
                          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
                else
                  v34 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v33, 0);
                v35 = v34;
                v33[3] = v34;
                if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
                {
                  if ( v35 )
                  {
LABEL_37:
                    if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v35) )
                    {
                      DestroySharedUserCritDeferredUnlockList((__int64)(v33 + 2461), v36);
                      DestroyDeferredUnlockObjectAssignmentList(v33 + 2468);
                      DestroyDeferredUnlockObjectAssignmentList(v33 + 2466);
                    }
                  }
                }
                else if ( v35 )
                {
                  *(_BYTE *)(v35 + 1708) = 1;
                  goto LABEL_37;
                }
                CitDisplayRequestChange(v32, v36);
                EtwTraceDisplayReqChange(v32);
LABEL_163:
                UserSessionSwitchLeaveCritWithNonPaged(0LL, (__int64)v37);
                return v7;
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741823;
          }
          if ( !*(_BYTE *)W32GetUserGdiSessionState(v22) )
          {
            LODWORD(v163) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5788);
          }
          if ( a3 != 4 || !a4 )
            return (unsigned int)-1073741823;
          v38 = 1;
          *((_QWORD *)&v169 + 1) = *a4;
          LODWORD(v169) = 15;
          goto LABEL_45;
        }
        if ( !*(_BYTE *)W32GetUserGdiSessionState(v22) )
        {
          LODWORD(v163) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5755);
        }
        if ( a3 != 8 || !a4 )
          return (unsigned int)-1073741823;
        UserSessionSwitchBlock_Start();
        *((_QWORD *)&v169 + 1) = a4[1];
        LODWORD(v169) = 14;
        if ( *(_BYTE *)a4 )
          LODWORD(v169) = 13;
LABEL_52:
        v38 = 0;
LABEL_45:
        QueuePowerRequest(&v168, v38);
        return v7;
      }
      if ( *(_BYTE *)W32GetUserGdiSessionState(v22) )
      {
        LODWORD(v163) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5728);
      }
      v41 = (_QWORD *)W32GetUserSessionState(v40, v39);
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        v42 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                v41,
                1,
                0,
                (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      else
        v42 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v41, 0);
      v43 = v42;
      v41[3] = v42;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v43 )
        {
LABEL_62:
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v43) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v41 + 2461), v44);
            DestroyDeferredUnlockObjectAssignmentList(v41 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v41 + 2466);
          }
        }
      }
      else if ( v43 )
      {
        *(_BYTE *)(v43 + 1708) = 1;
        goto LABEL_62;
      }
      if ( !*(_BYTE *)(W32GetUserSessionState(v45, v44) + 568) )
        goto LABEL_163;
      v47 = *(int *)(W32GetUserSessionState(v46, v37) + 572);
      *(_BYTE *)(W32GetUserSessionState(v49, v48) + 568) = 0;
      *(_DWORD *)(W32GetUserSessionState(v51, v50) + 572) = 0;
      if ( *(int *)(W32GetUserSessionState(v53, v52) + 68856) < 2 )
      {
        LODWORD(v163) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5743);
      }
      LODWORD(v169) = 12;
      *((_QWORD *)&v169 + 1) = v47;
LABEL_68:
      QueuePowerRequest(&v168, 0);
      goto LABEL_163;
    }
    if ( a3 != 32 || !a4 )
      return (unsigned int)-1073741811;
    v54 = (_QWORD *)W32GetUserSessionState(v22, v21);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v55 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              v54,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v55 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v54, 0);
    v56 = v55;
    v54[3] = v55;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v56 )
      {
LABEL_78:
        if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v56) )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(v54 + 2461), v57);
          DestroyDeferredUnlockObjectAssignmentList(v54 + 2468);
          DestroyDeferredUnlockObjectAssignmentList(v54 + 2466);
        }
      }
    }
    else if ( v56 )
    {
      *(_BYTE *)(v56 + 1708) = 1;
      goto LABEL_78;
    }
    UserSessionState[731] = *a4;
    UserSessionState[732] = a4[1];
    UserSessionState[733] = a4[2];
    UserSessionState[734] = a4[3];
    UserSessionState[735] = a4[4];
    UserSessionState[736] = a4[5];
    UserSessionState[737] = a4[6];
    UserSessionState[738] = a4[7];
    v59 = (_DWORD *)W32GetUserSessionState(v58, v57);
    v60 = v59[731];
    v59[724] = v60;
    v59[725] = v60;
    v61 = v59[735];
    v59[726] = v61;
    v59[727] = v61;
    if ( UserSessionState[722] == 1 && UserSessionState[730] != UserSessionState[731] )
    {
      LODWORD(v169) = 11;
      *((_QWORD *)&v169 + 1) = 1LL;
      QueuePowerRequest(&v168, 0);
    }
    if ( UserSessionState[722] != 2 || UserSessionState[730] == UserSessionState[735] )
      goto LABEL_163;
    LODWORD(v169) = 11;
    *((_QWORD *)&v169 + 1) = 2LL;
    goto LABEL_68;
  }
  if ( *(_BYTE *)W32GetUserGdiSessionState(v22) )
  {
    LODWORD(v163) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5640);
  }
  if ( a3 != 8 || !a4 )
    return (unsigned int)-1073741823;
  v63 = (unsigned int)*a4;
  if ( (_DWORD)v63 )
  {
    v64 = (unsigned int)(v63 - 1);
    if ( !(_DWORD)v64 )
      goto LABEL_104;
    if ( (_DWORD)v64 != 1 )
    {
      LODWORD(v163) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5688);
      return v7;
    }
    v65 = (_QWORD *)W32GetUserSessionState(v64, v62);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v66 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              v65,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v66 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v65, 0);
    v67 = v66;
    v65[3] = v66;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v67 )
        goto LABEL_103;
    }
    else
    {
      if ( !v67 )
        goto LABEL_103;
      *(_BYTE *)(v67 + 1708) = 1;
    }
    if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v67) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v65 + 2461), v68);
      DestroyDeferredUnlockObjectAssignmentList(v65 + 2468);
      DestroyDeferredUnlockObjectAssignmentList(v65 + 2466);
    }
LABEL_103:
    v69 = UserSessionState[688];
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v68);
    v7 = (unsigned __int8)-(v69 != 0);
    v15 = v69 == 0;
    if ( v69 )
    {
LABEL_105:
      if ( !v15 )
        return v7;
      LODWORD(v169) = 4;
      goto LABEL_113;
    }
LABEL_104:
    v70 = W32GetUserSessionState(v64, v62);
    CInputGlobals::UpdateLastInputTime(
      *(struct W32_PUSH_LOCK **)(v70 + 3056),
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      5u);
    goto LABEL_105;
  }
  if ( !*(_BYTE *)(W32GetUserSessionState(v63, v62) + 528) )
  {
LABEL_112:
    LODWORD(v169) = 5;
LABEL_113:
    *((_QWORD *)&v169 + 1) = a4[1];
    goto LABEL_52;
  }
  if ( UserSessionState[688] || UserSessionState[693] || UserSessionState[694] )
  {
    SetInputMode(1LL, v71);
    goto LABEL_112;
  }
  return v7;
}
