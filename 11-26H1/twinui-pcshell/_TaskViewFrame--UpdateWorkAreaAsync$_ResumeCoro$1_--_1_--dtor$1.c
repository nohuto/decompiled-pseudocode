/*
 * XREFs of _TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x180708294
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA@XZ @ 0x180328DE4 (--1-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Window.c)
 */

__int64 __fastcall TaskViewFrame::UpdateWorkAreaAsync__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 96) = *(_QWORD *)(a2 + 176) + 32LL;
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::~await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>(*(_QWORD *)(a2 + 96));
}
