/*
 * XREFs of GreLockDynamicModeChange @ 0x14014F2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140088EB8 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreLockDynamicModeChange(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return GreAcquireSemaphore<1,>(*(__int64 **)(SessionState + 88));
}
