/*
 * XREFs of ?GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@_NPEAU2@AEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180240C78
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180240A28 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 * Callees:
 *     ??$_Emplace_one_at_back@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAAEAUtagRECT@@$$QEAU2@@Z @ 0x180219984 (--$_Emplace_one_at_back@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAAEA.c)
 *     _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x1802409D0 (_anonymous_namespace_--GetInnerSearchBoxOffset.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarClippingRegion(
        __int64 a1,
        int *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // ecx
  __int64 result; // rax
  __int128 v11; // xmm1
  int v12; // eax
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int InnerSearchBoxOffset; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // eax
  _OWORD v20[5]; // [rsp+30h] [rbp-49h] BYREF
  int v21; // [rsp+80h] [rbp+7h]
  __m128i v22; // [rsp+90h] [rbp+17h] BYREF

  v8 = a2[2] - *a2;
  result = (unsigned int)(a2[3] - a2[1]);
  *(_QWORD *)a5 = 0LL;
  *(_DWORD *)(a5 + 8) = v8;
  *(_DWORD *)(a5 + 12) = result;
  if ( *(_DWORD *)(a3 + 80) == 2 )
  {
    v11 = *(_OWORD *)(a3 + 16);
    v12 = *(_DWORD *)(a3 + 80);
    v20[0] = *(_OWORD *)a3;
    v20[2] = *(_OWORD *)(a3 + 32);
    v13 = *(__m128i *)(a3 + 64);
    v20[1] = v11;
    v14 = *(__m128i *)(a3 + 48);
    v22 = v13;
    v20[4] = v13;
    v20[3] = v14;
    v21 = v12;
    InnerSearchBoxOffset = anonymous_namespace_::GetInnerSearchBoxOffset((__int64)v20);
    if ( a4 )
    {
      if ( a2[2] == InnerSearchBoxOffset + _mm_cvtsi128_si32(_mm_srli_si128(v22, 4)) )
      {
        v16 = *a2;
        v22.m128i_i32[0] = 0;
LABEL_7:
        v17 = a2[1];
        v22.m128i_i32[1] = *(_DWORD *)(a3 + 64) - v17;
        if ( a4 )
          v18 = *(_DWORD *)(a3 + 60);
        else
          v18 = a2[2];
        v22.m128i_i32[2] = v18 - v16;
        v19 = *(_DWORD *)(a3 + 72) - v17;
        goto LABEL_12;
      }
    }
    else if ( InnerSearchBoxOffset + *a2 == _mm_cvtsi128_si32(_mm_srli_si128(v14, 12)) )
    {
      v16 = *a2;
      v22.m128i_i32[0] = *(_DWORD *)(a3 + 68) - *a2;
      goto LABEL_7;
    }
    v22.m128i_i32[1] = *(_DWORD *)(a3 + 64) - a2[1];
    v22.m128i_i32[2] = *(_DWORD *)(a3 + 60) - *a2;
    v22.m128i_i32[3] = *(_DWORD *)(a3 + 72) - a2[1];
    v22.m128i_i32[0] = 0;
    std::vector<tagRECT>::_Emplace_one_at_back<tagRECT>(a6, &v22);
    v22.m128i_i32[0] = *(_DWORD *)(a3 + 68) - *a2;
    v22.m128i_i32[1] = *(_DWORD *)(a3 + 64) - a2[1];
    v22.m128i_i32[2] = a2[2] - *a2;
    v19 = *(_DWORD *)(a3 + 72) - a2[1];
LABEL_12:
    v22.m128i_i32[3] = v19;
    return std::vector<tagRECT>::_Emplace_one_at_back<tagRECT>(a6, &v22);
  }
  return result;
}
