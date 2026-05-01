/*
 * XREFs of ??_E?$XamlApplication_WASDK_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1804465B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ??1?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@MEAA@XZ @ 0x1804462E4 (--1-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal.c)
 */

void *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK_base<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::~root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
