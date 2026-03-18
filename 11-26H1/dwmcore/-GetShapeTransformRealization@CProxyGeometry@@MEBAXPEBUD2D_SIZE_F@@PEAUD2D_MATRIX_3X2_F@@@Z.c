/*
 * XREFs of ?GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18027E650
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801860F0 (-GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180285FF0 (-GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

void __fastcall CProxyGeometry::GetShapeTransformRealization(
        CProxyGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  bool v3; // zf
  __m128i si128; // xmm1
  CViewBox *v8; // rcx
  __int64 v9; // xmm0_8
  struct D2D_SIZE_F v10; // [rsp+20h] [rbp-60h] BYREF
  struct D2D_MATRIX_3X2_F v11; // [rsp+28h] [rbp-58h] BYREF
  __int128 v12; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+50h] [rbp-30h]
  struct D2D_MATRIX_3X2_F v14; // [rsp+58h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 10) == 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)&v14.m11 = si128;
  *(_QWORD *)&v14.m[2][0] = 0LL;
  if ( !v3 )
  {
    CGeometry::GetShapeTransformRealization(this, a2, &v14);
    si128 = *(__m128i *)&v14.m11;
  }
  v8 = (CViewBox *)*((_QWORD *)this + 18);
  if ( v8 )
  {
    v10 = 0LL;
    memset(&v11, 0, sizeof(v11));
    if ( a2 )
      v10 = *a2;
    CViewBox::GetRealization(v8, &v10, &v11);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v12,
      (const struct D2D1::Matrix3x2F *)&v11,
      (const struct D2D1::Matrix3x2F *)&v14);
    v9 = v13;
    *(_OWORD *)&a3->m11 = v12;
  }
  else
  {
    v9 = *(_QWORD *)&v14.m[2][0];
    *(__m128i *)&a3->m11 = si128;
  }
  *(_QWORD *)&a3->m[2][0] = v9;
}
