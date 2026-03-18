/*
 * XREFs of ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180166900
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  float v5; // xmm10_4
  float v6; // xmm9_4
  float v7; // xmm1_4
  float v8; // xmm11_4
  __m128 v9; // xmm5
  __m128 v10; // xmm6
  float v11; // xmm12_4
  float v12; // xmm14_4
  float v13; // xmm13_4
  float v14; // xmm0_4
  float m12; // xmm11_4
  FLOAT v16; // xmm10_4
  FLOAT v17; // xmm9_4
  float v18; // xmm4_4
  float v19; // xmm8_4
  float v20; // xmm6_4
  FLOAT v21; // xmm7_4
  float v22; // xmm0_4
  FLOAT v23; // xmm3_4
  float v24; // xmm3_4
  float v25; // xmm14_4
  FLOAT v26; // xmm2_4
  float v27; // xmm9_4
  D2D1_MATRIX_3X2_F matrix; // [rsp+20h] [rbp-B8h] BYREF

  v5 = COERCE_FLOAT(*((_DWORD *)this + 40) ^ _xmm) * a2->width;
  v6 = COERCE_FLOAT(*((_DWORD *)this + 41) ^ _xmm) * a2->height;
  *(_QWORD *)&a3->m11 = 1065353216LL;
  a3->m21 = 0.0;
  a3->m22 = 1.0;
  a3->dx = v5;
  a3->dy = v6;
  v7 = *((float *)this + 46);
  v8 = FLOAT_1_0;
  v9 = (__m128)*((unsigned int *)this + 42);
  v10 = (__m128)*((unsigned int *)this + 43);
  if ( v7 != 1.0 || (v11 = 0.0, v12 = 0.0, v13 = FLOAT_1_0, *((float *)this + 47) != 1.0) )
  {
    v24 = *((float *)this + 47);
    v25 = *((float *)this + 46);
    v8 = v7 + 0.0;
    a3->m11 = v7 + 0.0;
    v12 = (float)(v25 * 0.0) + 0.0;
    v26 = (float)((float)(v7 * v5) + (float)(v6 * 0.0)) + (float)(v9.m128_f32[0] - (float)(v7 * v9.m128_f32[0]));
    v11 = (float)(v24 * 0.0) + 0.0;
    v13 = v24 + 0.0;
    v27 = (float)(v24 * v6) + (float)(v5 * 0.0);
    v5 = v26;
    a3->m12 = v11;
    a3->m21 = v12;
    a3->m22 = v24 + 0.0;
    a3->dx = v26;
    v6 = v27 + (float)(v10.m128_f32[0] - (float)(v24 * v10.m128_f32[0]));
    a3->dy = v6;
  }
  v14 = *((float *)this + 48);
  if ( v14 != 0.0 )
  {
    D2D1MakeRotateMatrix(v14 * 57.295776, (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(v9, v10), &matrix);
    m12 = a3->m12;
    v11 = (float)(m12 * matrix.m22) + (float)(a3->m11 * matrix.m12);
    v8 = (float)(m12 * matrix.m21) + (float)(a3->m11 * matrix.m11);
    v12 = (float)(a3->m22 * matrix.m21) + (float)(a3->m21 * matrix.m11);
    v13 = (float)(a3->m22 * matrix.m22) + (float)(a3->m21 * matrix.m12);
    v5 = (float)((float)(a3->dy * matrix.m21) + (float)(a3->dx * matrix.m11)) + matrix.dx;
    v6 = (float)((float)(a3->dy * matrix.m22) + (float)(a3->dx * matrix.m12)) + matrix.dy;
    a3->m11 = v8;
    a3->m12 = v11;
    a3->m21 = v12;
    a3->m22 = v13;
    a3->dx = v5;
    a3->dy = v6;
  }
  v16 = v5 + *((float *)this + 44);
  a3->dx = v16;
  v17 = v6 + *((float *)this + 45);
  a3->dy = v17;
  v18 = *((float *)this + 51);
  v19 = *((float *)this + 50);
  v20 = *((float *)this + 52);
  v21 = (float)((float)(v18 * v17) + (float)(*((float *)this + 49) * v16)) + *((float *)this + 53);
  v22 = *((float *)this + 49);
  v23 = (float)((float)(v20 * v17) + (float)(v19 * v16)) + *((float *)this + 54);
  a3->m11 = (float)(v18 * v11) + (float)(v22 * v8);
  a3->m12 = (float)(v20 * v11) + (float)(v19 * v8);
  a3->m21 = (float)(v22 * v12) + (float)(v18 * v13);
  a3->m22 = (float)(v19 * v12) + (float)(v20 * v13);
  a3->dx = v21;
  a3->dy = v23;
}
