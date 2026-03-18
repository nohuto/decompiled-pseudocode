/*
 * XREFs of ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180121EF0
 * Callers:
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z @ 0x180121E2C (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180121FE0 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18028C4E4 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsAffine<1>(__int64 a1, char a2)
{
  char v2; // r8
  char result; // al
  __int32 v4; // xmm2_4
  char v5; // r9

  v2 = *(_BYTE *)(a1 + 65);
  if ( (char)(4 * v2) >> 6 == 1 )
    return 0;
  if ( (char)(4 * v2) >> 6 >= 0 )
  {
    COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v4) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v4) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v4))
                      - 1.0) & v4) >= 0.000081380211 )
    {
      result = 0;
      v5 = 16;
    }
    else
    {
      result = 1;
      v5 = -16;
    }
    *(_BYTE *)(a1 + 65) = v5 ^ (v5 ^ v2) & 0xCF;
    if ( !a2 )
      return (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & v4) * 61440.0) - 0.0) & v4) < 0.000081380211) & result;
  }
  else
  {
    return a2
        || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211;
  }
  return result;
}
