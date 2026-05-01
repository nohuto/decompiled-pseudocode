/*
 * XREFs of ??0?$producers_base@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UIXamlExplorerHostWindow_WASDKFactory@XamlExplorerHost@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x180450EA8
 * Callers:
 *     ?winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostWindow_WASDK@@YAPEAXXZ @ 0x180451ECC (-winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostWindow_WASDK@@YAPEAXXZ.c)
 * Callees:
 *     ??0?$producer_convert@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@78@X@impl@winrt@@QEAA@XZ @ 0x18044DBB0 (--0-$producer_convert@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell.c)
 *     ??0?$producer_convert@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDKFactory@34567@X@impl@winrt@@QEAA@XZ @ 0x180450E90 (--0-$producer_convert@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shel.c)
 */

__int64 winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDKFactory>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDKFactory>>()
{
  __int64 v0; // rcx
  __int64 v1; // r8

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,winrt::Windows::Foundation::IActivationFactory,void>::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,winrt::Windows::Foundation::IActivationFactory,void>();
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDKFactory,void>::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDKFactory,void>((_QWORD *)(v0 + 8));
  return v1;
}
