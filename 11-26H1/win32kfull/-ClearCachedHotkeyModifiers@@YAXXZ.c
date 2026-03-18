/*
 * XREFs of ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x140252A18
 * Callers:
 *     InitKeyboardState @ 0x140252A00 (InitKeyboardState.c)
 *     InitKeyboard @ 0x14025E904 (InitKeyboard.c)
 *     ClearKeyboardStates @ 0x1402796E0 (ClearKeyboardStates.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearCachedHotkeyModifiers(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_QWORD *)(UserSessionState + 14032) = 0LL;
  *(_QWORD *)(UserSessionState + 14000) = 0LL;
  *(_DWORD *)(W32GetUserSessionState(v4, v3) + 63416) = 0;
}
