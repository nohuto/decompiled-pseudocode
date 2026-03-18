/*
 * XREFs of ??XNumerics@Foundation@Windows@@YAAEAUfloat4x4@012@AEAU3012@AEBU3012@@Z @ 0x180187D18
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall Windows::Foundation::Numerics::operator*=(__m128 *a1, __m128 *a2)
{
  __m128 v2; // xmm4
  __m128 v3; // xmm5
  __m128 v4; // xmm6
  __m128 v5; // xmm7
  __m128 v6; // xmm8
  __m128 *result; // rax
  __m128 v8; // xmm9
  __m128 v9; // xmm10

  v2 = a1[1];
  v3 = a1[2];
  v4 = a2[3];
  v5 = a2[1];
  v6 = a2[2];
  result = a1;
  v8 = a1[3];
  v9 = *a2;
  *a1 = _mm_add_ps(
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a1, *a1, 255), v4), _mm_mul_ps(_mm_shuffle_ps(*a1, *a1, 85), v5)),
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a1, *a1, 170), v6), _mm_mul_ps(_mm_shuffle_ps(*a1, *a1, 0), *a2)));
  a1[1] = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v2, v2, 255), v4), _mm_mul_ps(_mm_shuffle_ps(v2, v2, 85), v5)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v2, v2, 170), v6), _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0), v9)));
  a1[2] = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 255), v4), _mm_mul_ps(_mm_shuffle_ps(v3, v3, 85), v5)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 170), v6), _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), v9)));
  a1[3] = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 255), v4), _mm_mul_ps(_mm_shuffle_ps(v8, v8, 85), v5)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 170), v6), _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v9)));
  return result;
}
