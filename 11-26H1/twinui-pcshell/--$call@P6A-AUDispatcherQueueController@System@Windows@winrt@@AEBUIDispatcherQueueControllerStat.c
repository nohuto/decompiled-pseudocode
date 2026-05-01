/*
 * XREFs of ??$call@P6A?AUDispatcherQueueController@System@Windows@winrt@@AEBUIDispatcherQueueControllerStatics@234@@Z@?$factory_cache_entry@UDispatcherQueueController@System@Windows@winrt@@UIDispatcherQueueControllerStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDispatcherQueueController@System@Windows@2@AEBUIDispatcherQueueControllerStatics@452@@Z@Z @ 0x180638800
 * Callers:
 *     ?CreateOnDedicatedThread@DispatcherQueueController@System@Windows@winrt@@SA@XZ @ 0x180639554 (-CreateOnDedicatedThread@DispatcherQueueController@System@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIDispatcherQueueControllerStatics@System@Windows@winrt@@@winrt@@YA?AUIDispatcherQueueControllerStatics@System@Windows@0@AEBUhstring@param@0@@Z @ 0x180638B3C (--$get_activation_factory@UIDispatcherQueueControllerStatics@System@Windows@winrt@@@winrt@@YA-AU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::DispatcherQueueController,winrt::Windows::System::IDispatcherQueueControllerStatics>::call<winrt::Windows::System::DispatcherQueueController (*)(winrt::Windows::System::IDispatcherQueueControllerStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 *v5; // rax
  char v6; // di
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 **); // [rsp+80h] [rbp+20h] BYREF
  __int64 *v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  v8[0] = (__int64)L"Windows.System.DispatcherQueueController";
  v8[1] = 40LL;
  winrt::param::hstring::hstring((__int64)v9, v8);
  winrt::get_activation_factory<winrt::Windows::System::IDispatcherQueueControllerStatics>(&v10, v9);
  v11 = 0LL;
  if ( !v10 )
  {
    v5 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11);
  v5 = v11;
  if ( !v11 )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
  if ( v6 )
  {
    v11 = &qword_1808DB5F8;
    _InterlockedIncrement64(&qword_1808DB5F8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueueController,winrt::Windows::System::IDispatcherQueueControllerStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DB600);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueueController,winrt::Windows::System::IDispatcherQueueControllerStatics>);
    _InterlockedDecrement64(&qword_1808DB5F8);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a2;
}
