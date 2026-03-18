/*
 * XREFs of ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x18005F3B4
 * Callers:
 *     ?CalcScopeMode@CCpuClippingData@@CA?AW4CpuClippingScopeMode@@PEAVCVisual@@PEBVCShape@@W42@@Z @ 0x18005F190 (-CalcScopeMode@CCpuClippingData@@CA-AW4CpuClippingScopeMode@@PEAVCVisual@@PEBVCShape@@W42@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x1800D1D84 (-TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CCpuClippingData::IsScopePreservingTransform(const struct CMILMatrix *a1)
{
  unsigned __int32 v1; // xmm3_4
  char v2; // bl
  float v4; // xmm2_4
  float v5; // xmm2_4
  bool v6; // dl

  if ( (char)(16 * *((_BYTE *)a1 + 64)) >> 6 == 1 )
    return 0;
  v1 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v2 = 1;
  if ( (char)(16 * *((_BYTE *)a1 + 64)) >> 6 >= 0 )
  {
    v6 = (char)(4 * *((_BYTE *)a1 + 65)) >> 6 != 1
      && ((char)(4 * *((_BYTE *)a1 + 65)) >> 6 < 0
       || (LODWORD(v5) = COERCE_UNSIGNED_INT(
                           (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a1 + 7) & v1) * 61440.0)
                                         + (float)(COERCE_FLOAT(*((_DWORD *)a1 + 3) & v1) * 61440.0))
                                 + COERCE_FLOAT(*((_DWORD *)a1 + 15) & v1))
                         - 1.0) & v1,
           *((_BYTE *)a1 + 65) = (32 * (v5 >= 0.000081380211) - 16) ^ (*((_BYTE *)a1 + 65) ^ (32
                                                                                            * (v5 >= 0.000081380211)
                                                                                            - 16)) & 0xCF,
           v5 < 0.000081380211))
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 2) - 0.0) & v1) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 6) - 0.0) & v1) < 0.000081380211;
    *((_BYTE *)a1 + 64) = (8 * !v6 - 4) ^ (*((_BYTE *)a1 + 64) ^ (8 * !v6 - 4)) & 0xF3;
    if ( !v6 )
      return 0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 14) - 0.0) & v1) >= 0.000081380211 )
    return 0;
  v4 = (float)(*((float *)a1 + 5) * *(float *)a1) - (float)(*((float *)a1 + 4) * *((float *)a1 + 1));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - 0.0) & v1) < 0.00000011920929 || !_finite((float)(1.0 / v4)) )
    return 0;
  return v2;
}
