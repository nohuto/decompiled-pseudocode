/*
 * XREFs of ??$create_and_initialize@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@impl@winrt@@YAPEAUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEAIAEBURect@Foundation@71@@Z @ 0x1800A3688
 * Callers:
 *     ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@@Z @ 0x1800A3650 (--$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Wind_ea_1800A3650.c)
 * Callees:
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x1800A2034 (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAE.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
HWND *__fastcall winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,unsigned int &,winrt::Windows::Foundation::Rect const &>(
        int *a1,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  HWND *v5; // [rsp+40h] [rbp+18h]

  v5 = (HWND *)operator new(0x68uLL);
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::XamlExplorerHostWindow(
    v5,
    *a1,
    a2,
    136);
  *v5 = (HWND)&winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>'};
  v5[3] = (HWND)&winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>'};
  return v5;
}
