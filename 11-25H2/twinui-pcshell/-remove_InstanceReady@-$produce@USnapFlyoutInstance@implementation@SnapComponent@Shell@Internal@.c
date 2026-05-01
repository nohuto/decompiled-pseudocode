/*
 * XREFs of ?remove_InstanceReady@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18022BA00
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800E141C (-remove@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@Q.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::remove_InstanceReady(
        __int64 a1,
        void *a2)
{
  __int64 v2; // rax

  v2 = a1 + 16;
  if ( !a1 )
    v2 = 32LL;
  winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::remove((RTL_SRWLOCK *)v2, a2);
  return 0LL;
}
