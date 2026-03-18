/*
 * XREFs of ?efWorldLength@STYLER@pathwide@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1400BF940
 * Callers:
 *     ?vNextStyleEvent@STYLER@pathwide@@QEAAXXZ @ 0x1400A5EEC (-vNextStyleEvent@STYLER@pathwide@@QEAAXXZ.c)
 *     ?vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400C03B8 (-vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 * Callees:
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1400BFE30 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 */

EFLOAT *__fastcall pathwide::STYLER::efWorldLength(__int64 a1, EFLOAT *a2, __int64 a3)
{
  int v4; // ecx
  float v5; // xmm2_4
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  EXFORMOBJ::bXform((EXFORMOBJ *)(a1 + 808), (const struct _VECTORFX *)&v7, (struct _VECTORL *)&v7, 1uLL);
  v4 = HIDWORD(v7);
  *(_DWORD *)a2 = 0;
  if ( __PAIR64__(v4, v7) )
  {
    v5 = (float)(int)v7;
    *(float *)a2 = (float)(int)v7;
    *(float *)a2 = (float)((float)v4 * (float)v4) + (float)(v5 * *(float *)a2);
    EFLOAT::vSqrt(a2);
  }
  else
  {
    *(_DWORD *)a2 = FP_0_0;
  }
  return a2;
}
