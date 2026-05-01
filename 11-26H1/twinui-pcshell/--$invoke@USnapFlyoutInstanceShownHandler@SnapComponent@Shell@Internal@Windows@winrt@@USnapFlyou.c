/*
 * XREFs of ??$invoke@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInstance@implementation@23456@_N@impl@winrt@@YA_NAEBUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@1@AEBUSnapFlyoutInstance@implementation@34561@AEB_N@Z @ 0x1800DCDEC
 * Callers:
 *     ??$?RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@_N@?$event@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@1@AEB_N@Z @ 0x1800DCD24 (--$-RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@_N@-$event@U.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??RSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUSnapFlyoutInstance@12345@@Z @ 0x1802697EC (--RSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUSnapFlyoutInst.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,bool>(
        __int64 a1,
        __int64 a2)
{
  winrt::impl *v2; // rcx
  bool result; // al
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2 + 16;
  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::operator()(a1, &v4);
    v4 = 0LL;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
    result = 1;
  }
  catch ( ... )
  {
    return winrt::impl::report_failed_invoke(v2);
  }
  return result;
}
