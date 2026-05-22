/*
 * XREFs of ??DNumerics@Foundation@Windows@@YA?AUquaternion@012@AEBU3012@0@Z @ 0x1800C6384
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6894 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C72D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall Windows::Foundation::Numerics::operator*(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 *result; // rax
  __m128 v4; // xmm2
  __m128 v5; // xmm1

  result = a1;
  v4 = _mm_shuffle_ps(*a3, *a3, 27);
  v5 = _mm_shuffle_ps(v4, v4, 177);
  *a1 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_mul_ps(_mm_shuffle_ps(v5, v5, 27), _mm_shuffle_ps(*a2, *a2, 170)),
              (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ),
            _mm_mul_ps(
              _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v5),
              (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY)),
          _mm_add_ps(
            _mm_mul_ps(
              _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), v4),
              (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX),
            _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 255), *a3)));
  return result;
}
