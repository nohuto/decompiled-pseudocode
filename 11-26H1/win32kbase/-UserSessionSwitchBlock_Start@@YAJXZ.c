/*
 * XREFs of ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401116D8
 * Callers:
 *     UserPowerStateCallout @ 0x1401118A8 (UserPowerStateCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 *     PowerOffMonitor @ 0x1401D62C0 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1401D6660 (PowerOnMonitor.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140111814 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 UserSessionSwitchBlock_Start(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // edi
  int ActiveConsoleId; // edi
  __int64 v13; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+38h] [rbp+10h]

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  if ( v14 && *(_DWORD *)(W32GetUserGdiSessionState() + 36) )
  {
    v15 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 227LL);
  }
  UserSessionState = W32GetUserSessionState(v1, v0, v2);
  v7 = UserSessionState;
  v8 = *(_DWORD *)(UserSessionState + 68848);
  if ( v8 > 0 )
  {
    v9 = (unsigned int)(v8 + 1);
    *(_DWORD *)(UserSessionState + 68848) = v9;
LABEL_4:
    v10 = 0;
    goto LABEL_5;
  }
  if ( !*(_DWORD *)(W32GetUserGdiSessionState() + 36) )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId == (unsigned int)W32GetCurrentWin32kSessionId(v13) && !*(_DWORD *)(v7 + 68844) )
    {
      ++*(_DWORD *)(v7 + 68848);
      *(_DWORD *)(v7 + 68844) = 1;
      goto LABEL_4;
    }
  }
  v10 = -1073086428;
LABEL_5:
  if ( !v14 )
    UserSessionSwitchLeaveCritWithNonPaged(v9, v4, v5, v6);
  return v10;
}
