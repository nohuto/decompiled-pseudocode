/*
 * XREFs of UserPowerInfoCallout @ 0x1401A8D3C
 * Callers:
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1400D00A0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     CitDisplayRequestChange @ 0x1400D7C64 (CitDisplayRequestChange.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1400EA8F0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EAC98 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401116D8 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     QueuePowerRequest @ 0x140111D40 (QueuePowerRequest.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14013637C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     EtwTraceDisplayReqChange @ 0x14017B2A8 (EtwTraceDisplayReqChange.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x140182B60 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     SetPendingInput @ 0x140183980 (SetPendingInput.c)
 *     ?SendConsoleDisplayWnf@@YAXH@Z @ 0x140187D58 (-SendConsoleDisplayWnf@@YAXH@Z.c)
 *     UserLogError @ 0x140188BC0 (UserLogError.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14018CE58 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B6474 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     IoControl @ 0x1401C4530 (IoControl.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall UserPowerInfoCallout(int a1, int a2, int a3, int *a4, int a5, int *a6)
{
  int v6; // ebx
  int v7; // edi
  unsigned int v8; // r14d
  _DWORD *UserSessionState; // r13
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rcx
  bool v16; // r15
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // r12d
  int v28; // r12d
  int v29; // r12d
  int v30; // r12d
  int v31; // r12d
  int v32; // r12d
  int v33; // r12d
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  BOOL v37; // r12d
  _QWORD *v38; // rbx
  __int64 v39; // rax
  int v40; // edx
  int v41; // r8d
  __int64 v42; // rdx
  int v43; // r8d
  _BYTE *v44; // rdx
  _DWORD *v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  char v48; // dl
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  _QWORD *v52; // rbx
  __int64 v53; // rax
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  __int64 v57; // rbx
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  _QWORD *v67; // rbx
  __int64 v68; // rax
  int v69; // edx
  int v70; // ecx
  int v71; // r8d
  int v72; // eax
  int v73; // eax
  int v74; // edx
  int v75; // r8d
  int v76; // ecx
  _QWORD *v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // ebx
  __int64 v84; // rax
  int v85; // edx
  int v86; // r8d
  int v87; // edx
  int v88; // ecx
  int v89; // r8d
  _QWORD *v90; // rbx
  __int64 v91; // rax
  int v92; // edx
  __int64 v93; // rcx
  int v94; // r8d
  int v95; // esi
  int v96; // ebx
  bool v97; // zf
  bool v98; // sf
  __int64 v99; // rdx
  int v100; // r8d
  int v101; // edx
  int v102; // ecx
  int v103; // r8d
  int v104; // edx
  int v105; // ecx
  int v106; // r8d
  int v107; // edx
  int v108; // r8d
  __int64 v109; // rax
  __int64 v110; // rdx
  int v111; // r8d
  int v112; // edx
  int v113; // ecx
  int v114; // r8d
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  int v119; // edx
  int v120; // ecx
  int v121; // r8d
  char v122; // r14
  __int64 v123; // rsi
  _QWORD *v124; // rbx
  __int64 v125; // rax
  _QWORD *v126; // rbx
  __int64 v127; // rax
  int v128; // edx
  int v129; // ecx
  int v130; // r8d
  _QWORD *v131; // rbx
  __int64 v132; // rax
  _QWORD *v133; // rbx
  __int64 v134; // rax
  _QWORD *v135; // rbx
  __int64 v136; // rax
  int v137; // edx
  int v138; // r8d
  _QWORD *v139; // rbx
  __int64 v140; // rax
  enum POWER_MONITOR_REQUEST_REASON v141; // ecx
  _QWORD *v142; // rbx
  __int64 v143; // rax
  __int64 v144; // rcx
  int v145; // edx
  int v146; // r8d
  _QWORD *v147; // rbx
  __int64 v148; // rax
  int v149; // edx
  int v150; // r8d
  _QWORD *v151; // rbx
  __int64 v152; // rax
  _QWORD *v153; // rbx
  __int64 v154; // rax
  _QWORD *v155; // rbx
  __int64 v156; // rax
  _QWORD *v157; // rbx
  __int64 v158; // rax
  _QWORD *v159; // rbx
  __int64 v160; // rax
  _QWORD *v161; // rbx
  __int64 v162; // rax
  int v163; // edx
  int v164; // r8d
  _QWORD *v165; // rbx
  __int64 v166; // rax
  int v167; // edx
  int v168; // r8d
  BOOL v169; // eax
  int v170; // ecx
  int v171; // edx
  int v172; // r8d
  int CurrentWin32kSessionId; // [rsp+48h] [rbp-39h] BYREF
  bool v175[4]; // [rsp+4Ch] [rbp-35h] BYREF
  int v176; // [rsp+50h] [rbp-31h]
  int *v177; // [rsp+58h] [rbp-29h]
  _QWORD *v178; // [rsp+60h] [rbp-21h]
  __int128 v179; // [rsp+68h] [rbp-19h] BYREF
  __int128 v180; // [rsp+78h] [rbp-9h]

  v6 = a3;
  v177 = a6;
  v7 = 0;
  CurrentWin32kSessionId = a3;
  v8 = 0;
  v179 = 0LL;
  v180 = 0LL;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2, a3);
  if ( !*(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 2728) )
    return (unsigned int)-1073741823;
  v16 = 1;
  if ( !a1 && !*(_DWORD *)(W32GetUserGdiSessionState(v15) + 32) )
  {
    v178 = (_QWORD *)W32GetUserSessionState(v15, v17, v18);
    v19 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v178,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v23 = (__int64)v178;
    v178[3] = v19;
    if ( v19 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v19) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v178 + 2465), v20, v21);
      DestroyDeferredUnlockObjectAssignmentList(v178 + 2472);
      DestroyDeferredUnlockObjectAssignmentList(v178 + 2470);
      v6 = CurrentWin32kSessionId;
    }
    UserSessionSwitchLeaveCritWithNonPaged(v23, v20, v21, v22);
  }
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v15) + 32) )
    return (unsigned int)-1073741823;
  if ( !a1 )
  {
    if ( v6 != 20 || !a4 )
      return (unsigned int)-1073741823;
    if ( *(_QWORD *)&GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data4 == *((_QWORD *)a4 + 1) )
    {
      v126 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
      v127 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
               v126,
               1LL,
               0LL,
               _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v126[3] = v127;
      if ( v127 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v127) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v126 + 2465), v128, v130);
        DestroyDeferredUnlockObjectAssignmentList(v126 + 2472);
        DestroyDeferredUnlockObjectAssignmentList(v126 + 2470);
      }
      if ( !*(_WORD *)(W32GetUserSessionState(v129, v128, v130) + 68744) || UserSessionState[685] )
        UpdateAdaptiveSessionState();
      goto LABEL_121;
    }
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v131 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
      v132 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
               v131,
               1LL,
               0LL,
               _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v131[3] = v132;
      if ( v132 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v132) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v131 + 2465), (int)v44, v46);
        DestroyDeferredUnlockObjectAssignmentList(v131 + 2472);
        DestroyDeferredUnlockObjectAssignmentList(v131 + 2470);
      }
      UserSessionState[726] = a4[4];
      goto LABEL_121;
    }
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v133 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
      v134 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
               v133,
               1LL,
               0LL,
               _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v133[3] = v134;
      if ( v134 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v134) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v133 + 2465), (int)v44, v46);
        DestroyDeferredUnlockObjectAssignmentList(v133 + 2472);
        DestroyDeferredUnlockObjectAssignmentList(v133 + 2470);
      }
      UserSessionState[724] = a4[4];
      goto LABEL_121;
    }
    if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 == *((_QWORD *)a4 + 1) )
    {
      v135 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
      v136 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
               v135,
               1LL,
               0LL,
               _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v135[3] = v136;
      if ( v136 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v136) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v135 + 2465), v137, v138);
        DestroyDeferredUnlockObjectAssignmentList(v135 + 2472);
        DestroyDeferredUnlockObjectAssignmentList(v135 + 2470);
      }
      CurrentWin32kSessionId = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5314LL);
      UserSessionState[728] = a4[4];
      goto LABEL_121;
    }
    if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 == *((_QWORD *)a4 + 1)
      || *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v139 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
      v140 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
               v139,
               1LL,
               0LL,
               _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v139[3] = v140;
      if ( v140 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v140) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v139 + 2465), (int)v44, v46);
        DestroyDeferredUnlockObjectAssignmentList(v139 + 2472);
        DestroyDeferredUnlockObjectAssignmentList(v139 + 2470);
      }
      UserSessionState[691] = a4[4] == 0;
      if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4
        && *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 == *((_QWORD *)a4 + 1)
        || *(_BYTE *)W32GetUserGdiSessionState(v45)
        || *(_WORD *)(W32GetUserSessionState((_DWORD)v45, (_DWORD)v44, v46) + 68744) )
      {
        goto LABEL_121;
      }
      v141 = MonitorRequestReasonAcDcDisplayBurst;
    }
    else
    {
      if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 != *(_QWORD *)a4
        || *(_QWORD *)GUID_BATTERY_COUNT.Data4 != *((_QWORD *)a4 + 1) )
      {
        if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 == *((_QWORD *)a4 + 1) )
        {
          v147 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
          v148 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                   v147,
                   1LL,
                   0LL,
                   _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
          v147[3] = v148;
          if ( v148 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v148) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v147 + 2465), v149, v150);
            DestroyDeferredUnlockObjectAssignmentList(v147 + 2472);
            DestroyDeferredUnlockObjectAssignmentList(v147 + 2470);
          }
          DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>(
            (__int64)&v179,
            v149,
            v150);
          LOBYTE(v7) = a4[4] != 0;
          UserSessionState[700] = v7;
        }
        else
        {
          if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_LIDSWITCH_STATE_RELIABILITY.Data4 == *((_QWORD *)a4 + 1) )
          {
            v151 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
            v152 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                     v151,
                     1LL,
                     0LL,
                     _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v151[3] = v152;
            if ( v152 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v152) )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(v151 + 2465), (int)v44, v46);
              DestroyDeferredUnlockObjectAssignmentList(v151 + 2472);
              DestroyDeferredUnlockObjectAssignmentList(v151 + 2470);
            }
            LOBYTE(v7) = a4[4] != 0;
            UserSessionState[702] = v7;
            goto LABEL_121;
          }
          if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 == *((_QWORD *)a4 + 1) )
          {
            v153 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
            v154 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                     v153,
                     1LL,
                     0LL,
                     _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v153[3] = v154;
            if ( v154 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v154) )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(v153 + 2465), (int)v44, v46);
              DestroyDeferredUnlockObjectAssignmentList(v153 + 2472);
              DestroyDeferredUnlockObjectAssignmentList(v153 + 2470);
            }
            if ( !a4[4] )
            {
              UserSessionState[688] = 0;
              goto LABEL_121;
            }
            if ( *(_BYTE *)W32GetUserGdiSessionState(v45) )
            {
              CurrentWin32kSessionId = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5379LL);
            }
            UserSessionState[688] = 1;
            LODWORD(v180) = 5;
            *((_QWORD *)&v180 + 1) = 13LL;
            goto LABEL_50;
          }
          if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 == *((_QWORD *)a4 + 1) )
          {
            v155 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
            v156 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                     v155,
                     1LL,
                     0LL,
                     _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v155[3] = v156;
            if ( v156 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v156) )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(v155 + 2465), (int)v44, v46);
              DestroyDeferredUnlockObjectAssignmentList(v155 + 2472);
              DestroyDeferredUnlockObjectAssignmentList(v155 + 2470);
            }
            UserSessionState[698] = a4[4];
            goto LABEL_121;
          }
          if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
          {
            v157 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
            v158 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                     v157,
                     1LL,
                     0LL,
                     _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v157[3] = v158;
            if ( v158 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v158) )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(v157 + 2465), (int)v44, v46);
              DestroyDeferredUnlockObjectAssignmentList(v157 + 2472);
              DestroyDeferredUnlockObjectAssignmentList(v157 + 2470);
            }
            UserSessionState[729] = a4[4];
            goto LABEL_121;
          }
          if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
          {
            v159 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
            v160 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                     v159,
                     1LL,
                     0LL,
                     _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v159[3] = v160;
            if ( v160 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v160) )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(v159 + 2465), (int)v44, v46);
              DestroyDeferredUnlockObjectAssignmentList(v159 + 2472);
              DestroyDeferredUnlockObjectAssignmentList(v159 + 2470);
            }
            UserSessionState[699] = a4[4];
            goto LABEL_121;
          }
          if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 == *((_QWORD *)a4 + 1) )
          {
            if ( !a4[4] )
              return v8;
            v161 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
            v162 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                     v161,
                     1LL,
                     0LL,
                     _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v161[3] = v162;
            if ( v162 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v162) )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(v161 + 2465), v163, v164);
              DestroyDeferredUnlockObjectAssignmentList(v161 + 2472);
              DestroyDeferredUnlockObjectAssignmentList(v161 + 2470);
            }
            IoControl(2LL);
            goto LABEL_121;
          }
          if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 != *(_QWORD *)a4
            || *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 != *((_QWORD *)a4 + 1) )
          {
            return (unsigned int)-1073741823;
          }
          v165 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
          v166 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                   v165,
                   1LL,
                   0LL,
                   _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
          v165[3] = v166;
          if ( v166 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v166) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v165 + 2465), v167, v168);
            DestroyDeferredUnlockObjectAssignmentList(v165 + 2472);
            DestroyDeferredUnlockObjectAssignmentList(v165 + 2470);
          }
          DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>(
            (__int64)&v179,
            v167,
            v168);
          v169 = a4[4] != 0;
          UserSessionState[701] = v169;
          UserLogError(-v169 - 2147482947);
          LOBYTE(v170) = a4[4] != 0;
          CBaseInput::OnInputSuppressedValueChanged(v170, v171, v172);
        }
        DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>((__int64)&v179);
        goto LABEL_121;
      }
      v142 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
      v143 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
               v142,
               1LL,
               0LL,
               _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v142[3] = v143;
      if ( v143 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v143) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v142 + 2465), v145, v146);
        DestroyDeferredUnlockObjectAssignmentList(v142 + 2472);
        DestroyDeferredUnlockObjectAssignmentList(v142 + 2470);
      }
      if ( *(_BYTE *)W32GetUserGdiSessionState(v144)
        || *(_WORD *)(W32GetUserSessionState((_DWORD)v45, (_DWORD)v44, v46) + 68744)
        || UserSessionState[691] )
      {
        goto LABEL_121;
      }
      v141 = MonitorRequestReasonBatteryCountChange;
    }
    PowerDisplayBurst(v141);
    goto LABEL_121;
  }
  v27 = a1 - 1;
  if ( !v27 )
  {
    if ( *(_BYTE *)W32GetUserGdiSessionState(v25) )
    {
      CurrentWin32kSessionId = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5462LL);
    }
    if ( v6 == 8 && a4 )
    {
      v122 = *(_BYTE *)a4;
      v123 = a4[1];
      v124 = (_QWORD *)W32GetUserSessionState(v120, v119, v121);
      v125 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
               v124,
               1LL,
               0LL,
               _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v124[3] = v125;
      if ( v125 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v125) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v124 + 2465), (int)v44, v46);
        DestroyDeferredUnlockObjectAssignmentList(v124 + 2472);
        DestroyDeferredUnlockObjectAssignmentList(v124 + 2470);
      }
      if ( v122 && *(_DWORD *)(W32GetUserSessionState((_DWORD)v45, (_DWORD)v44, v46) + 19112) )
      {
        v8 = -1073741823;
      }
      else if ( UserSessionState[689] )
      {
        v8 = 259;
        v44 = *(_BYTE **)(W32GetUserSessionState((_DWORD)v45, (_DWORD)v44, v46) + 2720);
        if ( !*v44 )
          SetPendingInput(v123, (int)v44, v46);
      }
      else
      {
        LODWORD(v180) = 16;
        *((_QWORD *)&v180 + 1) = v123;
        v8 = QueuePowerRequest(&v179, 0);
      }
      goto LABEL_121;
    }
    return (unsigned int)-1073741811;
  }
  v28 = v27 - 1;
  if ( !v28 )
  {
    if ( *(_BYTE *)W32GetUserGdiSessionState(v25) )
    {
      CurrentWin32kSessionId = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5557LL);
    }
    if ( v6 != 4 || !a4 || a5 != 4 || !v177 )
      return (unsigned int)-1073741811;
    v176 = *a4;
    v90 = (_QWORD *)W32GetUserSessionState(v88, v87, v89);
    v91 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v90,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v90[3] = v91;
    if ( v91 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v91) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v90 + 2465), v92, v94);
      DestroyDeferredUnlockObjectAssignmentList(v90 + 2472);
      DestroyDeferredUnlockObjectAssignmentList(v90 + 2470);
    }
    v95 = UserSessionState[720];
    v96 = v95 + v176;
    UserSessionState[720] = v95 + v176;
    if ( v95 == 1 )
    {
      v97 = v96 == 0;
      v98 = v96 < 0;
      if ( v96 )
      {
LABEL_104:
        v175[0] = !v98 && !v97;
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v93);
        ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, v175, 1LL, 0LL, &CurrentWin32kSessionId, 0, 0);
        UserSessionSwitchLeaveCritWithNonPaged(v116, v115, v117, v118);
        if ( v95 || v96 != 1 )
        {
          if ( v96 < 0 )
          {
LABEL_110:
            *v177 = v7;
            return v8;
          }
        }
        else if ( UserSessionState[722] == 2 )
        {
          LODWORD(v180) = 4;
          *((_QWORD *)&v180 + 1) = 48LL;
          QueuePowerRequest(&v179, 0);
        }
        v7 = v96;
        goto LABEL_110;
      }
      CitDisplayRequestChange(0, v92, v94);
      EtwTraceDisplayReqChange(0, v99, v100);
      if ( !*(_WORD *)(W32GetUserSessionState(v102, v101, v103) + 68744) )
        SendConsoleDisplayWnf(0);
      if ( !*(_DWORD *)(W32GetUserSessionState(v105, v104, v106) + 19112) )
      {
        v109 = W32GetUserSessionState(v93, v107, v108);
        CInputGlobals::UpdateLastInputTime(
          *(struct W32_PUSH_LOCK **)(v109 + 3056),
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          0xAu);
      }
    }
    else if ( !v95 && v96 == 1 )
    {
      CitDisplayRequestChange(1, v92, v94);
      EtwTraceDisplayReqChange(1, v110, v111);
      if ( !*(_WORD *)(W32GetUserSessionState(v113, v112, v114) + 68744) )
        SendConsoleDisplayWnf(1);
    }
    v97 = v96 == 0;
    v98 = v96 < 0;
    goto LABEL_104;
  }
  v29 = v28 - 1;
  if ( v29 )
  {
    v30 = v29 - 1;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            if ( v33 == 1 )
            {
              if ( !*(_BYTE *)W32GetUserGdiSessionState(v25) )
              {
                CurrentWin32kSessionId = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5522LL);
              }
              if ( v6 == 1 && a4 && !a5 && !v177 )
              {
                v37 = *(_BYTE *)a4 != 0;
                v38 = (_QWORD *)W32GetUserSessionState(v35, v34, v36);
                v39 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                        v38,
                        1LL,
                        0LL,
                        _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
                v38[3] = v39;
                if ( v39 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v39) )
                {
                  DestroySharedUserCritDeferredUnlockList((__int64)(v38 + 2465), v40, v41);
                  DestroyDeferredUnlockObjectAssignmentList(v38 + 2472);
                  DestroyDeferredUnlockObjectAssignmentList(v38 + 2470);
                }
                CitDisplayRequestChange(v37, v40, v41);
                EtwTraceDisplayReqChange(v37, v42, v43);
                goto LABEL_121;
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741823;
          }
          if ( !*(_BYTE *)W32GetUserGdiSessionState(v25) )
          {
            CurrentWin32kSessionId = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5796LL);
          }
          if ( v6 != 4 || !a4 )
            return (unsigned int)-1073741823;
          v48 = 1;
          *((_QWORD *)&v180 + 1) = *a4;
          LODWORD(v180) = 15;
          goto LABEL_33;
        }
        if ( !*(_BYTE *)W32GetUserGdiSessionState(v25) )
        {
          CurrentWin32kSessionId = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5763LL);
        }
        if ( v6 != 8 || !a4 )
          return (unsigned int)-1073741823;
        UserSessionSwitchBlock_Start();
        *((_QWORD *)&v180 + 1) = a4[1];
        LODWORD(v180) = 14;
        if ( *(_BYTE *)a4 )
          LODWORD(v180) = 13;
LABEL_40:
        v48 = 0;
LABEL_33:
        QueuePowerRequest(&v179, v48);
        return v8;
      }
      if ( *(_BYTE *)W32GetUserGdiSessionState(v25) )
      {
        CurrentWin32kSessionId = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5736LL);
      }
      v52 = (_QWORD *)W32GetUserSessionState(v50, v49, v51);
      v53 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              v52,
              1LL,
              0LL,
              _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v52[3] = v53;
      if ( v53 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v53) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v52 + 2465), v54, v56);
        DestroyDeferredUnlockObjectAssignmentList(v52 + 2472);
        DestroyDeferredUnlockObjectAssignmentList(v52 + 2470);
      }
      if ( !*(_BYTE *)(W32GetUserSessionState(v55, v54, v56) + 568) )
        goto LABEL_121;
      v57 = *(int *)(W32GetUserSessionState((_DWORD)v45, (_DWORD)v44, v46) + 572);
      *(_BYTE *)(W32GetUserSessionState(v59, v58, v60) + 568) = 0;
      *(_DWORD *)(W32GetUserSessionState(v62, v61, v63) + 572) = 0;
      if ( *(int *)(W32GetUserSessionState(v65, v64, v66) + 68848) < 2 )
      {
        CurrentWin32kSessionId = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5751LL);
      }
      LODWORD(v180) = 12;
      *((_QWORD *)&v180 + 1) = v57;
    }
    else
    {
      if ( v6 != 32 || !a4 )
        return (unsigned int)-1073741811;
      v67 = (_QWORD *)W32GetUserSessionState(v25, v24, v26);
      v68 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              v67,
              1LL,
              0LL,
              _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v67[3] = v68;
      if ( v68 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v68) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v67 + 2465), v69, v71);
        DestroyDeferredUnlockObjectAssignmentList(v67 + 2472);
        DestroyDeferredUnlockObjectAssignmentList(v67 + 2470);
      }
      UserSessionState[731] = *a4;
      UserSessionState[732] = a4[1];
      UserSessionState[733] = a4[2];
      UserSessionState[734] = a4[3];
      UserSessionState[735] = a4[4];
      UserSessionState[736] = a4[5];
      UserSessionState[737] = a4[6];
      UserSessionState[738] = a4[7];
      v45 = (_DWORD *)W32GetUserSessionState(v70, v69, v71);
      v72 = v45[731];
      v45[724] = v72;
      v45[725] = v72;
      v73 = v45[735];
      v45[726] = v73;
      v45[727] = v73;
      if ( UserSessionState[722] == 1 && UserSessionState[730] != UserSessionState[731] )
      {
        LODWORD(v180) = 11;
        *((_QWORD *)&v180 + 1) = 1LL;
        QueuePowerRequest(&v179, 0);
      }
      if ( UserSessionState[722] != 2 || UserSessionState[730] == UserSessionState[735] )
        goto LABEL_121;
      LODWORD(v180) = 11;
      *((_QWORD *)&v180 + 1) = 2LL;
    }
LABEL_50:
    QueuePowerRequest(&v179, 0);
LABEL_121:
    UserSessionSwitchLeaveCritWithNonPaged((__int64)v45, (__int64)v44, v46, v47);
    return v8;
  }
  if ( *(_BYTE *)W32GetUserGdiSessionState(v25) )
  {
    CurrentWin32kSessionId = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5648LL);
  }
  if ( v6 != 8 || !a4 )
    return (unsigned int)-1073741823;
  if ( *a4 )
  {
    v76 = *a4 - 1;
    if ( *a4 == 1 )
      goto LABEL_74;
    if ( *a4 != 2 )
    {
      CurrentWin32kSessionId = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5696LL);
      return v8;
    }
    v77 = (_QWORD *)W32GetUserSessionState(1, v74, v75);
    v78 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v77,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v77[3] = v78;
    if ( v78 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v78) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v77 + 2465), v79, v81);
      DestroyDeferredUnlockObjectAssignmentList(v77 + 2472);
      DestroyDeferredUnlockObjectAssignmentList(v77 + 2470);
    }
    v83 = UserSessionState[687];
    UserSessionSwitchLeaveCritWithNonPaged(v80, v79, v81, v82);
    v8 = (unsigned __int8)-(v83 != 0);
    v16 = v83 == 0;
    if ( !v83 )
    {
LABEL_74:
      v84 = W32GetUserSessionState(v76, v74, v75);
      CInputGlobals::UpdateLastInputTime(
        *(struct W32_PUSH_LOCK **)(v84 + 3056),
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        5u);
    }
    if ( !v16 )
      return v8;
    LODWORD(v180) = 4;
    goto LABEL_83;
  }
  if ( !*(_BYTE *)(W32GetUserSessionState(0, v74, v75) + 528) )
  {
LABEL_82:
    LODWORD(v180) = 5;
LABEL_83:
    *((_QWORD *)&v180 + 1) = a4[1];
    goto LABEL_40;
  }
  if ( UserSessionState[687] || UserSessionState[692] || UserSessionState[693] )
  {
    SetInputMode(1u, v85, v86);
    goto LABEL_82;
  }
  return v8;
}
