/*
 * XREFs of RtlpDereferenceAtom @ 0x1800017BC
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x1800011F0 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlpFreeAllAtom @ 0x180001AF4 (RtlpFreeAllAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 */

char __fastcall RtlpDereferenceAtom(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( (a2[2] & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 != (_BYTE *)(a1 + 12) )
    RtlpSysVolFree(a2);
  RtlpFreeAllAtom(a1, a3);
  return 1;
}
