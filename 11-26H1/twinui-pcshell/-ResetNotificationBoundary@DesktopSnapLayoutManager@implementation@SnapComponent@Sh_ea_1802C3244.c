/*
 * XREFs of ?ResetNotificationBoundary@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUevent_token@7@AEBUResetNotificationBoundaryHandler@34567@@Z @ 0x1802C3244
 * Callers:
 *     ?add_ResetNotificationBoundary@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180232C70 (-add_ResetNotificationBoundary@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapCo.c)
 * Callees:
 *     ??$make_agile_delegate@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@1@AEBU234561@@Z @ 0x1802A3208 (--$make_agile_delegate@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@wi.c)
 *     ?add_agile@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1805BBB14 (-add_agile@-$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::ResetNotificationBoundary(
        __int64 *a1)
{
  __int64 *v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v1 = winrt::impl::make_agile_delegate<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>(
         &v4,
         a1);
  winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::add_agile(v2, &v5, v1);
  return v5;
}
