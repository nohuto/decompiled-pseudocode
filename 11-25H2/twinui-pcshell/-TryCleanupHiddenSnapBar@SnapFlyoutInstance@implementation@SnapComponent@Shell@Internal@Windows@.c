/*
 * XREFs of ?TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180274AF4
 * Callers:
 *     _lambda_8079b73aae97d35e2f9baaab6c344746_::operator() @ 0x18058E540 (_lambda_8079b73aae97d35e2f9baaab6c344746_--operator().c)
 *     _lambda_f1c47049353ace0ef5f26ec309cbdaee_::operator() @ 0x18058E5F4 (_lambda_f1c47049353ace0ef5f26ec309cbdaee_--operator().c)
 *     ?TryCleanupHiddenSnapBar@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180591300 (-TryCleanupHiddenSnapBar@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Intern.c)
 * Callees:
 *     ??$SnapFlyoutInstance_TryCleanupHidden@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1802235E8 (--$SnapFlyoutInstance_TryCleanupHidden@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1802749FC (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
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
