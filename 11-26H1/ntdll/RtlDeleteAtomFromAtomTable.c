/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x1800011F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockAtomTable @ 0x180001750 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180001780 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpDereferenceAtom @ 0x1800017BC (RtlpDereferenceAtom.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

NTSTATUS __cdecl RtlDeleteAtomFromAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  NTSTATUS v6; // r10d

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  v4 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, Atom & 0x3FFF);
    if ( v5 && *(_WORD *)(v5 + 10) == Atom && v5 != -12 )
    {
      v4 = v6;
      if ( (*(_BYTE *)(v5 + 14) & 1) != 0 )
        v4 = 1073741849;
      else
        RtlpDereferenceAtom(v5, v5 + 12, AtomTableHandle);
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
  return v4;
}
