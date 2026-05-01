/*
 * XREFs of ??0?$producers_base@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDKFactory@XamlExplorerHost@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x1802A33C4
 * Callers:
 *     ?winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostChildWindow_WASDK@@YAPEAXXZ @ 0x1802A3374 (-winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostChildWindow_WASDK@@YAPEAXXZ.c)
 * Callees:
 *     ??0?$producer_convert@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@78@X@impl@winrt@@QEAA@XZ @ 0x1804414C8 (--0-$producer_convert@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell.c)
 *     ??0?$producer_convert@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDKFactory@34567@X@impl@winrt@@QEAA@XZ @ 0x1804414E0 (--0-$producer_convert@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost.c)
 */

__int64 __fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDKFactory>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDKFactory>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,winrt::Windows::Foundation::IActivationFactory,void>::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,winrt::Windows::Foundation::IActivationFactory,void>(
    a1,
    a2,
    a1);
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDKFactory,void>::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDKFactory,void>(v2 + 8);
  return v3;
}
