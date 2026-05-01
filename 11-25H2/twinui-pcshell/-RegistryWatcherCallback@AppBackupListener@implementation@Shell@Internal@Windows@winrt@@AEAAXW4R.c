/*
 * XREFs of ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180284418
 * Callers:
 *     wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1802951D0 (wistd--__function--__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800AC148 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1800AC660 (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1800BFAE0 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ?GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@Uhstring@winrt@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1801BF13C (-GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$op.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801CCBE4 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ??1?$_Non_trivial_move@U?$_Optional_construct_base@U?$pair@Uhstring@winrt@@U12@@std@@@std@@U?$pair@Uhstring@winrt@@U12@@2@@std@@QEAA@XZ @ 0x1802115D0 (--1-$_Non_trivial_move@U-$_Optional_construct_base@U-$pair@Uhstring@winrt@@U12@@std@@@std@@U-$pa.c)
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x180294594 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 *     ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x1802BBF6C (-value@-$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802BBF8C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??1?$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ @ 0x1802CFC54 (--1-$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ.c)
 *     ?BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uhstring@6@@Z @ 0x1805EE960 (-BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUf.c)
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
  winrt::hstring *v13; // rax
  unsigned int v14; // r8d
  winrt::hstring *v15; // rax
  winrt::hstring *v16; // r14
  winrt::hstring *v17; // rdi
  winrt::hstring *v18; // rax
  struct winrt::impl::hstring_header *v19; // [rsp+30h] [rbp-78h] BYREF
  volatile signed __int32 *v20; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v21[8]; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 **v22; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v23[8]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE *v24; // [rsp+58h] [rbp-50h]
  _BYTE v25[16]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v26; // [rsp+70h] [rbp-38h] BYREF
  _BYTE v27[8]; // [rsp+78h] [rbp-30h] BYREF
  char v28; // [rsp+80h] [rbp-28h]
  _BYTE *v29; // [rsp+88h] [rbp-20h]
  char v30; // [rsp+B8h] [rbp+10h] BYREF

  winrt::hstring::hstring((winrt::hstring *)&v19, &LocaleName);
  if ( a2 == 1 )
  {
    if ( *a5 )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        a5,
        0LL);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v19);
      return;
    }
    goto LABEL_14;
  }
  if ( a2 )
  {
LABEL_14:
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v19);
    return;
  }
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted(a1, (__int64)v25, a3, a4);
  if ( v25[8] )
  {
    v9 = (__int64 *)std::optional<winrt::hstring>::value(v25);
    winrt::hstring::operator=(&v19, v9, v10);
    v22 = &v20;
    v11 = winrt::hstring::hstring((winrt::hstring *)&v20, L"Win32");
    v29 = v23;
    v12 = winrt::hstring::hstring((winrt::hstring *)v23, L"Uninstall");
    v13 = winrt::hstring::hstring((winrt::hstring *)v21, (const struct winrt::hstring *)&v19);
    winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(a1, &v30, v13, v12, v11, 0);
    std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>(v25);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v19);
    return;
  }
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled(
    a1,
    (__int64)&v26,
    a3,
    a4);
  if ( !v28 )
  {
    std::_Non_trivial_move<std::_Optional_construct_base<std::pair<winrt::hstring,winrt::hstring>>,std::pair<winrt::hstring,winrt::hstring>>::~_Non_trivial_move<std::_Optional_construct_base<std::pair<winrt::hstring,winrt::hstring>>,std::pair<winrt::hstring,winrt::hstring>>((winrt::Windows::UI::Xaml::Markup::XmlnsDefinition *)&v26);
    std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>(v25);
    goto LABEL_14;
  }
  winrt::hstring::operator=(&v19, &v26, v14);
  if ( !v28 )
    std::_Throw_bad_optional_access();
  winrt::hstring::hstring((winrt::hstring *)&v20, (const struct winrt::hstring *)v27);
  if ( winrt::operator==((__int64 *)&v20, (char *)L"Install") )
  {
    v15 = winrt::hstring::hstring((winrt::hstring *)v21, (const struct winrt::hstring *)&v19);
    winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry(a1, &v30, v15);
  }
  else
  {
    v24 = v21;
    v16 = winrt::hstring::hstring((winrt::hstring *)v21, L"Win32");
    v29 = v23;
    v17 = winrt::hstring::hstring((winrt::hstring *)v23, (const struct winrt::hstring *)&v20);
    v18 = winrt::hstring::hstring((winrt::hstring *)&v22, (const struct winrt::hstring *)&v19);
    winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(a1, &v30, v18, v17, v16, 0);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
  std::_Non_trivial_move<std::_Optional_construct_base<std::pair<winrt::hstring,winrt::hstring>>,std::pair<winrt::hstring,winrt::hstring>>::~_Non_trivial_move<std::_Optional_construct_base<std::pair<winrt::hstring,winrt::hstring>>,std::pair<winrt::hstring,winrt::hstring>>((winrt::Windows::UI::Xaml::Markup::XmlnsDefinition *)&v26);
  std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>(v25);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v19);
}
