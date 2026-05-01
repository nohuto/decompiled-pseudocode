/*
 * XREFs of ??D?$fast_iterator@U?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@2@XZ @ 0x18009AE34
 * Callers:
 *     ?InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x1801C8D88 (-InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 * Callees:
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@45@@impl@winrt@@QEBA@I@Z @ 0x18009AE5C (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UIXamlMetadataProvide.c)
 */

__int64 __fastcall winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>::operator*(
        __int64 a1,
        __int64 a2)
{
  winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetAt(
    *(_QWORD *)a1,
    a2,
    *(unsigned int *)(a1 + 8));
  return a2;
}
