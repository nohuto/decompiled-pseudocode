/*
 * XREFs of ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x180528E58
 * Callers:
 *     _lambda_83894a20d7676cc7370719a196cbc3a9_::operator() @ 0x180528294 (_lambda_83894a20d7676cc7370719a196cbc3a9_--operator().c)
 *     ?OnCaptureChanged@WindowArrangementView@@UEAAJXZ @ 0x18052A4F0 (-OnCaptureChanged@WindowArrangementView@@UEAAJXZ.c)
 *     ?OnKeyDown@WindowArrangementView@@UEAAJK@Z @ 0x18052A5A0 (-OnKeyDown@WindowArrangementView@@UEAAJK@Z.c)
 *     ?OnKeyUp@WindowArrangementView@@UEAAJK@Z @ 0x18052A5F0 (-OnKeyUp@WindowArrangementView@@UEAAJK@Z.c)
 *     ?OnPointerCancel@WindowArrangementView@@UEAAJXZ @ 0x18052A640 (-OnPointerCancel@WindowArrangementView@@UEAAJXZ.c)
 *     ?OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z @ 0x18052A690 (-OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Cleanup@WindowArrangementView@@AEAAXXZ @ 0x1805289EC (-Cleanup@WindowArrangementView@@AEAAXXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x180529620 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18052A888 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18052BA50 (-Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowArrangementView::EndDrag(WindowArrangementView *this, char a2)
{
  int v4; // ecx
  __m128i v5; // xmm6
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, GUID *, __int64 *); // rbx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+28h] [rbp-38h] BYREF
  __m128i v14; // [rsp+30h] [rbp-30h] BYREF
  char v15; // [rsp+40h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( !*((_BYTE *)this + 314) )
  {
    *((_BYTE *)this + 314) = 1;
    if ( a2 )
      v4 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 12) + 32LL))(
                        *((_QWORD *)this + 12),
                        &v14);
    else
      v4 = -1;
    v12 = v4;
    v5 = *(__m128i *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                       &v14,
                       (__int64)this,
                       (__int64)&v12);
    v14 = v5;
    v15 = 1;
    v13 = 0LL;
    v6 = *((_QWORD *)this + 10);
    v7 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 152LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    if ( v7(v6, &GUID_959cb746_add4_483a_8acd_059d06f3798a, &v13) >= 0 )
    {
      LOBYTE(v8) = a2 ^ 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 56LL))(v13, v8);
    }
    if ( a2 )
    {
      v9 = WindowArrangementView::ProcessDrop(this, v12);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59C,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
        WindowArrangementView::Hide((WindowArrangementView *)(v5.m128i_i64[0] + 24), 1);
        WindowArrangementView::Cleanup((WindowArrangementView *)v5.m128i_i64[0]);
        TabletModeTelemetry::TMAppArrange::Stop(
          v5.m128i_i64[0] + 328,
          *(unsigned int *)_mm_srli_si128(v5, 8).m128i_u32[0]);
        return v10;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    WindowArrangementView::Hide((WindowArrangementView *)(v5.m128i_i64[0] + 24), 1);
    WindowArrangementView::Cleanup((WindowArrangementView *)v5.m128i_i64[0]);
    TabletModeTelemetry::TMAppArrange::Stop(v5.m128i_i64[0] + 328, *(unsigned int *)_mm_srli_si128(v5, 8).m128i_u32[0]);
  }
  return 0LL;
}
