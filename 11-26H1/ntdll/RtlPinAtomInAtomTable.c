/*
 * XREFs of RtlPinAtomInAtomTable @ 0x18013F1F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockAtomTable @ 0x180001750 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180001780 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

NTSTATUS __cdecl RtlPinAtomInAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v5; // ebx
  __int64 v6; // rax
  NTSTATUS v7; // r10d
  __int64 v8; // rax

  if ( !RtlpLockAtomTable((__int64)AtomTableHandle) )
    return -1073741811;
  v5 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v5 = 0;
  }
  else
  {
    v6 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTableHandle, Atom & 0x3FFF);
    if ( v6 && *(_WORD *)(v6 + 10) == Atom )
    {
      v8 = v6 + 12;
      if ( v8 )
      {
        v5 = v7;
        *(_WORD *)(v8 + 2) |= 1u;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
  return v5;
}
