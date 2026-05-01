/*
 * XREFs of ??$call_factory_cast@P6A?AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@ZUPowerManager@2345@U62345@V_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@Z @ 0x1805C5428
 * Callers:
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4CC4 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$call@P6A?AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@Z@?$factory_cache_entry@UPowerManager@Power@System@Windows@winrt@@UIPowerManagerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4PowerSupplyStatus@Power@System@Windows@2@AEBUIPowerManagerStatics@4562@@Z@Z @ 0x1805C510C (--$call@P6A-AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@Z@-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::call_factory_cast<enum winrt::Windows::System::Power::PowerSupplyStatus (*)(winrt::Windows::System::Power::IPowerManagerStatics const &),winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_d6f5de8facc06583c35b6799ac4a0daa_>(
        __int64 (__fastcall *a1)(__int64 *))
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]
  __int64 (__fastcall *v5)(__int64 *); // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v7; // [rsp+60h] [rbp+18h]

  v5 = a1;
  v7 = &qword_1808DD6D8;
  _InterlockedIncrement64(&qword_1808DD6D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics> )
  {
    LODWORD(v5) = 0;
    v3 = 0;
    v4 = 0LL;
    v1 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall **)(__int64 *)))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>
                                                                                + 96LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>,
           &v5);
    winrt::check_hresult(&v6, v1, (__int64)&v3);
    _InterlockedDecrement64(&qword_1808DD6D8);
    return (unsigned int)v5;
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DD6D8);
    v5 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction;
    return winrt::impl::factory_cache_entry<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>::call<enum winrt::Windows::System::Power::PowerSupplyStatus (*)(winrt::Windows::System::Power::IPowerManagerStatics const &)>(
             0LL,
             &v5);
  }
}
