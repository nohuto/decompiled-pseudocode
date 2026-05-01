/*
 * XREFs of ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18028D584
 * Callers:
 *     ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x18028D25C (-GetPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@G@std.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801F781C (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A2A0 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802B976C (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802B97A0 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1805E6448 (-GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     PropVariantToIDList @ 0x1805ED324 (PropVariantToIDList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void **__fastcall GetUnpackagedAppPinnableItem(void **a1, _QWORD *a2, _QWORD *a3)
{
  int FailIf; // eax
  const struct _GUID *v6; // rdx
  HRESULT Instance; // eax
  LPCITEMIDLIST v8; // rbx
  __int64 (__fastcall *v9)(LPCITEMIDLIST, _QWORD, void **); // rsi
  int v10; // eax
  int ObjectW; // eax
  int v12; // eax
  HRESULT v13; // eax
  int ppv; // [rsp+20h] [rbp-39h]
  int ppva; // [rsp+20h] [rbp-39h]
  __int128 v17; // [rsp+40h] [rbp-19h] BYREF
  int v18; // [rsp+50h] [rbp-9h]
  void **v19; // [rsp+60h] [rbp+7h]
  LPCITEMIDLIST pidl; // [rsp+68h] [rbp+Fh] BYREF
  PROPVARIANT pvar[3]; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v19 = a1;
  *a1 = 0LL;
  LOWORD(pvar[0]) = 0;
  v17 = PKEY_AppUserModel_BestShortcut;
  v18 = 10;
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a2, (__int64)&v17, pvar);
  if ( FailIf >= 0 )
  {
    if ( LOWORD(pvar[0]) == 13 )
    {
      if ( *a1 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)a1);
      ObjectW = wil::PropVariant::GetObjectW((wil::PropVariant *)pvar, v6, a1);
      if ( ObjectW < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x62,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
          (const char *)(unsigned int)ObjectW,
          ppv);
    }
    else
    {
      pidl = 0LL;
      *(_QWORD *)&v17 = &pidl;
      *((_QWORD *)&v17 + 1) = 0LL;
      LOBYTE(v18) = 1;
      v12 = PropVariantToIDList(pvar, (char *)&v17 + 8);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x68,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
          (const char *)(unsigned int)v12,
          ppv);
      wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v17);
      if ( *a1 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)a1);
      v13 = SHCreateItemFromIDList(pidl, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, a1);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x69,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
          (const char *)(unsigned int)v13,
          ppv);
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &pidl,
        0LL);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5D,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
      (const char *)(unsigned int)FailIf);
    pidl = 0LL;
    Instance = CoCreateInstance(
                 &GUID_660b90c8_73a9_4b58_8cae_355b7f55341b,
                 0LL,
                 3u,
                 &GUID_de25675a_72de_44b4_9373_05170450c140,
                 (LPVOID *)&pidl);
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x70,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
        (const char *)(unsigned int)Instance,
        ppva);
    v8 = pidl;
    v9 = *(__int64 (__fastcall **)(LPCITEMIDLIST, _QWORD, void **))(*(_QWORD *)&pidl->mkid.cb + 64LL);
    if ( *a1 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)a1);
    v10 = v9(v8, *a3, a1);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x71,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
        (const char *)(unsigned int)v10,
        ppva);
    wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&pidl);
  }
  PropVariantClear(pvar);
  return a1;
}
