/*
 * XREFs of ?_RecordParentPidLegacyPolicy@CForegroundLaunch@@AEAAXPEAX@Z @ 0x140291028
 * Callers:
 *     ?TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028F334 (-TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1328);
  if ( *((_BYTE *)this + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1329);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v4 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      2,
      78,
      (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
      (char)a2);
  }
  v9 = MEMORY[0xFFFFF78000000014];
  v10 = 2LL * *((unsigned int *)this + 22);
  *((_QWORD *)this + v10 + 1) = a2;
  *((_QWORD *)this + v10 + 2) = v9;
  *((_DWORD *)this + 22) = (*((_DWORD *)this + 22) + 1) % 5u;
}
