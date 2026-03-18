/*
 * XREFs of ?vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400C03B8
 * Callers:
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400A590C (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400A6614 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 * Callees:
 *     bFToL @ 0x1400A4410 (bFToL.c)
 *     ?efWorldLength@STYLER@pathwide@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1400BF940 (-efWorldLength@STYLER@pathwide@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 */

void __fastcall pathwide::WIDENER::vVecSquareCompute(pathwide::WIDENER *this, struct pathwide::LINEDATA *a2)
{
  float v3; // xmm6_4
  float v4; // xmm0_4
  float v5; // xmm6_4
  int v6; // ebx
  double v7; // xmm0_8
  double v8; // xmm0_8
  unsigned int v9; // r8d
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((float *)this + 323);
  v4 = *(float *)pathwide::STYLER::efWorldLength((__int64)this, (EFLOAT *)&v10, *((_QWORD *)a2 + 6));
  if ( v4 == 0.0 )
    v5 = FP_0_0;
  else
    v5 = v3 / v4;
  v6 = *((_DWORD *)a2 + 13);
  *(_QWORD *)&v7 = COERCE_UNSIGNED_INT((float)*((int *)a2 + 12));
  *(float *)&v7 = *(float *)&v7 * v5;
  bFToL(v7, (int *)a2 + 14, 6u);
  *(_QWORD *)&v8 = COERCE_UNSIGNED_INT((float)v6);
  *(float *)&v8 = *(float *)&v8 * v5;
  bFToL(v8, (int *)a2 + 15, v9);
  *(_DWORD *)a2 |= 2u;
}
