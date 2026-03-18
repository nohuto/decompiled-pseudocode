/*
 * XREFs of ??$IsTranslateAndScaleIgnoreZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18016CA20
 * Callers:
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x180166F34 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsTranslateAndScaleIgnoreZ<0>(__int64 a1)
{
  char v1; // r8
  char v2; // dl
  __int32 v3; // xmm2_4
  char result; // al

  v1 = *(_BYTE *)(a1 + 64);
  if ( v1 >> 6 == 1 )
    return 0;
  if ( v1 >> 6 == 0xFE )
    return 1;
  v2 = *(_BYTE *)(a1 + 65);
  if ( (char)(4 * v2) >> 6 == 1 )
    return 0;
  if ( (char)(4 * v2) >> 6 == 0xFE )
    goto LABEL_7;
  COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v3) * 61440.0)
                     + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v3) * 61440.0))
             + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v3)) != 1.0 )
    return 0;
  *(_BYTE *)(a1 + 65) = v2 & 0xCF ^ 0x20;
LABEL_7:
  if ( *(float *)(a1 + 4) != 0.0 || *(float *)(a1 + 16) != 0.0 )
    return 0;
  result = 1;
  *(_BYTE *)(a1 + 64) = v1 & 0x3F | 0x80;
  return result;
}
