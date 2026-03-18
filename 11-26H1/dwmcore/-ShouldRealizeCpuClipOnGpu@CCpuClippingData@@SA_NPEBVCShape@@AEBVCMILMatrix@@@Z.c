/*
 * XREFs of ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180012950
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180040050 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180011FD0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCpuClippingData::ShouldRealizeCpuClipOnGpu(const struct CShape *a1, const struct CMILMatrix *a2)
{
  __int64 v2; // rax
  char v5; // cl
  __int64 v6; // rax
  float v7; // xmm1_4
  char v9; // dl
  unsigned __int32 v10; // xmm3_4
  char v11; // dl
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+28h] [rbp-20h] BYREF

  v2 = *(_QWORD *)a1;
  v12 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CShape *, int *))(v2 + 64))(a1, &v12) || v12 != 1 )
    return 0;
  v5 = *((_BYTE *)a2 + 64);
  if ( v5 >> 6 == 1 )
  {
LABEL_17:
    if ( CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>((__int64)a2) )
      goto LABEL_5;
    return 0;
  }
  if ( v5 >> 6 < 0 )
    goto LABEL_5;
  v9 = *((_BYTE *)a2 + 65);
  if ( (char)(4 * v9) >> 6 == 1 )
    goto LABEL_16;
  v10 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  if ( (char)(4 * v9) >> 6 >= 0 )
  {
    v11 = v9 & 0xCF;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & v10) * 61440.0)
                                      + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & v10) * 61440.0))
                              + COERCE_FLOAT(*((_DWORD *)a2 + 15) & v10))
                      - 1.0) & v10) < 0.000081380211 )
    {
      *((_BYTE *)a2 + 65) = v11 ^ 0x30;
      goto LABEL_15;
    }
    *((_BYTE *)a2 + 65) = v11 ^ 0x10;
LABEL_16:
    *((_BYTE *)a2 + 64) = v5 & 0x3F | 0x40;
    goto LABEL_17;
  }
LABEL_15:
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 1) - 0.0) & v10) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 4) - 0.0) & v10) >= 0.000081380211 )
  {
    goto LABEL_16;
  }
  *((_BYTE *)a2 + 64) = v5 | 0xC0;
LABEL_5:
  v6 = *(_QWORD *)a1;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(const struct CShape *, __int128 *, const struct CMILMatrix *))(v6 + 48))(a1, &v13, a2) < 0
    || *(float *)&v13 <= -3.4028235e38 && *((float *)&v13 + 2) >= 3.4028235e38
    || *((float *)&v13 + 1) <= -3.4028235e38 && *((float *)&v13 + 3) >= 3.4028235e38 )
  {
    return 0;
  }
  if ( *((float *)&v13 + 2) <= *(float *)&v13 || *((float *)&v13 + 3) <= *((float *)&v13 + 1) )
    v7 = 0.0;
  else
    v7 = (float)(*((float *)&v13 + 3) - *((float *)&v13 + 1)) * (float)(*((float *)&v13 + 2) - *(float *)&v13);
  return v7 >= (float)CCommonRegistryData::CpuClipAreaThreshold;
}
