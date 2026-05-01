/*
 * XREFs of ??_G?$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@UEAAPEAXI@Z @ 0x18044DFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@MEAA@XZ @ 0x18044DED8 (--1-$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUp.c)
 */

void *__fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK3,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK4,winrt::Windows::Foundation::IClosable,winrt::non_agile>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  winrt::impl::root_implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::~root_implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
