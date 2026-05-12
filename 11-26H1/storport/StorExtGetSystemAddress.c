/*
 * XREFs of StorExtGetSystemAddress @ 0x140041990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall StorExtGetSystemAddress(__int64 a1)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v3 = 96LL;
  if ( *(_BYTE *)(a1 + 2) != 40 )
    v3 = 48LL;
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + a1) + 104LL);
  if ( !v4 )
    return 0LL;
  if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
    return *(PVOID *)(v4 + 24);
  return MmMapLockedPagesSpecifyCache((PMDL)v4, 0, MmCached, 0LL, 0, 0x40000010u);
}
