/*
 * XREFs of UserFindAtom @ 0x14011FF30
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 */

__int64 __fastcall UserFindAtom(PWSTR AtomName, int a2, int a3)
{
  __int64 UserSessionState; // rax
  NTSTATUS v5; // eax
  USHORT Atom; // [rsp+38h] [rbp+10h] BYREF

  Atom = 0;
  UserSessionState = W32GetUserSessionState((_DWORD)AtomName, a2, a3);
  v5 = RtlLookupAtomInAtomTable(*(PRTL_ATOM_TABLE *)(UserSessionState + 41416), AtomName, &Atom);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741772 )
    SetLastNtError(v5);
  return Atom;
}
