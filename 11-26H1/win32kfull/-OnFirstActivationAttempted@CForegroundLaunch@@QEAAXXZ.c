/*
 * XREFs of ?OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ @ 0x1402527A0
 * Callers:
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x140289CEC (_anonymous_namespace_--RemoveForegroundActivate.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A4B68 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?_AppStarting_Clear@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028B1AC (-_AppStarting_Clear@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CForegroundLaunch::OnFirstActivationAttempted(CForegroundLaunch *this)
{
  __int64 v2; // rcx
  __int128 v3; // rax
  unsigned __int64 v4; // rbx
  int v5; // r15d
  char v6; // di
  bool v7; // si
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  unsigned int i; // esi
  char *v12; // rdi
  __int64 v13; // rdx
  char v14; // si
  bool v15; // r14
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx

  W32AcquirePushLockExclusiveEx(this, 0);
  if ( *((_BYTE *)this + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 614LL);
  *(_QWORD *)&v3 = PsGetCurrentProcessWin32Process(v2);
  v4 = v3;
  if ( (_QWORD)v3 )
  {
    v3 = -(__int128)*(unsigned __int64 *)v3;
    v4 &= *((_QWORD *)&v3 + 1);
  }
  if ( (*(_DWORD *)(v4 + 12) & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 617LL);
  v5 = *(_DWORD *)(v4 + 56);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, *((_QWORD *)&v3 + 1));
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      2,
      37,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
      v5);
  }
  for ( i = 0; i < 0xA; ++i )
  {
    v12 = (char *)this + 32 * i + 96;
    if ( CProcessAsPid::GetProcessInfo((CProcessAsPid *)v12) == v4 )
    {
      if ( *((_DWORD *)v12 + 5) == 1 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v14 = 0;
        }
        v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v14;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v18,
            v17,
            *(_QWORD *)(v16 + 69152),
            4,
            2,
            38,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
            v5);
        }
        ForegroundBoost::SetForegroundPriority(v4, 0LL, 1LL);
        *(_QWORD *)v12 = 0LL;
        *((_QWORD *)v12 + 1) = 0LL;
        *((_QWORD *)v12 + 2) = 0LL;
        *((_QWORD *)v12 + 3) = 0LL;
      }
      break;
    }
  }
  CForegroundLaunch::_AppStarting_Clear(this, (struct tagPROCESSINFO *)v4);
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
