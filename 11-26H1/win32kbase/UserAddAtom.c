/*
 * XREFs of UserAddAtom @ 0x14018FF80
 * Callers:
 *     <none>
 * Callees:
 *     UserAddAtomToAtomTable @ 0x14018FFC0 (UserAddAtomToAtomTable.c)
 */

__int64 __fastcall UserAddAtom(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return UserAddAtomToAtomTable(*(void **)(UserSessionState + 41416));
}
