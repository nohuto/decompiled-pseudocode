/*
 * XREFs of ?OnDismissRequested@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1805C2010
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x1800DC5E8 (--$-RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@-$event@USn.c)
 *     ??$SnapFlyoutInstance_DismissRequested@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1805C06C8 (--$SnapFlyoutInstance_DismissRequested@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::OnDismissRequested(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        const struct IInspectable *a2,
        const struct IInspectable *a3)
{
  if ( !*((_BYTE *)this + 340) )
  {
    SnapFlyoutTelemetry::SnapFlyoutInstance_DismissRequested<unsigned int &>((int *)this + 80);
    winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::operator()<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(
      (__int64)this + 152,
      (__int64)this);
  }
}
