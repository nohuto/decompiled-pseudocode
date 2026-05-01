/*
 * XREFs of ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x18024C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SA_NE_K@Z @ 0x18008E774 (-IsEnabled@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSearchBoxOnTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVSearchBoxOnTaskbarSearchAppPositionerTelemetry@@P6AXXZ@Z @ 0x18008E7B4 (-get@-$static_lazy@VSearchBoxOnTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVSearch.c)
 *     ?LogMonitorData_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUMonitorInfo@@@Z @ 0x18008E860 (-LogMonitorData_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUMonitorInfo@@@Z.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1800A982C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z @ 0x1801BB28C (-IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z.c)
 *     ?GetDefaultStartSearchAppPopupHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYSTUCKPLACE@@UtagRECT@@H@Z @ 0x1801F0DD8 (-GetDefaultStartSearchAppPopupHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYST.c)
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x18024CACC (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
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
  int v14; // ebx
  int DefaultStartSearchAppPopupHeight; // eax
  int v16; // r14d
  int v17; // ebx
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // ebx
  unsigned int v21; // eax
  LONG left; // eax
  int v23; // ebx
  int v24; // ebx
  int v25; // eax
  __int128 v26; // xmm1
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int128 v31; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v32[5]; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+A0h] [rbp-60h]
  RECT rcSrc2; // [rsp+B0h] [rbp-50h] BYREF
  RECT rcSrc1; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v37; // [rsp+E0h] [rbp-20h]
  __int128 v38; // [rsp+F0h] [rbp-10h]
  int nNumerator[4]; // [rsp+100h] [rbp+0h]
  __int128 v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+120h] [rbp+20h]
  struct tagRECT v42; // [rsp+130h] [rbp+30h] BYREF
  __int128 v43; // [rsp+140h] [rbp+40h]
  __int128 v44; // [rsp+150h] [rbp+50h]
  __int128 v45; // [rsp+160h] [rbp+60h]
  int v46; // [rsp+170h] [rbp+70h]
  int v47; // [rsp+174h] [rbp+74h]
  __int64 v48; // [rsp+178h] [rbp+78h] BYREF
  __int128 v49; // [rsp+180h] [rbp+80h]
  struct tagRECT rcDst; // [rsp+190h] [rbp+90h] BYREF

  *(_QWORD *)&rcSrc2.left = a2;
  v47 = 0;
  memset_0(&v42, 0, 0x48uLL);
  v48 = 0LL;
  v49 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int128 *, __int64))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8), &v36, a3);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  if ( SearchBoxOnTaskbarSearchAppPositionerTelemetry::IsEnabled(v11) )
  {
    wil::details::static_lazy<SearchBoxOnTaskbarSearchAppPositionerTelemetry>::get(
      v12,
      (void (__cdecl *)())_lambda_c91fb1c26cc17dbc30d45b50c58914ed_::_lambda_invoker_cdecl_);
    v32[0] = v36;
    v32[1] = v37;
    v32[2] = v38;
    v32[3] = *(_OWORD *)nNumerator;
    v32[4] = v40;
    v33 = v41;
    SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogMonitorData_(v13, (int *)v32);
  }
  if ( a6 || a5 || nNumerator[1] != 3 || !v41 )
  {
    rcSrc2.left = v36;
    rcSrc2.top = DWORD1(v37);
    rcSrc2.right = DWORD2(v36);
    rcSrc2.bottom = HIDWORD(v37);
    MulDiv(642, nNumerator[2], 96);
    v31 = v37;
    v14 = nNumerator[2];
    DefaultStartSearchAppPopupHeight = SearchBoxOnTaskbarSearchAppPositioner::GetDefaultStartSearchAppPopupHeight(
                                         a1,
                                         nNumerator[1],
                                         (__int64)&v31,
                                         nNumerator[2]);
    v16 = MulDiv(DefaultStartSearchAppPopupHeight, v14, 96);
    v17 = nNumerator[1];
    if ( nNumerator[1] != -1 )
    {
      v18 = MulDiv(DWORD2(v36) - v36, 96, nNumerator[2]);
      v19 = SearchAppSizeHelpers::IsWideAtStartupEnabled((SearchAppSizeHelpers *)v18) != 0 ? 800 : 666;
      if ( (v17 & 0xFFFFFFFD) == 0 )
        v19 += 12;
      v20 = MulDiv(v19, nNumerator[2], 96);
      if ( v16 <= MulDiv(480, nNumerator[2], 96) )
        v16 = MulDiv(480, nNumerator[2], 96);
      v21 = MulDiv(12, nNumerator[2], 96);
      if ( v10 )
        rcSrc2.left = v21 + DWORD1(v40) - v20;
      else
        rcSrc2.left = nNumerator[3] - v21;
      rcSrc2.top = HIDWORD(v37) - v16;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 40LL))(*(_QWORD *)(a1 + 8), v21)
        || HIDWORD(v40) )
      {
        left = rcSrc2.left;
      }
      else
      {
        if ( v10 )
          left = DWORD2(v36) - v20;
        else
          left = v36;
        rcSrc2.left = left;
      }
      if ( HIDWORD(v40) == 1 )
      {
        left = v36 + (DWORD2(v36) - (int)v36 - v20) / 2;
        rcSrc2.left = left;
      }
      rcSrc2.right = v20 + left;
      rcSrc2.bottom = v16 + rcSrc2.top;
    }
    rcDst = 0LL;
    v23 = DWORD2(v40) + MulDiv(40, nNumerator[2], 96) - v40;
    if ( !IsRectEmpty(a4) && IntersectRect(&rcDst, a4, &rcSrc2) && HIDWORD(v36) - a4->bottom <= v23 )
      OffsetRect(&rcSrc2, 0, a4->top - rcSrc2.bottom);
    rcSrc1.left = v36;
    rcSrc1.top = DWORD1(v37);
    rcSrc1.right = DWORD2(v36);
    rcSrc1.bottom = HIDWORD(v37);
    v24 = MulDiv(0, nNumerator[2], 96);
    v25 = MulDiv(0, nNumerator[2], 96);
    rcSrc1.top += v24;
    rcSrc1.left += v25;
    rcSrc1.right -= v25;
    IntersectRect(&v42, &rcSrc1, &rcSrc2);
    *(_QWORD *)&v43 = 0LL;
    DWORD2(v43) = v42.right - v42.left;
    HIDWORD(v43) = v42.bottom - v42.top;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0;
    if ( a5 == 1 )
    {
      v26 = 0LL;
      v43 = 0LL;
    }
    else
    {
      v26 = v43;
    }
    *(struct tagRECT *)a2 = v42;
    *(_OWORD *)(a2 + 16) = v26;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_OWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 64) = 0;
    v27 = *((_QWORD *)&v49 + 1);
    v28 = v49;
    v49 = 0uLL;
    v29 = v48;
    v48 = 0LL;
    *(_QWORD *)(a2 + 72) = v29;
    *(_QWORD *)(a2 + 80) = v28;
    *(_QWORD *)(a2 + 88) = v27;
  }
  else
  {
    SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarAppRectAndClippingRegion(v12, a2, &v36, a4, v10);
  }
  std::vector<Geometry::CRect>::_Tidy((__int64)&v48);
  return a2;
}
