/*
 * XREFs of wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1802951D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180284418 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 */

void __fastcall wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1,
        int *a2)
{
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback(
    *(_QWORD *)(a1 + 32),
    *a2,
    *(HKEY *)(a1 + 16),
    *(const WCHAR **)(a1 + 24),
    (wil::details::registry_watcher_state **)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 8LL * *(int *)(a1 + 8)));
}
