/*
 * XREFs of ?_RecordParentPidLegacyPolicy@CForegroundLaunch@@AEAAXPEAX@Z @ 0x1401A4690
 * Callers:
 *     ?TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1402140B4 (-TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CForegroundLaunch::_RecordParentPidLegacyPolicy(CForegroundLaunch *this, void *a2)
{
  char v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rcx

  if ( !*((_BYTE *)this + 416) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1401LL);
  if ( *((_BYTE *)this + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1402LL);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      2,
      83,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
      (char)a2);
  }
  v9 = MEMORY[0xFFFFF78000000014];
  v10 = 2LL * *((unsigned int *)this + 22);
  *((_QWORD *)this + v10 + 1) = a2;
  *((_QWORD *)this + v10 + 2) = v9;
  *((_DWORD *)this + 22) = (*((_DWORD *)this + 22) + 1) % 5u;
}
