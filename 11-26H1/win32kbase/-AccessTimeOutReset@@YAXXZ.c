/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1400DF600
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400DFA30 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1401B9CA4 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1401BB43C (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1401C0190 (ApiSetEditionKillAccessibilityTimer.c)
 */

void __fastcall AccessTimeOutReset(int a1, int a2, int a3)
{
  int v3; // ecx
  __int64 UserSessionState; // rbx
  int v5; // r8d
  __int64 v6; // rdx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v6 = *(_QWORD *)(UserSessionState + 20936);
  if ( v6 )
    ApiSetEditionKillAccessibilityTimer();
  if ( (*(_DWORD *)(W32GetUserSessionState(v3, v6, v5) + 20924) & 1) != 0 )
    *(_QWORD *)(UserSessionState + 20936) = ApiSetEditionSetAccessibilityTimer(
                                              0LL,
                                              *(unsigned int *)(UserSessionState + 20928),
                                              xxxAccessTimeOutTimer);
}
