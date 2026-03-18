/*
 * XREFs of ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180285FF0
 * Callers:
 *     ?GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18027E650 (-GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x180187AB0 (-Arrange@StretchAlign@@QEBA-AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z.c)
 */

void __fastcall CViewBox::GetRealization(
        const struct D2D_SIZE_F *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  __int32 v3; // xmm1_4
  float *v6; // r8
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  struct D2D_RECT_F v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  float v11; // [rsp+48h] [rbp-38h] BYREF
  __int64 v12; // [rsp+4Ch] [rbp-34h]
  float v13; // [rsp+54h] [rbp-2Ch]
  FLOAT left; // [rsp+58h] [rbp-28h]
  FLOAT top; // [rsp+5Ch] [rbp-24h]
  __m128i si128; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+74h] [rbp-Ch]

  COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(LODWORD(this[29].width) & v3) < 0.0000011920929
    || COERCE_FLOAT(LODWORD(this[29].height) & v3) < 0.0000011920929 )
  {
    *(_QWORD *)&a3->m11 = 1065353216LL;
    a3->m21 = 0.0;
    *(_QWORD *)&a3->m[1][1] = 1065353216LL;
    a3->dy = 0.0;
  }
  else
  {
    StretchAlign::Arrange((StretchAlign *)&this[30], &v9, this + 29, a2, 0LL);
    v17 = LODWORD(this[28].width) ^ _xmm;
    left = v9.left;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v12 = 0LL;
    v7 = (float)(v9.right - v9.left) / *v6;
    v18 = LODWORD(this[28].height) ^ _xmm;
    v11 = v7;
    top = v9.top;
    v13 = (float)(v9.bottom - v9.top) / this[29].height;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v9,
      (const struct D2D1::Matrix3x2F *)&si128,
      (const struct D2D1::Matrix3x2F *)&v11);
    v8 = v10;
    *(struct D2D_RECT_F *)&a3->m11 = v9;
    *(_QWORD *)&a3->m[2][0] = v8;
  }
}
