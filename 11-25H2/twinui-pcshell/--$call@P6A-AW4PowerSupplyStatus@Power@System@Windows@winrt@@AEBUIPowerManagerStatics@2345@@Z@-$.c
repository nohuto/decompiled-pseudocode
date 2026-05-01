/*
 * XREFs of ??$call@P6A?AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@Z@?$factory_cache_entry@UPowerManager@Power@System@Windows@winrt@@UIPowerManagerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4PowerSupplyStatus@Power@System@Windows@2@AEBUIPowerManagerStatics@4562@@Z@Z @ 0x1805A0E50
 * Callers:
 *     ??$call_factory_cast@P6A?AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@ZUPowerManager@2345@U62345@V_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@Z @ 0x1805A1160 (--$call_factory_cast@P6A-AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStati.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801FC264 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>::call<enum winrt::Windows::System::Power::PowerSupplyStatus (*)(winrt::Windows::System::Power::IPowerManagerStatics const &)>(
        __int64 a1,
        __int64 (__fastcall **a2)(__int64 *))
{
  unsigned int v3; // ebx
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-19h] BYREF
  __int64 v6; // [rsp+28h] [rbp-11h] BYREF
  __int64 v7; // [rsp+30h] [rbp-9h] BYREF
  __int64 v8[3]; // [rsp+38h] [rbp-1h] BYREF
  int v9; // [rsp+50h] [rbp+17h] BYREF
  __int128 v10; // [rsp+58h] [rbp+1Fh]
  __int64 v11[5]; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+A0h] [rbp+67h] BYREF
  int v13; // [rsp+B0h] [rbp+77h] BYREF
  void (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // [rsp+B8h] [rbp+7Fh] BYREF

  v12 = a1;
  v8[0] = (__int64)L"Windows.System.Power.PowerManager";
  v8[1] = 33LL;
  winrt::param::hstring::hstring((__int64)v11, v8);
  v5 = 0LL;
  v9 = 0;
  v10 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v12,
    v11,
    (__int64)&winrt::impl::guid_v<winrt::Windows::System::Power::IPowerManagerStatics>,
    (__int64)&v5);
  winrt::check_hresult(&v13, v12, (__int64)&v9);
  v14 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v5;
  if ( v5 && (v6 = 0LL, (**v5)(v5, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v6), (v7 = v6) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    v8[2] = (__int64)&qword_18089D088;
    _InterlockedIncrement64(&qword_18089D088);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>,
            (signed __int64)v14,
            0LL) )
    {
      v14 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089D090);
    }
    v3 = (*a2)(&winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>);
    _InterlockedDecrement64(&qword_18089D088);
  }
  else
  {
    v3 = (*a2)((__int64 *)&v14);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  return v3;
}
