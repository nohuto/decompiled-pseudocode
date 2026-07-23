/*
 * XREFs of PpmGetPolicyAction @ 0x140AD881C
 * Callers:
 *     PpmCompareAndApplyPolicySettings @ 0x1409C17C0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmInfoApplySettingUpdate @ 0x140AD873C (PpmInfoApplySettingUpdate.c)
 * Callees:
 *     Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline @ 0x14060D314 (Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline.c)
 */

unsigned __int64 __fastcall PpmGetPolicyAction(const __m128i *a1, int *a2)
{
  __m128i v4; // xmm1
  __int64 v5; // rcx
  int v6; // eax
  bool v7; // zf
  __m128 v8; // xmm2
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm1
  __m128 v12; // xmm2
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  unsigned __int64 result; // rax

  v4 = (__m128i)_mm_and_ps(
                  (__m128)_mm_loadu_si128(a1),
                  (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionProcessorPolicyMask));
  if ( v4.m128i_i64[0] | _mm_srli_si128(v4, 8).m128i_u64[0] )
  {
    v5 = a1->m128i_i64[0];
    if ( (v5 & 0x100) != 0 )
      *a2 |= 0x200u;
    if ( (v5 & 0x400) != 0 )
      *a2 |= 0x40u;
    if ( (v5 & 0x200) != 0 )
      *a2 |= 0x20u;
    if ( (v5 & 0x1000000000LL) != 0 )
      *a2 |= 0x82u;
    if ( (v5 & 0x800000000LL) != 0 )
    {
      v6 = *a2 | 0x100;
      v7 = PpmPerfAutonomousActivityWindowViaPerfControl == 0;
      *a2 = v6;
      if ( !v7 )
        *a2 = v6 | 2;
    }
    if ( (v5 & 0x2000000000LL) != 0 )
      *a2 |= 0x400u;
  }
  if ( _bittest64(a1->m128i_i64, 0x22u) && PpmPerfEppViaPerfControl )
    *a2 |= 2u;
  v8 = (__m128)_mm_loadu_si128(a1);
  v9 = (__m128i)_mm_and_ps(v8, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionPerfMask));
  if ( v9.m128i_i64[0] | _mm_srli_si128(v9, 8).m128i_u64[0] )
    *a2 |= 2u;
  v10 = (__m128i)_mm_and_ps(v8, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionHeteroSchedulerMask));
  if ( v10.m128i_i64[0] | _mm_srli_si128(v10, 8).m128i_u64[0] )
    *a2 |= 0x1000u;
  if ( (unsigned int)Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline() )
  {
    v11 = (__m128i)_mm_and_ps(
                     (__m128)_mm_loadu_si128(a1),
                     (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionHeteroWpsMask));
    if ( v11.m128i_i64[0] | _mm_srli_si128(v11, 8).m128i_u64[0] )
      *a2 |= 0x10000u;
  }
  v12 = (__m128)_mm_loadu_si128(a1);
  v13 = (__m128i)_mm_and_ps(v12, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionParkingMask));
  if ( v13.m128i_i64[0] | _mm_srli_si128(v13, 8).m128i_u64[0] )
    *a2 |= 0xCu;
  v14 = (__m128i)_mm_and_ps(v12, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionPerfReinitMask));
  if ( v14.m128i_i64[0] | _mm_srli_si128(v14, 8).m128i_u64[0] )
    *a2 |= 8u;
  v15 = (__m128i)_mm_and_ps(v12, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionIdleMask));
  if ( v15.m128i_i64[0] | _mm_srli_si128(v15, 8).m128i_u64[0] )
    *a2 |= 1u;
  v16 = (__m128i)_mm_and_ps(v12, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionPerfResizeHistoryMask));
  result = v16.m128i_i64[0] | _mm_srli_si128(v16, 8).m128i_u64[0];
  if ( result )
    *a2 |= 0x10u;
  return result;
}
