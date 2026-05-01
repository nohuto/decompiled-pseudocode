/*
 * XREFs of ?OnApplicationViewThumbnailWindowChanged@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18069AAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AppViewDataSourceAdapterBase::OnApplicationViewThumbnailWindowChanged(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  if ( a3 )
    (*(void (__fastcall **)(AppViewDataSourceAdapterBase *, struct IApplicationView *))(*(_QWORD *)this + 128LL))(
      this,
      a2);
}
