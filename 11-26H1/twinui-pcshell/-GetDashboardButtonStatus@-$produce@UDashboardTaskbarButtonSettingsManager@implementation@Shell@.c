/*
 * XREFs of ?GetDashboardButtonStatus@?$produce@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@UIDashboardTaskbarButtonSettingsManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1805DD870
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1805DDC68 (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager,winrt::Windows::Internal::Shell::IDashboardTaskbarButtonSettingsManager>::GetDashboardButtonStatus(
        DashboardTaskbarSettings *a1,
        _BYTE *a2)
{
  __int64 result; // rax
  DashboardTaskbarSettings *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  try
  {
    *a2 = DashboardTaskbarSettings::GetDashboardButtonEnabled(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
