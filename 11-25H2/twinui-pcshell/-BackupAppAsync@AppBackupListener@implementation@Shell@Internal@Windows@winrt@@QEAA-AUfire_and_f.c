/*
 * XREFs of ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x180294594
 * Callers:
 *     ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x1802842E8 (-HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUh.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180284418 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1 @ 0x1805EE630 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$2 @ 0x1805EE228 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=3
__int64 winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3,
        volatile signed __int32 **a4,
        volatile signed __int32 **a5,
        ...)
{
  void *v9; // rax
  volatile signed __int32 **v10; // rbx
  __int64 v12; // [rsp+38h] [rbp-190h]
  int v13; // [rsp+1D8h] [rbp+10h] BYREF
  volatile signed __int32 **v14; // [rsp+1E0h] [rbp+18h]
  volatile signed __int32 **v15; // [rsp+1E8h] [rbp+20h]
  va_list va; // [rsp+1F8h] [rbp+30h] BYREF

  va_start(va, a5);
  v15 = a4;
  v14 = a3;
  v9 = operator new(0x160uLL);
  v13 = 0;
  v12 = a1;
  v10 = a5;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__InitCoro_2(
    &v13,
    v9,
    a2,
    a3,
    a4,
    a5,
    va,
    v12);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a4);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v10);
  return a2;
}
