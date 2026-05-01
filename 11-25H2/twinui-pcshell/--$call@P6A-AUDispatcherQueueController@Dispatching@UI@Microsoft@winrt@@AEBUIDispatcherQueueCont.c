/*
 * XREFs of ??$call@P6A?AUDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@AEBUIDispatcherQueueControllerStatics@2345@@Z@?$factory_cache_entry@UDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@UIDispatcherQueueControllerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDispatcherQueueController@Dispatching@UI@Microsoft@2@AEBUIDispatcherQueueControllerStatics@4562@@Z@Z @ 0x18043DEC8
 * Callers:
 *     ?CreateOnCurrentThread@DispatcherQueueController@Dispatching@UI@Microsoft@winrt@@SA@XZ @ 0x18043EBE4 (-CreateOnCurrentThread@DispatcherQueueController@Dispatching@UI@Microsoft@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIDispatcherQueueControllerStatics@Dispatching@UI@Microsoft@winrt@@@winrt@@YA?AUIDispatcherQueueControllerStatics@Dispatching@UI@Microsoft@0@AEBUhstring@param@0@@Z @ 0x18043E330 (--$get_activation_factory@UIDispatcherQueueControllerStatics@Dispatching@UI@Microsoft@winrt@@@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>::call<winrt::Microsoft::UI::Dispatching::DispatcherQueueController (*)(winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6; // [rsp+20h] [rbp-60h] BYREF
  __int64 v7; // [rsp+28h] [rbp-58h] BYREF
  __int64 v8[3]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v9[32]; // [rsp+50h] [rbp-30h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp-10h] BYREF

  v6 = a2;
  v8[0] = (__int64)L"Microsoft.UI.Dispatching.DispatcherQueueController";
  v8[1] = 50LL;
  winrt::param::hstring::hstring((__int64)v9, v8);
  winrt::get_activation_factory<winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>(&v10, v9);
  if ( v10 && (v7 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v7), (v6 = v7) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
    v8[2] = (__int64)&qword_18089C2A8;
    _InterlockedIncrement64(&qword_18089C2A8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089C2B0);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>);
    _InterlockedDecrement64(&qword_18089C2A8);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a2;
}
