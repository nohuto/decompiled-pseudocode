/*
 * XREFs of MiGetSlabSecondaryStandbyList @ 0x1402AC920
 * Callers:
 *     MiReplaceSecondaryListStandbyPage @ 0x1402AC370 (MiReplaceSecondaryListStandbyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSlabSecondaryStandbyList(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6)
{
  __int64 v6; // r9
  unsigned __int8 v7; // al
  unsigned __int64 v9; // rdx

  v6 = *(_QWORD *)(a1 + 16) + 56320LL * a4;
  if ( a3 == 8 )
  {
    v9 = (__int64)((unsigned __int128)((a2 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v7 = *(_BYTE *)(qword_140E3D240 + 2 * (((v9 >> 63) + v9) >> 9) + 1) & 0x7F;
  }
  else
  {
    v7 = 0;
  }
  *a6 = v7;
  return *(_QWORD *)(232LL * a3 + v6 + 14824) + 88 * (a5 + 8LL * v7);
}
