/*
 * XREFs of GreLockSprite @ 0x1400C5150
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C521C (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreLockSprite(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return GreAcquireSemaphore<6,>(*(_QWORD *)(SessionState + 88));
}
