/*
 * XREFs of RtlpDereferenceAtom @ 0x14049E904
 * Callers:
 *     RtlDestroyLowBoxAtoms @ 0x14049E82C (RtlDestroyLowBoxAtoms.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1409FCD10 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlpFreeAllAtom @ 0x14049E990 (RtlpFreeAllAtom.c)
 *     RtlpFreeAtom @ 0x1409B8DD4 (RtlpFreeAtom.c)
 */

char __fastcall RtlpDereferenceAtom(__int64 a1, __int64 *a2, __int64 a3)
{
  bool v5; // zf
  __int64 *v6; // rcx
  __int64 **v7; // rax

  if ( (*((_BYTE *)a2 + 22) & 1) != 0 )
    return 0;
  v5 = (*((_WORD *)a2 + 10))-- == 1;
  if ( !v5 )
    return 0;
  if ( a2 != (__int64 *)(a1 + 16) )
  {
    v6 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v7 = (__int64 **)a2[1], *v7 != a2) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = (__int64)v7;
    RtlpFreeAtom(a2);
    if ( (*(_BYTE *)(a1 + 38) & 1) != 0 )
      return 0;
    v5 = (*(_WORD *)(a1 + 36))-- == 1;
    if ( !v5 )
      return 0;
  }
  RtlpFreeAllAtom(a1, a3);
  return 1;
}
