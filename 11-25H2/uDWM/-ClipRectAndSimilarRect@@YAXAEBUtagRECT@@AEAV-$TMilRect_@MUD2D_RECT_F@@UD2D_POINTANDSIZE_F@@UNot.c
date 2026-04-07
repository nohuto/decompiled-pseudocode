/*
 * XREFs of ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x180020800
 * Callers:
 *     ?AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x180020500 (-AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTA.c)
 * Callees:
 *     ?Width@?$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180020964 (-Width@-$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Height@?$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180020970 (-Height@-$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 */

void __fastcall ClipRectAndSimilarRect(__int64 a1, __int64 a2)
{
  int *v2; // rax
  float *v3; // rdx
  float *v4; // r8
  float v5; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm9_4
  float v8; // xmm3_4
  float v9; // xmm7_4
  float v10; // xmm2_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm2_4

  if ( TMilRect<float,D2D_RECT_F,RectUniqueness::NotNeeded>::Width(a2) > 0.0
    && TMilRect<float,D2D_RECT_F,RectUniqueness::NotNeeded>::Height() > 0.0 )
  {
    v5 = v3[2];
    v6 = v4[2];
    v7 = fmaxf((float)*v2, *v3);
    v8 = v4[3];
    v9 = fminf((float)v2[2], v5);
    v10 = v8 - v4[1];
    v11 = fmaxf((float)v2[1], v3[1]);
    v12 = fminf((float)v2[3], v3[3]);
    v13 = (float)((float)((float)(v7 - *v3) * (float)(v6 - *v4)) / (float)(v5 - *v3)) + *v4;
    *v4 = v13;
    v14 = (float)((float)(v10 * (float)(v11 - v3[1])) / (float)(v3[3] - v3[1])) + v4[1];
    v4[1] = v14;
    v4[2] = (float)((float)((float)(v6 - v13) * (float)(v9 - v7)) / (float)(v3[2] - *v3)) + v13;
    v4[3] = (float)((float)((float)(v8 - v14) * (float)(v12 - v11)) / (float)(v3[3] - v3[1])) + v14;
    *v3 = v7;
    v3[1] = v11;
    v3[2] = v9;
    v3[3] = v12;
  }
}
