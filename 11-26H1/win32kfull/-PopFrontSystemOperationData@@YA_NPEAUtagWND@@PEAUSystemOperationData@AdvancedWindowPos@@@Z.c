/*
 * XREFs of ?PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402E2708
 * Callers:
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E474C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E4C80 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402E510C (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x14004E2F8 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z @ 0x140289418 (--$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z.c)
 *     ?RemoveEntry@CInterceptWindowProp@@AEAAXPEAUSystemOperationActionData@1@@Z @ 0x1402E2C40 (-RemoveEntry@CInterceptWindowProp@@AEAAXPEAUSystemOperationActionData@1@@Z.c)
 */

char __fastcall PopFrontSystemOperationData(struct tagWND *a1, struct AdvancedWindowPos::SystemOperationData *a2)
{
  bool v3; // r12
  CInterceptWindowProp *v5; // rsi
  __int64 v6; // rdx
  CInterceptWindowProp *v7; // rcx
  __int64 v8; // rdx
  char v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  char v15; // r14
  char v16; // bp
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char v22; // di
  bool v23; // si
  __int64 v24; // rbx
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  CInterceptWindowProp *v29; // [rsp+A0h] [rbp+18h] BYREF

  v3 = 0;
  v29 = 0LL;
  if ( !CWindowProp::GetProp<CInterceptWindowProp>((__int64)a1, (__int64 *)&v29) )
    return 0;
  v5 = v29;
  v6 = *((_QWORD *)v29 + 4);
  if ( (CInterceptWindowProp *)v6 == (CInterceptWindowProp *)((char *)v29 + 32) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v22 = 0;
    }
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v24 = *(_QWORD *)a1;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v26) = v23;
      LOBYTE(v27) = v22;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(UserSessionState + 69152),
        3,
        4,
        25,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v24);
    }
    return 0;
  }
  v7 = v29;
  *(_OWORD *)a2 = *(_OWORD *)(v6 + 16);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(v6 + 32);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(v6 + 48);
  CInterceptWindowProp::RemoveEntry(v7, (struct CInterceptWindowProp::SystemOperationActionData *)v6);
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0 )
  {
    v3 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v9 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v9 = 0;
  }
  if ( v3 || v9 )
  {
    v10 = *(_QWORD *)a1;
    v11 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v3;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(v11 + 69152),
      5,
      4,
      26,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v10);
  }
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
    && !(*((_DWORD *)v5 + 12) + *((_DWORD *)v5 + 13)) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v15 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v16 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v16 = 0;
    }
    if ( v15 || v16 )
    {
      v17 = *(_QWORD *)a1;
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      LOBYTE(v19) = v16;
      LOBYTE(v20) = v15;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 69152),
        5,
        4,
        27,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v17);
    }
    CWindowProp::RemoveAndDeleteProp(v5);
  }
  return 1;
}
