/*
 * XREFs of ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14016DC30
 * Callers:
 *     ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x14016DBC4 (-HandleInertiaTimer@CPTPProcessor@@QEAAXXZ.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14019FDF0 (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x1401B0814 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x140218C18 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x140219374 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1402194D4 (-StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1400777D0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400CE8A8 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z @ 0x1401928CC (-PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z.c)
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1401A18E4 (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 *     ApiSetEditionPostInertiaMessage @ 0x1401BB814 (ApiSetEditionPostInertiaMessage.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401CD3E0 (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

bool __fastcall CInertiaManager::PostInertiaMessage(
        CInertiaManager *this,
        unsigned int a2,
        const struct INERTIA_INFO_INTERNAL *a3,
        struct tagPOINT a4,
        struct tagPOINT a5)
{
  char v5; // di
  bool v9; // si
  bool v10; // r12
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // r9
  const char *v15; // rax
  CInertiaManager *v16; // rcx
  int v17; // eax
  int v18; // edx
  int v19; // r8d
  bool v20; // bl
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  __int64 v25; // rcx
  int v26; // r10d
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  unsigned __int64 v30; // rsi
  __int64 v31; // rcx
  int v32; // ecx
  int v33; // esi
  int v34; // r8d
  bool v35; // bl
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  int v39; // edx
  int v40; // r8d
  bool v41; // bl
  bool v42; // si
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int16 v46; // [rsp+30h] [rbp-D0h]
  unsigned __int16 y; // [rsp+54h] [rbp-ACh]
  __int128 v48; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v49; // [rsp+70h] [rbp-90h]
  __int128 v50; // [rsp+80h] [rbp-80h]
  __int128 v51; // [rsp+90h] [rbp-70h]
  __int128 v52; // [rsp+A0h] [rbp-60h]
  _OWORD v53[3]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v54[7]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = 1;
  y = a4.y;
  if ( a2 - 571 > 1 )
    return 0;
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, (_DWORD)a3);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    v14 = *(_QWORD *)(UserSessionState + 69136);
    v15 = "STOP";
    if ( a2 != 571 )
      v15 = "END";
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      v14,
      4,
      2,
      10,
      (__int64)&WPP_bde70889de4c3e07bcb5ab1bfee4f4d9_Traceguids,
      (__int64)v15);
  }
  InputTraceLogging::Inertia::PostInertiaMessage(a2, a3, a4);
  v17 = *((_DWORD *)a3 + 46);
  if ( (v17 & 0x10) != 0 )
  {
    CInertiaManager::RouteSyntheticTouchpadToMT(v16, a2, a4, a5, *((_QWORD *)a3 + 1));
    return 1;
  }
  CInputDest::CInputDest((__int64 *)&v48, *((_QWORD *)a3 + 15), 2 - ((v17 & 0x40) != 0), 1);
  if ( !(_DWORD)v48 )
    goto LABEL_18;
  v18 = HIDWORD(v53[0]);
  v19 = v53[0];
  if ( HIDWORD(v53[0]) == 1 )
  {
    if ( *(char *)(*(_QWORD *)&v53[0] + 28LL) < 0 )
      goto LABEL_18;
  }
  else if ( HIDWORD(v53[0]) == 2 && *(char *)(*(_QWORD *)(*(_QWORD *)&v53[0] + 40LL) + 20LL) < 0 )
  {
    goto LABEL_18;
  }
  v25 = (unsigned int)(HIDWORD(v53[0]) - 1);
  if ( HIDWORD(v53[0]) == 1 )
  {
    if ( *(char *)(*(_QWORD *)&v53[0] + 27LL) >= 0 )
      goto LABEL_34;
LABEL_18:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_26;
    v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v19);
    v46 = 11;
LABEL_25:
    LOBYTE(v23) = v20;
    LOBYTE(v22) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v23,
      *(_QWORD *)(v21 + 69136),
      2,
      2,
      v46,
      (__int64)&WPP_bde70889de4c3e07bcb5ab1bfee4f4d9_Traceguids);
LABEL_26:
    CInputDest::~CInputDest((CInputDest *)&v48);
    return 0;
  }
  if ( HIDWORD(v53[0]) == 2 )
  {
    LOBYTE(v25) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v53[0] + 40LL) + 19LL);
    if ( (v25 & 0x80u) != 0LL )
      goto LABEL_18;
  }
LABEL_34:
  v26 = *((_DWORD *)a3 + 46);
  if ( __CFSHR__(v26, 2) )
  {
    v25 = (unsigned int)(HIDWORD(v53[0]) - 1);
    if ( HIDWORD(v53[0]) != 1 )
    {
      if ( HIDWORD(v53[0]) == 2
        && (*(_QWORD *)(*(_QWORD *)&v53[0] + 264LL) || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v53[0] + 16LL) + 1496LL)) )
      {
        goto LABEL_39;
      }
LABEL_42:
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v5 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_26;
      v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, HIDWORD(v53[0]), v53[0]);
      v46 = 12;
      goto LABEL_25;
    }
    if ( !*(_QWORD *)(*(_QWORD *)&v53[0] + 64LL) )
      goto LABEL_42;
  }
LABEL_39:
  if ( (v26 & 0x40) != 0 )
  {
    v27 = *((_OWORD *)a3 + 8);
    *((_QWORD *)&v49 + 1) = 0LL;
    v28 = *((_OWORD *)a3 + 9);
    LODWORD(v48) = v48 | 2;
    v29 = *((_OWORD *)a3 + 10);
    v50 = v27;
    v51 = v28;
    v52 = v29;
  }
  else
  {
    v29 = v52;
    v28 = v51;
    v27 = v50;
  }
  LODWORD(v30) = LOWORD(a4.x) | (y << 16);
  v54[0] = v48;
  v54[1] = v49;
  v54[2] = v27;
  v54[3] = v28;
  v54[4] = v29;
  v54[5] = v53[0];
  v54[6] = v53[1];
  if ( !__CFSHR__(v26, 2) )
  {
    if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(
                         v25,
                         HIDWORD(v53[0]),
                         *(_QWORD *)&v53[0]) )
      v30 = (unsigned __int64)(~(unsigned __int8)*((_DWORD *)a3 + 46) & 0x20) >> 5;
    if ( !(unsigned int)ApiSetEditionPostInertiaMessage((unsigned int)v54, a2, *((_QWORD *)a3 + 1), v30, 0LL) )
    {
      v41 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v43 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v39, v40);
        LOBYTE(v44) = v42;
        LOBYTE(v45) = v41;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v45,
          v44,
          *(_QWORD *)(v43 + 69136),
          2,
          2,
          14,
          (__int64)&WPP_bde70889de4c3e07bcb5ab1bfee4f4d9_Traceguids);
      }
    }
    CInputDest::~CInputDest((CInputDest *)&v48);
    return 1;
  }
  v31 = 0LL;
  if ( HIDWORD(v53[0]) == 1 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)&v53[0] + 64LL);
  }
  else if ( HIDWORD(v53[0]) == 2 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)&v53[0] + 264LL);
  }
  v33 = ApiSetEditionPostInertiaMessage((unsigned int)v54, a2, *((_QWORD *)a3 + 1), LOWORD(a4.x) | (y << 16), v31);
  if ( !v33 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v32 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v32 & 2) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = W32GetUserSessionState(v32, (_DWORD)WPP_GLOBAL_Control, v34);
      LOBYTE(v37) = v35;
      LOBYTE(v38) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v38,
        v37,
        *(_QWORD *)(v36 + 69136),
        2,
        2,
        13,
        (__int64)&WPP_bde70889de4c3e07bcb5ab1bfee4f4d9_Traceguids);
    }
  }
  if ( HIDWORD(v53[0]) )
    HMAssignmentUnlock((__int64 *)v53);
  return v33 != 0;
}
