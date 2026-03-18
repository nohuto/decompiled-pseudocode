/*
 * XREFs of ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z @ 0x180045860
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 * Callees:
 *     fmod_0 @ 0x1802B9714 (fmod_0.c)
 */

// local variable allocation has failed, the output may be wrong!
float __fastcall CKeyframeAnimation::GetTimePositionWithinIteration(CKeyframeAnimation *this, float a2, double a3)
{
  __int64 v3; // r8
  __m128i v4; // xmm0
  int v5; // eax
  int v6; // ebx
  float result; // xmm0_4
  __m128 v8; // rt1
  float v9; // [rsp+48h] [rbp+10h]

  if ( a2 == 0.0 )
    return 0.0;
  v3 = *((_QWORD *)this + 38);
  v4 = 0LL;
  v5 = *(_DWORD *)(v3 + 104);
  if ( v5 > 0 )
  {
    v4 = 0LL;
    *(float *)v4.m128i_i32 = (float)*(int *)(*(_QWORD *)(v3 + 96) + 24LL * (unsigned int)(v5 - 1)) / 1000.0;
  }
  *(float *)v4.m128i_i32 = *(float *)v4.m128i_i32 * 1000.0;
  if ( (_mm_cvtsi128_si32(v4) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v4.m128i_i32 - *(float *)v4.m128i_i32;
    v8.m128_f32[0] = FLOAT_N0_5;
    v6 = (int)*(float *)v4.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, v8));
  }
  else
  {
    v9 = *(float *)v4.m128i_i32 + 6291456.25;
    v6 = (int)(LODWORD(v9) << 10) >> 11;
  }
  result = fmod_0(a2, (double)v6);
  if ( result == 0.0 )
    return (float)v6;
  return result;
}
