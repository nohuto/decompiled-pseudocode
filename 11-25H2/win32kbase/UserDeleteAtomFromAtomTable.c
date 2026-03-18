/*
 * XREFs of UserDeleteAtomFromAtomTable @ 0x14009D060
 * Callers:
 *     RealInternalRemoveProp @ 0x14009CA10 (RealInternalRemoveProp.c)
 *     DeleteStringPropertyAtoms @ 0x14009CB60 (DeleteStringPropertyAtoms.c)
 *     UserDeleteAtom @ 0x14009D020 (UserDeleteAtom.c)
 * Callees:
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 */

__int64 __fastcall UserDeleteAtomFromAtomTable(PRTL_ATOM_TABLE AtomTable, __int64 a2)
{
  RTL_ATOM v2; // bx
  __int64 v4; // rdx
  __int64 v5; // rcx
  NTSTATUS v6; // eax

  v2 = a2;
  if ( (unsigned __int16)a2 >= *(_WORD *)(W32GetUserSessionState(AtomTable, a2) + 41320)
    && v2 <= *(_WORD *)(W32GetUserSessionState(v5, v4) + 41322) )
  {
    return 0LL;
  }
  v6 = RtlDeleteAtomFromAtomTable(AtomTable, v2);
  if ( v6 >= 0 )
    return 0LL;
  SetLastNtError((unsigned int)v6);
  return v2;
}
