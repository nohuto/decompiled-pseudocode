/*
 * XREFs of ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1402DC310
 * Callers:
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1402C4D20 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402E8874 (-SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1401D6B3C (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

unsigned int *__fastcall NotifyShell::WindowSizingCompleted(__int64 *a1, unsigned int a2, int a3)
{
  char v3; // si
  __int64 v4; // rcx
  bool v5; // bl
  unsigned int *result; // rax
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  v3 = (char)a1;
  anonymous_namespace_::NotifyShellSimplePayload(*a1, 7, a3, a2, 0);
  v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v4, WPP_GLOBAL_Control);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v5;
    return (unsigned int *)WPP_RECORDER_AND_TRACE_SF_q(
                             *((_QWORD *)WPP_GLOBAL_Control + 3),
                             v10,
                             v9,
                             *(_QWORD *)(UserSessionState + 69152),
                             4,
                             1,
                             24,
                             (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
                             v3);
  }
  return result;
}
