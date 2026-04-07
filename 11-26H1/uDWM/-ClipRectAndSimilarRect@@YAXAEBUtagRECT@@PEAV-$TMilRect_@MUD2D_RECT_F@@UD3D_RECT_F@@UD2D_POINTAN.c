/*
 * XREFs of ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1800743E8
 * Callers:
 *     ?Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BD100 (-Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Width@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000A88C (-Width@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Height@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000A898 (-Height@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 */

void __fastcall ClipRectAndSimilarRect(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  double v3; // xmm0_8
  int *v4; // rax
  float *v5; // rdx
  __int64 v6; // rcx
  double v7; // xmm0_8
  float v8; // xmm10_4
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm7_4
  __int64 v12; // rcx
  double v13; // xmm0_8
  float v14; // xmm6_4
  __int64 v15; // r8
  double v16; // xmm0_8
  float v17; // xmm2_4
  __int64 v18; // rcx
  double v19; // xmm0_8
  float *v20; // rdx
  float v21; // xmm5_4
  float *v22; // r8
  float v23; // xmm3_4
  float v24; // xmm1_4
  double v25; // xmm0_8
  float v26; // xmm5_4
  __int64 v27; // r8
  double v28; // xmm0_8
  float v29; // xmm4_4
  __int64 v30; // r8
  float *v31; // rdx
  _DWORD v32[4]; // [rsp+20h] [rbp-68h] BYREF

  v3 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Width(a2);
  if ( *(float *)&v3 > 0.0 )
  {
    v7 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Height(v2);
    if ( *(float *)&v7 > 0.0 )
    {
      v8 = fmaxf((float)*v4, *v5);
      v9 = fmaxf((float)v4[1], v5[1]);
      v10 = fminf((float)v4[2], v5[2]);
      v11 = fminf((float)v4[3], v5[3]);
      *(float *)v32 = v8;
      *(float *)&v32[1] = v9;
      *(float *)&v32[2] = v10;
      *(float *)&v32[3] = v11;
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Width(v6);
      v13 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Height(v12);
      v14 = *(float *)&v13;
      v16 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Width(v15);
      v17 = *(float *)&v16;
      v19 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Height(v18);
      v23 = (float)((float)((float)(v8 - *v20) * v17) / v21) + *v22;
      *v22 = v23;
      v24 = (float)((float)((float)(v9 - v20[1]) * *(float *)&v19) / v14) + v22[1];
      v22[1] = v24;
      v25 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Width((__int64)v32);
      *(float *)(v27 + 8) = (float)((float)(*(float *)&v25 * v17) / v26) + v23;
      v28 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Height((__int64)v32);
      *(float *)(v30 + 12) = (float)((float)(*(float *)&v28 * v29) / v14) + v24;
      *v31 = v8;
      v31[1] = v9;
      v31[2] = v10;
      v31[3] = v11;
    }
  }
}
