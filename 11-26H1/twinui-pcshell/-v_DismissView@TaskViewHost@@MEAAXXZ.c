/*
 * XREFs of ?v_DismissView@TaskViewHost@@MEAAXXZ @ 0x1806A83A0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18009B288 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18017FC54 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x18027EED0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ?is_running@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B488 (-is_running@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@1@XZ @ 0x1802B56F8 (--C-$tip_test@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA-.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802BA918 (--1-$test_data_control@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@ti.c)
 */

void __fastcall TaskViewHost::v_DismissView(TaskViewHost *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  char v4; // bl
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 752);
  v3 = *((_QWORD *)this + 94);
  if ( v3 && tip2::details::shared_data<0,0,0>::is_running(v3 + 8) )
  {
    v4 = *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>::operator->(
                       (__int64)v1,
                       &v7)
                  + 272);
    tip2::test_data_control<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>::~test_data_control<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>(&v7);
    if ( !v4 )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>::operator->(
                    (__int64)v1,
                    &v7)
               + 273) = 1;
      tip2::test_data_control<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>::~test_data_control<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>(&v7);
    }
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete(v1);
  }
  __abi_winrt_ptr_assign((_QWORD *)this + 26, 0LL);
  v5 = (__int64 *)*((_QWORD *)this + 41);
  v6 = (__int64 *)*((_QWORD *)this + 40);
  if ( v6 != v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(v6, v5);
    *((_QWORD *)this + 41) = *((_QWORD *)this + 40);
  }
}
