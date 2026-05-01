/*
 * XREFs of ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18029C9E8
 * Callers:
 *     _lambda_a6b4bd61808e145dfc62d4568902935b_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18056AD30 (_lambda_a6b4bd61808e145dfc62d4568902935b_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1801FB3CC (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?PointerId@?$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18029CA8C (-PointerId@-$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18029CAD8 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18056C3B8 (--$open@V-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18056CA50 (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall TouchGestureProcessor::PointerEventsDetector::ProcessUpEvent(
        TouchGestureProcessor::PointerEventsDetector *this,
        const struct winrt::Windows::UI::Input::PointerPoint *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    LODWORD(v5) = winrt::impl::consume_Windows_UI_Input_IPointerPoint<winrt::Windows::UI::Input::IPointerPoint>::PointerId(a2);
    std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
      (char *)this + 8,
      &v5);
    if ( !*((_QWORD *)this + 2) )
    {
      *((_WORD *)this + 78) = 0;
      *((_DWORD *)this + 38) = 0;
      if ( *((_QWORD *)this + 18) )
        std::_Func_class<void,>::operator()((__int64)this + 88);
      tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v5);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(&v5) )
      {
        if ( v5 )
          tip2::details::shared_data<1,0,0>::complete_without_lock(v5 + 8);
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v5);
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2, a3, a4);
  }
}
