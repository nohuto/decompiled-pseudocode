/*
 * XREFs of ??0?$producers_base@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@56@UIXamlExplorerHostWindowLocal@@@std@@@impl@winrt@@QEAA@XZ @ 0x180103448
 * Callers:
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x1801044EC (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAE.c)
 * Callees:
 *     ??0?$producer_convert@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@X@impl@winrt@@QEAA@XZ @ 0x18010347C (--0-$producer_convert@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 *     ??0?$producer_convert@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@QEAA@XZ @ 0x1801034E8 (--0-$producer_convert@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell_ea_1801034E8.c)
 */

_QWORD *__fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // r8
  _QWORD *result; // rax

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,void>::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,void>(
    a1 + 8,
    a2,
    a1);
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,void>::producer_convert<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,void>(v2 + 16);
  result = v3;
  *v3 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  return result;
}
