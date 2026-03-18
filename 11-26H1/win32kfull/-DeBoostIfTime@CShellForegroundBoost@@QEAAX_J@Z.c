/*
 * XREFs of ?DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z @ 0x1400FA230
 * Callers:
 *     ?OnDaemonTimer@ShellForegroundBoost@@YAXXZ @ 0x1400FA1F0 (-OnDaemonTimer@ShellForegroundBoost@@YAXXZ.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A4B68 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 */

void __fastcall CShellForegroundBoost::DeBoostIfTime(CShellForegroundBoost *this, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct tagPROCESSINFO *ProcessInfo; // rbp
  bool v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx

  W32AcquirePushLockExclusiveEx(this, 0);
  v4 = *((_QWORD *)this + 3);
  if ( v4 && a2 > v4 )
  {
    ProcessInfo = CProcessAsPid::GetProcessInfo((CShellForegroundBoost *)((char *)this + 8));
    if ( ProcessInfo )
    {
      v7 = 0;
      if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
      {
        v5 = *((unsigned int *)WPP_GLOBAL_Control + 11);
        if ( (v5 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
          v7 = 1;
      }
      v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(v5, WPP_GLOBAL_Control);
        LOBYTE(v10) = v8;
        LOBYTE(v11) = v7;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v10,
          *(_QWORD *)(UserSessionState + 69152),
          4,
          2,
          13,
          (__int64)&WPP_3e908cb0f1113058c6c07127d1e4a5fc_Traceguids);
      }
      ForegroundBoost::SetForegroundPriority(ProcessInfo, 0LL, 4LL);
    }
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
