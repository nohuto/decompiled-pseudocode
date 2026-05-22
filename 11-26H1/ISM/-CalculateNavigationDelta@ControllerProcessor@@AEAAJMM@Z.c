/*
 * XREFs of ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x18017D730
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017F654 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     powf @ 0x18009AB78 (powf.c)
 *     ?GetDisplaySizeScaleFactor@ControllerProcessor@@AEAAMXZ @ 0x18017E558 (-GetDisplaySizeScaleFactor@ControllerProcessor@@AEAAMXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall ControllerProcessor::CalculateNavigationDelta(ControllerProcessor *this, double a2, double a3)
{
  __m128 v4; // xmm7
  __m128 v5; // xmm1
  __m128 v6; // xmm7
  __m128 v7; // xmm2
  __m128 v8; // xmm2
  __m128 v9; // xmm7
  __m128 v10; // xmm0
  __m128 v11; // xmm2
  __m128 v12; // xmm0
  __int64 v13; // rbx
  ULONGLONG TickCount64; // rax
  __m128 v15; // xmm0
  int v16; // ecx
  ULONGLONG v17; // rax
  __m128 v18; // xmm0
  __m128 v19; // xmm6
  __int64 result; // rax
  __m128 v21; // xmm0
  float v22; // xmm1_4

  v4 = _mm_movelh_ps(_mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3), (__m128)0LL);
  v5 = _mm_mul_ps(v4, v4);
  v6 = _mm_shuffle_ps(v4, v4, 198);
  v5.m128_f32[0] = v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v7 = _mm_sqrt_ps(_mm_shuffle_ps(v5, v5, 0));
  v8 = _mm_shuffle_ps(v7, v7, 170);
  v6.m128_f32[0] = v8.m128_f32[0];
  v9 = _mm_shuffle_ps(v6, v6, 198);
  if ( v8.m128_f32[0] > 1.0 )
  {
    v10 = v8;
    v8 = (__m128)LODWORD(FLOAT_1_0);
    v9 = _mm_div_ps(v9, _mm_shuffle_ps(v10, v10, 0));
  }
  v11 = _mm_and_ps(v8, (__m128)_xmm);
  if ( v11.m128_f32[0] > 0.00000011920929 )
  {
    v12 = v11;
    v12.m128_f32[0] = powf(v11.m128_f32[0], 1.8);
    v13 = *((_QWORD *)this + 47);
    v9 = _mm_mul_ps(v9, _mm_shuffle_ps(v12, v12, 0));
    TickCount64 = GetTickCount64();
    v15 = 0LL;
    v16 = TickCount64 - v13;
    if ( (__int64)(TickCount64 - v13) < 0 )
    {
      v17 = v16 & 1 | ((TickCount64 - v13) >> 1);
      v15.m128_f32[0] = (float)(int)v17 + (float)(int)v17;
    }
    else
    {
      v15.m128_f32[0] = (float)v16;
    }
    if ( v15.m128_f32[0] < 1750.0 )
    {
      v15.m128_f32[0] = (float)(powf(v15.m128_f32[0] / 1750.0, 0.60000002) * 0.89999998) + 0.1;
      v9 = _mm_mul_ps(v9, _mm_shuffle_ps(v15, v15, 0));
    }
  }
  else
  {
    *((_QWORD *)this + 47) = GetTickCount();
  }
  v18 = _mm_shuffle_ps((__m128)*((unsigned int *)this + 1949), (__m128)*((unsigned int *)this + 1949), 0);
  v19 = _mm_mul_ps(_mm_mul_ps((__m128)_mm_load_si128((const __m128i *)&_xmm), v9), v18);
  v18.m128_f32[0] = ControllerProcessor::GetDisplaySizeScaleFactor(this);
  result = 0LL;
  v21 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v19);
  v22 = v21.m128_f32[0] + *((float *)this + 92);
  *((float *)this + 93) = _mm_shuffle_ps(v21, v21, 85).m128_f32[0] + *((float *)this + 93);
  *((float *)this + 92) = v22;
  return result;
}
