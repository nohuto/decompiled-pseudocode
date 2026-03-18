/*
 * XREFs of ?StopFilterKeysTimers@@YAXXZ @ 0x1401F8F70
 * Callers:
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A8618 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A9A4 (ApiSetEditionKillAccessibilityTimer.c)
 */

void __fastcall StopFilterKeysTimers(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(UserSessionState + 20496);
  if ( v4 )
  {
    ApiSetEditionKillAccessibilityTimer(v2, v4);
    *(_QWORD *)(UserSessionState + 20496) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v2, v4) + 20504) )
  {
    v7 = W32GetUserSessionState(v6, v5);
    ApiSetEditionKillAccessibilityTimer(v8, *(_QWORD *)(v7 + 20504));
    *(_QWORD *)(W32GetUserSessionState(v10, v9) + 20504) = 0LL;
  }
  *(_BYTE *)(W32GetUserSessionState(v6, v5) + 21848) = 0;
  *(_BYTE *)(W32GetUserSessionState(v12, v11) + 21844) = 0;
}
