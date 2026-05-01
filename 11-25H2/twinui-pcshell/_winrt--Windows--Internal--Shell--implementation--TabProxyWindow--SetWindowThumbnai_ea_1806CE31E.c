/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806CE31E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA@XZ @ 0x18032BACC (--1-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Window.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__ResumeCoro_1_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 144) + 48LL;
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::~await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>(*(_QWORD *)(a2 + 56));
}
