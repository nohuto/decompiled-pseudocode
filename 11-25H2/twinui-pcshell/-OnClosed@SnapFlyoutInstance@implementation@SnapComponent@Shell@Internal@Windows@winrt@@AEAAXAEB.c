/*
 * XREFs of ?OnClosed@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x180274570
 * Callers:
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1802749FC (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     ??$SnapFlyoutInstance_BarClosed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1800FC15C (--$SnapFlyoutInstance_BarClosed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ?CreateInTileStore@?$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FC828 (-CreateInTileStore@-$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTi.c)
 *     ?OnSearchActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUSearchActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x1801044A8 (-OnSearchActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@U.c)
 *     ??$SnapFlyoutInstance_FlyoutClosed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1802CC320 (--$SnapFlyoutInstance_FlyoutClosed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::OnClosed(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        const struct IInspectable *a2,
        const struct IInspectable *a3)
{
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 93);
  if ( v4 == 1 )
  {
    SnapFlyoutTelemetry::SnapFlyoutInstance_FlyoutClosed<unsigned int &>((char *)this + 320, a2, a3);
    winrt::impl::consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::CreateInTileStore((__int64 *)this + 37);
  }
  else if ( v4 == 2 )
  {
    SnapFlyoutTelemetry::SnapFlyoutInstance_BarClosed<unsigned int &>((int *)this + 80);
  }
  *(_WORD *)((char *)this + 339) = 256;
  v5 = 0LL;
  winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnSearchActivated(
    (__int64 *)this + 37,
    &v5);
}
