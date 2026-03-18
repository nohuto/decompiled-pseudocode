/*
 * XREFs of ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x140229F58
 * Callers:
 *     InitKeyboard @ 0x1401597CC (InitKeyboard.c)
 *     InitKeyboardState @ 0x140229F40 (InitKeyboardState.c)
 *     ClearKeyboardStates @ 0x140247ACC (ClearKeyboardStates.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearCachedHotkeyModifiers(__int64 a1, __int64 a2)
{
  _DWORD *UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2);
  UserSessionState[3510] = 0;
  UserSessionState[3511] = 0;
  UserSessionState[3503] = 0;
  UserSessionState[3502] = 0;
  *(_DWORD *)(W32GetUserSessionState(v4, v3) + 63432) = 0;
}
