/*
 * XREFs of KeCpuSetQueryUnparkRecommendation @ 0x14025DFFC
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeCpuSetQueryUnparkRecommendation(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v3; // bp
  int v5; // edi
  unsigned __int16 v6; // dx
  __int64 v7; // r11
  unsigned __int64 v8; // r8

  v3 = KiActiveGroups;
  v5 = 0;
  memset_0(a2 + 4, 0, 8LL * *a2);
  v6 = 0;
  for ( *a2 = 1; v6 < v3; ++v6 )
  {
    if ( v6 >= *a1 )
      continue;
    v7 = *(_QWORD *)&a1[4 * v6 + 4];
    if ( !v7 )
      continue;
    while ( (KiCpuSetSequence & 1) != 0 )
      _mm_pause();
    v8 = v7 & ~KiSystemAllowedCpuSets[2 * v6];
    if ( !v8 )
      continue;
    if ( *a2 <= v6 )
    {
      if ( a2[1] <= v6 )
        goto LABEL_12;
      *a2 = v6 + 1;
    }
    *(_QWORD *)&a2[4 * v6 + 4] |= v8;
LABEL_12:
    v5 += __popcnt(v8);
  }
  return (unsigned __int16)v5;
}
