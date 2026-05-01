/*
 * XREFs of ??$invoke@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInstance@implementation@23456@@impl@winrt@@YA_NAEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@1@AEBUSnapFlyoutInstance@implementation@34561@@Z @ 0x1800DC8A0
 * Callers:
 *     ??$?RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x1800DC5E8 (--$-RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@-$event@USn.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??RSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUSnapFlyoutInstance@12345@@Z @ 0x1802697EC (--RSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUSnapFlyoutInst.c)
 */

char __fastcall winrt::impl::invoke<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2 + 16;
  winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::operator()(a1, &v3);
  v3 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  return 1;
}
