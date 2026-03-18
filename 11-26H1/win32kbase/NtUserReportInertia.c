/*
 * XREFs of NtUserReportInertia @ 0x14015FBC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x140087B68 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400CE144 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400CE2AC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400CE8A8 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x140126480 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x14015F2D0 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 *     WPP_RECORDER_AND_TRACE_SF_iDqqqq @ 0x1401637B8 (WPP_RECORDER_AND_TRACE_SF_iDqqqq.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1401730D8 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     UserGetLastError @ 0x14019A2A8 (UserGetLastError.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401CD3E0 (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NtUserReportInertia(unsigned __int64 a1, int a2, __int64 a3, void *a4, void *a5, void *a6)
{
  _QWORD *UserSessionState; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  CTouchProcessor **v14; // r8
  int v15; // edx
  char v16; // r14
  char v17; // bl
  bool v18; // r15
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  int v22; // r15d
  bool v23; // bl
  __int64 v24; // rax
  int v25; // edx
  int v26; // r8d
  bool v27; // bl
  __int64 v28; // rax
  int v29; // edx
  int v30; // r8d
  int v31; // edx
  char v32; // bl
  int v33; // edi
  bool v34; // bl
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // r15
  int v41; // edx
  int v42; // r8d
  int v43; // r9d
  void *v44; // rax
  bool v45; // bl
  __int64 v46; // rax
  int v47; // edx
  int v48; // r8d
  int v49; // ecx
  __int64 v50; // rdx
  _UNKNOWN **v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  void *v54; // rdi
  __int64 *v55; // rax
  int v56; // r8d
  int v57; // edx
  int v58; // r8d
  int v59; // r11d
  bool IsCompositionInput; // al
  int v61; // edx
  int v62; // r8d
  bool v63; // al
  int v64; // edx
  int v65; // r8d
  struct tagTHREADINFO *v66; // r13
  int v67; // edx
  int v68; // r8d
  bool v69; // r15
  unsigned __int64 v70; // rdi
  int v71; // ebx
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  bool v75; // bl
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx
  int v79; // ebx
  CInertiaManager *v80; // rcx
  int v81; // edx
  int v82; // r8d
  bool v83; // bl
  bool v84; // r15
  __int64 v85; // rax
  int v86; // r8d
  int v87; // edx
  int v88; // ecx
  struct CInputDest *v89; // r9
  bool v90; // al
  int v91; // edx
  int v92; // r8d
  char v93; // bl
  bool v94; // r15
  __int64 v95; // rax
  int v96; // r8d
  int v97; // edx
  bool v98; // r12
  char LastError; // bl
  int v100; // edx
  int v101; // ecx
  int v102; // r8d
  __int64 v103; // rax
  int v104; // r8d
  int v105; // edx
  unsigned __int8 v106; // al
  bool v107; // bl
  __int64 v108; // rax
  int v109; // r8d
  int v110; // edx
  __int16 v112; // [rsp+30h] [rbp-218h]
  __int16 v113; // [rsp+30h] [rbp-218h]
  __int16 v114; // [rsp+30h] [rbp-218h]
  char v115; // [rsp+40h] [rbp-208h]
  struct tagTHREADINFO *v116; // [rsp+70h] [rbp-1D8h] BYREF
  int v117; // [rsp+78h] [rbp-1D0h]
  int v118; // [rsp+80h] [rbp-1C8h]
  int v119; // [rsp+84h] [rbp-1C4h]
  void *Src; // [rsp+88h] [rbp-1C0h] BYREF
  int v121; // [rsp+90h] [rbp-1B8h]
  void *v122; // [rsp+98h] [rbp-1B0h]
  unsigned __int64 v123; // [rsp+A0h] [rbp-1A8h]
  __int128 v124; // [rsp+B8h] [rbp-190h] BYREF
  __int128 v125; // [rsp+C8h] [rbp-180h]
  __int64 v126; // [rsp+D8h] [rbp-170h]
  __int128 v127; // [rsp+E0h] [rbp-168h] BYREF
  __int128 v128; // [rsp+F0h] [rbp-158h]
  __int128 v129; // [rsp+100h] [rbp-148h]
  _QWORD v130[14]; // [rsp+110h] [rbp-138h] BYREF
  char v131; // [rsp+180h] [rbp-C8h]
  _D3DMATRIX v132; // [rsp+190h] [rbp-B8h] BYREF

  v122 = a4;
  v123 = a1;
  Src = a5;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v9;
  if ( v9 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v10, v12);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  v116 = PtiCurrent(v11, v10);
  v14 = &WPP_GLOBAL_Control;
  v15 = (int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (v13 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v13 & 2) == 0)
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v17 = 0;
    v16 = 1;
  }
  else
  {
    v16 = 1;
    v17 = 1;
  }
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState(v13, (_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_GLOBAL_Control);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_iDqqqq(*((_QWORD *)WPP_GLOBAL_Control + 3), v21, v20, *(_QWORD *)(v19 + 69136));
    v14 = &WPP_GLOBAL_Control;
  }
  v22 = 0;
  if ( !v123 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v16 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_179;
    v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, (unsigned int)&WPP_GLOBAL_Control);
    v112 = 105;
    goto LABEL_19;
  }
  if ( (a2 & 0xFFFFFFF0) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v16 = 0;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_179;
    v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, (unsigned int)&WPP_GLOBAL_Control);
    v115 = a2;
    v113 = 106;
    goto LABEL_178;
  }
  v31 = a2 & 8;
  v118 = v31;
  LOBYTE(v13) = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_171;
    goto LABEL_32;
  }
  if ( (a2 & 2) != 0 )
  {
LABEL_32:
    if ( !(_BYTE)v13 )
    {
      v32 = 0;
      goto LABEL_34;
    }
LABEL_171:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v16 = 0;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_179;
    v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, (unsigned int)&WPP_GLOBAL_Control);
    v115 = a2;
    v113 = 107;
LABEL_178:
    LOBYTE(v30) = v27;
    LOBYTE(v29) = v16;
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v30,
      *(_QWORD *)(v28 + 69136),
      2,
      2,
      v113,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
      v115);
    goto LABEL_179;
  }
  v32 = 1;
LABEL_34:
  v33 = a2 & 4;
  if ( v33 )
  {
    if ( a3 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v16 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_179;
      v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, (unsigned int)&WPP_GLOBAL_Control);
      v112 = 108;
LABEL_19:
      LOBYTE(v26) = v23;
      LOBYTE(v25) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v26,
        *(_QWORD *)(v24 + 69136),
        2,
        2,
        v112,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
LABEL_179:
      v38 = 87;
      goto LABEL_180;
    }
    if ( !(unsigned int)IsCurrentProcessDwm(v13) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v16 = 0;
      }
      v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v35 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v31, (_DWORD)v14);
        LOBYTE(v36) = v34;
        LOBYTE(v37) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v37,
          v36,
          *(_QWORD *)(v35 + 69136),
          2,
          2,
          109,
          (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
      }
LABEL_51:
      v38 = 5;
LABEL_180:
      UserSetLastError(v38);
      goto LABEL_181;
    }
  }
  v39 = W32GetUserSessionState(v13, v31, (_DWORD)v14);
  v40 = v39;
  if ( !v32 )
  {
    v106 = CInertiaManager::InvalidateInertiaInfo((CInertiaManager *)(v39 + 16912), *((_QWORD *)v116 + 57), v123);
    v22 = v106;
    if ( !v106 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v16 = 0;
      }
      v107 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v108 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v50, v52);
        LOBYTE(v109) = v107;
        LOBYTE(v110) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v110,
          v109,
          *(_QWORD *)(v108 + 69136),
          2,
          2,
          121,
          (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
      }
      v22 = 0;
      goto LABEL_51;
    }
    goto LABEL_154;
  }
  memset(v130, 0, sizeof(v130));
  v43 = 0;
  v131 = 0;
  v44 = Src;
  if ( !Src )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v16 = 0;
    }
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_62;
    v46 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v41, v42);
    v114 = 110;
LABEL_61:
    LOBYTE(v48) = v45;
    LOBYTE(v47) = v16;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v47,
      v48,
      *(_QWORD *)(v46 + 69136),
      2,
      2,
      v114,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    v43 = 0;
LABEL_62:
    v49 = 87;
LABEL_63:
    v22 = v43;
LABEL_64:
    UserSetLastError(v49);
    CInputDest::~CInputDest((CInputDest *)v130);
    goto LABEL_181;
  }
  if ( v33 )
  {
    v119 = 1;
    if ( !a6 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v16 = 0;
      }
      v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v46 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v41, v42);
      v114 = 116;
      goto LABEL_61;
    }
    v66 = v116;
    v54 = v122;
  }
  else
  {
    v119 = 0;
    v54 = v122;
    v55 = CInputDest::CInputDest((__int64 *)&v132, a3, 2 - (unsigned int)(v122 != 0LL), 2);
    CInputDest::operator=(v130, v55, v56);
    CInputDest::~CInputDest((CInputDest *)&v132);
    v59 = 0;
    if ( !LODWORD(v130[0])
      || CInputDest::TestWindowFlag((CInputDest *)v130, 1152)
      || CInputDest::TestWindowFlag((CInputDest *)v130, 896) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v16 = v59;
      }
      v75 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v76 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v57, v58);
        LOBYTE(v77) = v75;
        LOBYTE(v78) = v16;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v78,
          v77,
          *(_QWORD *)(v76 + 69136),
          2,
          2,
          111,
          (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
          a3);
        v59 = 0;
      }
      v22 = v59;
      v49 = 1400;
      goto LABEL_64;
    }
    if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v118 && HIDWORD(v130[11]) == 2 )
      {
        IsCompositionInput = CInputDest::IsCompositionInput((CInputDest *)v130);
        v43 = 0;
        if ( IsCompositionInput && !a6 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            v16 = 0;
          }
          v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_62;
          v46 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v61, v62);
          v114 = 112;
          goto LABEL_61;
        }
      }
    }
    else if ( HIDWORD(v130[11]) == 2 )
    {
      v63 = CInputDest::IsCompositionInput((CInputDest *)v130);
      v43 = 0;
      if ( v63 && !a6 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v16 = 0;
        }
        v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_62;
        v46 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v64, v65);
        v114 = 113;
        goto LABEL_61;
      }
    }
    v66 = v116;
    if ( v116 != CInputDest::GetThreadInfo((CInputDest *)v130)
      && v116 != CInputDest::GetDelegateThreadInfo((CInputDest *)v130) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v16 = v43;
      }
      v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v46 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v67, v68);
      v114 = 114;
      goto LABEL_61;
    }
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - *((_DWORD *)v116 + 380) > 0x7D0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v16 = v43;
      }
      v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v70 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v71 = *((_DWORD *)v116 + 380);
        v72 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, 800, 4);
        LOBYTE(v73) = v69;
        LOBYTE(v74) = v16;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v74,
          v73,
          *(_QWORD *)(v72 + 69136),
          2,
          2,
          115,
          (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
          v71,
          v70);
        v43 = 0;
      }
      v49 = 5;
      goto LABEL_63;
    }
    v44 = Src;
  }
  v79 = (*((_DWORD *)v66 + 340) >> 17) & 1;
  v124 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  v116 = 0LL;
  v117 = 0;
  RtlCopyFromUser(&v116, v44, 0xCuLL);
  Src = v116;
  v121 = v117;
  if ( a6 )
  {
    memset(&v132, 0, 40);
    RtlCopyFromUser(&v132, a6, 0x28uLL);
    v124 = *(_OWORD *)&v132._11;
    v125 = *(_OWORD *)&v132._21;
    v126 = *(_QWORD *)&v132._31;
  }
  if ( v54 )
  {
    memset(&v132, 0, 48);
    RtlCopyFromUser(&v132, v54, 0x30uLL);
    v127 = *(_OWORD *)&v132._11;
    v128 = *(_OWORD *)&v132._21;
    v129 = *(_OWORD *)&v132._31;
  }
  memset(&v132, 0, sizeof(v132));
  v116 = 0LL;
  if ( !CInertiaManager::ValidateInertiaInfo(
          v80,
          (struct INERTIA_INFO *)&Src,
          (D3DVALUE *)((unsigned __int64)&v124 & -(__int64)(a6 != 0LL)),
          &v132,
          (double *)&v116) )
  {
    v83 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v84 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v83 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v85 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v81, v82);
      LOBYTE(v86) = v84;
      LOBYTE(v87) = v83;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v87,
        v86,
        *(_QWORD *)(v85 + 69136),
        2,
        2,
        118,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    }
    v88 = 87;
LABEL_141:
    v22 = 0;
    UserSetLastError(v88);
    CInputDest::~CInputDest((CInputDest *)v130);
    goto LABEL_154;
  }
  v89 = (struct CInputDest *)v130;
  if ( v119 )
    v89 = 0LL;
  v90 = CInertiaManager::AddInertiaInfo(
          (CInertiaManager *)(v40 + 16912),
          v66,
          v123,
          v89,
          (struct tagInputRoutingInfo *)((unsigned __int64)&v127 & -(__int64)(v122 != 0LL)),
          v79,
          v119,
          v118 != 0,
          (const struct INERTIA_INFO *)&Src,
          *(double *)&v116,
          (const struct tagRECT *)((unsigned __int64)&v124 & -(__int64)(a6 != 0LL)),
          (const struct _D3DMATRIX *)((unsigned __int64)&v132 & -(__int64)(a6 != 0LL)));
  v22 = v90;
  if ( !v90 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v93 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v93 = 0;
    }
    v94 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v93 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v95 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v91, v92);
      LOBYTE(v96) = v94;
      LOBYTE(v97) = v93;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v97,
        v96,
        *(_QWORD *)(v95 + 69136),
        2,
        2,
        119,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    }
    v88 = 5;
    goto LABEL_141;
  }
  CInputDest::~CInputDest((CInputDest *)v130);
LABEL_154:
  if ( !v22 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v16 = 0;
    }
    v51 = &WPP_RECORDER_INITIALIZED;
    v98 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v103 = W32GetUserSessionState(v101, v100, v102);
      LOBYTE(v104) = v98;
      LOBYTE(v105) = v16;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v105,
        v104,
        *(_QWORD *)(v103 + 69136),
        2,
        2,
        122,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        LastError);
    }
  }
LABEL_181:
  UserSessionSwitchLeaveCritWithNonPaged((__int64)v51, v50, v52, v53);
  return v22;
}
