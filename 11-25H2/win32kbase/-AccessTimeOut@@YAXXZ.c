/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x14011E280
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1400FAA64 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010AA14 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall AccessTimeOut(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(UserSessionState + 20904) )
  {
    v6 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20892);
    if ( (v6 & 1) != 0 )
    {
      v7 = W32GetUserSessionState(v6, v5);
      *(_QWORD *)(UserSessionState + 20904) = ApiSetEditionSetAccessibilityTimer(
                                                *(_QWORD *)(UserSessionState + 20904),
                                                *(unsigned int *)(v7 + 20896),
                                                (__int64)xxxAccessTimeOutTimer,
                                                1u);
    }
  }
}
