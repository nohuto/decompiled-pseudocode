/*
 * XREFs of _ApplicationFlyoutView::Hide$_ResumeCoro$1_::_1_::catch$1 @ 0x1806FFC7F
 * Callers:
 *     <none>
 * Callees:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180453EBC (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wi.c)
 */

__int64 __fastcall ApplicationFlyoutView::Hide__ResumeCoro_1_::_1_::catch_1(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 96);
  *(_WORD *)(v2 + 8) = -1;
  *(_QWORD *)(v2 + 64) = v2 - 112;
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::unhandled_exception(v2 - 112);
  return 0LL;
}
