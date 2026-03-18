/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18028C4E4
 * Callers:
 *     ?GetContentBoundsAndTransform@CDxHandleBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x180204A10 (-GetContentBoundsAndTransform@CDxHandleBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180281D40 (-GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetContentBoundsAndTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x1802AEF50 (-GetContentBoundsAndTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180121EF0 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3)
{
  __int32 v4; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  __int64 v9; // r10
  float v10; // xmm5_4
  float v11; // xmm5_4

  COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(LODWORD(a2) & v4) >= 0.000081380211 || COERCE_FLOAT(LODWORD(a3) & v4) >= 0.000081380211 )
  {
    v6 = (float)(a2 * *((float *)this + 1)) + (float)(a3 * *((float *)this + 5));
    v7 = a3 * *((float *)this + 6);
    *((float *)this + 12) = (float)((float)(a3 * *((float *)this + 4)) + (float)(a2 * *(float *)this))
                          + *((float *)this + 12);
    v8 = (float)(a2 * *((float *)this + 2)) + v7;
    *((float *)this + 13) = v6 + *((float *)this + 13);
    *((float *)this + 14) = v8 + *((float *)this + 14);
    if ( CMILMatrix::IsAffine<1>((__int64)this, 1) )
    {
      *(_BYTE *)(v9 + 64) &= 0xFCu;
    }
    else
    {
      v11 = v10 * *(float *)(v9 + 12);
      *(_DWORD *)(v9 + 64) = 0;
      *(float *)(v9 + 60) = (float)(v11 + (float)(a3 * *(float *)(v9 + 28))) + *(float *)(v9 + 60);
    }
  }
}
