/*
 * XREFs of ??1SnapWindowProvider@SnapLauncher@@UEAA@XZ @ 0x1805C2DF4
 * Callers:
 *     ??_E?$heap_implements@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805C2E30 (--_E-$heap_implements@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

void __fastcall SnapLauncher::SnapWindowProvider::~SnapWindowProvider(SnapLauncher::SnapWindowProvider *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 40);
  if ( *v1 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v1);
  winrt::impl::root_implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::~root_implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>();
}
