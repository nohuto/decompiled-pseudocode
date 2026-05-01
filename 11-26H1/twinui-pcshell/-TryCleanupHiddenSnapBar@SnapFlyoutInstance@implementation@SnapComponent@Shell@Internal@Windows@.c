/*
 * XREFs of ?TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18026CAC8
 * Callers:
 *     _lambda_d3d99d077aa6088e001c766fa29bfd0f_::operator() @ 0x1805B28FC (_lambda_d3d99d077aa6088e001c766fa29bfd0f_--operator().c)
 *     ?TryCleanupHiddenSnapBar@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x1805B5270 (-TryCleanupHiddenSnapBar@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Intern.c)
 * Callees:
 *     ??$SnapFlyoutInstance_TryCleanupHidden@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1802149E4 (--$SnapFlyoutInstance_TryCleanupHidden@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18026C9C8 (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

char __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryCleanupHiddenSnapBar(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this)
{
  SnapFlyoutTelemetry::SnapFlyoutInstance_TryCleanupHidden<unsigned int &>((int *)this + 80);
  if ( *((_BYTE *)this + 339) || *((_DWORD *)this + 93) != 2 )
    return 0;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(this);
  return 1;
}
