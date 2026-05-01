/*
 * XREFs of _CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1_::_1_::dtor$17 @ 0x1806C91A2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1800A2F70 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 */

void __fastcall CAppThumbnailWindow::StartSwitchGestureOperationAsync__ResumeCoro_1_::_1_::dtor_17(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 256) = *(_QWORD *)(a2 + 336) + 368LL;
  std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(*(_QWORD *)(a2 + 256));
}
