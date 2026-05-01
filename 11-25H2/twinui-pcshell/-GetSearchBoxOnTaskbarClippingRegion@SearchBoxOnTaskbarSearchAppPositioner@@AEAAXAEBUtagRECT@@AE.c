/*
 * XREFs of ?GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@_NPEAU2@AEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18024CD1C
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x18024CACC (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 * Callees:
 *     _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x18024CA74 (_anonymous_namespace_--GetInnerSearchBoxOffset.c)
 *     ??$emplace_back@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?A_T$$QEAUtagRECT@@@Z @ 0x1802972B0 (--$emplace_back@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-A_T$$QEAUt.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarClippingRegion(
        __int64 a1,
        int *a2,
        __int64 a3,
        char a4,
        _DWORD *a5,
        __int64 a6)
{
  int v8; // r10d
  __int64 result; // rax
  int v11; // edx
  __int128 v12; // xmm1
  int v13; // eax
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  int InnerSearchBoxOffset; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _OWORD v22[5]; // [rsp+30h] [rbp-49h] BYREF
  int v23; // [rsp+80h] [rbp+7h]
  __m128i v24; // [rsp+90h] [rbp+17h] BYREF

  v8 = a2[2] - *a2;
  result = (unsigned int)a2[1];
  v11 = a2[3] - result;
  *a5 = 0;
  a5[1] = 0;
  a5[2] = v8;
  a5[3] = v11;
  if ( *(_DWORD *)(a3 + 80) == 2 )
  {
    v12 = *(_OWORD *)(a3 + 16);
    v13 = *(_DWORD *)(a3 + 80);
    v22[0] = *(_OWORD *)a3;
    v22[2] = *(_OWORD *)(a3 + 32);
    v14 = *(__m128i *)(a3 + 64);
    v22[1] = v12;
    v15 = *(__m128i *)(a3 + 48);
    v24 = v14;
    v22[4] = v14;
    v22[3] = v15;
    v23 = v13;
    InnerSearchBoxOffset = anonymous_namespace_::GetInnerSearchBoxOffset((__int64)v22);
    if ( a4 )
    {
      if ( a2[2] == InnerSearchBoxOffset + _mm_cvtsi128_si32(_mm_srli_si128(v24, 4)) )
      {
        v24.m128i_i32[0] = 0;
        v17 = *a2;
LABEL_7:
        v18 = a2[1];
        v24.m128i_i32[1] = *(_DWORD *)(a3 + 64) - v18;
        if ( a4 )
          v19 = *(_DWORD *)(a3 + 60);
        else
          v19 = a2[2];
        v24.m128i_i32[2] = v19 - v17;
        v20 = *(_DWORD *)(a3 + 72) - v18;
        goto LABEL_12;
      }
    }
    else if ( InnerSearchBoxOffset + *a2 == _mm_cvtsi128_si32(_mm_srli_si128(v15, 12)) )
    {
      v17 = *a2;
      v24.m128i_i32[0] = *(_DWORD *)(a3 + 68) - *a2;
      goto LABEL_7;
    }
    v21 = *(_DWORD *)(a3 + 64) - a2[1];
    v24.m128i_i32[0] = 0;
    v24.m128i_i32[1] = v21;
    v24.m128i_i32[2] = *(_DWORD *)(a3 + 60) - *a2;
    v24.m128i_i32[3] = *(_DWORD *)(a3 + 72) - a2[1];
    std::vector<tagRECT>::emplace_back<tagRECT>(a6, &v24);
    v24.m128i_i32[0] = *(_DWORD *)(a3 + 68) - *a2;
    v24.m128i_i32[1] = *(_DWORD *)(a3 + 64) - a2[1];
    v24.m128i_i32[2] = a2[2] - *a2;
    v20 = *(_DWORD *)(a3 + 72) - a2[1];
LABEL_12:
    v24.m128i_i32[3] = v20;
    return std::vector<tagRECT>::emplace_back<tagRECT>(a6, &v24);
  }
  return result;
}
