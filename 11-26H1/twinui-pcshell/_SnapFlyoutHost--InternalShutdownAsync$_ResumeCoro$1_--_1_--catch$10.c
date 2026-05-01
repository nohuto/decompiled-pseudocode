/*
 * XREFs of _SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1_::_1_::catch$10 @ 0x1806F9786
 * Callers:
 *     <none>
 * Callees:
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x1802D9790 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInsta.c)
 */

void __fastcall __noreturn SnapFlyoutHost::InternalShutdownAsync__ResumeCoro_1_::_1_::catch_10(__int64 a1, __int64 a2)
{
  *(_WORD *)(*(_QWORD *)(a2 + 144) + 8LL) = -1;
  std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
}
