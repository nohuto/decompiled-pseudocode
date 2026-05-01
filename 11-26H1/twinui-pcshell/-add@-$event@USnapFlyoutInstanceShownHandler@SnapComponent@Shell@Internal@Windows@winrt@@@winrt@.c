/*
 * XREFs of ?add@?$event@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x18020710C
 * Callers:
 *     ?add_InstanceShown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1802070C0 (-add_InstanceShown@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Win.c)
 * Callees:
 *     ??$make_agile_delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@1@AEBU234561@@Z @ 0x1802A667C (--$make_agile_delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winr.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@2@@Z @ 0x180474B9C (-add_agile@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windo.c)
 */

__int64 __fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler>::add(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rax
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v5 = winrt::impl::make_agile_delegate<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler>(
         &v7,
         a3);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualFinishedArgs>>::add_agile(
    a1,
    a2,
    v5);
  return a2;
}
