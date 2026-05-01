/*
 * XREFs of ??$call@P6A?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupDataModelStatics@23456@@Z@?$factory_cache_entry@UTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@2@AEBUITaskGroupDataModelStatics@45672@@Z@Z @ 0x18020E2C4
 * Callers:
 *     ?Current@TaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802B2F60 (-Current@TaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UITaskGroupDataModelStatics@TaskGroups@Shell@Internal@Windows@winrt@@@winrt@@YA?AUITaskGroupDataModelStatics@TaskGroups@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180558DD4 (--$get_activation_factory@UITaskGroupDataModelStatics@TaskGroups@Shell@Internal@Windows@winrt@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>::call<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v7; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+50h] [rbp-10h]
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  if ( aWindowsInterna_32[52] )
    abort();
  v8[0] = 1;
  v8[1] = 52;
  v9 = L"Windows.Internal.Shell.TaskGroups.TaskGroupDataModel";
  v7 = v8;
  winrt::get_activation_factory<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>(&v10, &v7);
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v6[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089BE98;
    _InterlockedIncrement64(&qword_18089BE98);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089BEA0);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>);
    _InterlockedDecrement64(&qword_18089BE98);
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  }
  return a2;
}
