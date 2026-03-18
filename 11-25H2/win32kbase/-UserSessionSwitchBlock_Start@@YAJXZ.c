/*
 * XREFs of ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B6C6C
 * Callers:
 *     PowerOnMonitor @ 0x14007FA80 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1400E1480 (PowerOffMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1401B27F4 (UserPowerStateCallout.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1960 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1A28 (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 UserSessionSwitchBlock_Start(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // edi
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rcx
  int ActiveConsoleId; // ebx
  char v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+38h] [rbp+10h]

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  v2 = 0;
  if ( v9 && *(_DWORD *)(W32GetUserGdiSessionState(v1) + 36) )
  {
    v10 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 228);
  }
  UserSessionState = W32GetUserSessionState(v1, v0);
  v5 = UserSessionState;
  v6 = *(unsigned int *)(UserSessionState + 68856);
  if ( (int)v6 <= 0 )
  {
    if ( *(_DWORD *)(W32GetUserGdiSessionState(v6) + 36)
      || (ActiveConsoleId = RtlGetActiveConsoleId(), ActiveConsoleId != (unsigned int)W32GetCurrentWin32kSessionId())
      || *(_DWORD *)(v5 + 68852) )
    {
      v2 = -1073086428;
    }
    else
    {
      ++*(_DWORD *)(v5 + 68856);
      *(_DWORD *)(v5 + 68852) = 1;
    }
  }
  else
  {
    *(_DWORD *)(UserSessionState + 68856) = v6 + 1;
  }
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9, v4);
  return v2;
}
