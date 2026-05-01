/*
 * XREFs of ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x18027B978
 * Callers:
 *     wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18028CA40 (wistd--__function--__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x18002DA7C (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x18002E5B4 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@Uhstring@winrt@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1801BBB44 (-GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$op.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1801C8114 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801D0FF4 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ??1?$_Non_trivial_move@U?$_Optional_construct_base@U?$pair@Uhstring@winrt@@U12@@std@@@std@@U?$pair@Uhstring@winrt@@U12@@2@@std@@QEAA@XZ @ 0x1801FBD98 (--1-$_Non_trivial_move@U-$_Optional_construct_base@U-$pair@Uhstring@winrt@@U12@@std@@@std@@U-$pa.c)
 *     ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x1802B2A6C (-value@-$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802B2A8C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??1?$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ @ 0x1802BFF74 (--1-$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ.c)
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x1806130B8 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 *     ?BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uhstring@6@@Z @ 0x1806134A4 (-BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUf.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback(
        __int64 a1,
        int a2,
        HKEY a3,
        const WCHAR *a4,
        wil::details::registry_watcher_state **a5)
{
  __int64 *v9; // rax
  unsigned int v10; // r8d
  winrt::hstring *v11; // r14
  winrt::hstring *v12; // rdi
  unsigned int v13; // r8d
  winrt::hstring *v14; // rax
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  winrt::hstring *v18; // rax
  winrt::hstring *v19; // r14
  unsigned int v20; // r8d
  winrt::hstring *v21; // rdi
  unsigned int v22; // r8d
  winrt::hstring *v23; // rax
  struct winrt::impl::hstring_header *v24; // [rsp+30h] [rbp-78h] BYREF
  volatile signed __int32 *v25; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v26[8]; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 **v27; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v28[8]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE *v29; // [rsp+58h] [rbp-50h]
  _BYTE v30[16]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v31; // [rsp+70h] [rbp-38h] BYREF
  _BYTE v32[8]; // [rsp+78h] [rbp-30h] BYREF
  char v33; // [rsp+80h] [rbp-28h]
  _BYTE *v34; // [rsp+88h] [rbp-20h]
  char v35; // [rsp+B8h] [rbp+10h] BYREF

  winrt::hstring::hstring((winrt::hstring *)&v24, &pvData);
  if ( a2 == 1 )
  {
    if ( *a5 )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        a5,
        0LL);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v24);
      return;
    }
    goto LABEL_14;
  }
  if ( a2 )
  {
LABEL_14:
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v24);
    return;
  }
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted(a1, (__int64)v30, a3, a4);
  if ( v30[8] )
  {
    v9 = (__int64 *)std::optional<winrt::hstring>::value(v30);
    winrt::hstring::operator=(&v24, v9, v10);
    v27 = &v25;
    v11 = winrt::hstring::hstring((winrt::hstring *)&v25, L"Win32");
    v34 = v28;
    v12 = winrt::hstring::hstring((winrt::hstring *)v28, L"Uninstall");
    v14 = winrt::hstring::hstring((winrt::hstring *)v26, (const struct winrt::hstring *)&v24, v13);
    winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(a1, &v35, v14, v12, v11, 0);
    std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>(v30);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v24);
    return;
  }
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled(
    a1,
    (__int64)&v31,
    a3,
    a4);
  if ( !v33 )
  {
    std::_Non_trivial_move<std::_Optional_construct_base<std::pair<winrt::hstring,winrt::hstring>>,std::pair<winrt::hstring,winrt::hstring>>::~_Non_trivial_move<std::_Optional_construct_base<std::pair<winrt::hstring,winrt::hstring>>,std::pair<winrt::hstring,winrt::hstring>>((winrt::Windows::UI::Xaml::Markup::XmlnsDefinition *)&v31);
    std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>(v30);
    goto LABEL_14;
  }
  winrt::hstring::operator=(&v24, &v31, v15);
  if ( !v33 )
    std::_Throw_bad_optional_access();
  winrt::hstring::hstring((winrt::hstring *)&v25, (const struct winrt::hstring *)v32, v16);
  if ( winrt::operator==((__int64)&v25, (__int64)L"Install") )
  {
    v18 = winrt::hstring::hstring((winrt::hstring *)v26, (const struct winrt::hstring *)&v24, v17);
    winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry(a1, &v35, v18);
  }
  else
  {
    v29 = v26;
    v19 = winrt::hstring::hstring((winrt::hstring *)v26, L"Win32");
    v34 = v28;
    v21 = winrt::hstring::hstring((winrt::hstring *)v28, (const struct winrt::hstring *)&v25, v20);
    v23 = winrt::hstring::hstring((winrt::hstring *)&v27, (const struct winrt::hstring *)&v24, v22);
    winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(a1, &v35, v23, v21, v19, 0);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v25);
  std::_Non_trivial_move<std::_Optional_construct_base<std::pair<winrt::hstring,winrt::hstring>>,std::pair<winrt::hstring,winrt::hstring>>::~_Non_trivial_move<std::_Optional_construct_base<std::pair<winrt::hstring,winrt::hstring>>,std::pair<winrt::hstring,winrt::hstring>>((winrt::Windows::UI::Xaml::Markup::XmlnsDefinition *)&v31);
  std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>(v30);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v24);
}
