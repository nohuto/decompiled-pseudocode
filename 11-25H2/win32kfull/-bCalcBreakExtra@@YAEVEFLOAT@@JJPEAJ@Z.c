/*
 * XREFs of ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1400BFDD0
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400ACAC0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1400BF550 (-bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1400BF9D0 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x140230D24 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 * Callees:
 *     bFToL @ 0x1400A4410 (bFToL.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1401AC65C (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 */

bool __fastcall bCalcBreakExtra(int a1, int a2, unsigned int a3, __int64 a4)
{
  double v7; // xmm0_8
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 0;
  v8 = 0;
  *(_QWORD *)&v7 = COERCE_UNSIGNED_INT((float)a2);
  *(float *)&v7 = *(float *)&v7 * *(float *)&a1;
  bFToL(v7, (int *)&v8, 0);
  return (unsigned int)SafeDivide<long,long,long>(v8, a3, a4) == 0;
}
