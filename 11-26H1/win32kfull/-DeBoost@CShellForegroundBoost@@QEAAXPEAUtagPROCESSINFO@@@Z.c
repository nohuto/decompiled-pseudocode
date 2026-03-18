/*
 * XREFs of ?DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A0F4C
 * Callers:
 *     ?Apply@ShellForegroundBoost@@YAXPEAUtagPROCESSINFO@@_N@Z @ 0x1401A1B24 (-Apply@ShellForegroundBoost@@YAXPEAUtagPROCESSINFO@@_N@Z.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsShellProcess @ 0x1401A1AF8 (IsShellProcess.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A4B68 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CShellForegroundBoost::DeBoost(CShellForegroundBoost *this, struct tagPROCESSINFO *a2)
{
  __int64 v4; // rcx
  struct tagPROCESSINFO *ProcessInfo; // rbp
  char v6; // si
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  if ( !(unsigned int)IsShellProcess(a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 137LL);
  W32AcquirePushLockExclusiveEx(this, 0);
  ProcessInfo = CProcessAsPid::GetProcessInfo((CShellForegroundBoost *)((char *)this + 8));
  if ( ProcessInfo )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (v4 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v4 & 2) == 0)
      || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v6 = 0;
    }
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v4, WPP_GLOBAL_Control);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        2,
        12,
        (__int64)&WPP_3e908cb0f1113058c6c07127d1e4a5fc_Traceguids);
    }
    if ( a2 != ProcessInfo )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 145LL);
    ForegroundBoost::SetForegroundPriority(ProcessInfo, 0LL, 4LL);
  }
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
