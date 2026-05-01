/*
 * XREFs of ?GetIids@?$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@UISearchAppHost5@3456@@winrt@@QEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803ABE0C
 * Callers:
 *     ?GetIids@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost2@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1803ABE20 (-GetIids@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost.c)
 *     ?GetIids@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1803ABE40 (-GetIids@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UI_ea_1803ABE40.c)
 *     ?GetIids@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost4@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1803ABE60 (-GetIids@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UI_ea_1803ABE60.c)
 *     ?GetIids@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1803ABEA0 (-GetIids@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UI_ea_1803ABEA0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::GetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::NonDelegatingGetIids(
           a1,
           a2,
           a3);
}
