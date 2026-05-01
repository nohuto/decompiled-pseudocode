/*
 * XREFs of ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800F9F60
 * Callers:
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800F8524 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800FA914 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregist_ea_1800FA914.c)
 *     ?Release@registry_watcher_state@details@wil@@QEAAXXZ @ 0x1801C817C (-Release@registry_watcher_state@details@wil@@QEAAXXZ.c)
 *     ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z @ 0x1801D388C (-ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z.c)
 * Callees:
 *     ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x1800F9F8C (--1registry_watcher_state@details@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

wil::details::registry_watcher_state *__fastcall wil::details::registry_watcher_state::`scalar deleting destructor'(
        wil::details::registry_watcher_state *this)
{
  wil::details::registry_watcher_state::~registry_watcher_state(this);
  operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
