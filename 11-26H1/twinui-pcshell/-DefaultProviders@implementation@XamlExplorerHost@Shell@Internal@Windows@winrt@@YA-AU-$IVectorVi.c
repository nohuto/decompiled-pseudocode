/*
 * XREFs of ?DefaultProviders@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA?AU?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@56@XZ @ 0x18009B524
 * Callers:
 *     ?LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002B850 (-LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ??$from_cx@U?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@@YA?AU?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18009B57C (--$from_cx@U-$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foun.c)
 *     ?get@MetadataProviders@NativeHostingXamlMetadataProvider@Desktop@ComposableShell@WindowsInternal@@SAPE$AAU?$IVectorView@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@@Collections@Foundation@Windows@@XZ @ 0x18009C008 (-get@MetadataProviders@NativeHostingXamlMetadataProvider@Desktop@ComposableShell@WindowsInternal.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::DefaultProviders(__int64 a1)
{
  __int64 v3; // [rsp+48h] [rbp+10h]

  v3 = WindowsInternal::ComposableShell::Desktop::NativeHostingXamlMetadataProvider::MetadataProviders::get(a1);
  from_cx<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>>(
    a1,
    v3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  return a1;
}
