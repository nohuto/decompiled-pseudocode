/*
 * XREFs of ?SendShellArrangementCompletionNotification@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NK2@Z @ 0x1402E8680
 * Callers:
 *     ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402E8874 (-SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1401D65B4 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 */

_UNKNOWN **__fastcall AdvancedWindowPos::SendShellArrangementCompletionNotification(
        __int64 *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned int a5,
        char a6)
{
  _UNKNOWN **result; // rax
  char v8; // bp
  char v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // di
  char v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (_DWORD)a2 == 3 )
  {
    if ( a3 != 3 || a4 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v8 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v9 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v9 = 0;
      }
      if ( v8 || v9 )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v8;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v12,
          v11,
          *(_QWORD *)(UserSessionState + 69152),
          5,
          4,
          79,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      result = (_UNKNOWN **)NotifyShell::ArrangementCompleted(a1, a5, 1);
      if ( a6 )
      {
        result = (_UNKNOWN **)PtiCurrent(v13);
        v14 = *((_QWORD *)result[61] + 41);
        if ( v14 )
          return (_UNKNOWN **)LastWokenThread::Set(*(_QWORD *)(v14 + 16), 1LL, 0LL);
      }
    }
  }
  else if ( a3 == 3 )
  {
    v15 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v16 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v15 = 0;
    }
    if ( v16 || v15 )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v18) = v15;
      LOBYTE(v19) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 69152),
        5,
        4,
        80,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    return (_UNKNOWN **)NotifyShell::ArrangementCompleted(a1, a5, 2);
  }
  return result;
}
