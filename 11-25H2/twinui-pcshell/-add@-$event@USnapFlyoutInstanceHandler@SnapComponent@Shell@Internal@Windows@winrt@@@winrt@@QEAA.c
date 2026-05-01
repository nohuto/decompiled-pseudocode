/*
 * XREFs of ?add@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1801EE07C
 * Callers:
 *     ?add_PointerEntered@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1801EDFE0 (-add_PointerEntered@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Wi.c)
 *     ?add_InstanceReady@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1801EE030 (-add_InstanceReady@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Win.c)
 *     ?add_DismissRequested@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1805916E0 (-add_DismissRequested@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@.c)
 *     ?add_InstanceShutdown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180591730 (-add_InstanceShutdown@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@.c)
 *     ?add_PointerExited@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180591780 (-add_PointerExited@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Win.c)
 * Callees:
 *     ??$make_agile_delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@1@AEBU234561@@Z @ 0x1801ED828 (--$make_agile_delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@i.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@2@@Z @ 0x180468BFC (-add_agile@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windo.c)
 */

__int64 __fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::add(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v5 = winrt::impl::make_agile_delegate<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>(
         &v7,
         a3);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualFinishedArgs>>::add_agile(
    a1,
    a2,
    v5);
  return a2;
}
