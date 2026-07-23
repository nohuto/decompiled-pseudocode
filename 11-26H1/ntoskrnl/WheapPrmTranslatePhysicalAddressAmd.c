/*
 * XREFs of WheapPrmTranslatePhysicalAddressAmd @ 0x1406DBB28
 * Callers:
 *     WheaPrmTranslatePhysicalAddress @ 0x1406DB700 (WheaPrmTranslatePhysicalAddress.c)
 * Callees:
 *     WheapPrmInvokeHandler @ 0x1406DB750 (WheapPrmInvokeHandler.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall WheapPrmTranslatePhysicalAddressAmd(__int64 a1, __int64 a2)
{
  __m128i si128; // xmm0
  __int64 result; // rax
  __m128i *v5; // rdx
  _QWORD v6[2]; // [rsp+38h] [rbp-40h] BYREF
  __m128i v7; // [rsp+48h] [rbp-30h] BYREF
  int v8; // [rsp+58h] [rbp-20h]

  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v6[1] = &v7;
  v6[0] = a1;
  v8 = _mm_cvtsi128_si32(si128);
  v7 = si128;
  result = WheapPrmInvokeHandler(&AMD_SPA_TO_DRAM_PRM_HANDLER_GUID, (__int64)v6, 16LL);
  if ( (int)result >= 0 )
  {
    v5 = *(__m128i **)(a2 + 8);
    *v5 = v7;
    v5[1].m128i_i32[0] = v8;
  }
  return result;
}
