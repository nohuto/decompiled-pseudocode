/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1409FCC40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLookupLowBox @ 0x14045ADDC (RtlpLookupLowBox.c)
 *     RtlpLockAtomTable @ 0x1409FCDE0 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x1409FCE80 (RtlpUnlockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1409FCED0 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __cdecl RtlPinAtomInAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  _QWORD *v6; // rax

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
    if ( v5 && *(_WORD *)(v5 + 10) == Atom )
    {
      v6 = RtlpLookupLowBox((__int64)AtomTableHandle, v5, 0);
      if ( v6 )
      {
        v4 = 0;
        *((_WORD *)v6 + 11) |= 1u;
      }
    }
  }
  RtlpUnlockAtomTable(AtomTableHandle);
  return v4;
}
