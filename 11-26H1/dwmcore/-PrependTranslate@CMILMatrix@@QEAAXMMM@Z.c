/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x18015F550
 * Callers:
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18015E3A0 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3, float a4)
{
  __int32 v4; // xmm4_4
  char v8; // dl
  float v9; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  char v13; // al
  char v14; // r8
  char v15; // al
  int v16; // xmm1_4
  float v17; // xmm7_4

  COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(LODWORD(a2) & v4) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a3) & v4) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a4) & v4) >= 0.000081380211 )
  {
    v8 = *((_BYTE *)this + 65);
    v9 = a3 * *((float *)this + 6);
    v10 = (float)((float)(a2 * *((float *)this + 1)) + (float)(a3 * *((float *)this + 5)))
        + (float)(a4 * *((float *)this + 9));
    v11 = a4 * *((float *)this + 10);
    *((float *)this + 12) = (float)((float)((float)(a3 * *((float *)this + 4)) + (float)(a2 * *(float *)this))
                                  + (float)(a4 * *((float *)this + 8)))
                          + *((float *)this + 12);
    v12 = (float)(a2 * *((float *)this + 2)) + v9;
    *((float *)this + 13) = v10 + *((float *)this + 13);
    *((float *)this + 14) = (float)(v12 + v11) + *((float *)this + 14);
    if ( (char)(4 * v8) >> 6 == 1
      || ((char)(4 * v8) >> 6 >= 0
        ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & v4) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & v4) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)this + 15) & v4))
                        - 1.0) & v4) >= 0.000081380211
         ? (v14 = 0, v15 = 16)
         : (v14 = 1, v15 = -16),
           v16 = *((_DWORD *)this + 11) & v4,
           *((_BYTE *)this + 65) = v15 ^ (v15 ^ v8) & 0xCF,
           v13 = v14 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v16 * 61440.0) - 0.0) & v4) < 0.000081380211))
        : (v13 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)this + 11) & v4) * 61440.0) - 0.0) & v4) < 0.000081380211),
          !v13) )
    {
      v17 = a3 * *((float *)this + 7);
      *((_DWORD *)this + 16) = 0;
      *((float *)this + 15) = (float)((float)(v17 + (float)(a2 * *((float *)this + 3)))
                                    + (float)(a4 * *((float *)this + 11)))
                            + *((float *)this + 15);
    }
    else
    {
      *((_BYTE *)this + 64) &= 0xFCu;
    }
  }
}
