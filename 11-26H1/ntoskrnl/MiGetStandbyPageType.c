/*
 * XREFs of MiGetStandbyPageType @ 0x1402CBE80
 * Callers:
 *     MiRebuildStandbyLookasideList @ 0x1402CB3C4 (MiRebuildStandbyLookasideList.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402FC2A0 (MiFindSuitableLookasideReplacement.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 */

__int64 __fastcall MiGetStandbyPageType(ULONG_PTR a1)
{
  __int64 v1; // rcx

  if ( a1 >= qword_140E347B0 && a1 < qword_140E347B0 + 2048 )
    return 1LL;
  v1 = 48 * a1 - 0x220000000000LL;
  if ( (*(_DWORD *)(v1 + 32) & 0x8000000) != 0 && (unsigned int)MiGetPfnSlabType(v1) == 9 )
    return 2LL;
  else
    return 0LL;
}
