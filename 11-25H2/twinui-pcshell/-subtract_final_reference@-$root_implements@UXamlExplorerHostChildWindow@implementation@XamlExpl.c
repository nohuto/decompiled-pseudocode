/*
 * XREFs of ?subtract_final_reference@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1801BD1A8
 * Callers:
 *     ??1?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@MEAA@XZ @ 0x1801BD120 (--1-$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUp.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@X@impl@winrt@@UEAAIXZ @ 0x1801BD150 (-Release@-$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Inter.c)
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802B758C (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHos.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@UEAAIXZ @ 0x1804406F0 (-Release@-$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHos_ea_1804406F0.c)
 *     ?Release@?$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@QEAAKXZ @ 0x1804426B0 (-Release@-$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@I.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK3@34567@X@impl@winrt@@UEAAIXZ @ 0x180442720 (-Release@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo_ea_180442720.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK4@34567@X@impl@winrt@@UEAAIXZ @ 0x180442780 (-Release@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo_ea_180442780.c)
 *     ?Release@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@UEAAKXZ @ 0x18059ED00 (-Release@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::subtract_final_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 8);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v1 - 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return winrt::impl::weak_ref<0,1>::decrement_strong(2 * v1);
}
