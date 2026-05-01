/*
 * XREFs of ??$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@@Z @ 0x180450C48
 * Callers:
 *     ?CreateInstance@?$produce@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDKFactory@34567@@impl@winrt@@UEAAHIURect@Foundation@Windows@3@PEAPEAX@Z @ 0x1804513F0 (-CreateInstance@-$produce@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x180450ECC (--0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QE.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,unsigned int &,winrt::Windows::Foundation::Rect const &>(
        _QWORD *a1,
        unsigned int *a2,
        const struct winrt::Windows::Foundation::Rect *a3)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *v7; // [rsp+40h] [rbp+8h]

  v7 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *)operator new(0x70uLL);
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::XamlExplorerHostWindow_WASDK(
    v7,
    *a2,
    a3,
    0x88u);
  *(_QWORD *)v7 = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>'};
  *((_QWORD *)v7 + 3) = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>'};
  *a1 = (char *)v7 + 8;
  return a1;
}
