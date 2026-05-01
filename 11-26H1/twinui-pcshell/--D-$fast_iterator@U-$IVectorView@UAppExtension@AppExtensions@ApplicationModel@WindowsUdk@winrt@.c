/*
 * XREFs of ??D?$fast_iterator@U?$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@XZ @ 0x1803A0DE8
 * Callers:
 *     ?SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z @ 0x1801DAD44 (-SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z.c)
 *     ?ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z @ 0x180511BB4 (-ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z.c)
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x1805CFC68 (_anonymous_namespace_--FindDashboardAppExtension.c)
 * Callees:
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x18002813C (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@.c)
 */

winrt *__fastcall winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>>::operator*(
        __int64 a1,
        winrt *a2)
{
  winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::GetAt(
    *(__int64 **)a1,
    a2,
    *(_DWORD *)(a1 + 8));
  return a2;
}
