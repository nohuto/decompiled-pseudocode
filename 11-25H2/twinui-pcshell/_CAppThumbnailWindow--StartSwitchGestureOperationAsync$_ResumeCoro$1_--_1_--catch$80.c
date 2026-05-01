/*
 * XREFs of _CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1_::_1_::catch$80 @ 0x1806C91D7
 * Callers:
 *     <none>
 * Callees:
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x1802E09C8 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInsta.c)
 */

void __fastcall __noreturn CAppThumbnailWindow::StartSwitchGestureOperationAsync__ResumeCoro_1_::_1_::catch_80(
        __int64 a1,
        __int64 a2)
{
  *(_WORD *)(*(_QWORD *)(a2 + 336) + 8LL) = -1;
  std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
}
