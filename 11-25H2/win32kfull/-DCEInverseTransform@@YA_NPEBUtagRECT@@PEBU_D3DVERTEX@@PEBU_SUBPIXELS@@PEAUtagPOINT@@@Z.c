/*
 * XREFs of ?DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z @ 0x140154FBC
 * Callers:
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x140145D20 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x140154B88 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     FixedPointSubPixel @ 0x1401551F8 (FixedPointSubPixel.c)
 */

char __fastcall DCEInverseTransform(
        const struct tagRECT *a1,
        const struct _D3DVERTEX *a2,
        const struct _SUBPIXELS *a3,
        struct tagPOINT *a4)
{
  float x; // xmm1_4
  const struct tagRECT *v5; // r10
  float v6; // xmm3_4
  float v7; // xmm7_4
  float y; // xmm8_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  double v11; // xmm0_8
  float v12; // xmm6_4
  double v13; // xmm0_8
  float v14; // xmm10_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm0_4

  x = a2->x;
  v5 = a1;
  v6 = a2[1].x - a2->x;
  v7 = a2[2].x - a2->x;
  y = a2->y;
  v9 = a2[1].y - y;
  v10 = a2[2].y - y;
  if ( a3 )
    v11 = FixedPointSubPixel(*(int *)a3);
  else
    LODWORD(v11) = 0;
  v12 = (float)((float)a4->x + *(float *)&v11) - x;
  if ( a3 )
    v13 = FixedPointSubPixel(*((int *)a3 + 1));
  else
    LODWORD(v13) = 0;
  LODWORD(v14) = LODWORD(v6) & _xmm;
  v15 = (float)((float)a4->y + *(float *)&v13) - y;
  if ( COERCE_FLOAT(LODWORD(v6) & _xmm) <= 0.00000011920929 )
  {
    v24 = v6;
    v25 = v9;
    v6 = v7;
    v9 = v10;
    v7 = v24;
    v10 = v25;
  }
  if ( COERCE_FLOAT(LODWORD(v6) & _xmm) <= 0.00000011920929 )
    return 0;
  v16 = (float)(v10 * v6) - (float)(v7 * v9);
  if ( COERCE_FLOAT(LODWORD(v16) & _xmm) <= 0.00000011920929 )
    return 0;
  v17 = (float)((float)(v15 * v6) - (float)(v12 * v9)) / v16;
  v18 = (float)(v12 - (float)(v17 * v7)) / v6;
  if ( v14 <= 0.00000011920929 )
  {
    v26 = v18;
    v18 = v17;
    v17 = v26;
  }
  v19 = (float)((float)((float)((float)((float)(a2[1].tu - a2->tu) * v18) + a2->tu)
                      + (float)((float)(a2[2].tu - a2->tu) * v17))
              * (float)(v5->right - v5->left))
      + (float)v5->left;
  v20 = (float)((float)((float)((float)((float)(a2[1].tv - a2->tv) * v18) + a2->tv)
                      + (float)((float)(a2[2].tv - a2->tv) * v17))
              * (float)(v5->bottom - v5->top))
      + (float)v5->top;
  if ( v19 < 0.0 )
    v21 = v19 - 0.5;
  else
    v21 = v19 + 0.5;
  a4->x = (int)v21;
  if ( v20 < 0.0 )
    v22 = v20 - 0.5;
  else
    v22 = v20 + 0.5;
  a4->y = (int)v22;
  return 1;
}
