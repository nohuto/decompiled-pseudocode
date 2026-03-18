/*
 * XREFs of xxxInjectTouchInput @ 0x14023D0FC
 * Callers:
 *     NtUserInjectTouchInput @ 0x14024A8D0 (NtUserInjectTouchInput.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x140060AC0 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x140060B3C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     CheckGrantedAccess @ 0x1401768E8 (CheckGrantedAccess.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x14020FA24 (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x14021FAE0 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     GetScreenRect @ 0x14022EE5C (GetScreenRect.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x140231DEC (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x140269FB0 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x14026DD0C (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x14026ED44 (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x1402759AC (-DoInputCheck@@YA-AW4InputCheckResult@@W4InputCheckRequest@@@Z.c)
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline @ 0x1402770A4 (Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x14027A7CC (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x14027AD6C (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x14027ADF8 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_didi @ 0x14027AF64 (WPP_RECORDER_AND_TRACE_SF_didi.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x14027B07C (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInjectTouchInput(__int64 a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  __int64 v2; // rbx
  struct tagPOINTER_TOUCH_INFO *v3; // r12
  int v4; // esi
  struct tagTHREADINFO *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // bp
  __int64 v12; // rdx
  bool v13; // bl
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // bl
  bool v23; // di
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // edi
  char v32; // bl
  bool v33; // r14
  __int64 UserSessionState; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdx
  bool v45; // r14
  int v46; // edx
  int v47; // r8d
  __int64 v48; // r9
  unsigned __int64 v49; // r8
  unsigned int v50; // ecx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  unsigned int v53; // r15d
  char *v54; // rax
  unsigned int v55; // ecx
  __int64 v56; // rdx
  int v57; // r8d
  int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // r13
  __int64 v61; // r9
  unsigned __int64 v62; // rcx
  struct tagINJECTED_CONTACT *v63; // r15
  __int64 v64; // rax
  __int64 v65; // rdx
  bool v66; // r15
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  bool v70; // di
  int v71; // ebx
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  int v75; // ecx
  __int64 v76; // rdx
  bool v77; // di
  int v78; // edx
  int v79; // r8d
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  int v96; // r8d
  __int64 v97; // rax
  _DWORD *v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rax
  bool v101; // zf
  __int64 v102; // r8
  int v103; // r9d
  __int64 v104; // rdx
  bool v105; // bl
  __int64 v106; // rax
  __int64 v107; // rdx
  bool v108; // bl
  __int64 v109; // rax
  int v110; // r8d
  int v111; // edx
  int v112; // eax
  __int64 v113; // r14
  __int64 v114; // rdx
  bool v115; // bl
  __int64 v116; // rax
  int v117; // r8d
  int v118; // edx
  bool v119; // cf
  unsigned int v120; // r15d
  unsigned int QpcBasedTouchStackTime; // eax
  __int64 v122; // rcx
  __int64 v123; // rdx
  unsigned int *v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  unsigned int v127; // ecx
  __int64 v128; // rdx
  __int64 v129; // rcx
  INT *v130; // r13
  char *v131; // r14
  __int64 v132; // r12
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  INT DpiForSystem; // edi
  INT v135; // ebx
  INT v136; // eax
  INT v137; // ecx
  INT v138; // eax
  int v139; // edx
  _DWORD *v140; // rax
  int v141; // r8d
  __int64 v142; // rcx
  __int64 v143; // rdx
  unsigned __int64 v144; // rax
  __int64 v145; // rdx
  __int16 v146; // [rsp+30h] [rbp-D8h]
  __int16 v147; // [rsp+30h] [rbp-D8h]
  __int16 v148; // [rsp+30h] [rbp-D8h]
  __int16 v149; // [rsp+30h] [rbp-D8h]
  int v150; // [rsp+40h] [rbp-C8h]
  int v151; // [rsp+40h] [rbp-C8h]
  char v152; // [rsp+48h] [rbp-C0h]
  unsigned int v153; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v154; // [rsp+68h] [rbp-A0h]
  __int64 v155; // [rsp+70h] [rbp-98h] BYREF
  int v156; // [rsp+78h] [rbp-90h]
  unsigned int v157; // [rsp+7Ch] [rbp-8Ch]
  int v158; // [rsp+80h] [rbp-88h]
  unsigned __int64 v159; // [rsp+88h] [rbp-80h]
  __int128 v160; // [rsp+90h] [rbp-78h]
  __int64 v161; // [rsp+A0h] [rbp-68h]
  __m128i v162; // [rsp+A8h] [rbp-60h] BYREF
  struct tagRECT v163; // [rsp+B8h] [rbp-50h] BYREF

  v2 = (unsigned int)a1;
  v3 = a2;
  v158 = a1;
  *(_QWORD *)&v160 = a2;
  v4 = 0;
  v5 = PtiCurrent(a1, (__int64)a2);
  LODWORD(v155) = 0;
  v6 = *((_QWORD *)v5 + 58);
  CheckCurrentInjectionConfiguration(v8, v7);
  v11 = 1;
  if ( (unsigned int)Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline() )
  {
    v31 = DoInputCheck(127LL);
    if ( v31 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || (v32 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
      {
        v32 = 0;
      }
      v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v32 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(v30, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v32;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v36,
          v35,
          *(_QWORD *)(UserSessionState + 69160),
          2,
          20,
          19,
          (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
          v31);
      }
      if ( (unsigned int)(v31 - 4) > 1 )
      {
        RtlNtStatusToDosError(-1073741790);
        return 0LL;
      }
      return 1LL;
    }
  }
  else
  {
    if ( *((_QWORD *)v5 + 62) != *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19144) )
    {
      SetLastNtError(-1073741790);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12) + 69160);
      v146 = 20;
      goto LABEL_322;
    }
    if ( !(unsigned int)CheckGrantedAccess(*((_DWORD *)v5 + 234), 0x20u) )
    {
      SetLastNtError(-1073741790);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19) + 69160);
      v146 = 21;
      goto LABEL_322;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18944)
      && *(struct tagTHREADINFO **)(W32GetUserSessionState(v21, v20) + 18944) != v5 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
      {
        v22 = 0;
      }
      v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v22 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1LL;
      v26 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20) + 69160);
      v147 = 22;
LABEL_27:
      LOBYTE(v25) = v23;
      LOBYTE(v24) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v24,
        v25,
        v26,
        2,
        20,
        v147,
        (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids);
      return 1LL;
    }
    if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1LL, v20) )
    {
      MSGLUA_GPQFOREGROUND(v28, v27);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
      {
        v22 = 0;
      }
      v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v22 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1LL;
      v26 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29) + 69160);
      v147 = 23;
      goto LABEL_27;
    }
  }
  v38 = *(_QWORD *)(v6 + 880);
  if ( !v38 )
  {
    SetLastNtError(-1073741790);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v11 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v39) + 69160);
    v146 = 24;
    goto LABEL_322;
  }
  InputTraceLogging::RIM::InjectInput(*(_QWORD *)(v38 + 16));
  *(_QWORD *)(W32GetUserSessionState(v41, v40) + 18832) = v6;
  v42 = *(_QWORD *)(v6 + 880);
  v43 = *(unsigned int *)(v42 + 28);
  if ( (unsigned int)v2 > (unsigned int)v43 )
  {
    UserSetLastError(87);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v11 = 0;
    }
    v45 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v152 = v43;
    LOBYTE(v150) = v2;
    v48 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v44) + 69160);
    v148 = 25;
LABEL_63:
    LOBYTE(v47) = v45;
    goto LABEL_260;
  }
  v49 = *((_QWORD *)v3 + 10);
  v153 = *((_DWORD *)v3 + 16);
  v50 = *(_DWORD *)(v42 + 40);
  v51 = *(_QWORD *)(v42 + 64);
  v157 = v50;
  v159 = v51;
  v154 = v49;
  if ( !(unsigned int)SortTouchContacts(v3, (unsigned int)v2) )
  {
    UserSetLastError(87);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v11 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v52) + 69160);
    v146 = 26;
    goto LABEL_322;
  }
  v53 = 0;
  if ( !(_DWORD)v2 )
  {
LABEL_104:
    v59 = *(_QWORD *)(v6 + 880);
    v60 = *(_QWORD *)(v59 + 16);
    v161 = v60;
    if ( !*(_DWORD *)(*(_QWORD *)(v60 + 456) + 1016LL) )
    {
      *(_DWORD *)(v59 + 32) = 0;
      *(_DWORD *)(*(_QWORD *)(v6 + 880) + 36LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v6 + 880) + 40LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v6 + 880) + 48LL) = 0;
      *(_QWORD *)(*(_QWORD *)(v6 + 880) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v6 + 880) + 64LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v6 + 880) + 72LL) = 0;
    }
    v61 = *(_QWORD *)(v6 + 880);
    v62 = v154;
    v63 = *(struct tagINJECTED_CONTACT **)(v61 + 80);
    if ( v153 && v154 || *(_DWORD *)(v61 + 32) && v154 || (v64 = *(_QWORD *)(v61 + 56)) != 0 && v153 )
    {
      xxxSendLastFrameTouchUp(v63, (struct DEVICEINFO *)v60, (unsigned int)v43, *(_DWORD *)(v61 + 36));
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v67 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v65);
        v68 = v154;
        LOBYTE(v69) = v11;
        LOBYTE(v68) = v66;
        WPP_RECORDER_AND_TRACE_SF_didi(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v69,
          v68,
          *(_QWORD *)(v67 + 69160));
      }
      return 0LL;
    }
    if ( v154 || (v96 = 1, v64) )
      v96 = 0;
    v97 = *(_QWORD *)(v60 + 456);
    v156 = v96;
    if ( !*(_DWORD *)(v97 + 1016) && (_DWORD)v43 )
    {
      v98 = (_DWORD *)((char *)v63 + 8);
      v99 = v43;
      do
      {
        if ( ((*v98 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          *v98 = 0x40000;
          LODWORD(v155) = 1;
        }
        v98 += 3;
        --v99;
      }
      while ( v99 );
      v62 = v154;
    }
    v100 = *(_QWORD *)(v6 + 880);
    v101 = v96 == 0;
    v102 = *(_QWORD *)(v60 + 456);
    v103 = 0;
    if ( v101 )
    {
      LOBYTE(v103) = *(_DWORD *)(v102 + 1016) == 0;
      if ( !(unsigned int)_ValidateInjectionQpcCount(v62, v159, *(_QWORD *)(v102 + 808), v103, *(_DWORD *)(v100 + 72)) )
      {
        xxxSendLastFrameTouchUp(
          v63,
          (struct DEVICEINFO *)v60,
          (unsigned int)v43,
          (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v6 + 880) + 56LL)) / gliQpcFreq);
        UserSetLastError(87);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
        {
          v11 = 0;
        }
        v108 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v109 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v107);
          v110 = v154;
          LOBYTE(v111) = v11;
          LOBYTE(v110) = v108;
          WPP_RECORDER_AND_TRACE_SF_ii(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v111,
            v110,
            *(_QWORD *)(v109 + 69160),
            2);
        }
        return 0LL;
      }
    }
    else
    {
      LOBYTE(v103) = *(_DWORD *)(v102 + 1016) == 0;
      if ( !(unsigned int)_ValidateInjectionTime(v153, v157, *(_DWORD *)(v102 + 800), v103, *(_DWORD *)(v100 + 48)) )
      {
        xxxSendLastFrameTouchUp(
          v63,
          (struct DEVICEINFO *)v60,
          (unsigned int)v43,
          *(_DWORD *)(*(_QWORD *)(v6 + 880) + 36LL));
        UserSetLastError(87);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
        {
          v11 = 0;
        }
        v105 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v106 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v104);
        LOBYTE(v47) = v105;
        v48 = *(_QWORD *)(v106 + 69160);
        v152 = v157;
        LOBYTE(v150) = v153;
        v148 = 45;
LABEL_260:
        LOBYTE(v46) = v11;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v46,
          v47,
          v48,
          2,
          20,
          v148,
          (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
          v150,
          v152);
        return 0LL;
      }
    }
    v163 = (struct tagRECT)*GetScreenRect(&v162);
    v112 = ValidateInjectedTouchFrame(v2, v3, v63, &v163, v43);
    v113 = *(_QWORD *)(v6 + 880);
    v162.m128i_i64[0] = v113;
    if ( !v112 )
    {
      xxxSendLastFrameTouchUp(v63, (struct DEVICEINFO *)v60, (unsigned int)v43, *(_DWORD *)(v113 + 36));
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v115 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v116 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v114);
        LOBYTE(v117) = v115;
        LOBYTE(v118) = v11;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v118,
          v117,
          *(_QWORD *)(v116 + 69160),
          2,
          20,
          47,
          (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
          v155);
      }
      v119 = (_DWORD)v155 != 0;
      LODWORD(v155) = -(int)v155;
      v75 = v119 ? 1460 : 87;
      goto LABEL_127;
    }
    if ( v156 )
    {
      v120 = 10 * (v153 - *(_DWORD *)(v113 + 32));
      QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
      v122 = *(_QWORD *)(v60 + 456);
      if ( !*(_DWORD *)(v122 + 1016) )
      {
        v122 = v153;
        *(_DWORD *)(v113 + 32) = v153;
        *(_DWORD *)(v113 + 36) = QpcBasedTouchStackTime;
LABEL_313:
        v120 = 0;
        goto LABEL_285;
      }
      if ( !v120 )
      {
        v122 = *(unsigned int *)(v113 + 44);
        v120 = QpcBasedTouchStackTime - *(_DWORD *)(v113 + 36);
        if ( v120 <= (unsigned int)v122 )
        {
          if ( (unsigned int)v122 - v120 >= 5 )
          {
            UserSetLastError(21);
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
            {
              v11 = 0;
            }
            v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              return 0LL;
            v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v143) + 69160);
            v146 = 48;
            goto LABEL_322;
          }
          v120 = v122 + 1;
        }
      }
    }
    else
    {
      v144 = 10000 * (v154 - *(_QWORD *)(v113 + 56)) / gliQpcFreq;
      v122 = *(_QWORD *)(v60 + 456);
      v120 = v144;
      if ( !*(_DWORD *)(v122 + 1016) )
      {
        *(_QWORD *)(v113 + 56) = v154;
        goto LABEL_313;
      }
      if ( (_DWORD)v144 == *(_DWORD *)(v113 + 44) )
      {
        UserSetLastError(21);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
        {
          v11 = 0;
        }
        v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v145) + 69160);
        v146 = 49;
        goto LABEL_322;
      }
    }
LABEL_285:
    if ( (_DWORD)v43 )
    {
      v122 = 0LL;
      v123 = v43;
      do
      {
        v122 += 12LL;
        *(_DWORD *)(v122 + *(_QWORD *)(v113 + 80) - 4) = 0x40000;
        --v123;
      }
      while ( v123 );
    }
    if ( (_DWORD)v2 )
    {
      v124 = (unsigned int *)((char *)v3 + 4);
      v125 = v2;
      do
      {
        v126 = *v124;
        v127 = v124[2];
        v124 += 36;
        v128 = 3 * v126;
        *(_DWORD *)(*(_QWORD *)(v113 + 80) + 4 * v128 + 8) = v127 & 0xFFFF7FFF;
        v122 = *(_QWORD *)(v113 + 80);
        *(_QWORD *)(v122 + 4 * v128) = *(_QWORD *)(v124 - 29);
        --v125;
      }
      while ( v125 );
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v122) & 0xF) != 2 && (_DWORD)v2 )
    {
      v130 = (INT *)((char *)v3 + 116);
      v131 = (char *)v3 + 32;
      v132 = v2;
      do
      {
        v155 = 0LL;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v129);
        LogicalToPhysicalDPIPoint(v131, v131, CurrentThreadDpiAwarenessContext, &v155);
        DpiForSystem = GetDpiForSystem();
        v135 = *(unsigned __int16 *)(*(_QWORD *)(v155 + 40) + 60LL);
        v136 = EngMulDiv(*(v130 - 1) - *(v130 - 3), v135, DpiForSystem);
        v137 = *v130 - *(v130 - 2);
        *(v130 - 1) = v136;
        v138 = EngMulDiv(v137, v135, DpiForSystem);
        v131 += 144;
        *(_QWORD *)(v130 - 3) = 0LL;
        *v130 = v138;
        v130 += 36;
        --v132;
      }
      while ( v132 );
      v113 = v162.m128i_i64[0];
      v60 = v161;
      v3 = (struct tagPOINTER_TOUCH_INFO *)v160;
      LODWORD(v2) = v158;
    }
    v160 = *(_OWORD *)(*(_QWORD *)(v60 + 456) + 160LL);
    if ( (_DWORD)v2 )
    {
      v139 = DWORD1(v160);
      v140 = (_DWORD *)((char *)v3 + 36);
      v141 = v160;
      v142 = (unsigned int)v2;
      do
      {
        *(v140 - 1) -= v141;
        *v140 -= v139;
        v140 += 36;
        --v142;
      }
      while ( v142 );
    }
    *(_DWORD *)(v113 + 44) = v120;
    if ( v156 )
    {
      if ( v157 && !v153 )
        v4 = 1;
      *(_DWORD *)(v113 + 48) = v4;
      *(_DWORD *)(v113 + 40) = v153;
    }
    else
    {
      if ( v159 && !v154 )
        v4 = 1;
      *(_DWORD *)(v113 + 72) = v4;
      *(_QWORD *)(v113 + 64) = v154;
    }
    xxxSendToTouchStack((struct DEVICEINFO *)v60, v2, v3, v120);
    return 1LL;
  }
  v54 = (char *)v3 + 12;
  while ( 1 )
  {
    if ( *((_DWORD *)v54 - 2) >= (unsigned int)v43 )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v45 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v152 = v43;
      v150 = *((_DWORD *)v3 + 36 * v53 + 1);
      v48 = *(_QWORD *)(W32GetUserSessionState(18LL * v53, v95) + 69160);
      v148 = 27;
      goto LABEL_63;
    }
    if ( *((_DWORD *)v54 - 3) != 2 )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v77 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v151 = *((_DWORD *)v3 + 36 * v53);
      v80 = *(_QWORD *)(W32GetUserSessionState(18LL * v53, v94) + 69160);
      v149 = 28;
LABEL_142:
      LOBYTE(v79) = v77;
      LOBYTE(v78) = v11;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v78,
        v79,
        v80,
        2,
        20,
        v149,
        (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
        v151);
      return 0LL;
    }
    v55 = *(_DWORD *)v54 & 0xFFFF7FFF;
    v56 = v55 - 0x20000;
    if ( (unsigned int)v56 > 6 || (v57 = 69, !_bittest(&v57, v56)) )
    {
      if ( v55 != 65542 && v55 != 262146 && v55 != 0x40000 )
        break;
    }
    v58 = *((_DWORD *)v54 + 22);
    if ( (v58 & 2) != 0 && *((_DWORD *)v54 + 31) >= 0x168u )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v77 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v151 = *((_DWORD *)v3 + 36 * v53 + 34);
      v80 = *(_QWORD *)(W32GetUserSessionState(18LL * v53, v76) + 69160);
      v149 = 30;
      goto LABEL_142;
    }
    if ( (v58 & 4) != 0 && *((_DWORD *)v54 + 32) > 0xFDE8u )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v77 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v151 = *((_DWORD *)v3 + 36 * v53 + 35);
      v80 = *(_QWORD *)(W32GetUserSessionState(18LL * v53, v81) + 69160);
      v149 = 31;
      goto LABEL_142;
    }
    if ( *((_DWORD *)v54 + 21) )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v93) + 69160);
      v146 = 32;
LABEL_322:
      LOBYTE(v15) = v13;
      LOBYTE(v14) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v14,
        v15,
        v16,
        2,
        20,
        v146,
        (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids);
      return 0LL;
    }
    if ( *((_DWORD *)v54 + 28) || *((_DWORD *)v54 + 30) || *((_DWORD *)v54 + 27) || *((_DWORD *)v54 + 29) )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v92) + 69160);
      v146 = 33;
      goto LABEL_322;
    }
    if ( *((_DWORD *)v54 - 1) )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v91) + 69160);
      v146 = 34;
      goto LABEL_322;
    }
    if ( *(_QWORD *)(v54 + 4) )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v90) + 69160);
      v146 = 35;
      goto LABEL_322;
    }
    if ( *(_QWORD *)(v54 + 12) )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v89) + 69160);
      v146 = 36;
      goto LABEL_322;
    }
    if ( *((_DWORD *)v54 + 7) || *((_DWORD *)v54 + 8) )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v88) + 69160);
      v146 = 37;
      goto LABEL_322;
    }
    if ( *((_DWORD *)v54 + 9) || *((_DWORD *)v54 + 10) )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v87) + 69160);
      v146 = 38;
      goto LABEL_322;
    }
    if ( *((_DWORD *)v54 + 11) || *((_DWORD *)v54 + 12) )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v86) + 69160);
      v146 = 39;
      goto LABEL_322;
    }
    if ( *((_DWORD *)v54 + 14) )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v85) + 69160);
      v146 = 40;
      goto LABEL_322;
    }
    if ( *((_DWORD *)v54 + 15) )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v84) + 69160);
      v146 = 41;
      goto LABEL_322;
    }
    if ( *((_DWORD *)v54 + 16) )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v83) + 69160);
      v146 = 42;
      goto LABEL_322;
    }
    if ( *((_DWORD *)v54 + 19) )
    {
      UserSetLastError(87);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v82) + 69160);
      v146 = 43;
      goto LABEL_322;
    }
    ++v53;
    v54 += 144;
    if ( v53 >= (unsigned int)v2 )
      goto LABEL_104;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
  {
    v11 = 0;
  }
  v70 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v71 = *((_DWORD *)v3 + 36 * v53 + 3);
    v72 = W32GetUserSessionState(18LL * v53, v56);
    LOBYTE(v73) = v70;
    LOBYTE(v74) = v11;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v74,
      v73,
      *(_QWORD *)(v72 + 69160),
      2,
      20,
      29,
      (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
      v71);
  }
  v75 = 87;
LABEL_127:
  UserSetLastError(v75);
  return 0LL;
}
