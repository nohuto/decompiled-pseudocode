/*
 * XREFs of ?SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x140264104
 * Callers:
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402638F4 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z @ 0x140295068 (-SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E4C80 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402E54FC (-xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x140289258 (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 *     ?SaveData@CInterceptWindowProp@@QEAA_NAEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402E3624 (-SaveData@CInterceptWindowProp@@QEAA_NAEBUSystemOperationData@AdvancedWindowPos@@@Z.c)
 */

char __fastcall SaveSystemOperationData(struct tagWND *a1, const struct AdvancedWindowPos::SystemOperationData *a2)
{
  bool v4; // di
  bool v5; // si
  __int64 v6; // rbx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  struct CInterceptWindowProp *v10; // rax
  __int64 v11; // rdx
  bool v12; // di
  bool v13; // si
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rdx
  char v19; // [rsp+20h] [rbp-48h]
  __int16 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+40h] [rbp-28h]

  v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v8) = v5;
    LOBYTE(v9) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      4,
      20,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v6);
  }
  v10 = CInterceptWindowProp::GetOrCreate(a1);
  if ( v10 )
  {
    if ( *((_DWORD *)v10 + 12) >= 0xAu )
    {
      v12 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v12 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1;
      v21 = *(_QWORD *)a1;
      v20 = 21;
      v16 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v11) + 69152);
      v19 = 3;
LABEL_28:
      LOBYTE(v15) = v13;
      LOBYTE(v14) = v12;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v15,
        v16,
        v19,
        4,
        v20,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v21);
      return 1;
    }
    if ( CInterceptWindowProp::SaveData(v10, a2) )
    {
      v12 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v12 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1;
      v21 = *(_QWORD *)a1;
      v16 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v17) + 69152);
      v20 = 22;
      v19 = 4;
      goto LABEL_28;
    }
  }
  return 0;
}
