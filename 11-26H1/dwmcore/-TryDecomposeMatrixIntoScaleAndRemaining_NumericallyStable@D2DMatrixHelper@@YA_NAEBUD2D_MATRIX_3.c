/*
 * XREFs of ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180196FC4
 * Callers:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180196F78 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  __int32 v4; // xmm2_4
  float v5; // xmm4_4
  __int64 v7; // xmm1_8
  float v8; // xmm5_4
  bool v9; // cc
  int v10; // xmm0_4
  float v11; // xmm0_4
  int v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm1_4

  COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  LODWORD(v5) = *((_DWORD *)this + 1) & v4;
  if ( (v5 >= 0.000081380211 || COERCE_FLOAT(*((_DWORD *)this + 2) & v4) >= 0.000081380211)
    && (COERCE_FLOAT(*(_DWORD *)this & v4) >= 0.000081380211
     || COERCE_FLOAT(*((_DWORD *)this + 3) & v4) >= 0.000081380211) )
  {
    return 0;
  }
  v7 = *((_QWORD *)this + 2);
  LODWORD(v8) = *(_DWORD *)this & v4;
  *(_OWORD *)a4 = *(_OWORD *)this;
  *((_QWORD *)a4 + 2) = v7;
  if ( v8 >= 0.000081380211 || COERCE_FLOAT(*((_DWORD *)this + 3) & v4) >= 0.000081380211 )
  {
    v9 = *a4 >= 0.0;
    v10 = *((_DWORD *)this + 3) & v4;
    a2->m11 = v8;
    *(_DWORD *)a3 = v10;
    if ( v9 )
      v11 = FLOAT_1_0;
    else
      v11 = FLOAT_N1_0;
    v9 = a4[3] >= 0.0;
    *a4 = v11;
    if ( v9 )
      a4[3] = 1.0;
    else
      a4[3] = -1.0;
  }
  else
  {
    v9 = a4[1] >= 0.0;
    v12 = *((_DWORD *)this + 2) & v4;
    a2->m11 = v5;
    *(_DWORD *)a3 = v12;
    v13 = FLOAT_N1_0;
    if ( v9 )
      v14 = FLOAT_1_0;
    else
      v14 = FLOAT_N1_0;
    v9 = a4[2] >= 0.0;
    a4[1] = v14;
    if ( v9 )
      v13 = FLOAT_1_0;
    a4[2] = v13;
  }
  return 1;
}
