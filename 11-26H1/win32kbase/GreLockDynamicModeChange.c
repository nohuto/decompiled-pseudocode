/*
 * XREFs of GreLockDynamicModeChange @ 0x14019CD20
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C7268 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreLockDynamicModeChange(__int64 a1)
{
  __int64 SessionState; // rax
  int v2; // edx
  int v3; // r8d

  SessionState = W32GetSessionState(a1);
  return GreAcquireSemaphore<1,>(*(__int64 **)(SessionState + 88), v2, v3);
}
