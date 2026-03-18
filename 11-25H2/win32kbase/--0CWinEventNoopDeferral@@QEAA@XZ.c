/*
 * XREFs of ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x1401A5FDC
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400AF090 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CWinEventNoopDeferral *__fastcall CWinEventNoopDeferral::CWinEventNoopDeferral(CWinEventNoopDeferral *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  if ( *(_DWORD *)(W32GetUserSessionState(this, a2) + 70600) && !(unsigned int)AtomicExecutionCheck::GetCount() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1063);
  UserSessionState = W32GetUserSessionState(v4, v3);
  ++*(_DWORD *)(UserSessionState + 70600);
  return this;
}
