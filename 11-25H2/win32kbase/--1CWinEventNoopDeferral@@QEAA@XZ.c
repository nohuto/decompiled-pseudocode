/*
 * XREFs of ??1CWinEventNoopDeferral@@QEAA@XZ @ 0x140161AC8
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CWinEventNoopDeferral::~CWinEventNoopDeferral(CWinEventNoopDeferral *this, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax

  UserSessionState = W32GetUserSessionState(this, a2);
  v4 = 0LL;
  if ( !*(_DWORD *)(UserSessionState + 70600) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1069LL);
  v5 = W32GetUserSessionState(v4, v3);
  --*(_DWORD *)(v5 + 70600);
}
