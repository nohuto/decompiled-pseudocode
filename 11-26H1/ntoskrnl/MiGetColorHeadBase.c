/*
 * XREFs of MiGetColorHeadBase @ 0x14041C860
 * Callers:
 *     MiWalkAllFreeZeroLists @ 0x14041C710 (MiWalkAllFreeZeroLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetColorHeadBase(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // eax
  __int64 v6; // rdx

  v4 = WORD1(a2) & 3;
  v5 = ((unsigned int)a2 >> 15) & 1;
  if ( (unsigned __int8)byte_140E2D898 > 1u )
    v6 = (a2 >> 8) & 1;
  else
    v6 = 0LL;
  return *(_QWORD *)(a1 + 8 * (a4 + ((unsigned __int64)v4 << 7) + 3 * (v6 + 2 * (a3 + 2LL * v5))) + 800);
}
