/*
 * XREFs of wistd::__function::__func__lambda_c5bc958e6ad9267954e741ca8adf6e4b__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180335CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?R$$T$$T@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$T0@Z @ 0x180334014 (--$-R$$T$$T@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@.c)
 */

void __fastcall wistd::__function::__func__lambda_c5bc958e6ad9267954e741ca8adf6e4b__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1,
        void *a2)
{
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::operator()<std::nullptr_t,std::nullptr_t>(
    (RTL_SRWLOCK *)&winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configurationChangedEvent,
    a2);
}
