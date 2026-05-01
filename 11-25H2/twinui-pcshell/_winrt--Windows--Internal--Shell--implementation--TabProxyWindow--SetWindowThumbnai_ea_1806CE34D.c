/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806CE34D
 * Callers:
 *     <none>
 * Callees:
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x1803386D0 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__ResumeCoro_1_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 144) + 80LL;
  winrt::impl::timespan_awaiter::~timespan_awaiter(*(winrt::cancellable_promise ***)(a2 + 64));
}
