/*
 * XREFs of ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x1806130B8
 * Callers:
 *     ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x18027B8D0 (-HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUh.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x18027B978 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1 @ 0x180613180 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x180612DA0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=5
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
        __int64 a1,
        _BYTE *a2,
        volatile signed __int32 **a3,
        volatile signed __int32 **a4,
        volatile signed __int32 **a5,
        int a6)
{
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v12; // rax
  _QWORD *v14; // [rsp+60h] [rbp+8h]

  v14 = operator new(0x160uLL);
  v14[39] = a1;
  v10 = *a3;
  *a3 = 0LL;
  v14[40] = v10;
  v11 = *a4;
  *a4 = 0LL;
  v14[41] = v11;
  v12 = *a5;
  *a5 = 0LL;
  v14[42] = v12;
  *((_DWORD *)v14 + 86) = a6;
  *v14 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_1;
  *((_DWORD *)v14 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v14 + 304) = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_1(v14);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a4);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a5);
  return a2;
}
