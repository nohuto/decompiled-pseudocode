/*
 * XREFs of ?CalculateViewboxToViewportMapping@CCachedVisualImage@@KAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@PEAVCMILMatrix@@@Z @ 0x1801A0A14
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x1801A0388 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     <none>
 */

void __fastcall CCachedVisualImage::CalculateViewboxToViewportMapping(float *a1, float *a2, int a3, __int64 a4)
{
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm6_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  int v10; // r8d

  v4 = *a1;
  v5 = *a2;
  v6 = a2[1];
  v7 = a1[1];
  v8 = (float)(a1[2] - *a1) / (float)(a2[2] - *a2);
  v9 = (float)(a1[3] - v7) / (float)(a2[3] - v6);
  if ( !a3 )
  {
    v8 = FLOAT_1_0;
    goto LABEL_7;
  }
  v10 = a3 - 2;
  if ( !v10 )
  {
    v8 = fminf(v8, v9);
    goto LABEL_7;
  }
  if ( v10 == 1 )
  {
    v8 = fmaxf(v8, v9);
LABEL_7:
    v9 = v8;
  }
  *(float *)a4 = v8;
  *(_QWORD *)(a4 + 4) = 0LL;
  *(_QWORD *)(a4 + 12) = 0LL;
  *(float *)(a4 + 20) = v9;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 40) = 1065353216LL;
  *(float *)(a4 + 48) = (float)(COERCE_FLOAT(LODWORD(v5) ^ _xmm) * v8) + v4;
  *(float *)(a4 + 52) = (float)(COERCE_FLOAT(LODWORD(v6) ^ _xmm) * v9) + v7;
  *(_DWORD *)(a4 + 56) = 0;
  *(_QWORD *)(a4 + 60) = 1065353216LL;
}
