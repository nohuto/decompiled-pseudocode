/*
 * XREFs of PopApplyAdminPolicy @ 0x140B5F580
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall PopApplyAdminPolicy(__int64 a1, __m128i *a2)
{
  __m128i v2; // xmm1
  __int64 v3; // xmm0_8
  int v4; // edx
  unsigned __int64 v5; // xmm0_8
  int v6; // eax
  unsigned int v7; // ecx
  __m128i Buf1; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v2 = *a2;
  v3 = a2[1].m128i_i64[0];
  v4 = _mm_cvtsi128_si32(*a2);
  Buf1 = v2;
  v10 = v3;
  if ( (unsigned int)(v4 - 2) > 3 )
    return (unsigned int)-1073741811;
  if ( (unsigned int)(v2.m128i_i32[1] - 2) > 3 )
    return (unsigned int)-1073741811;
  if ( v4 > v2.m128i_i32[1] )
    return (unsigned int)-1073741811;
  v5 = _mm_srli_si128(v2, 8).m128i_u64[0];
  if ( (unsigned int)v5 > HIDWORD(v5) || (unsigned int)v10 > HIDWORD(v10) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v6 = memcmp(&Buf1, &PpmIdlePolicyLock.Process, 0x18uLL);
    v7 = 0;
    if ( v6 )
    {
      *(__m128i *)&PpmIdlePolicyLock.Process = v2;
      *(_QWORD *)&PpmIdlePolicyLock.UserAffinityPrimaryGroup = v10;
    }
  }
  return v7;
}
