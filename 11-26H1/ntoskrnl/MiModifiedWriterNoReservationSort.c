/*
 * XREFs of MiModifiedWriterNoReservationSort @ 0x1404473B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiModifiedWriterNoReservationSort(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  unsigned __int64 v4; // r8

  v2 = 48LL * *a1 - 0x220000000000LL;
  v3 = 6LL * *a2;
  v4 = *(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFLL;
  if ( v4 < (*(_QWORD *)(8 * v3 - 0x220000000000LL + 40) & 0xFFFFFFFFFFuLL) )
    return 0xFFFFFFFFLL;
  if ( v4 <= (*(_QWORD *)(8 * v3 - 0x220000000000LL + 40) & 0xFFFFFFFFFFuLL) )
  {
    if ( (*(_QWORD *)(v2 + 8) | 0x8000000000000000uLL) >= (*(_QWORD *)(8 * v3 - 0x220000000000LL + 8) | 0x8000000000000000uLL) )
      return (*(_QWORD *)(v2 + 8) | 0x8000000000000000uLL) > (*(_QWORD *)(8 * v3 - 0x220000000000LL + 8) | 0x8000000000000000uLL);
    return 0xFFFFFFFFLL;
  }
  return 1LL;
}
