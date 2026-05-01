/*
 * XREFs of _CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806DA134
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA@XZ @ 0x18032BACC (--1-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Window.c)
 */

__int64 __fastcall CopilotHotkeyManager::LaunchHardwareKeySettings__ResumeCoro_1_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a2 + 240) + 80LL;
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::~await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>(*(_QWORD *)(a2 + 160));
}
