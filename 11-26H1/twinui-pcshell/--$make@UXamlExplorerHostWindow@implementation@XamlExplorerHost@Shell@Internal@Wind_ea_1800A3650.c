/*
 * XREFs of ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@@Z @ 0x1800A3650
 * Callers:
 *     ??0XamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@45@@Z @ 0x1802BD184 (--0XamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundati.c)
 *     ?CreateInstance@?$produce@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindowFactory@34567@@impl@winrt@@UEAAHIURect@Foundation@Windows@3@PEAPEAX@Z @ 0x1804500D0 (-CreateInstance@-$produce@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@.c)
 * Callees:
 *     ??$create_and_initialize@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@impl@winrt@@YAPEAUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEAIAEBURect@Foundation@71@@Z @ 0x1800A3688 (--$create_and_initialize@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 */

__int64 *__fastcall winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,unsigned int &,winrt::Windows::Foundation::Rect const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax

  v4 = winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,unsigned int &,winrt::Windows::Foundation::Rect const &>(
         a2,
         a3);
  *a1 = (v4 + 8) & -(__int64)(v4 != 0);
  return a1;
}
