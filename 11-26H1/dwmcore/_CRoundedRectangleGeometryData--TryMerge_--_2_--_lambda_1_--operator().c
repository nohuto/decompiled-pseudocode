/*
 * XREFs of _CRoundedRectangleGeometryData::TryMerge_::_2_::_lambda_1_::operator() @ 0x1800DA21C
 * Callers:
 *     ?TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z @ 0x1800DAB28 (-TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z.c)
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z @ 0x180053380 (-IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z.c)
 */

char __fastcall CRoundedRectangleGeometryData::TryMerge_::_2_::_lambda_1_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct D2D_VECTOR_2F *a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  float *v7; // rdx
  float *v8; // r8
  float *v9; // r9
  struct D2D_VECTOR_2F *v10; // r10
  float *v11; // r11
  float v12; // xmm2_4
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm8_4
  float *v18; // r10
  float *v19; // r11
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  bool v24; // cc
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm1_4

  if ( !CRoundedRectangleGeometryData::IsRoundedCorner(a4) )
    return 1;
  v12 = *v11;
  if ( *v8 == *v11 && v8[1] == v11[1] )
  {
    if ( *v9 < v10->x )
      goto LABEL_22;
    if ( v9[1] >= v10->y )
    {
      *v10 = *(struct D2D_VECTOR_2F *)v9;
      *a7 = 1;
      return 1;
    }
    if ( *v9 <= v10->x )
    {
LABEL_22:
      if ( v9[1] <= v10->y )
        return 1;
    }
  }
  else
  {
    v14 = *v7;
    v15 = *v7 * *v9;
    v16 = v7[1] * v9[1];
    v17 = v8[1] - v16;
    if ( CRoundedRectangleGeometryData::IsRoundedCorner(v10) )
    {
      v25 = (float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)v19)) - v17) / v16;
      v26 = (float)((float)(COERCE_FLOAT(*(_QWORD *)v19) - (float)(v14 * *v18)) - v20) / v15;
      if ( v26 > 0.0 && v25 > 0.0 && (float)((float)(v26 * v26) + (float)(v25 * v25)) > 1.0 )
        return 0;
      v27 = (float)(COERCE_FLOAT(*(_QWORD *)v19) - v20) / v15;
      if ( v27 <= 0.0 )
        return 1;
      v28 = (float)((float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)v19)) - (float)(v21 * v18[1])) - v17) / v16;
      if ( v28 <= 0.0 )
        return 1;
      v24 = (float)((float)(v27 * v27) + (float)(v28 * v28)) <= 1.0;
    }
    else
    {
      v22 = (float)(v12 - v20) / v15;
      if ( v22 <= 0.0 )
        return 1;
      v23 = (float)(v19[1] - v17) / v16;
      if ( v23 <= 0.0 )
        return 1;
      v24 = (float)((float)(v22 * v22) + (float)(v23 * v23)) <= 1.0;
    }
    if ( v24 )
      return 1;
  }
  return 0;
}
