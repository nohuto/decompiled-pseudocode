/*
 * XREFs of UserDeleteAtom @ 0x14009D020
 * Callers:
 *     <none>
 * Callees:
 *     UserDeleteAtomFromAtomTable @ 0x14009D060 (UserDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall UserDeleteAtom(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return UserDeleteAtomFromAtomTable(*(PRTL_ATOM_TABLE *)(UserSessionState + 41376));
}
