/*
 * XREFs of ??0?$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180299664
 * Callers:
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1801B500C (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$call@AEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@?$factory_cache_entry@UApplication@Xaml@UI@Windows@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@Z @ 0x1802099FC (--$call@AEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@-$factory_cache_entry@UApplication@Xaml@.c)
 *     ??R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt@@@Z @ 0x180209B8C (--R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt.c)
 *     ??0?$producers_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UXamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@56@UIApplicationOverrides@9UI@56@UIApplicationOverrides2@9UI@56@@std@@@impl@winrt@@QEAA@XZ @ 0x1802996FC (--0-$producers_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winr.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,>::XamlApplication_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,>(
        _QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 *); // rcx
  _QWORD *v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v5; // [rsp+40h] [rbp+18h]

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>>(a1 + 3);
  a1[1] = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  a1[2] = 1LL;
  *a1 = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,>::`vftable';
  v4 = a1;
  v5 = &qword_18089C188;
  _InterlockedIncrement64(&qword_18089C188);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory> )
  {
    _lambda_39ed047273c22ea9d75ce7eaed056bf5_::operator()(
      (__int64 *)&v4,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory>);
    _InterlockedDecrement64(&qword_18089C188);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089C188);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory>::call<_lambda_39ed047273c22ea9d75ce7eaed056bf5_ &>(
      v2,
      (__int64)&v4);
  }
  return a1;
}
