/*
 * XREFs of PpmGetPolicyAction @ 0x140A9CA04
 * Callers:
 *     PpmCompareAndApplyPolicySettings @ 0x140945E50 (PpmCompareAndApplyPolicySettings.c)
 *     PpmInfoApplySettingUpdate @ 0x140A9C928 (PpmInfoApplySettingUpdate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmGetPolicyAction(const __m128i *a1, int *a2)
{
  __m128i v3; // xmm1
  __m128 v4; // xmm3
  __m128i v5; // xmm1
  __m128 v6; // xmm2
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  __m128i v9; // xmm3
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  unsigned __int64 result; // rax
  __int64 v13; // rcx
  int v14; // eax
  bool v15; // zf

  v3 = (__m128i)_mm_and_ps(
                  (__m128)_mm_loadu_si128(a1),
                  (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionProcessorPolicyMask));
  if ( v3.m128i_i64[0] | _mm_srli_si128(v3, 8).m128i_u64[0] )
  {
    v13 = a1->m128i_i64[0];
    if ( (v13 & 0x100) != 0 )
      *a2 |= 0x200u;
    if ( (v13 & 0x400) != 0 )
      *a2 |= 0x40u;
    if ( (v13 & 0x200) != 0 )
      *a2 |= 0x20u;
    if ( (v13 & 0x1000000000LL) != 0 )
      *a2 |= 0x82u;
    if ( (v13 & 0x800000000LL) != 0 )
    {
      v14 = *a2 | 0x100;
      v15 = PpmPerfAutonomousActivityWindowViaPerfControl == 0;
      *a2 = v14;
      if ( !v15 )
        *a2 = v14 | 2;
    }
    if ( (v13 & 0x2000000000LL) != 0 )
      *a2 |= 0x400u;
  }
  if ( _bittest64(a1->m128i_i64, 0x22u) && PpmPerfEppViaPerfControl )
    *a2 |= 2u;
  v4 = (__m128)_mm_loadu_si128(a1);
  v5 = (__m128i)_mm_and_ps(v4, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionPerfMask));
  if ( v5.m128i_i64[0] | _mm_srli_si128(v5, 8).m128i_u64[0] )
    *a2 |= 2u;
  v6 = v4;
  v7 = (__m128i)_mm_and_ps(v4, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionHeteroSchedulerMask));
  if ( v7.m128i_i64[0] | _mm_srli_si128(v7, 8).m128i_u64[0] )
    *a2 |= 0x1000u;
  else
    v6 = v4;
  v8 = (__m128i)_mm_and_ps(v4, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionParkingMask));
  if ( v8.m128i_i64[0] | _mm_srli_si128(v8, 8).m128i_u64[0] )
    *a2 |= 0xCu;
  else
    v6 = v4;
  v9 = (__m128i)_mm_and_ps(v4, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionPerfReinitMask));
  if ( v9.m128i_i64[0] | _mm_srli_si128(v9, 8).m128i_u64[0] )
    *a2 |= 8u;
  v10 = (__m128i)_mm_and_ps(v6, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionIdleMask));
  if ( v10.m128i_i64[0] | _mm_srli_si128(v10, 8).m128i_u64[0] )
    *a2 |= 1u;
  v11 = (__m128i)_mm_and_ps(v6, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionPerfResizeHistoryMask));
  result = v11.m128i_i64[0] | _mm_srli_si128(v11, 8).m128i_u64[0];
  if ( result )
    *a2 |= 0x10u;
  return result;
}
