/*
 * XREFs of sub_140039050 @ 0x140039050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_140039050(__int64 a1)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v3 = *(_BYTE *)(a1 + 2) == 40 ? *(_QWORD *)(a1 + 96) : *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(v3 + 104);
  if ( !v4 )
    return 0LL;
  if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
    return *(PVOID *)(v4 + 24);
  return MmMapLockedPagesSpecifyCache((PMDL)v4, 0, MmCached, 0LL, 0, 0x40000010u);
}
