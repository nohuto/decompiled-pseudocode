/*
 * XREFs of UserAddAtom @ 0x140160180
 * Callers:
 *     <none>
 * Callees:
 *     UserAddAtomToAtomTable @ 0x14019D6C0 (UserAddAtomToAtomTable.c)
 */

__int64 __fastcall UserAddAtom(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return UserAddAtomToAtomTable(*(void **)(UserSessionState + 41376));
}
