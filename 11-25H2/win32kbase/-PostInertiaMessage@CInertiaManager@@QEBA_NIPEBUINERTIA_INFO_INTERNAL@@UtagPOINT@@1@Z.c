/*
 * XREFs of ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1401519B8
 * Callers:
 *     ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x140151954 (-HandleInertiaTimer@CPTPProcessor@@QEAAXXZ.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14021116C (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x140211228 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x140212150 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1402122A0 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x14021263C (-StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1400B4D10 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA318 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1400F3CB0 (-ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x14011123C (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x140125E38 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x14015E180 (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 *     ApiSetEditionPostInertiaMessage @ 0x140196584 (ApiSetEditionPostInertiaMessage.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x1401A988C (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
 *     ?PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z @ 0x140212444 (-PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

bool __fastcall CInertiaManager::PostInertiaMessage(
        CInertiaManager *this,
        __int64 a2,
        const struct INERTIA_INFO_INTERNAL *a3,
        struct tagPOINT a4,
        struct tagPOINT a5)
{
  char v5; // di
  unsigned int v8; // r15d
  bool v10; // si
  bool v11; // r12
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // r9
  const char *v16; // rax
  CInertiaManager *v17; // rcx
  int v18; // eax
  CInertiaManager *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // bl
  __int64 v23; // rax
  int v24; // edx
  int v25; // r8d
  int v26; // r10d
  int v27; // r9d
  __int64 v28; // rdx
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  unsigned __int64 v32; // rsi
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  __int64 v34; // rcx
  int v35; // esi
  bool v36; // bl
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  __int64 v40; // rdx
  bool v41; // bl
  bool v42; // si
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int16 v46; // [rsp+30h] [rbp-D0h]
  unsigned __int16 y; // [rsp+54h] [rbp-ACh]
  __m128i v48; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v49; // [rsp+70h] [rbp-90h]
  __int128 v50; // [rsp+80h] [rbp-80h]
  __int128 v51; // [rsp+90h] [rbp-70h]
  __int128 v52; // [rsp+A0h] [rbp-60h]
  __int128 v53; // [rsp+B0h] [rbp-50h]
  __int128 v54; // [rsp+C0h] [rbp-40h]
  _OWORD v55[7]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = 1;
  y = a4.y;
  v8 = a2;
  if ( (unsigned int)(a2 - 571) > 1 )
    return 0;
  v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    v15 = *(_QWORD *)(UserSessionState + 69144);
    v16 = "STOP";
    if ( v8 != 571 )
      v16 = "END";
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      v15,
      4,
      2,
      10,
      (__int64)&WPP_e0608400df8438aeab0f0b414e017c2f_Traceguids,
      (__int64)v16);
  }
  InputTraceLogging::Inertia::PostInertiaMessage(v8, a3, a4);
  v18 = *((_DWORD *)a3 + 46);
  if ( (v18 & 0x10) != 0 )
  {
    CInertiaManager::RouteSyntheticTouchpadToMT(v17, v8, a4, a5, *((_QWORD *)a3 + 1));
    return 1;
  }
  CInputDest::CInputDest(&v48, *((_QWORD *)a3 + 15), 2 - ((v18 & 0x40) != 0), 1);
  if ( !CInertiaManager::ValidateInertiaDest(v19, (const struct CInputDest *)&v48) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
    v46 = 11;
LABEL_32:
    LOBYTE(v25) = v22;
    LOBYTE(v24) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v25,
      *(_QWORD *)(v23 + 69144),
      2,
      2,
      v46,
      (__int64)&WPP_e0608400df8438aeab0f0b414e017c2f_Traceguids);
LABEL_33:
    CInputDest::~CInputDest((CInputDest *)&v48);
    return 0;
  }
  v26 = *((_DWORD *)a3 + 46);
  v27 = -__CFSHR__(v26, 2);
  if ( __CFSHR__(v26, 2) && !CInputDest::HasDelegationThread((CInputDest *)&v48) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v28);
    v46 = 12;
    goto LABEL_32;
  }
  if ( (v26 & 0x40) != 0 )
  {
    v29 = *((_OWORD *)a3 + 8);
    *((_QWORD *)&v49 + 1) = 0LL;
    v30 = *((_OWORD *)a3 + 9);
    v48.m128i_i32[0] |= 2u;
    v31 = *((_OWORD *)a3 + 10);
    v50 = v29;
    v51 = v30;
    v52 = v31;
  }
  else
  {
    v31 = v52;
    v30 = v51;
    v29 = v50;
  }
  LODWORD(v32) = LOWORD(a4.x) | (y << 16);
  v55[0] = v48;
  v55[1] = v49;
  v55[2] = v29;
  v55[3] = v30;
  v55[4] = v31;
  v55[5] = v53;
  v55[6] = v54;
  if ( !v27 )
  {
    if ( (unsigned int)Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline(v21) )
      v32 = (unsigned __int64)(~(unsigned __int8)*((_DWORD *)a3 + 46) & 0x20) >> 5;
    if ( !(unsigned int)ApiSetEditionPostInertiaMessage((unsigned int)v55, v8, *((_QWORD *)a3 + 1), v32, 0LL) )
    {
      v41 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v40);
        LOBYTE(v44) = v42;
        LOBYTE(v45) = v41;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v45,
          v44,
          *(_QWORD *)(v43 + 69144),
          2,
          2,
          14,
          (__int64)&WPP_e0608400df8438aeab0f0b414e017c2f_Traceguids);
      }
    }
    CInputDest::~CInputDest((CInputDest *)&v48);
    return 1;
  }
  DelegateThreadInfo = CInputDest::GetDelegateThreadInfo((CInputDest *)&v48);
  v35 = ApiSetEditionPostInertiaMessage((unsigned int)v55, v8, *((_QWORD *)a3 + 1), v32, (__int64)DelegateThreadInfo);
  if ( !v35 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v34 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v34 & 2) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(v34, WPP_GLOBAL_Control);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v38,
        *(_QWORD *)(v37 + 69144),
        2,
        2,
        13,
        (__int64)&WPP_e0608400df8438aeab0f0b414e017c2f_Traceguids);
    }
  }
  CInputDest::~CInputDest((CInputDest *)&v48);
  return v35 != 0;
}
