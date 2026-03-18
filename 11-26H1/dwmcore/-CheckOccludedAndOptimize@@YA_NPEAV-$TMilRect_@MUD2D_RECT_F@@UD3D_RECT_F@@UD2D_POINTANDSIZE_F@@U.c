/*
 * XREFs of ?CheckOccludedAndOptimize@@YA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV1@@Z @ 0x1800CEB44
 * Callers:
 *     ?IsOpaquelyBacked@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEBV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x180258FE8 (-IsOpaquelyBacked@CArrayBasedCoverageSet@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?TrimCornerRect@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1802590E4 (-TrimCornerRect@CArrayBasedCoverageSet@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 * Callees:
 *     ?CalcSubtractionRectangles@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800CEA3C (-CalcSubtractionRectangles@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QE.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

char __fastcall CheckOccludedAndOptimize(__m128i *a1, float *a2, __int64 a3)
{
  __m128i v3; // xmm0
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  int v12; // eax
  __m128i v14; // [rsp+30h] [rbp-30h] BYREF
  __m128i v15; // [rsp+40h] [rbp-20h] BYREF

  v3 = _mm_loadu_si128(a1);
  v5 = *a2;
  v14 = v3;
  if ( v5 > *(float *)v3.m128i_i32 )
  {
    *(float *)v14.m128i_i32 = v5;
    *(float *)v3.m128i_i32 = v5;
  }
  v6 = a2[1];
  v7 = *(float *)&v14.m128i_i32[1];
  if ( v6 > *(float *)&v14.m128i_i32[1] )
  {
    v14.m128i_i32[1] = (__int32)a2[1];
    v7 = v6;
  }
  v8 = a2[2];
  v9 = *(float *)&v14.m128i_i32[2];
  if ( *(float *)&v14.m128i_i32[2] > v8 )
  {
    v14.m128i_i32[2] = (__int32)a2[2];
    v9 = v8;
  }
  v10 = a2[3];
  v11 = *(float *)&v14.m128i_i32[3];
  if ( *(float *)&v14.m128i_i32[3] > v10 )
  {
    v14.m128i_i32[3] = (__int32)a2[3];
    v11 = v10;
  }
  if ( v9 > *(float *)v3.m128i_i32 && v11 > v7 )
  {
    v15 = 0LL;
    v12 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
            (float *)a1->m128i_i32,
            (__int64)&v14,
            a3,
            (__int64)&v15,
            1u);
    if ( !v12 )
      return 1;
    if ( v12 == 1 )
      *a1 = v15;
  }
  return 0;
}
