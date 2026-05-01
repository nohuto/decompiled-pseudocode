/*
 * XREFs of ?AddRef@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@UEAAKXZ @ 0x1805C2E70
 * Callers:
 *     ?AddRef@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@W7EAAKXZ @ 0x1805C2E80 (-AddRef@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceP_ea_1805C2E80.c)
 *     ?AddRef@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@WBA@EAAKXZ @ 0x1805C2E90 (-AddRef@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceP_ea_1805C2E90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef(a1 + 24);
}
