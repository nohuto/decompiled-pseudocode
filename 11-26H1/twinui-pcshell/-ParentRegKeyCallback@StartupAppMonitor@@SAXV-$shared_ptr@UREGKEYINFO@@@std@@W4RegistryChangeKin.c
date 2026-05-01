/*
 * XREFs of ?ParentRegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x180584964
 * Callers:
 *     _lambda_3c92ed9cb50454309e6daa2ca29a5fa1_::operator() @ 0x1805842D8 (_lambda_3c92ed9cb50454309e6daa2ca29a5fa1_--operator().c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800F7C3C (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x180232938 (-CheckForChange@StartupNotification@@QEAAX_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180286580 (--1-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-.c)
 *     ?make_registry_watcher@wil@@YA?AV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@1@PEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1802BF65C (-make_registry_watcher@wil@@YA-AV-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resou.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?swap@?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAAXAEAV12@@Z @ 0x1805853CC (-swap@-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_wat.c)
 *     ?RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ @ 0x1805868E0 (-RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall StartupAppMonitor::ParentRegKeyCallback(_QWORD *a1, int a2)
{
  HKEY *phkResult; // rax
  __int64 v4; // rcx
  const WCHAR *v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rdx
  const WCHAR *v8; // r8
  std::_Ref_count_base *v9; // rcx
  wil::details::registry_watcher_state *v10; // [rsp+30h] [rbp-69h] BYREF
  HKEY v11; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v13; // [rsp+50h] [rbp-49h] BYREF
  std::_Ref_count_base *v14; // [rsp+58h] [rbp-41h]
  _QWORD *v15; // [rsp+60h] [rbp-39h]
  _BYTE v16[8]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v17[14]; // [rsp+70h] [rbp-29h] BYREF

  v15 = a1;
  if ( !a2 )
  {
    v11 = 0LL;
    phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v11);
    v4 = *(_QWORD *)(*a1 + 80LL);
    v5 = (const WCHAR *)(v4 + 80);
    if ( *(_QWORD *)(v4 + 104) > 7uLL )
      v5 = *(const WCHAR **)v5;
    if ( !RegOpenKeyExW(*(HKEY *)(v4 + 72), v5, 0, 0x20019u, phkResult) )
    {
      StartupRegKeyNotification::RefreshRegKeyHandle(*(StartupRegKeyNotification **)(*a1 + 80LL));
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v13, a1);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v12, &v13);
      v17[0] = &off_180757890;
      v17[1] = v12[0];
      v17[2] = v12[1];
      v17[13] = v17;
      v7 = *(_QWORD *)(*a1 + 80LL);
      v8 = (const WCHAR *)(v7 + 80);
      if ( *(_QWORD *)(v7 + 104) > 7uLL )
        v8 = *(const WCHAR **)v8;
      wil::make_registry_watcher(&v10, *(HKEY *)(v7 + 72), v8, v6, (__int64)v16);
      wistd::function<bool (long)>::~function<bool (long)>((__int64)v16);
      wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>>::swap(
        *a1 + 96LL,
        &v10);
      StartupNotification::CheckForChange(*(StartupNotification **)(*a1 + 80LL));
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>(&v10);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v11);
  }
  v9 = (std::_Ref_count_base *)a1[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
