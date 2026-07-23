/*
 * XREFs of MiResidentPageDangleFree @ 0x1403CD5CC
 * Callers:
 *     MiFreeContiguousPages @ 0x1403CD758 (MiFreeContiguousPages.c)
 *     MiFreeMdlPageRun @ 0x1403CE04C (MiFreeMdlPageRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiResidentPageDangleFree(__int64 a1, int a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = v2 + 48 * MiPageSizes[a2];
  while ( 1 )
  {
    if ( v2 >= v3 )
      return 1LL;
    if ( (unsigned __int16)*(_DWORD *)(v2 + 32) != 2 )
      break;
    v2 += 48LL;
  }
  return 0LL;
}
