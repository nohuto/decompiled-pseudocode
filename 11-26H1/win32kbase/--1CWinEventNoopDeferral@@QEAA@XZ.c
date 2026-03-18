/*
 * XREFs of ??1CWinEventNoopDeferral@@QEAA@XZ @ 0x1401C4B80
 * Callers:
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CWinEventNoopDeferral::~CWinEventNoopDeferral(CWinEventNoopDeferral *this, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v4; // edx
  int v5; // r8d
  int v6; // ecx
  __int64 v7; // rax

  UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
  v6 = 0;
  if ( !*(_DWORD *)(UserSessionState + 70592) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1006);
  v7 = W32GetUserSessionState(v6, v4, v5);
  --*(_DWORD *)(v7 + 70592);
}
