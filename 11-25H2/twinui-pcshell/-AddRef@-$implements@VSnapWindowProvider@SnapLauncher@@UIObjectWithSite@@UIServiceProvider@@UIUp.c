/*
 * XREFs of ?AddRef@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@UEAAKXZ @ 0x18059EBC0
 * Callers:
 *     ?AddRef@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@W7EAAKXZ @ 0x18059EBD0 (-AddRef@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceP_ea_18059EBD0.c)
 *     ?AddRef@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@WBA@EAAKXZ @ 0x18059EBE0 (-AddRef@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceP_ea_18059EBE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef(a1 + 24);
}
