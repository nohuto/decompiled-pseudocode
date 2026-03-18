/*
 * XREFs of ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x18021CDCC
 * Callers:
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1800D7574 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x1800D7628 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180143060 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

bool __fastcall CProjectedShadow::IsShadowAxisAlignedRectToReceiver(CProjectedShadowCaster **this)
{
  char IsRectangular; // al
  const struct D2D_MATRIX_3X2_F *v3; // rdx
  __int32 v4; // xmm1_4
  int v5; // xmm1_4
  int v6; // xmm0_4
  int v7; // xmm1_4
  int v8; // xmm0_4
  int v9; // xmm1_4
  _DWORD v11[10]; // [rsp+20h] [rbp-28h] BYREF

  IsRectangular = CProjectedShadowCaster::IsRectangular(this[10]);
  LOBYTE(v3) = 0;
  if ( IsRectangular )
  {
    COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    if ( COERCE_FLOAT(*((_DWORD *)this + 47) & v4) < 0.000081380211
      && COERCE_FLOAT((_DWORD)this[25] & v4) < 0.000081380211 )
    {
      v5 = *((_DWORD *)this + 46);
      v11[0] = *((_DWORD *)this + 45);
      v6 = *((_DWORD *)this + 48);
      v11[1] = v5;
      v7 = *((_DWORD *)this + 49);
      v11[2] = v6;
      v8 = *((_DWORD *)this + 51);
      v11[3] = v7;
      v9 = *((_DWORD *)this + 52);
      v11[4] = v8;
      v11[5] = v9;
      LOBYTE(v3) = D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v11, v3);
    }
  }
  return (char)v3;
}
