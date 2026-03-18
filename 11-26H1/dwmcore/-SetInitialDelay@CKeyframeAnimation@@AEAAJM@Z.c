/*
 * XREFs of ?SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z @ 0x180279F60
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801850D0 (-SetProperty@CKeyframeAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::SetInitialDelay(CKeyframeAnimation *this, double a2, double a3)
{
  int v3; // edx
  __m128 v4; // rt1
  unsigned int v5; // ebx
  float v7; // [rsp+48h] [rbp+10h]

  if ( (_mm_cvtsi128_si32(*(__m128i *)&a2) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)&a2 - *(float *)&a2;
    v4.m128_f32[0] = FLOAT_N0_5;
    v3 = (int)*(float *)&a2 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, v4));
  }
  else
  {
    v7 = *(float *)&a2 + 6291456.25;
    v3 = (int)(LODWORD(v7) << 10) >> 11;
  }
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 92) = v3;
    v5 = 0;
    *((_DWORD *)this + 93) = 0;
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xCDDu, 0LL);
  }
  return v5;
}
