/*
 * XREFs of NtUserReportInertia @ 0x140173210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400B9B64 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA318 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1400DA804 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1400F3CF8 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x140120D80 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x140125E38 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_iDqqqq @ 0x140129E48 (WPP_RECORDER_AND_TRACE_SF_iDqqqq.c)
 *     UserGetLastError @ 0x14015A8E8 (UserGetLastError.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x1401A988C (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x140211DDC (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtUserReportInertia(unsigned __int64 a1, __int64 a2, __int64 a3, void *a4, void *a5, void *a6)
{
  int v7; // r15d
  _QWORD *UserSessionState; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  char v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rdx
  char v16; // bl
  char v17; // di
  __int64 v18; // rax
  bool v19; // bl
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  bool v23; // bl
  __int64 v24; // rax
  int v25; // edx
  int v26; // r8d
  __int64 v27; // rdx
  char v28; // bl
  int v29; // r15d
  bool v30; // bl
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  int v34; // r15d
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rdx
  void *v39; // rax
  bool v40; // bl
  __int64 v41; // rax
  int v42; // edx
  int v43; // r8d
  int v44; // ecx
  __int64 v45; // rdx
  __m128i *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v52; // r9
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  __int64 v54; // rdx
  bool v55; // r15
  unsigned __int64 v56; // rdi
  int v57; // ebx
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  bool v61; // bl
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  int v65; // ebx
  CInertiaManager *v66; // rcx
  __int64 v67; // rdx
  bool v68; // bl
  bool v69; // r15
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  int v73; // ecx
  bool v74; // cf
  struct CInputDest *v75; // r9
  bool v76; // al
  __int64 v77; // rdx
  char v78; // bl
  bool v79; // r15
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  bool v83; // r12
  char LastError; // bl
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  int v88; // r8d
  int v89; // edx
  unsigned __int8 v90; // al
  bool v91; // bl
  __int64 v92; // rax
  int v93; // r8d
  int v94; // edx
  int v96; // [rsp+20h] [rbp-2A8h]
  int v97; // [rsp+28h] [rbp-2A0h]
  int v98; // [rsp+30h] [rbp-298h]
  __int16 v99; // [rsp+30h] [rbp-298h]
  __int16 v100; // [rsp+30h] [rbp-298h]
  __int16 v101; // [rsp+30h] [rbp-298h]
  int v102; // [rsp+38h] [rbp-290h]
  char v103; // [rsp+40h] [rbp-288h]
  void *Src; // [rsp+70h] [rbp-258h] BYREF
  int v105; // [rsp+78h] [rbp-250h]
  void *v106; // [rsp+80h] [rbp-248h]
  __int64 v107; // [rsp+88h] [rbp-240h] BYREF
  int v108; // [rsp+90h] [rbp-238h]
  struct tagTHREADINFO *v109; // [rsp+98h] [rbp-230h]
  unsigned __int64 v110; // [rsp+A8h] [rbp-220h]
  __int64 v111; // [rsp+B0h] [rbp-218h] BYREF
  int v112; // [rsp+B8h] [rbp-210h]
  __int128 v113; // [rsp+C8h] [rbp-200h] BYREF
  __int128 v114; // [rsp+D8h] [rbp-1F0h]
  __int64 v115; // [rsp+E8h] [rbp-1E0h]
  __int128 v116; // [rsp+F0h] [rbp-1D8h] BYREF
  __int128 v117; // [rsp+100h] [rbp-1C8h]
  __int128 v118; // [rsp+110h] [rbp-1B8h]
  _QWORD v119[14]; // [rsp+130h] [rbp-198h] BYREF
  char v120; // [rsp+1A0h] [rbp-128h]
  __int128 v121; // [rsp+1B0h] [rbp-118h] BYREF
  __int128 v122; // [rsp+1C0h] [rbp-108h]
  __int64 v123; // [rsp+1D0h] [rbp-F8h]
  __int128 v124; // [rsp+1D8h] [rbp-F0h] BYREF
  __int128 v125; // [rsp+1E8h] [rbp-E0h]
  __int128 v126; // [rsp+1F8h] [rbp-D0h]
  _D3DMATRIX v127; // [rsp+210h] [rbp-B8h] BYREF

  v106 = a4;
  v107 = a3;
  v7 = a2;
  v110 = a1;
  Src = a5;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            0LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v11 = 1;
  }
  else
  {
    v11 = 1;
    LOBYTE(v9) = 1;
    v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v9);
  }
  v12 = v10;
  UserSessionState[3] = v10;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v12 )
      goto LABEL_9;
    *(_BYTE *)(v12 + 1708) = 1;
  }
  if ( v12 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v13);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  v109 = PtiCurrent();
  v15 = WPP_GLOBAL_Control;
  v16 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    v14 = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v14 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v16 = 1;
  }
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = W32GetUserSessionState(v14, WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_iDqqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v17,
      *(_QWORD *)(v18 + 69144),
      v96,
      v97,
      v98,
      v102);
  }
  if ( !v110 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v11 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_186;
    v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
    v99 = 105;
    goto LABEL_25;
  }
  if ( (v7 & 0xFFFFFFF0) != 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v11 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_186;
    v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
    v103 = v7;
    v100 = 106;
    goto LABEL_185;
  }
  v27 = v7 & 8;
  v105 = v7 & 8;
  LOBYTE(v14) = v7 & 1;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 2) == 0 )
      goto LABEL_178;
    goto LABEL_38;
  }
  if ( (v7 & 2) != 0 )
  {
LABEL_38:
    if ( !(_BYTE)v14 )
    {
      v28 = 0;
      goto LABEL_40;
    }
LABEL_178:
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v11 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_186;
    v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
    v103 = v7;
    v100 = 107;
LABEL_185:
    LOBYTE(v26) = v23;
    LOBYTE(v25) = v11;
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v26,
      *(_QWORD *)(v24 + 69144),
      2,
      2,
      v100,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      v103);
    goto LABEL_186;
  }
  v28 = 1;
LABEL_40:
  v29 = v7 & 4;
  if ( v29 )
  {
    if ( a3 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v11 = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_186;
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
      v99 = 108;
LABEL_25:
      LOBYTE(v22) = v19;
      LOBYTE(v21) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v22,
        *(_QWORD *)(v20 + 69144),
        2,
        2,
        v99,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
LABEL_186:
      v34 = 0;
      v35 = 87;
      goto LABEL_187;
    }
    if ( !(unsigned int)IsCurrentProcessDwm() )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v11 = 0;
      }
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v27);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(v31 + 69144),
          2,
          2,
          109,
          (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
      }
      v34 = 0;
LABEL_58:
      v35 = 5;
LABEL_187:
      UserSetLastError(v35);
      goto LABEL_188;
    }
  }
  v36 = W32GetUserSessionState(v14, v27);
  v37 = v36;
  if ( !v28 )
  {
    v90 = CInertiaManager::InvalidateInertiaInfo((CInertiaManager *)(v36 + 16920), *((_QWORD *)v109 + 58), v110);
    v34 = v90;
    if ( !v90 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v11 = 0;
      }
      v91 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v92 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v45);
        LOBYTE(v93) = v91;
        LOBYTE(v94) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v94,
          v93,
          *(_QWORD *)(v92 + 69144),
          2,
          2,
          121,
          (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
      }
      v34 = 0;
      goto LABEL_58;
    }
    goto LABEL_161;
  }
  memset(v119, 0, sizeof(v119));
  v120 = 0;
  v39 = Src;
  if ( !Src )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v11 = 0;
    }
    v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_69;
    v41 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v38);
    v101 = 110;
LABEL_68:
    LOBYTE(v43) = v40;
    LOBYTE(v42) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v42,
      v43,
      *(_QWORD *)(v41 + 69144),
      2,
      2,
      v101,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
LABEL_69:
    v44 = 87;
LABEL_70:
    v34 = 0;
LABEL_71:
    UserSetLastError(v44);
    CInputDest::~CInputDest((CInputDest *)v119);
    goto LABEL_188;
  }
  if ( v29 )
  {
    v34 = 1;
    if ( !a6 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v11 = 0;
      }
      v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_69;
      v41 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v38);
      v101 = 116;
      goto LABEL_68;
    }
    v52 = v109;
  }
  else
  {
    v34 = 0;
    v46 = CInputDest::CInputDest((__m128i *)&v127, v107, 2 - (unsigned int)(v106 != 0LL), 2);
    CInputDest::operator=(v119, v46);
    CInputDest::~CInputDest((CInputDest *)&v127);
    if ( !LODWORD(v119[0])
      || CInputDest::TestWindowFlag((CInputDest *)v119, 1152)
      || CInputDest::TestWindowFlag((CInputDest *)v119, 896) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v11 = 0;
      }
      v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v62 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v47);
        LOBYTE(v63) = v61;
        LOBYTE(v64) = v11;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v64,
          v63,
          *(_QWORD *)(v62 + 69144),
          2,
          2,
          111,
          (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
          v107);
      }
      v44 = 1400;
      goto LABEL_71;
    }
    if ( (unsigned int)Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline(v48) )
    {
      if ( !v105 && HIDWORD(v119[11]) == 2 && CInputDest::IsCompositionInput((CInputDest *)v119) && !a6 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v11 = 0;
        }
        v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_69;
        v41 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v49);
        v101 = 112;
        goto LABEL_68;
      }
    }
    else if ( HIDWORD(v119[11]) == 2 && CInputDest::IsCompositionInput((CInputDest *)v119) && !a6 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v11 = 0;
      }
      v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_69;
      v41 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v50);
      v101 = 113;
      goto LABEL_68;
    }
    ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v119);
    v52 = v109;
    if ( v109 != ThreadInfo )
    {
      DelegateThreadInfo = CInputDest::GetDelegateThreadInfo((CInputDest *)v119);
      if ( v52 != DelegateThreadInfo )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v11 = 0;
        }
        v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_69;
        v41 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v54);
        v101 = 114;
        goto LABEL_68;
      }
    }
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - *((_DWORD *)v52 + 380) > 0x7D0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v11 = 0;
      }
      v55 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v56 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v57 = *((_DWORD *)v52 + 380);
        v58 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, 0xFFFFF78000000320uLL);
        LOBYTE(v59) = v55;
        LOBYTE(v60) = v11;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v60,
          v59,
          *(_QWORD *)(v58 + 69144),
          2,
          2,
          115,
          (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
          v57,
          v56);
      }
      v44 = 5;
      goto LABEL_70;
    }
    v39 = Src;
  }
  v65 = (*((_DWORD *)v52 + 340) >> 17) & 1;
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  v111 = 0LL;
  v112 = 0;
  RtlCopyFromUser(&v111, v39, 0xCuLL);
  v107 = v111;
  v108 = v112;
  if ( a6 )
  {
    v113 = 0LL;
    v114 = 0LL;
    v115 = 0LL;
    RtlCopyFromUser(&v113, a6, 0x28uLL);
    v121 = v113;
    v122 = v114;
    v123 = v115;
  }
  if ( v106 )
  {
    v116 = 0LL;
    v117 = 0LL;
    v118 = 0LL;
    RtlCopyFromUser(&v116, v106, 0x30uLL);
    v124 = v116;
    v125 = v117;
    v126 = v118;
  }
  memset(&v127, 0, sizeof(v127));
  Src = 0LL;
  if ( !CInertiaManager::ValidateInertiaInfo(
          v66,
          (struct INERTIA_INFO *)&v107,
          (D3DVALUE *)((unsigned __int64)&v121 & -(__int64)(a6 != 0LL)),
          &v127,
          (double *)&Src) )
  {
    v68 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v68 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v70 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v67);
      LOBYTE(v71) = v69;
      LOBYTE(v72) = v68;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v72,
        v71,
        *(_QWORD *)(v70 + 69144),
        2,
        2,
        118,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v73 = 87;
LABEL_148:
    v34 = 0;
    UserSetLastError(v73);
    CInputDest::~CInputDest((CInputDest *)v119);
    goto LABEL_161;
  }
  v74 = v106 != 0LL;
  v106 = (void *)-(__int64)v106;
  v75 = (struct CInputDest *)v119;
  if ( v34 )
    v75 = 0LL;
  v76 = CInertiaManager::AddInertiaInfo(
          (CInertiaManager *)(v37 + 16920),
          v109,
          v110,
          v75,
          (struct tagInputRoutingInfo *)((unsigned __int64)&v124 & -(__int64)v74),
          v65,
          v34,
          v105 != 0,
          (const struct INERTIA_INFO *)&v107,
          *(double *)&Src,
          (const struct tagRECT *)((unsigned __int64)&v121 & -(__int64)(a6 != 0LL)),
          (const struct _D3DMATRIX *)((unsigned __int64)&v127 & -(__int64)(a6 != 0LL)));
  v34 = v76;
  if ( !v76 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v78 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v78 = 0;
    }
    v79 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v78 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v80 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v77);
      LOBYTE(v81) = v79;
      LOBYTE(v82) = v78;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v82,
        v81,
        *(_QWORD *)(v80 + 69144),
        2,
        2,
        119,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v73 = 5;
    goto LABEL_148;
  }
  CInputDest::~CInputDest((CInputDest *)v119);
LABEL_161:
  if ( !v34 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v11 = 0;
    }
    v83 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v87 = W32GetUserSessionState(v86, v85);
      LOBYTE(v88) = v83;
      LOBYTE(v89) = v11;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v89,
        v88,
        *(_QWORD *)(v87 + 69144),
        2,
        2,
        122,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        LastError);
    }
  }
LABEL_188:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v45);
  return v34;
}
