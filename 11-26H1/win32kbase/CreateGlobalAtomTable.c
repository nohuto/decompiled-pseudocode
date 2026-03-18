/*
 * XREFs of CreateGlobalAtomTable @ 0x140148EE0
 * Callers:
 *     ?GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z @ 0x1401CF10C (-GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CreateGlobalAtomTable(PRTL_ATOM_TABLE *AtomTable)
{
  NTSTATUS result; // eax
  unsigned int i; // ebx
  NTSTATUS v4; // eax
  struct _RTL_ATOM_TABLE *v5; // rcx
  NTSTATUS v6; // edi
  USHORT Atom; // [rsp+38h] [rbp+10h] BYREF

  Atom = 0;
  result = RtlCreateAtomTable(0, AtomTable);
  if ( result >= 0 )
  {
    for ( i = 0; i < 0x19; ++i )
    {
      v4 = RtlAddAtomToAtomTable(*AtomTable, off_14025BA90[i], &Atom);
      v5 = *AtomTable;
      v6 = v4;
      if ( v4 < 0 )
      {
        RtlDestroyAtomTable(v5);
        return v6;
      }
      result = RtlPinAtomInAtomTable(v5, Atom);
    }
  }
  return result;
}
