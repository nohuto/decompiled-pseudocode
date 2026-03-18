/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z @ 0x1800D0184
 * Callers:
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x1800CF8C4 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1800CFBC8 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1800CFDCC (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct D2D_POINT_4F *a2, struct D2D_POINT_4F *a3, int a4)
{
  unsigned __int32 v4; // xmm5_4
  float *v5; // r11
  float *v7; // r8
  __int64 v9; // r10
  float v10; // xmm8_4
  float v11; // xmm4_4
  float v12; // xmm9_4
  float v13; // xmm10_4
  float v14; // xmm1_4
  char v15; // dl
  float v16; // xmm4_4
  float *v17; // rax
  char v18; // dl
  char v19; // r9
  int v20; // xmm0_4

  v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v5 = (float *)((char *)a2 + 8);
  v7 = (float *)((char *)a3 + 12);
  v9 = a3 - a2;
  do
  {
    v10 = *(v5 - 2);
    v11 = *(v5 - 1);
    v12 = *v5;
    v13 = v5[1];
    v14 = *v5;
    *(float *)((char *)v5 + v9 - 8) = (float)((float)((float)(v10 * *(float *)this) + (float)(v11 * *((float *)this + 4)))
                                            + (float)(*v5 * *((float *)this + 8)))
                                    + (float)(v13 * *((float *)this + 12));
    *(v7 - 2) = (float)((float)((float)(v10 * *((float *)this + 1)) + (float)(v11 * *((float *)this + 5)))
                      + (float)(v14 * *((float *)this + 9)))
              + (float)(v13 * *((float *)this + 13));
    *(v7 - 1) = (float)((float)((float)(v10 * *((float *)this + 2)) + (float)(v11 * *((float *)this + 6)))
                      + (float)(v12 * *((float *)this + 10)))
              + (float)(v13 * *((float *)this + 14));
    if ( (char)(4 * *((_BYTE *)this + 65)) >> 6 == 1
      || ((char)(4 * *((_BYTE *)this + 65)) >> 6 >= 0
        ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & v4) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & v4) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)this + 15) & v4))
                        - 1.0) & v4) >= 0.000081380211
         ? (v18 = 0, v19 = 1)
         : (v18 = 1, v19 = -1),
           v20 = *((_DWORD *)this + 11) & v4,
           *((_BYTE *)this + 65) = (16 * v19) ^ (*((_BYTE *)this + 65) ^ (16 * v19)) & 0xCF,
           v15 = (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v20 * 61440.0) - 0.0) & v4) < 0.000081380211) & v18)
        : (v15 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)this + 11) & v4) * 61440.0) - 0.0) & v4) < 0.000081380211),
          !v15) )
    {
      v16 = (float)((float)((float)(v11 * *((float *)this + 7)) + (float)(v10 * *((float *)this + 3)))
                  + (float)(v12 * *((float *)this + 11)))
          + (float)(v13 * *((float *)this + 15));
    }
    else
    {
      v16 = FLOAT_1_0;
    }
    v17 = v7;
    v5 += 4;
    v7 += 4;
    *v17 = v16;
    --a4;
  }
  while ( a4 );
}
