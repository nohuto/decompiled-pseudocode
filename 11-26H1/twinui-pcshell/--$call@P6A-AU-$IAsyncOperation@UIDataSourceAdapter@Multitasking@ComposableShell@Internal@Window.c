/*
 * XREFs of ??$call@P6A?AU?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@AEBUITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@34@@Z@?$factory_cache_entry@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataSourceAdapterStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AU?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@2@AEBUITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@52@@Z@Z @ 0x1801E93D8
 * Callers:
 *     ?CreateInstanceAsync@TaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802AFC78 (-CreateInstanceAsync@TaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@winrt@@YA?AUITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18057CF38 (--$get_activation_factory@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::call<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter> (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  _DWORD *v6; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v7[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-10h]
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 **); // [rsp+70h] [rbp+20h] BYREF
  __int64 *v10; // [rsp+88h] [rbp+38h] BYREF

  v9 = a1;
  if ( aWindowsInterna_3[60] )
    abort();
  v7[0] = 1;
  v7[1] = 60;
  v8 = L"Windows.Internal.Shell.TaskGroups.TaskGroupDataSourceAdapter";
  v6 = v7;
  winrt::get_activation_factory<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>(
    &v9,
    &v6);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), v10) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
    v10 = &qword_1808DC558;
    _InterlockedIncrement64(&qword_1808DC558);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DC560);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>);
    _InterlockedDecrement64(&qword_1808DC558);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v9);
  }
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
  return a2;
}
