/*
 * XREFs of ?DeBoostAll@CShellForegroundBoost@@QEAAXXZ @ 0x1401A57F0
 * Callers:
 *     ?OnDaemonTimerRateChanged@ShellForegroundBoost@@YAX_N@Z @ 0x1401A5900 (-OnDaemonTimerRateChanged@ShellForegroundBoost@@YAX_N@Z.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A4B68 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 */

void __fastcall CShellForegroundBoost::DeBoostAll(CShellForegroundBoost *this)
{
  __int64 v2; // rdx
  bool v3; // di
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  unsigned __int64 ProcessInfo; // rax

  W32AcquirePushLockExclusiveEx(this, 0);
  v3 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      2,
      14,
      (__int64)&WPP_3e908cb0f1113058c6c07127d1e4a5fc_Traceguids);
  }
  ProcessInfo = CProcessAsPid::GetProcessInfo((CShellForegroundBoost *)((char *)this + 8));
  if ( ProcessInfo )
    ForegroundBoost::SetForegroundPriority(ProcessInfo, 0LL, 4LL);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
