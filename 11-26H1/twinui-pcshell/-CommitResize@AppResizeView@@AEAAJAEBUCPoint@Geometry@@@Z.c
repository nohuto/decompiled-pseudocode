/*
 * XREFs of ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18052D674
 * Callers:
 *     ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x18052E0C0 (-OnKeyDown@AppResizeView@@UEAAJK@Z.c)
 *     ?OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x18052E200 (-OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Cleanup@AppResizeView@@AEAAXXZ @ 0x18052D61C (-Cleanup@AppResizeView@@AEAAXXZ.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x18052D910 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x18052E330 (-QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayou.c)
 *     ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x18052E94C (-Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppResizeView::CommitResize(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  __m128i v4; // xmm6
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  HRESULT v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+30h] [rbp-50h] BYREF
  __m128i v17; // [rsp+38h] [rbp-48h]
  char v18; // [rsp+48h] [rbp-38h]
  _QWORD v19[3]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    v16 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 8) + 32LL))(
                       *((_QWORD *)this + 8),
                       v19);
    v4 = *(__m128i *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                       v19,
                       (__int64)this,
                       (__int64)&v16);
    v17 = v4;
    v18 = 1;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
    v5 = AppResizeView::QueryResizeApps(this, v16, a2, &v14);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x228,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
      AppResizeView::Hide((AppResizeView *)(v4.m128i_i64[0] + 24), 1);
      AppResizeView::Cleanup((AppResizeView *)v4.m128i_i64[0], v7);
      TabletModeTelemetry::TMAppResize::Stop(v4.m128i_i64[0] + 152, *(unsigned int *)_mm_srli_si128(v4, 8).m128i_u32[0]);
      return v6;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v9 = IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
           &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
           &ppvOut);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22B,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
      AppResizeView::Hide((AppResizeView *)(v4.m128i_i64[0] + 24), 1);
      AppResizeView::Cleanup((AppResizeView *)v4.m128i_i64[0], v10);
      TabletModeTelemetry::TMAppResize::Stop(v4.m128i_i64[0] + 152, *(unsigned int *)_mm_srli_si128(v4, 8).m128i_u32[0]);
      return v6;
    }
    v11 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 88LL))(ppvOut, v14);
    v6 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22C,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
      AppResizeView::Hide((AppResizeView *)(v4.m128i_i64[0] + 24), 1);
      AppResizeView::Cleanup((AppResizeView *)v4.m128i_i64[0], v12);
      TabletModeTelemetry::TMAppResize::Stop(v4.m128i_i64[0] + 152, *(unsigned int *)_mm_srli_si128(v4, 8).m128i_u32[0]);
      return v6;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
    AppResizeView::Hide((AppResizeView *)(v4.m128i_i64[0] + 24), 1);
    AppResizeView::Cleanup((AppResizeView *)v4.m128i_i64[0], v13);
    TabletModeTelemetry::TMAppResize::Stop(v4.m128i_i64[0] + 152, *(unsigned int *)_mm_srli_si128(v4, 8).m128i_u32[0]);
  }
  return 0LL;
}
