/*
 * XREFs of ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CE4F4
 * Callers:
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402CE344 (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z @ 0x1402C4068 (-BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z.c)
 *     ?SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C58A8 (-SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402CB7B4 (-PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402CC88C (-SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?Validateaction@@YA_NAEBU_WINDOW_ACTION@@PEAUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CD3A8 (-Validateaction@@YA_NAEBU_WINDOW_ACTION@@PEAUWindowAction@AdvancedWindowPos@@@Z.c)
 *     ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402D2C50 (-xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

char __fastcall xxxApplyActionAsyncImpl(struct tagWND *a1, struct CMonitorTopology *a2, struct _WINDOW_ACTION *a3)
{
  char v3; // r15
  unsigned int *v5; // rbx
  char v7; // di
  __int64 v8; // rdx
  struct CMonitorTopology *v9; // r8
  bool v10; // bl
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  int v14; // eax
  char v15; // r13
  char v16; // r12
  __int64 v17; // rbx
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  signed __int32 v22; // eax
  int v23; // ecx
  __int64 v24; // rdx
  int v25; // r9d
  __int64 v26; // rdx
  bool v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int16 v32; // [rsp+30h] [rbp-D0h]
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+5Ch] [rbp-A4h]
  __int128 v36; // [rsp+6Ch] [rbp-94h]
  int v37; // [rsp+80h] [rbp-80h] BYREF
  int v38; // [rsp+84h] [rbp-7Ch]
  _BYTE v39[44]; // [rsp+ECh] [rbp-14h] BYREF
  unsigned int *v40; // [rsp+118h] [rbp+18h]

  v3 = 0;
  v5 = (unsigned int *)a2;
  v7 = 1;
  if ( (*((_DWORD *)a1 + 96) & 0x10) != 0 )
  {
    if ( _bittest((const signed __int32 *)a3, 0xAu) )
    {
      if ( _bittest((const signed __int32 *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19144) + 48LL), 0xAu) )
      {
        v34 = 1;
        v35 = 0LL;
        v36 = 0LL;
        if ( !SaveSystemOperationData(a1, (const struct AdvancedWindowPos::SystemOperationData *)&v34) )
          return 0;
      }
    }
  }
  if ( !xxxResolveArrangePosition(a1, (const struct CMonitorTopology *)v5, a3) )
    return 0;
  memset_0(&v37, 0, 0xA8uLL);
  if ( !Validateaction(a3, (struct AdvancedWindowPos::WindowAction *)&v37) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v7 = 0;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8) + 69160);
    v32 = 131;
    goto LABEL_50;
  }
  if ( (v37 & 0x200) != 0 )
  {
    v14 = *((_DWORD *)a1 + 95);
    v37 &= ~0x200u;
    v15 = 1;
    if ( (v14 & 0x10) == 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v7 = 0;
      }
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8) + 69160);
      v32 = 132;
      goto LABEL_50;
    }
  }
  else
  {
    v15 = 0;
  }
  if ( (*((_DWORD *)a1 + 96) & 0x10) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v16 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
      && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v3 = 1;
    }
    if ( v16 || v3 )
    {
      v17 = *(_QWORD *)a1;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
      LOBYTE(v19) = v3;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        4,
        133,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
        v17);
      v5 = (unsigned int *)a2;
    }
    if ( v15 )
      DesktopRecalc::SetLastInterceptedTopology(a1, (struct tagWND *)v5, v9);
    xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 838LL, 0LL, a3, 0, 0, 0LL, 1, 1);
    return 1;
  }
  v22 = *(_DWORD *)a3;
  v23 = v38 | 0x2000;
  v38 |= 0x2000u;
  if ( (v22 & 0x10) != 0 && (*((_DWORD *)a3 + 1) & 2) != 0 )
    v38 = v23 | 2;
  if ( IsTopLevelWindow((__int64)a1) )
  {
    if ( v15 )
    {
      if ( !DesktopRecalc::BeginApplyWindowActionOld(a1, (struct tagWND *)v5[3]) )
        return 0;
      v25 = v37;
    }
    if ( (v25 & 0x400) != 0 )
    {
      if ( !PopFrontSystemOperationData(a1, (struct AdvancedWindowPos::SystemOperationData *)v39) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v7 = 0;
        }
        v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v28 = *(_QWORD *)a1;
          v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
          LOBYTE(v30) = v27;
          LOBYTE(v31) = v7;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v31,
            v30,
            *(_QWORD *)(v29 + 69160),
            3,
            4,
            135,
            (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
            v28);
        }
        return 0;
      }
      v25 = v37;
    }
    if ( v25 )
    {
      v40 = v5;
      AdvancedWindowPos::xxxApplyWindowAction(a1, &v37, 2LL);
    }
    return 1;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
  {
    v7 = 0;
  }
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return 0;
  v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24) + 69160);
  v32 = 134;
LABEL_50:
  LOBYTE(v12) = v10;
  LOBYTE(v11) = v7;
  WPP_RECORDER_AND_TRACE_SF_(
    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
    v11,
    v12,
    v13,
    3,
    4,
    v32,
    (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
  return 0;
}
