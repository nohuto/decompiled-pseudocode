/*
 * XREFs of ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x180240400
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?IsEnabled@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SA_NE_K@Z @ 0x180089EC4 (-IsEnabled@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSearchBoxOnTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVSearchBoxOnTaskbarSearchAppPositionerTelemetry@@P6AXXZ@Z @ 0x180089F04 (-get@-$static_lazy@VSearchBoxOnTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVSearch.c)
 *     ?LogMonitorData_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUMonitorInfo@@@Z @ 0x180089FC0 (-LogMonitorData_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUMonitorInfo@@@Z.c)
 *     ?GetDefaultStartSearchAppPopupHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYSTUCKPLACE@@UtagRECT@@H@Z @ 0x1801E6E3C (-GetDefaultStartSearchAppPopupHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYST.c)
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180240A28 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUMonitorInfo@@@Z @ 0x1803CF4A0 (-GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUMonitorInfo@@@Z.c)
 *     ?GetSearchSize@@YA?AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z @ 0x1803CF59C (-GetSearchSize@@YA-AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56546130@@@details@wil@@QEAA_NXZ @ 0x1803CF980 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56546130@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetAppRectAndClippingRegion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const RECT *a4,
        int a5,
        char a6)
{
  char v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // edx
  int v16; // ebx
  int DefaultStartSearchAppPopupHeight; // eax
  SearchBoxOnTaskbarSearchAppPositioner *v18; // rcx
  int v19; // esi
  int v20; // ebx
  int DefaultStartSearchAppWidth; // eax
  int v22; // ebx
  unsigned int v23; // eax
  LONG left; // eax
  int v25; // ebx
  int v26; // ebx
  int v27; // eax
  __m128i si128; // xmm1
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  _OWORD v33[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v34[5]; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+A0h] [rbp-60h]
  RECT rcSrc2; // [rsp+B0h] [rbp-50h] BYREF
  RECT rcSrc1; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v39[2]; // [rsp+E0h] [rbp-20h] BYREF
  int nNumerator[4]; // [rsp+100h] [rbp+0h]
  __int128 v41; // [rsp+110h] [rbp+10h]
  int v42; // [rsp+120h] [rbp+20h]
  struct tagRECT v43; // [rsp+130h] [rbp+30h] BYREF
  __m128i v44[3]; // [rsp+140h] [rbp+40h] BYREF
  int v45; // [rsp+170h] [rbp+70h]
  int v46; // [rsp+174h] [rbp+74h]
  __int64 v47; // [rsp+178h] [rbp+78h] BYREF
  __int128 v48; // [rsp+180h] [rbp+80h]
  struct tagRECT rcDst; // [rsp+190h] [rbp+90h] BYREF

  *(_QWORD *)&v33[0] = a2;
  v46 = 0;
  memset_0(&v43, 0, 0x48uLL);
  v47 = 0LL;
  v48 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int128 *, __int64))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8), &v38, a3);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  if ( SearchBoxOnTaskbarSearchAppPositionerTelemetry::IsEnabled(v11) )
  {
    wil::details::static_lazy<SearchBoxOnTaskbarSearchAppPositionerTelemetry>::get(
      v12,
      (void (__cdecl *)())_lambda_c91fb1c26cc17dbc30d45b50c58914ed_::_lambda_invoker_cdecl_);
    v34[0] = v38;
    v34[1] = v39[0];
    v34[2] = v39[1];
    v34[3] = *(_OWORD *)nNumerator;
    v34[4] = v41;
    v35 = v42;
    SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogMonitorData_(v13, (int *)v34);
  }
  if ( a6 || a5 || nNumerator[1] != 3 || !v42 )
  {
    rcSrc2.left = v38;
    rcSrc2.top = DWORD1(v39[0]);
    rcSrc2.right = DWORD2(v38);
    rcSrc2.bottom = HIDWORD(v39[0]);
    MulDiv(642, nNumerator[2], 96);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56546130>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56546130>::GetImpl'::`2'::impl) )
    {
      GetSearchSize(v33, v39, (unsigned int)nNumerator[2]);
      v14 = (int)*((float *)v33 + 1);
      v15 = nNumerator[2];
    }
    else
    {
      v33[0] = v39[0];
      v16 = nNumerator[2];
      DefaultStartSearchAppPopupHeight = SearchBoxOnTaskbarSearchAppPositioner::GetDefaultStartSearchAppPopupHeight(
                                           a1,
                                           nNumerator[1],
                                           (__int64)v33,
                                           nNumerator[2]);
      v15 = v16;
      v14 = DefaultStartSearchAppPopupHeight;
    }
    v19 = MulDiv(v14, v15, 96);
    if ( nNumerator[1] != -1 )
    {
      v20 = nNumerator[2];
      DefaultStartSearchAppWidth = SearchBoxOnTaskbarSearchAppPositioner::GetDefaultStartSearchAppWidth(
                                     v18,
                                     (const struct MonitorInfo *)&v38);
      v22 = MulDiv(DefaultStartSearchAppWidth, v20, 96);
      if ( v19 <= MulDiv(480, nNumerator[2], 96) )
        v19 = MulDiv(480, nNumerator[2], 96);
      v23 = MulDiv(12, nNumerator[2], 96);
      if ( v10 )
        rcSrc2.left = v23 + DWORD1(v41) - v22;
      else
        rcSrc2.left = nNumerator[3] - v23;
      rcSrc2.top = HIDWORD(v39[0]) - v19;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 40LL))(*(_QWORD *)(a1 + 8), v23)
        || HIDWORD(v41) )
      {
        left = rcSrc2.left;
      }
      else
      {
        if ( v10 )
          left = DWORD2(v38) - v22;
        else
          left = v38;
        rcSrc2.left = left;
      }
      if ( HIDWORD(v41) == 1 )
      {
        left = v38 + (DWORD2(v38) - v22 - (int)v38) / 2;
        rcSrc2.left = left;
      }
      rcSrc2.right = v22 + left;
      rcSrc2.bottom = v19 + rcSrc2.top;
    }
    rcDst = 0LL;
    v25 = DWORD2(v41) + MulDiv(40, nNumerator[2], 96) - v41;
    if ( !IsRectEmpty(a4) && IntersectRect(&rcDst, a4, &rcSrc2) && HIDWORD(v38) - a4->bottom <= v25 )
      OffsetRect(&rcSrc2, 0, a4->top - rcSrc2.bottom);
    rcSrc1.left = v38;
    rcSrc1.top = DWORD1(v39[0]);
    rcSrc1.right = DWORD2(v38);
    rcSrc1.bottom = HIDWORD(v39[0]);
    v26 = MulDiv(0, nNumerator[2], 96);
    v27 = MulDiv(0, nNumerator[2], 96);
    rcSrc1.top += v26;
    rcSrc1.left += v27;
    rcSrc1.right -= v27;
    IntersectRect(&v43, &rcSrc1, &rcSrc2);
    v44[0].m128i_i64[0] = 0LL;
    v44[0].m128i_i32[2] = v43.right - v43.left;
    v44[0].m128i_i32[3] = v43.bottom - v43.top;
    memset(&v44[1], 0, 32);
    v45 = 0;
    if ( a5 == 1 )
    {
      si128 = 0LL;
      v44[0] = 0LL;
    }
    else
    {
      si128 = _mm_load_si128(v44);
    }
    *(struct tagRECT *)a2 = v43;
    *(__m128i *)(a2 + 16) = si128;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_OWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 64) = 0;
    v29 = *((_QWORD *)&v48 + 1);
    v30 = v48;
    v48 = 0uLL;
    v31 = v47;
    v47 = 0LL;
    *(_QWORD *)(a2 + 72) = v31;
    *(_QWORD *)(a2 + 80) = v30;
    *(_QWORD *)(a2 + 88) = v29;
  }
  else
  {
    SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarAppRectAndClippingRegion(v12, a2, &v38, a4, v10);
  }
  std::vector<Geometry::CRect>::_Tidy(&v47);
  return a2;
}
