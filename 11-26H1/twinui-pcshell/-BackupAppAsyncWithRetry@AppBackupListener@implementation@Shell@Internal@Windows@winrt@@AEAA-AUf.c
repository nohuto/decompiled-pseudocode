/*
 * XREFs of ?BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uhstring@6@@Z @ 0x1806134A4
 * Callers:
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x18027B978 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1 @ 0x180613180 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 *v6; // rax
  void (__fastcall **v8)(__int64); // [rsp+50h] [rbp+8h]

  v8 = (void (__fastcall **)(__int64))operator new(0x130uLL);
  v8[35] = a1;
  v6 = *a3;
  *a3 = 0LL;
  v8[36] = (void (__fastcall *)(__int64))v6;
  *v8 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__ResumeCoro_1;
  *((_DWORD *)v8 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v8 + 272) = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__ResumeCoro_1((__int64)v8);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  return a2;
}
