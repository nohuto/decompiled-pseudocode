/*
 * XREFs of ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1401D65B4
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14016348C (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140164A04 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140164BB4 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1402C4D20 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?SendShellArrangementCompletionNotification@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NK2@Z @ 0x1402E8680 (-SendShellArrangementCompletionNotification@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NK2@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1401D6970 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1401D6B3C (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

__int64 __fastcall NotifyShell::ArrangementCompleted(__int64 *a1, __int64 a2, int a3)
{
  unsigned __int16 v3; // si
  int v4; // r12d
  char v6; // bp
  __int64 v7; // rcx
  bool v8; // r14
  const char *v9; // rdi
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  unsigned __int16 WindowTrackState; // bx
  struct tagTHREADINFO *v15; // rax
  int v16; // ecx

  v3 = a3;
  v4 = a2;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = 2LL;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    if ( a3 == 1 )
    {
      v9 = "ACR_ARRANGED";
    }
    else
    {
      v9 = "ACR_DISARRANGED";
      if ( a3 != 2 )
        v9 = "ACR_NONE";
    }
    v10 = *a1;
    UserSessionState = W32GetUserSessionState(2LL, a2);
    LOBYTE(v12) = v8;
    LOBYTE(v13) = v6;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      1,
      22,
      (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
      v10,
      (__int64)v9);
    v7 = 2LL;
  }
  WindowTrackState = 0;
  if ( v3 == 2 )
  {
    LOBYTE(a2) = 1;
    WindowTrackState = ShellWindowManagement::GetWindowTrackState(a1, a2);
  }
  v15 = PtiCurrent(v7);
  v16 = 0;
  if ( *((_QWORD *)v15 + 88) )
    v16 = *((_DWORD *)PtiCurrent(0LL) + 344) & 0x1F;
  return anonymous_namespace_::NotifyShellSimplePayload(
           *a1,
           2,
           v3 | ((WindowTrackState | (unsigned int)(16 * v16)) << 16),
           v4,
           0);
}
