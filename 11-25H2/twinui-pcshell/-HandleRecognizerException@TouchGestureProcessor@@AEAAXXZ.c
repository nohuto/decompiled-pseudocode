/*
 * XREFs of ?HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ @ 0x18056DF68
 * Callers:
 *     __lambda_a6b4bd61808e145dfc62d4568902935b_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController__::_1_::catch$2 @ 0x1806CEE74 (__lambda_a6b4bd61808e145dfc62d4568902935b_--operator()_winrt--Windows--UI--Internal--Input--Shel.c)
 *     __lambda_21db7767322f1ff1c886f131a6440c5a_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController__::_1_::catch$8 @ 0x1806CEEB7 (__lambda_21db7767322f1ff1c886f131a6440c5a_--operator()_winrt--Windows--UI--Internal_ea_1806CEEB7.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800FB0A0 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18056C3B8 (--$open@V-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18056CA50 (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18056CAA0 (--1-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@1@XZ @ 0x18056CAF4 (--C-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     ?CompleteGesture@?$consume_Windows_UI_Input_IPhysicalGestureRecognizer@UIPhysicalGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18056CC30 (-CompleteGesture@-$consume_Windows_UI_Input_IPhysicalGestureRecognizer@UIPhysicalGestureRecogniz.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TouchGestureProcessor::HandleRecognizerException(TouchGestureProcessor *this)
{
  __int64 v2; // rcx
  int v3; // edi
  void *v4; // [rsp+30h] [rbp+10h] BYREF
  void *v5; // [rsp+38h] [rbp+18h] BYREF

  winrt::impl::consume_Windows_UI_Input_IPhysicalGestureRecognizer<winrt::Windows::UI::Input::IPhysicalGestureRecognizer>::CompleteGesture((__int64 *)this + 4);
  v2 = *(_QWORD *)this;
  *((_BYTE *)this + 120) = 1;
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v4);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v4) )
    {
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                     (__int64)&v4,
                     (__int64 *)&v5)
                + 296) = v3;
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v5);
    }
    wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v4);
    v4 = 0LL;
    winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)this, (__int64 *)&v4);
    if ( v4 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v4);
  }
  tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v4);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v4) )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                  (__int64)&v4,
                  (__int64 *)&v5)
             + 273) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v5);
  }
  wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v4);
}
