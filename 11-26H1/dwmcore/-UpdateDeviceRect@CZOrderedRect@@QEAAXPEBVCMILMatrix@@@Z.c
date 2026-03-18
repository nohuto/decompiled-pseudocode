/*
 * XREFs of ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x18017FB20
 * Callers:
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEBVCVisual@@PEBVCMILMatrix@@@Z @ 0x180074F58 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 */

void __fastcall CZOrderedRect::UpdateDeviceRect(CZOrderedRect *this, const struct CMILMatrix *a2)
{
  const struct D2D_RECT_F *v4; // rdx
  float v5; // xmm8_4
  float v6; // xmm6_4
  float v7; // xmm9_4
  float v8; // xmm2_4
  __int32 v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4

  v4 = (const struct D2D_RECT_F *)((char *)this + 32);
  if ( a2 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a2, v4, (float *)this);
    v5 = *((float *)this + 1);
    v6 = *((float *)this + 2);
    v7 = *((float *)this + 3);
  }
  else
  {
    v5 = *((float *)this + 9);
    v6 = *((float *)this + 10);
    v7 = *((float *)this + 11);
    *(FLOAT *)this = v4->left;
  }
  v8 = *(float *)this;
  COERCE_FLOAT(v9 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(*(_DWORD *)this & v9) < 8388608.0 )
  {
    v10 = ceilf_0(*(float *)this);
    v9 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v8 = (float)(int)v10;
  }
  *(float *)this = v8;
  if ( COERCE_FLOAT(LODWORD(v5) & v9) < 8388608.0 )
  {
    v11 = ceilf_0(v5);
    v9 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v5 = (float)(int)v11;
  }
  *((float *)this + 1) = v5;
  if ( COERCE_FLOAT(LODWORD(v6) & v9) < 8388608.0 )
  {
    v12 = floorf_0(v6);
    v9 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v6 = (float)(int)v12;
  }
  *((float *)this + 2) = v6;
  if ( COERCE_FLOAT(LODWORD(v7) & v9) >= 8388608.0 )
    *((float *)this + 3) = v7;
  else
    *((float *)this + 3) = (float)(int)floorf_0(v7);
}
