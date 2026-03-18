/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x14015C610
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x140123CFC (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1401BB43C (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall AccessTimeOut(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  __int64 UserSessionState; // rbx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( *(_QWORD *)(UserSessionState + 20936) )
  {
    v8 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v6) + 20924);
    if ( (v8 & 1) != 0 )
    {
      v10 = W32GetUserSessionState(v8, v7, v9);
      *(_QWORD *)(UserSessionState + 20936) = ApiSetEditionSetAccessibilityTimer(
                                                *(_QWORD *)(UserSessionState + 20936),
                                                *(unsigned int *)(v10 + 20928),
                                                xxxAccessTimeOutTimer);
    }
  }
}
