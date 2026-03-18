/*
 * XREFs of ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402E8874
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1401D6848 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402DB4A4 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1402DC310 (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 *     ?OnExternalSystemOperation@CDwmWindowNotifyBatch@@QEAAXXZ @ 0x1402E6B00 (-OnExternalSystemOperation@CDwmWindowNotifyBatch@@QEAAXXZ.c)
 *     ?SendShellArrangementCompletionNotification@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NK2@Z @ 0x1402E8680 (-SendShellArrangementCompletionNotification@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NK2@Z.c)
 */

__int64 __fastcall AdvancedWindowPos::SendShellNotificationsForAction(
        const struct tagWND *a1,
        unsigned int a2,
        int a3,
        char a4,
        CDwmWindowNotifyBatch *a5,
        unsigned int *a6)
{
  __int64 result; // rax
  __int64 v8; // rdx
  bool v9; // si
  bool v10; // bl
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  unsigned int v14; // r14d
  char v15; // si
  char v16; // r15
  char v17; // r14
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  bool v21; // r15
  char v22; // bp
  const char *v23; // rbx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx

  result = (__int64)PtiCurrent((__int64)a1);
  v8 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(result + 488) + 328LL) )
  {
    v14 = 0;
    if ( !a6 )
      goto LABEL_41;
    v15 = 1;
    v14 = a6[6];
    if ( (*a6 & 1) != 0 )
    {
      CDwmWindowNotifyBatch::OnExternalSystemOperation(a5);
      v8 = 0LL;
    }
    if ( (*a6 & 2) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v16 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v17 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v17 = 0;
      }
      if ( v16 || v17 )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(UserSessionState + 69152),
          5,
          4,
          82,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      v14 = a6[6];
      ShellWindowPos::NotifyPosAndStateApplied(a1, a6[5], a6 + 1, v14);
    }
    if ( (*a6 & 8) != 0 )
    {
      v21 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v22 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v22 = 0;
      }
      if ( v21 || v22 )
      {
        v23 = "AWSR_CANCELED";
        if ( a6[7] != 1 )
          v23 = "AWSR_SIZED";
        v24 = W32GetUserSessionState("AWSR_SIZED", v8);
        LOBYTE(v25) = v22;
        LOBYTE(v26) = v21;
        WPP_RECORDER_AND_TRACE_SF_s(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 69152),
          5,
          4,
          83,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          (__int64)v23);
      }
      NotifyShell::WindowSizingCompleted((__int64 *)a1, a6[6], a6[7]);
    }
    if ( !a6[6] )
LABEL_41:
      v15 = 0;
    result = (__int64)AdvancedWindowPos::SendShellArrangementCompletionNotification((__int64 *)a1, a2, a3, a4, v14, v15);
    if ( a6 )
    {
      result = *a6;
      if ( (result & 4) != 0 )
        return NotifyShell::DragSizeInfo(a1, a6[8], 0);
    }
  }
  else
  {
    v9 = 0;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
    {
      result = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (result & 8) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
        v9 = 1;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      return WPP_RECORDER_AND_TRACE_SF_(
               *((_QWORD *)WPP_GLOBAL_Control + 3),
               v13,
               v12,
               *(_QWORD *)(v11 + 69152),
               3,
               4,
               81,
               (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
  return result;
}
