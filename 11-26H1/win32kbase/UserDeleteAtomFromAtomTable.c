/*
 * XREFs of UserDeleteAtomFromAtomTable @ 0x14013F470
 * Callers:
 *     RealInternalRemoveProp @ 0x1400485B0 (RealInternalRemoveProp.c)
 *     DeleteStringPropertyAtoms @ 0x1401AAE70 (DeleteStringPropertyAtoms.c)
 * Callees:
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 */

__int64 __fastcall UserDeleteAtomFromAtomTable(PRTL_ATOM_TABLE AtomTable, int a2, int a3)
{
  RTL_ATOM v3; // bx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // eax

  v3 = a2;
  if ( (unsigned __int16)a2 >= *(_WORD *)(W32GetUserSessionState((_DWORD)AtomTable, a2, a3) + 41360)
    && v3 <= *(_WORD *)(W32GetUserSessionState(v6, v5, v7) + 41362) )
  {
    return 0LL;
  }
  v8 = RtlDeleteAtomFromAtomTable(AtomTable, v3);
  if ( v8 >= 0 )
    return 0LL;
  SetLastNtError(v8);
  return v3;
}
