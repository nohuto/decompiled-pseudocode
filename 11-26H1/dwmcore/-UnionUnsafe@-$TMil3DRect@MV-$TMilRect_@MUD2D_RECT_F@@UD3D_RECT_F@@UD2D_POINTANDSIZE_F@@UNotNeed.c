/*
 * XREFs of ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18014EE20
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800CC140 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::UnionUnsafe(
        float *a1,
        float *a2)
{
  float v2; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm1_4
  float v7; // xmm8_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm3_4
  float v13; // xmm9_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  char result; // al

  v2 = *a1;
  v5 = a1[4];
  v6 = a2[4];
  v7 = a1[1];
  v8 = a2[5];
  v9 = *a2;
  v10 = a2[2];
  v11 = a2[1];
  v12 = a2[3];
  v13 = a1[5];
  v14 = a1[2];
  v15 = a1[3];
  v16 = (v13 <= v5) + 1;
  if ( v14 > v2 )
    v16 = v13 <= v5;
  v17 = 0;
  v18 = v16 + 1;
  if ( v15 > v7 )
    v18 = v16;
  if ( v8 <= v6 )
    v17 = 1;
  v19 = v17 + 1;
  if ( v10 > v9 )
    v19 = v17;
  v20 = v19 + 1;
  if ( v12 > v11 )
    v20 = v19;
  if ( v18 <= 1 )
  {
    if ( v20 <= 1 )
    {
      if ( v2 > v9 )
        *a1 = v9;
      v21 = a2[1];
      if ( v7 > v21 )
        a1[1] = v21;
      v22 = a2[2];
      if ( v22 > v14 )
        a1[2] = v22;
      v23 = a2[3];
      if ( v23 > v15 )
        a1[3] = v23;
      v24 = a2[5];
      if ( v24 > v13 )
        a1[5] = v24;
      v25 = a2[4];
      if ( v5 > v25 )
        a1[4] = v25;
    }
    return 1;
  }
  if ( v20 <= 1 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
    return 1;
  }
  *((_QWORD *)a1 + 2) = 0LL;
  result = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
