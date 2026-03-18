/*
 * XREFs of ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x140164A9C
 * Callers:
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400E5470 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CWinEventNoopDeferral *__fastcall CWinEventNoopDeferral::CWinEventNoopDeferral(
        CWinEventNoopDeferral *this,
        int a2,
        int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r8d
  __int64 UserSessionState; // rax

  if ( *(_DWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 70592)
    && !(unsigned int)AtomicExecutionCheck::GetCount(v5, v4) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1000LL);
  }
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  ++*(_DWORD *)(UserSessionState + 70592);
  return this;
}
