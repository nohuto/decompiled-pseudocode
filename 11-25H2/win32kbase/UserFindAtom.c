/*
 * XREFs of UserFindAtom @ 0x14009E210
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 */

__int64 __fastcall UserFindAtom(PWSTR AtomName, __int64 a2)
{
  struct _RTL_ATOM_TABLE *v3; // rcx
  NTSTATUS v4; // eax
  USHORT Atom; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(struct _RTL_ATOM_TABLE **)(W32GetUserSessionState(AtomName, a2) + 41376);
  Atom = 0;
  v4 = RtlLookupAtomInAtomTable(v3, AtomName, &Atom);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741772 )
    SetLastNtError(v4);
  return Atom;
}
