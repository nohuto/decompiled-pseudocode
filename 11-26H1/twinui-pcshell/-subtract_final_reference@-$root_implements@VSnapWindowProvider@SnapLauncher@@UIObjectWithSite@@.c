/*
 * XREFs of ?subtract_final_reference@?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@IEAAIXZ @ 0x18044FC80
 * Callers:
 *     ?Release@?$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@QEAAKXZ @ 0x1802B6F58 (-Release@-$implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@I.c)
 *     ??1?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@MEAA@XZ @ 0x18044DED8 (--1-$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUp.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK2@34567@X@impl@winrt@@UEAAIXZ @ 0x18044EDB0 (-Release@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo_ea_18044EDB0.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK3@34567@X@impl@winrt@@UEAAIXZ @ 0x18044EE10 (-Release@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo_ea_18044EE10.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK4@34567@X@impl@winrt@@UEAAIXZ @ 0x18044EE70 (-Release@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo_ea_18044EE70.c)
 *     ?Release@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@UEAAKXZ @ 0x1805C2FC0 (-Release@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::subtract_final_reference(
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
  return winrt::impl::weak_ref<0,1>::decrement_strong((volatile signed __int32 *)(2 * v1));
}
