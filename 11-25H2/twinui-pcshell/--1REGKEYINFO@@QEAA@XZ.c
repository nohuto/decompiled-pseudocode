/*
 * XREFs of ??1REGKEYINFO@@QEAA@XZ @ 0x18055FF90
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UREGKEYINFO@@@std@@EEAAXXZ @ 0x180560E80 (-_Destroy@-$_Ref_count_obj2@UREGKEYINFO@@@std@@EEAAXXZ.c)
 *     _StartupAppMonitor::StartupAppMonitor_::_1_::dtor$4 @ 0x1806B309D (_StartupAppMonitor--StartupAppMonitor_--_1_--dtor$4.c)
 *     _StartupAppMonitor::StartupAppMonitor_::_1_::dtor$5 @ 0x1806B30B6 (_StartupAppMonitor--StartupAppMonitor_--_1_--dtor$5.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18029A45C (--1-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-.c)
 */

void __fastcall REGKEYINFO::~REGKEYINFO(REGKEYINFO *this)
{
  std::_Ref_count_base *v2; // rcx

  wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>((wil::details::registry_watcher_state **)this + 12);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::wstring::_Tidy_deallocate((void **)this + 6);
  std::wstring::_Tidy_deallocate((void **)this + 1);
}
