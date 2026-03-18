/*
 * XREFs of ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402E3844
 * Callers:
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x14022B82C (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x14022BF44 (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402627D4 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402638F4 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402E596C (-xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402E5C74 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 */

void __fastcall SetMonitorMovePoint(struct _WINDOW_ACTION *a1, const struct tagMONITOR *a2)
{
  int v2; // esi
  int v3; // ebp
  char v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  *(_DWORD *)a1 |= 0x80u;
  v2 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 44LL);
  *((_DWORD *)a1 + 20) = v2;
  v3 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 48LL);
  *((_DWORD *)a1 + 21) = v3;
  v4 = 1;
  v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v4 = 0;
  if ( v5 || v4 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v4;
    LOBYTE(v8) = v5;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      30,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v2,
      v3);
  }
}
