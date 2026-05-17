/*
 * XREFs of RtlpDereferenceAtom @ 0x180037AEC
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180037520 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlpFreeAllAtom @ 0x180037E24 (RtlpFreeAllAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 */

char __fastcall RtlpDereferenceAtom(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 != a1 + 12 )
    RtlpSysVolFree(a2);
  RtlpFreeAllAtom(a1, a3);
  return 1;
}
