/*
 * XREFs of sub_1800500E0 @ 0x1800500E0
 * Callers:
 *     sub_18004FC50 @ 0x18004FC50 (sub_18004FC50.c)
 *     sub_18004FFB0 @ 0x18004FFB0 (sub_18004FFB0.c)
 *     sub_18005005C @ 0x18005005C (sub_18005005C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800500E0(__int64 a1)
{
  __m128 v1; // xmm2
  __m128 si128; // xmm1
  __m128 v3; // xmm2
  __m128 v4; // xmm6
  __m128 v5; // xmm7
  __int64 v6; // rcx

  v1 = _mm_add_ps(_mm_add_ps(*(__m128 *)(a1 + 320), *(__m128 *)(a1 + 304)), *(__m128 *)(a1 + 336));
  *(_DWORD *)(a1 + 400) = v1.m128_i32[0];
  *(_DWORD *)(a1 + 408) = _mm_shuffle_ps(v1, v1, 170).m128_u32[0];
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_180191590);
  *(_DWORD *)(a1 + 404) = _mm_shuffle_ps(v1, v1, 85).m128_u32[0];
  *(_DWORD *)(a1 + 412) = _mm_shuffle_ps(v1, v1, 255).m128_u32[0];
  *(__m128 *)(a1 + 400) = _mm_mul_ps(si128, *(__m128 *)(a1 + 400));
  v3 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 256));
  v4 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 272));
  v5 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 288));
  v6 = a1 + 416;
  *(float *)v6 = (float)((float)(_mm_shuffle_ps(v3, v3, 85).m128_f32[0] * 0.71520001)
                       + (float)(v3.m128_f32[0] * 0.21259999))
               + (float)(_mm_shuffle_ps(v3, v3, 170).m128_f32[0] * 0.0722);
  *(float *)(v6 + 4) = (float)((float)(_mm_shuffle_ps(v4, v4, 85).m128_f32[0] * 0.71520001)
                             + (float)(v4.m128_f32[0] * 0.21259999))
                     + (float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] * 0.0722);
  *(float *)(v6 + 8) = (float)((float)(_mm_shuffle_ps(v5, v5, 85).m128_f32[0] * 0.71520001)
                             + (float)(v5.m128_f32[0] * 0.21259999))
                     + (float)(_mm_shuffle_ps(v5, v5, 170).m128_f32[0] * 0.0722);
  sub_18003C524((unsigned __int64 *)v6);
}
