/*
 * XREFs of ?RegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x180560BFC
 * Callers:
 *     _lambda_f68c69481c14453c9aa040a1bc7d2eb1_::operator() @ 0x180560384 (_lambda_f68c69481c14453c9aa040a1bc7d2eb1_--operator().c)
 *     _lambda_f9d92d283d219251b39b1fca3d115af1_::operator() @ 0x1805603B4 (_lambda_f9d92d283d219251b39b1fca3d115af1_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x18005BC88 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B2AE0 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x18024169C (-CheckForChange@StartupNotification@@QEAAX_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18029A45C (--1-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-.c)
 *     ?make_registry_watcher@wil@@YA?AV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@1@PEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1802C8294 (-make_registry_watcher@wil@@YA-AV-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resou.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?swap@?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAAXAEAV12@@Z @ 0x180561324 (-swap@-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_wat.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall StartupAppMonitor::RegKeyCallback(_QWORD *a1, int a2)
{
  const WCHAR *v3; // r8
  __int64 v4; // r9
  std::_Ref_count_base *v5; // rcx
  wil::details::registry_watcher_state *v6; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v7[2]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  std::_Ref_count_base *v9; // [rsp+50h] [rbp-39h]
  _QWORD *v10; // [rsp+58h] [rbp-31h]
  _BYTE v11[8]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v12[14]; // [rsp+68h] [rbp-21h] BYREF

  v10 = a1;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        (HKEY *)(*(_QWORD *)(*a1 + 80LL) + 64LL),
        0LL);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v8, a1);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v7, &v8);
      v12[0] = &off_18072D968;
      v12[1] = v7[0];
      v12[2] = v7[1];
      v12[13] = v12;
      wil::make_registry_watcher(&v6, *(HKEY *)(*(_QWORD *)(*a1 + 80LL) + 72LL), v3, v4, (__int64)v11);
      wistd::function<bool (long)>::~function<bool (long)>((__int64)v11);
      wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>>::swap(
        *a1 + 96LL,
        &v6);
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>(&v6);
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
    }
  }
  else
  {
    StartupNotification::CheckForChange(*(StartupNotification **)(*a1 + 80LL));
  }
  v5 = (std::_Ref_count_base *)a1[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
