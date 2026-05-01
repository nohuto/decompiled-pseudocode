/*
 * XREFs of ??_E?$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18044AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@MEAA@XZ @ 0x18044AE34 (--1-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 */

void *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::~root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
