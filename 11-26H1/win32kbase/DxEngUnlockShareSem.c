/*
 * XREFs of DxEngUnlockShareSem @ 0x140138EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001AA0C (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall DxEngUnlockShareSem(__int64 a1)
{
  __int64 SessionState; // rax
  __int64 v2; // rdx
  int v3; // r8d

  SessionState = W32GetSessionState(a1);
  GreReleaseSemaphoreShared<1,>(*(__int64 **)(SessionState + 88), v2, v3);
  return 1LL;
}
