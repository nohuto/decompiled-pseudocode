/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1400A6CD0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A57B0 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x14019D2A0 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A9A4 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010AA14 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall AccessTimeOutReset(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rbx
  __int64 v4; // rdx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(UserSessionState + 20904);
  if ( v4 )
    ApiSetEditionKillAccessibilityTimer();
  if ( (*(_DWORD *)(W32GetUserSessionState(v2, v4) + 20892) & 1) != 0 )
    *(_QWORD *)(UserSessionState + 20904) = ApiSetEditionSetAccessibilityTimer(
                                              0LL,
                                              *(unsigned int *)(UserSessionState + 20896),
                                              xxxAccessTimeOutTimer);
}
