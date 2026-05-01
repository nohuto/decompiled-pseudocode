/*
 * XREFs of ?Release@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@UEAAKXZ @ 0x1805C2FC0
 * Callers:
 *     ?Release@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@W7EAAKXZ @ 0x1805C3010 (-Release@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIService_ea_1805C3010.c)
 *     ?Release@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@WBA@EAAKXZ @ 0x1805C3020 (-Release@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIService_ea_1805C3020.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@IEAAIXZ @ 0x18044FC80 (-subtract_final_reference@-$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::Release(
        __int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // edi

  v1 = (_QWORD *)(a1 + 24);
  v2 = winrt::impl::root_implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::subtract_final_reference(a1 + 24);
  if ( !v2 )
  {
    v1[1] = 1LL;
    (*(void (__fastcall **)(_QWORD *))(*v1 + 8LL))(v1);
  }
  return v2;
}
