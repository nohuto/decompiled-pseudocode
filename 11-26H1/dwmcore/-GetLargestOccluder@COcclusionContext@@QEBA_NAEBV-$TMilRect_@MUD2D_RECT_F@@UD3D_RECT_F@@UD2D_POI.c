/*
 * XREFs of ?GetLargestOccluder@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NHPEAV2@@Z @ 0x180171FB0
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x180201808 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 */

char __fastcall COcclusionContext::GetLargestOccluder(__int64 a1, __m128 *a2, char a3, int a4, struct D2D_RECT_F *a5)
{
  __int64 v7; // r11
  __m128 v8; // xmm1
  float bottom; // xmm11_4
  float right; // xmm12_4
  float top; // xmm13_4
  unsigned int v12; // r9d
  __int64 v13; // rdx
  struct D2D_RECT_F v14; // xmm6
  float v15; // xmm7_4
  __int64 v16; // r8
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm9_4
  float v20; // xmm3_4
  float v21; // xmm8_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  char result; // al
  struct D2D_RECT_F v27; // [rsp+20h] [rbp-A8h] BYREF
  struct D2D_RECT_F v28; // [rsp+30h] [rbp-98h] BYREF

  v7 = a1;
  if ( a3 || !*(_BYTE *)(a1 + 1124) )
  {
    v8 = *a2;
    LODWORD(bottom) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
    LODWORD(right) = _mm_shuffle_ps(*a2, *a2, 170).m128_u32[0];
    LODWORD(top) = _mm_shuffle_ps(*a2, *a2, 85).m128_u32[0];
  }
  else
  {
    v27 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(a1 + 1132, (const struct D2D_RECT_F *)a2, &v27.left);
    v8.m128_i32[0] = LODWORD(v27.left);
    top = v27.top;
    right = v27.right;
    bottom = v27.bottom;
  }
  v12 = *(_DWORD *)(v7 + 608);
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0.0;
  v27 = 0LL;
  if ( !v12 )
    return 0;
  v16 = *(_QWORD *)(v7 + 584);
  do
  {
    if ( *(_DWORD *)(v16 + 48 * v13 + 16) >= a4 )
      break;
    v17 = *(float *)(v16 + 48 * v13);
    v18 = *(float *)(v16 + 48 * v13 + 8);
    if ( v18 > v17 )
    {
      v19 = *(float *)(v16 + 48 * v13 + 12);
      v20 = *(float *)(v16 + 48 * v13 + 4);
      if ( v19 > v20 )
      {
        v21 = v8.m128_f32[0];
        v22 = top;
        v23 = right;
        if ( v17 > v8.m128_f32[0] )
          v21 = *(float *)(v16 + 48 * v13);
        if ( v20 > top )
          v22 = *(float *)(v16 + 48 * v13 + 4);
        if ( right > v18 )
          v23 = *(float *)(v16 + 48 * v13 + 8);
        v24 = bottom;
        if ( bottom > v19 )
          v24 = *(float *)(v16 + 48 * v13 + 12);
        if ( v23 > v21 && v24 > v22 )
        {
          v25 = (float)(v24 - v22) * (float)(v23 - v21);
          if ( v25 > v15 )
          {
            v14 = *(struct D2D_RECT_F *)(v16 + 48 * v13);
            v15 = v25;
          }
        }
      }
    }
    v13 = (unsigned int)(v13 + 1);
  }
  while ( (unsigned int)v13 < v12 );
  v27 = v14;
  if ( v15 <= 0.0 )
    return 0;
  if ( a3 || !*(_BYTE *)(v7 + 1124) )
  {
    *a5 = v14;
    return 1;
  }
  else
  {
    v28 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(v7 + 1200, &v27, &v28.left);
    result = 1;
    *a5 = v28;
  }
  return result;
}
