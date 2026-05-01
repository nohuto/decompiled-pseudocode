/*
 * XREFs of ?GetTrustLevel@?$produce_base@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindowFactory@34567@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x18044B3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowFactory,void>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics,winrt::static_lifetime>::NonDelegatingGetTrustLevel(
           (a1 - 24) & -(__int64)(a1 != 0),
           a2);
}
