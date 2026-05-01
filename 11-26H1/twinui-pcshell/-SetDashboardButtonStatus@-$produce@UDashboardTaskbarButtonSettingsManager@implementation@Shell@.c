/*
 * XREFs of ?SetDashboardButtonStatus@?$produce@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@UIDashboardTaskbarButtonSettingsManager@3456@@impl@winrt@@UEAAH_N@Z @ 0x1805DD8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$DashboardButtonStatusChangedByBroker@AEAE@DashboardManagerTelemetry@@SAXAEAE@Z @ 0x1805DD410 (--$DashboardButtonStatusChangedByBroker@AEAE@DashboardManagerTelemetry@@SAXAEAE@Z.c)
 *     ?SetDashboardButtonEnabled@DashboardTaskbarSettings@@YAX_N@Z @ 0x1805DDE6C (-SetDashboardButtonEnabled@DashboardTaskbarSettings@@YAX_N@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager,winrt::Windows::Internal::Shell::IDashboardTaskbarButtonSettingsManager>::SetDashboardButtonStatus(
        DashboardTaskbarSettings *a1,
        bool a2)
{
  __int64 result; // rax
  int v3; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v3) = a2;
  LOBYTE(a1) = a2;
  try
  {
    DashboardTaskbarSettings::SetDashboardButtonEnabled(a1, a2);
    DashboardManagerTelemetry::DashboardButtonStatusChangedByBroker<unsigned char &>(&v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
