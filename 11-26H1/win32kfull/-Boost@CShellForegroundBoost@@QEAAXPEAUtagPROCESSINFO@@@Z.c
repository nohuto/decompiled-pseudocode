/*
 * XREFs of ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A12BC
 * Callers:
 *     ?Apply@ShellForegroundBoost@@YAXPEAUtagPROCESSINFO@@_N@Z @ 0x1401A1B24 (-Apply@ShellForegroundBoost@@YAXPEAUtagPROCESSINFO@@_N@Z.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Store@CProcessAsPid@@QEAA_NPEAU_EPROCESS@@@Z @ 0x1401A0C14 (-Store@CProcessAsPid@@QEAA_NPEAU_EPROCESS@@@Z.c)
 *     ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x1401A0C88 (-IsValid@CProcessAsPid@@QEBA_NXZ.c)
 *     IsShellProcess @ 0x1401A1AF8 (IsShellProcess.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A4B68 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CShellForegroundBoost::Boost(CShellForegroundBoost *this, struct _EPROCESS **a2)
{
  __int64 v4; // rdx
  char v5; // bp
  bool v6; // r15
  __int64 v7; // rdx
  bool v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx

  if ( !(unsigned int)IsShellProcess(a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 109LL);
  W32AcquirePushLockExclusiveEx(this, 0);
  if ( CProcessAsPid::IsValid((CShellForegroundBoost *)((char *)this + 8)) )
  {
    if ( CProcessAsPid::GetProcessInfo((CShellForegroundBoost *)((char *)this + 8)) != (struct tagPROCESSINFO *)a2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 115LL);
    v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        2,
        10,
        (__int64)&WPP_3e908cb0f1113058c6c07127d1e4a5fc_Traceguids);
    }
  }
  else
  {
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v5 = 0;
    }
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
      LOBYTE(v14) = v6;
      LOBYTE(v15) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(v13 + 69152),
        4,
        2,
        11,
        (__int64)&WPP_3e908cb0f1113058c6c07127d1e4a5fc_Traceguids);
    }
    CProcessAsPid::Store((CShellForegroundBoost *)((char *)this + 8), *a2);
    ForegroundBoost::SetForegroundPriority(a2, 1LL, 4LL);
    *((_QWORD *)this + 3) = MEMORY[0xFFFFF78000000014];
  }
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
