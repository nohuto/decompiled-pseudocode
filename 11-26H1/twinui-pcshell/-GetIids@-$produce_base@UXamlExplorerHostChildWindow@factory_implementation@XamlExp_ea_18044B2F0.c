/*
 * XREFs of ?GetIids@?$produce_base@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindowFactory@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18044B2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowFactory,void>::GetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>::NonDelegatingGetIids(
           (a1 - 24) & -(__int64)(a1 != 0),
           a2,
           a3);
}
