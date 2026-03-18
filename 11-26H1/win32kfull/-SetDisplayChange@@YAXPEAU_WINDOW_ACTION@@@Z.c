/*
 * XREFs of ?SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z @ 0x1402E373C
 * Callers:
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x14022BF44 (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402627D4 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402E5C74 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

void __fastcall SetDisplayChange(struct _WINDOW_ACTION *a1)
{
  struct MOVESIZEDATA *v2; // rdx
  char v3; // di
  bool v4; // bp
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  *(_DWORD *)a1 |= 0x200u;
  v2 = WPP_GLOBAL_Control;
  v3 = 1;
  v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v3 = 0;
  if ( v4 || v3 )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(a1, WPP_GLOBAL_Control) + 19904);
    v6 = *(_DWORD *)(v5 + 7500);
    UserSessionState = W32GetUserSessionState(v5, v7);
    LOBYTE(v9) = v3;
    LOBYTE(v10) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      31,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v6);
  }
  *((_DWORD *)a1 + 22) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, v2) + 19904) + 7500LL);
}
