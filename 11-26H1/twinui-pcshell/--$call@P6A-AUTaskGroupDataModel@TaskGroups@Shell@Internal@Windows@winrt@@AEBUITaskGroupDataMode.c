/*
 * XREFs of ??$call@P6A?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupDataModelStatics@23456@@Z@?$factory_cache_entry@UTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@2@AEBUITaskGroupDataModelStatics@45672@@Z@Z @ 0x180210290
 * Callers:
 *     ?Current@TaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802AA6F0 (-Current@TaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UITaskGroupDataModelStatics@TaskGroups@Shell@Internal@Windows@winrt@@@winrt@@YA?AUITaskGroupDataModelStatics@TaskGroups@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18057CED4 (--$get_activation_factory@UITaskGroupDataModelStatics@TaskGroups@Shell@Internal@Windows@winrt@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>::call<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 *v5; // rax
  char v6; // di
  _DWORD *v8; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v9[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-10h]
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 **); // [rsp+70h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+88h] [rbp+38h] BYREF

  v11 = a1;
  if ( aWindowsInterna_32[52] )
    abort();
  v9[0] = 1;
  v9[1] = 52;
  v10 = L"Windows.Internal.Shell.TaskGroups.TaskGroupDataModel";
  v8 = v9;
  winrt::get_activation_factory<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>(&v11, &v8);
  v12 = 0LL;
  if ( !v11 )
  {
    v5 = 0LL;
    goto LABEL_6;
  }
  (**v11)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12);
  v5 = v12;
  v6 = 1;
  if ( !v12 )
  {
LABEL_6:
    v6 = 0;
    if ( !v5 )
      goto LABEL_8;
  }
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
LABEL_8:
  if ( v6 )
  {
    v12 = &qword_1808DC518;
    _InterlockedIncrement64(&qword_1808DC518);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>,
            (signed __int64)v11,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DC520);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>);
    _InterlockedDecrement64(&qword_1808DC518);
    if ( v11 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v11);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  }
  return a2;
}
