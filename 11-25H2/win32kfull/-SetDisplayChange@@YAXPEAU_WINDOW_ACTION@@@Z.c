/*
 * XREFs of ?SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z @ 0x1402CCA9C
 * Callers:
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402D042C (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402D0E60 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402D12FC (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

void __fastcall SetDisplayChange(struct _WINDOW_ACTION *a1)
{
  __int64 v2; // rdx
  char v3; // di
  bool v4; // bp
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  *(_DWORD *)a1 |= 0x200u;
  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  v3 = 1;
  v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v3 = 0;
  }
  if ( v4 || v3 )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(a1, *(_QWORD *)&WPP_GLOBAL_Control) + 19872);
    v6 = *(_DWORD *)(v5 + 7500);
    UserSessionState = W32GetUserSessionState(v5, v7);
    LOBYTE(v9) = v3;
    LOBYTE(v10) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      31,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v6);
  }
  *((_DWORD *)a1 + 22) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, v2) + 19872) + 7500LL);
}
