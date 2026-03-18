/*
 * XREFs of RIMTransformPhysicalPointToScreen @ 0x140079180
 * Callers:
 *     RIMSetContactBoundary @ 0x140076BE4 (RIMSetContactBoundary.c)
 *     RIMApplyTransforms @ 0x1400786DC (RIMApplyTransforms.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1401E5610 (RIMTransformCoordinatesFromDigitizer.c)
 * Callees:
 *     ApiSetTransformForInputMagnification @ 0x140079250 (ApiSetTransformForInputMagnification.c)
 *     rimConvertCoordinatesWithRounding @ 0x1400793EC (rimConvertCoordinatesWithRounding.c)
 */

__int64 __fastcall RIMTransformPhysicalPointToScreen(__m128i *a1, __int64 *a2, __int64 a3)
{
  __m128i v3; // xmm1
  __int64 v4; // rax
  __m128i v6; // xmm2
  int v8; // r9d
  int v10; // edx
  __int64 plResult; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h]

  v3 = a1[10];
  v4 = *a2;
  v6 = a1[11];
  plResult = 0LL;
  v8 = a1[10].m128i_i32[2];
  v10 = a1[11].m128i_i32[2];
  v13 = v4;
  if ( (unsigned int)rimConvertCoordinatesWithRounding(
                       _mm_cvtsi128_si32(v6),
                       v10,
                       _mm_cvtsi128_si32(v3),
                       v8,
                       v4,
                       (LONG *)&plResult)
    && (unsigned int)rimConvertCoordinatesWithRounding(
                       v6.m128i_i32[1],
                       v6.m128i_i32[3],
                       v3.m128i_i32[1],
                       v3.m128i_i32[3],
                       SHIDWORD(v13),
                       (LONG *)&plResult + 1) )
  {
    *(_QWORD *)a3 = plResult;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
  }
  ApiSetTransformForInputMagnification(a1, a2);
  return 0LL;
}
