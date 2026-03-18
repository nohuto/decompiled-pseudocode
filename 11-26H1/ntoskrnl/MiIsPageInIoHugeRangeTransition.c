/*
 * XREFs of MiIsPageInIoHugeRangeTransition @ 0x14031388C
 * Callers:
 *     MiSetIoPfnNodeCellsActive @ 0x140312050 (MiSetIoPfnNodeCellsActive.c)
 *     MiDereferenceIoPages @ 0x1403132CC (MiDereferenceIoPages.c)
 *     MiDereferenceIoHugeRange @ 0x1406EB388 (MiDereferenceIoHugeRange.c)
 *     MiDeleteStaleCacheMaps @ 0x1406F3AF0 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     MiIsPageInHugePfn @ 0x1403138E0 (MiIsPageInHugePfn.c)
 */

__int64 __fastcall MiIsPageInIoHugeRangeTransition(__int64 a1)
{
  int IsPageInHugePfn; // eax
  unsigned __int64 v2; // rdx
  unsigned int v3; // r8d

  IsPageInHugePfn = MiIsPageInHugePfn(a1, a1);
  v3 = 0;
  if ( !IsPageInHugePfn )
    return 0LL;
  LOBYTE(v3) = (*(_QWORD *)(*(_QWORD *)((char *)&stru_140E2EB88.116 + 4) + 8 * ((v2 >> 18) & 0x3FFFFF)) & 7) == 5;
  return v3;
}
