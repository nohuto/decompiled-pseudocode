/*
 * XREFs of _CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1_::_1_::catch$2 @ 0x1806BF313
 * Callers:
 *     <none>
 * Callees:
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x1802E09C8 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInsta.c)
 */

void __fastcall __noreturn CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1_::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  *(_WORD *)(*(_QWORD *)(a2 + 96) + 8LL) = -1;
  std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
}
