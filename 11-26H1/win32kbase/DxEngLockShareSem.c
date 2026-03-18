/*
 * XREFs of DxEngLockShareSem @ 0x1401F9D00
 * Callers:
 *     ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1401F9BF0 (-W32kAcquireDynamicModeChangeLockShared@@YAXXZ.c)
 * Callees:
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B1F0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall DxEngLockShareSem(__int64 a1)
{
  __int64 SessionState; // rax
  __int64 v2; // rdx
  int v3; // r8d

  SessionState = W32GetSessionState(a1);
  GreAcquireSemaphoreShared<1,>(*(_DWORD **)(SessionState + 88), v2, v3);
  return 1LL;
}
