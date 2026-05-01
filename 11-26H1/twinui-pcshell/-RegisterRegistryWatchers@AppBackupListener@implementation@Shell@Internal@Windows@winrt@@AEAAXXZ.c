/*
 * XREFs of ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180290428
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x180614CF0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBackupListenerA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800F6B44 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ??4?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F9114 (--4-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watche.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1801080A8 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?Release@registry_watcher_state@details@wil@@QEAAXXZ @ 0x1801C817C (-Release@registry_watcher_state@details@wil@@QEAAXXZ.c)
 *     _lambda_4a70f611901877ea210a1c4f25e97126_::_lambda_4a70f611901877ea210a1c4f25e97126_ @ 0x180290674 (_lambda_4a70f611901877ea210a1c4f25e97126_--_lambda_4a70f611901877ea210a1c4f25e97126_.c)
 *     ??$NullAlloc_Error@PEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEBG@Z @ 0x1802906B0 (--$NullAlloc_Error@PEBG@CAppBackupListenerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180290720 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@std@@@std@@YAXPEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAV12@AEAV?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@0@@Z @ 0x18029078C (--$_Destroy_range@V-$allocator@V-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resour.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180611748 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$unique_any_t@V-$registry_watcher_t@V-$u.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@std@@@std@@YAPEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@PEAV12@_KAEAV?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@0@@Z @ 0x180611944 (--$_Uninitialized_value_construct_n@V-$allocator@V-$unique_any_t@V-$registry_watcher_t@V-$unique.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterRegistryWatchers(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  unsigned int v6; // ebx
  char *v7; // rsi
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  void **v11; // rax
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v12; // rax
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v13; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::registry_watcher_state *v14; // [rsp+40h] [rbp-C8h] BYREF
  char v15; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v16[4]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v17[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 (__fastcall **v18)(void *); // [rsp+98h] [rbp-70h] BYREF
  int v19; // [rsp+A0h] [rbp-68h]
  __int64 v20; // [rsp+A8h] [rbp-60h]
  __int64 v21; // [rsp+B0h] [rbp-58h]
  __int64 v22; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall ***v24)(void *); // [rsp+100h] [rbp-8h]
  _QWORD v25[4]; // [rsp+108h] [rbp+0h] BYREF

  v2 = (_QWORD *)((char *)this + 216);
  v3 = *((_QWORD *)this + 27);
  v4 = (v2[1] - v3) >> 3;
  if ( v4 <= 4 )
  {
    if ( v4 < 4 )
    {
      if ( (unsigned __int64)((v2[2] - v3) >> 3) >= 4 )
        v2[1] = std::_Uninitialized_value_construct_n<std::allocator<wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>>>(
                  v2[1],
                  4 - v4);
      else
        std::vector<wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>>::_Resize_reallocate<std::_Value_init_tag>(v2);
    }
  }
  else
  {
    v5 = v3 + 32;
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>>>(
      v3 + 32,
      v2[1]);
    v2[1] = v5;
  }
  v6 = 0;
  LODWORD(v14) = 0;
  v7 = (char *)&unk_1808D6720;
  do
  {
    v13 = 0LL;
    if ( this )
    {
      v13 = this;
      (*(void (__fastcall **)(winrt::Windows::Internal::Shell::implementation::AppBackupListener *))(*(_QWORD *)this + 8LL))(this);
    }
    v8 = lambda_4a70f611901877ea210a1c4f25e97126_::_lambda_4a70f611901877ea210a1c4f25e97126_(
           (unsigned int)&v15,
           (unsigned int)&v14,
           (_DWORD)v7,
           (int)v7 + 8,
           (__int64)this,
           (__int64)&v13);
    v18 = &off_18072CC98;
    v19 = *(_DWORD *)v8;
    v20 = *(_QWORD *)(v8 + 8);
    v21 = *(_QWORD *)(v8 + 16);
    v22 = *(_QWORD *)(v8 + 24);
    v9 = (__int64 *)(v8 + 32);
    v10 = *(_QWORD *)(v8 + 32);
    *v9 = 0LL;
    v23 = v10;
    v24 = &v18;
    if ( *v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v9);
    v14 = 0LL;
    wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
      (__int64)&v14,
      *(HKEY *)v7,
      *((const WCHAR **)v7 + 1),
      1,
      (__int64)v17);
    wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>::operator=(
      (_QWORD *)(*v2 + 8LL * (int)v6),
      &v14);
    if ( v14 )
      wil::details::registry_watcher_state::Release(v14);
    if ( v24 )
      (*v24)[3](v24);
    if ( v13 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
    if ( !*(_QWORD *)(*v2 + 8LL * (int)v6) )
    {
      v11 = (void **)std::to_wstring(v25, v6);
      std::operator+<unsigned short>((__int64)v16, L"Registry watcher null for ", v11);
      std::wstring::_Tidy_deallocate(v25);
      v12 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener *)v16;
      if ( v16[3] > 7uLL )
        v12 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener *)v16[0];
      v13 = v12;
      CAppBackupListenerTelemetry::NullAlloc_Error<unsigned short const *>(&v13);
      std::wstring::_Tidy_deallocate(v16);
    }
    LODWORD(v14) = ++v6;
    v7 += 16;
  }
  while ( v7 != &CRVPrivate::cfhImmersiveShellStartup );
}
