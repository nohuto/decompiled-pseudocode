/*
 * XREFs of ?ResetNotificationBoundary@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAXAEBUevent_token@7@@Z @ 0x1805BB15C
 * Callers:
 *     ?remove_ResetNotificationBoundary@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1805BC290 (-remove_ResetNotificationBoundary@-$produce@UDesktopSnapLayoutManager@factory_implementation@Sna.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::ResetNotificationBoundary(
        const struct winrt::event_token *a1)
{
  winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::remove(
    a1,
    *(_QWORD *)a1);
}
