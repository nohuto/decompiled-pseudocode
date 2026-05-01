/*
 * XREFs of ??$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@?$factory_cache_entry@USnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@winrt@@UISnapLayoutEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@Z @ 0x1802A0914
 * Callers:
 *     ?OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIGuidedSnapAssistController@WindowSnapping@4567@AEBUGuidedSnapAssistCompletedArgs@94567@@Z @ 0x180565030 (-OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@W.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x1802A0A6C (--R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Sh.c)
 *     ?CreateInstance@?$consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory@UISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapLayoutOperation@TaskGroups@Shell@Internal@Windows@3@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@@Z @ 0x1802A0AA8 (-CreateInstance@-$consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory@UISnapLa.c)
 *     ??$get_activation_factory@UISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@winrt@@YA?AUISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1802A0B58 (--$get_activation_factory@UISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>::call<_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v7[3]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v8; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v9; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v10[4]; // [rsp+58h] [rbp-18h] BYREF
  const wchar_t *v11; // [rsp+68h] [rbp-8h]
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+90h] [rbp+20h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+38h] BYREF

  v12 = a1;
  if ( aWindowsInterna_7[53] )
    abort();
  v10[0] = 1;
  v10[1] = 53;
  v11 = L"Windows.Internal.Shell.TaskGroups.SnapLayoutEventArgs";
  v9 = v10;
  winrt::get_activation_factory<winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>(&v12, &v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 && (v13 = 0LL, (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13), (v7[0] = v13) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v7);
    v7[1] = (__int64)&qword_18089BE78;
    _InterlockedIncrement64(&qword_18089BE78);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089BE80);
    }
    _lambda_06ad3909e536a51ee0f1eb0ad05e39fd_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>);
    _InterlockedDecrement64(&qword_18089BE78);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  else
  {
    v8 = *(_OWORD *)a3[1];
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory<winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>::CreateInstance(
      &v12,
      a2,
      *a3,
      &v8);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  }
  return a2;
}
