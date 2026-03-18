/*
 * XREFs of ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18015F740
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18015E3A0 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x18015F188 (-GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Translate(CMILMatrix *this, float a2, float a3, float a4)
{
  __int32 v6; // xmm2_4
  char v8; // dl
  _BYTE *v9; // r8
  char v10; // al
  float v11; // xmm5_4
  float v12; // xmm6_4
  char v13; // r9
  char v14; // al
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm3_4

  COERCE_FLOAT(v6 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(LODWORD(a2) & v6) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a3) & v6) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a4) & v6) >= 0.000081380211 )
  {
    v8 = *((_BYTE *)this + 65);
    v9 = (char *)this + 65;
    if ( (char)(4 * v8) >> 6 == 1 )
      goto LABEL_14;
    if ( (char)(4 * v8) >> 6 >= 0 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & v6) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & v6) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)this + 15) & v6))
                        - 1.0) & v6) >= 0.000081380211 )
      {
        v13 = 0;
        v14 = 16;
      }
      else
      {
        v13 = 1;
        v14 = -16;
      }
      v8 = v14 ^ (v14 ^ v8) & 0xCF;
      v15 = COERCE_FLOAT(*((_DWORD *)this + 11) & v6) * 61440.0;
      *v9 = v8;
      v9 = (char *)this + 65;
      v10 = v13 & (COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 0.0) & v6) < 0.000081380211);
    }
    else
    {
      v10 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)this + 11) & v6) * 61440.0) - 0.0) & v6) < 0.000081380211;
    }
    if ( !v10 )
    {
LABEL_14:
      v16 = *((float *)this + 3);
      v17 = *((float *)this + 7);
      v18 = v16 * a2;
      *v9 = v8 & 0xF3;
      v19 = (float)(v16 * a3) + *((float *)this + 1);
      v20 = (float)(v16 * a4) + *((float *)this + 2);
      *(float *)this = v18 + *(float *)this;
      *((float *)this + 1) = v19;
      v21 = (float)(v17 * a2) + *((float *)this + 4);
      v22 = (float)(v17 * a3) + *((float *)this + 5);
      *((float *)this + 2) = v20;
      v23 = (float)(v17 * a4) + *((float *)this + 6);
      v24 = *((float *)this + 11);
      *((float *)this + 4) = v21;
      *((float *)this + 5) = v22;
      v25 = (float)(v24 * a2) + *((float *)this + 8);
      *((float *)this + 6) = v23;
      v26 = (float)(v24 * a3) + *((float *)this + 9);
      v27 = *((float *)this + 15);
      *((float *)this + 8) = v25;
      *((float *)this + 9) = v26;
      v28 = (float)(v27 * a2) + *((float *)this + 12);
      v29 = (float)(v27 * a3) + *((float *)this + 13);
      *((float *)this + 10) = (float)(v24 * a4) + *((float *)this + 10);
      v30 = (float)(v27 * a4) + *((float *)this + 14);
      *((float *)this + 12) = v28;
      *((float *)this + 13) = v29;
      *((float *)this + 14) = v30;
    }
    else
    {
      v11 = a3 + *((float *)this + 13);
      v12 = a4 + *((float *)this + 14);
      *((float *)this + 12) = a2 + *((float *)this + 12);
      *((float *)this + 13) = v11;
      *((float *)this + 14) = v12;
    }
    *((_BYTE *)this + 64) &= 0xFCu;
  }
}
