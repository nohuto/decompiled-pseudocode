/*
 * XREFs of ??0TouchGestureProcessor@@QEAA@AEBU?$com_ptr@VTouchGestureSettings@@@winrt@@@Z @ 0x18020F528
 * Callers:
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x18058C020 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$ActivateInstance@UGestureRecognizer@Input@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUGestureRecognizer@Input@UI@23@XZ @ 0x18058EB50 (--$ActivateInstance@UGestureRecognizer@Input@UI@Windows@winrt@@@IActivationFactory@Foundation@Wi.c)
 *     ??$ActivateInstance@UPhysicalGestureRecognizer@Input@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPhysicalGestureRecognizer@Input@UI@23@XZ @ 0x18058EC10 (--$ActivateInstance@UPhysicalGestureRecognizer@Input@UI@Windows@winrt@@@IActivationFactory@Found.c)
 *     ??$call@P6A?AUGestureRecognizer@Input@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UGestureRecognizer@Input@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUGestureRecognizer@Input@UI@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x18058F950 (--$call@P6A-AUGestureRecognizer@Input@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@.c)
 *     ??$call@P6A?AUPhysicalGestureRecognizer@Input@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UPhysicalGestureRecognizer@Input@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUPhysicalGestureRecognizer@Input@UI@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x18058FA7C (--$call@P6A-AUPhysicalGestureRecognizer@Input@UI@Windows@winrt@@AEBUIActivationFactory@Foundatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TouchGestureProcessor::TouchGestureProcessor(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v7; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *a2;
  *(_QWORD *)(a1 + 16) = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)(a1 + 24) = 0LL;
  v7 = &qword_1808DBA38;
  _InterlockedIncrement64(&qword_1808DBA38);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Input::PhysicalGestureRecognizer,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::Input::PhysicalGestureRecognizer>(&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Input::PhysicalGestureRecognizer,winrt::Windows::Foundation::IActivationFactory>);
    _InterlockedDecrement64(&qword_1808DBA38);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DBA38);
    v7 = (__int64 *)_lambda_2826ff66a09a806add86d8b989844be9_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Input::PhysicalGestureRecognizer,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::UI::Input::PhysicalGestureRecognizer (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      v3,
      a1 + 32,
      &v7);
  }
  v7 = &qword_1808DBA58;
  _InterlockedIncrement64(&qword_1808DBA58);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Input::GestureRecognizer,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::Input::GestureRecognizer>(&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Input::GestureRecognizer,winrt::Windows::Foundation::IActivationFactory>);
    _InterlockedDecrement64(&qword_1808DBA58);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DBA58);
    v7 = (__int64 *)_lambda_295d3c7e48257104092a713383210c3a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Input::GestureRecognizer,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::UI::Input::GestureRecognizer (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      v4,
      a1 + 40,
      &v7);
  }
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(32LL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 144) = v5;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 0;
  *(_WORD *)(a1 + 292) = 0;
  return a1;
}
