/*
 * XREFs of ?StopFilterKeysTimers@@YAXXZ @ 0x140212770
 * Callers:
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400DF284 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1401C0190 (ApiSetEditionKillAccessibilityTimer.c)
 */

void __fastcall StopFilterKeysTimers(int a1, int a2, int a3)
{
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v6 = *(_QWORD *)(UserSessionState + 20528);
  if ( v6 )
  {
    ApiSetEditionKillAccessibilityTimer(v3, v6);
    *(_QWORD *)(UserSessionState + 20528) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v3, v6, v5) + 20536) )
  {
    v10 = W32GetUserSessionState(v8, v7, v9);
    ApiSetEditionKillAccessibilityTimer(v11, *(_QWORD *)(v10 + 20536));
    *(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 20536) = 0LL;
  }
  *(_BYTE *)(W32GetUserSessionState(v8, v7, v9) + 21880) = 0;
  *(_BYTE *)(W32GetUserSessionState(v16, v15, v17) + 21876) = 0;
}
