/*
 * XREFs of ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402D560C
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x14014B874 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402C1B9C (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1402C2C9C (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 *     ?OnExternalSystemOperation@CDwmWindowNotifyBatch@@QEAAXXZ @ 0x1402D35D0 (-OnExternalSystemOperation@CDwmWindowNotifyBatch@@QEAAXXZ.c)
 *     ?SendShellArrangementCompletionNotification@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NK2@Z @ 0x1402D5418 (-SendShellArrangementCompletionNotification@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NK2@Z.c)
 */

__int64 __fastcall AdvancedWindowPos::SendShellNotificationsForAction(
        const struct tagWND *a1,
        __int64 a2,
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
  unsigned int v23; // ebx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // r9
  const char *v28; // rax
  unsigned int v29; // [rsp+98h] [rbp+10h]

  v29 = a2;
  result = (__int64)PtiCurrent((__int64)a1, a2);
  v8 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(result + 496) + 328LL) )
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
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v16 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v17 = 0;
      }
      if ( v16 || v17 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v20,
          v19,
          *(_QWORD *)(UserSessionState + 69160),
          5,
          4,
          82,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
      v14 = a6[6];
      ShellWindowPos::NotifyPosAndStateApplied(a1, a6[5], a6 + 1, v14);
    }
    if ( (*a6 & 8) != 0 )
    {
      v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v22 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v22 = 0;
      }
      if ( v21 || v22 )
      {
        v23 = a6[7];
        v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
        LOBYTE(v25) = v22;
        LOBYTE(v26) = v21;
        v27 = *(_QWORD *)(v24 + 69160);
        v28 = "AWSR_CANCELED";
        if ( v23 != 1 )
          v28 = "AWSR_SIZED";
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v26,
          v25,
          v27,
          5,
          4,
          83,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          (__int64)v28);
      }
      NotifyShell::WindowSizingCompleted((__int64 *)a1, a6[6], a6[7]);
    }
    if ( !a6[6] )
LABEL_41:
      v15 = 0;
    result = (__int64)AdvancedWindowPos::SendShellArrangementCompletionNotification(
                        (__int64 *)a1,
                        v29,
                        a3,
                        a4,
                        v14,
                        v15);
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
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
    {
      result = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
      if ( (result & 8) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u )
        v9 = 1;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      return WPP_RECORDER_AND_TRACE_SF_(
               *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
               v13,
               v12,
               *(_QWORD *)(v11 + 69160),
               3,
               4,
               81,
               (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
  }
  return result;
}
