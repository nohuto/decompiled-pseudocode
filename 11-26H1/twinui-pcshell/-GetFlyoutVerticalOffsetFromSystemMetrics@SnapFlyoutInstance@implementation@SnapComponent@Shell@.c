/*
 * XREFs of ?GetFlyoutVerticalOffsetFromSystemMetrics@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CAHI@Z @ 0x1805C1AEC
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x1805C1290 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--CalculateFly.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::GetFlyoutVerticalOffsetFromSystemMetrics()
{
  int SystemMetricsForDpi; // esi
  int v1; // ebx

  SystemMetricsForDpi = GetSystemMetricsForDpi(4LL);
  v1 = GetSystemMetricsForDpi(33LL);
  return SystemMetricsForDpi + v1 + (unsigned int)GetSystemMetricsForDpi(92LL);
}
