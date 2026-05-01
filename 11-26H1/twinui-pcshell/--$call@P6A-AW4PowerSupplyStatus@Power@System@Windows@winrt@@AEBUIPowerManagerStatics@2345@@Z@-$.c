/*
 * XREFs of ??$call@P6A?AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@Z@?$factory_cache_entry@UPowerManager@Power@System@Windows@winrt@@UIPowerManagerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4PowerSupplyStatus@Power@System@Windows@2@AEBUIPowerManagerStatics@4562@@Z@Z @ 0x1805C510C
 * Callers:
 *     ??$call_factory_cast@P6A?AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@ZUPowerManager@2345@U62345@V_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@Z @ 0x1805C5428 (--$call_factory_cast@P6A-AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStati.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F1208 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>::call<enum winrt::Windows::System::Power::PowerSupplyStatus (*)(winrt::Windows::System::Power::IPowerManagerStatics const &)>(
        __int64 *a1,
        __int64 (__fastcall **a2)(__int64 *))
{
  __int64 *v3; // rax
  char v4; // bl
  unsigned int v5; // eax
  unsigned int v6; // ebx
  const wchar_t *v8; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+28h] [rbp-38h]
  __int64 v10[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v11; // [rsp+80h] [rbp+20h] BYREF
  void (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // [rsp+90h] [rbp+30h] BYREF
  void (__fastcall ***v13)(_QWORD, __int64 *, __int64 **); // [rsp+98h] [rbp+38h] BYREF

  v11 = a1;
  v8 = L"Windows.System.Power.PowerManager";
  *(_QWORD *)&v9 = 33LL;
  winrt::param::hstring::hstring((__int64)v10, (__int64 *)&v8);
  v13 = 0LL;
  LODWORD(v8) = 0;
  v9 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v11,
    v10,
    (__int64)&winrt::impl::guid_v<winrt::Windows::System::Power::IPowerManagerStatics>,
    (__int64)&v13);
  winrt::check_hresult((int *)&v11, (int)v11, (__int64)&v8);
  v12 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
  v11 = 0LL;
  if ( !v13 )
  {
    v3 = 0LL;
LABEL_3:
    v4 = 0;
    goto LABEL_4;
  }
  (**v13)(v13, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11);
  v3 = v11;
  if ( !v11 )
    goto LABEL_3;
  v4 = 1;
LABEL_4:
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
  if ( v4 )
  {
    v11 = &qword_1808DD6D8;
    _InterlockedIncrement64(&qword_1808DD6D8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DD6E0);
    }
    v5 = (*a2)(&winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>);
    _InterlockedDecrement64(&qword_1808DD6D8);
  }
  else
  {
    v5 = (*a2)((__int64 *)&v12);
  }
  v6 = v5;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  return v6;
}
