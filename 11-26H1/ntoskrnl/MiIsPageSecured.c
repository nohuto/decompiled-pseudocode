/*
 * XREFs of MiIsPageSecured @ 0x1405328B8
 * Callers:
 *     MiCopySinglePage @ 0x14033B248 (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x1406EF388 (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x1406F5C68 (MiAddNonSecuredPagesToDump.c)
 *     MiFilterCrashDumpPte @ 0x1406F6440 (MiFilterCrashDumpPte.c)
 * Callees:
 *     MiIsFreeSlabPage @ 0x1404C1F3C (MiIsFreeSlabPage.c)
 *     MiGetSecurePageState @ 0x140531F30 (MiGetSecurePageState.c)
 */

__int64 __fastcall MiIsPageSecured(__int64 a1)
{
  unsigned int v2; // r9d
  unsigned __int64 v3; // r10

  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) != 3 || *(__int64 *)(a1 + 40) < 0 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return (MiGetSecurePageState(a1) & 0x50) != 0x50;
  if ( (MiFlags & 0x10000) == 0 )
    return 0LL;
  if ( MiIsFreeSlabPage(a1) && v3 == -2LL )
    return 1LL;
  if ( v3 > 0xFFFFF6BFFFFFFF78uLL )
    return 0LL;
  LOBYTE(v2) = v3 >= 0xFFFFF68000000000uLL;
  return v2;
}
