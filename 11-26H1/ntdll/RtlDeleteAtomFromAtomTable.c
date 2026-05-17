/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x180037520
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockAtomTable @ 0x180037A80 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180037AB0 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpDereferenceAtom @ 0x180037AEC (RtlpDereferenceAtom.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlDeleteAtomFromAtomTable(__int64 a1, unsigned __int16 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // r10d

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v5 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v5 = 0;
  }
  else
  {
    v6 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    if ( v6 )
    {
      if ( *(_WORD *)(v6 + 10) == a2 )
      {
        v4 = v6 + 12;
        if ( v6 != -12 )
        {
          v5 = v7;
          if ( (*(_BYTE *)(v6 + 14) & 1) != 0 )
            v5 = 1073741849;
          else
            RtlpDereferenceAtom(v6, v4, a1);
        }
      }
    }
  }
  RtlReleaseSRWLockExclusive(a1 + 8, v4);
  return v5;
}
