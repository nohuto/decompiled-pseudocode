/*
 * XREFs of ?remove_InstanceShutdown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1802B9B20
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800DC6A0 (-remove@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@Q.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::remove_InstanceShutdown(
        __int64 a1,
        void *a2)
{
  __int64 v2; // rax

  v2 = a1 + 64;
  if ( !a1 )
    v2 = 80LL;
  winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::remove((RTL_SRWLOCK *)v2, a2);
  return 0LL;
}
