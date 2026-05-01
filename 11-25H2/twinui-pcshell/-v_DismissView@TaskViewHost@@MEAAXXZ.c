/*
 * XREFs of ?v_DismissView@TaskViewHost@@MEAAXXZ @ 0x180681120
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800E8FC8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180102A0C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180289BA0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ?is_running@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802941C0 (-is_running@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 */

void __fastcall TaskViewHost::v_DismissView(TaskViewHost *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rcx
  __int64 *v5; // rdx

  v1 = (__int64 *)((char *)this + 752);
  v3 = *((_QWORD *)this + 94);
  if ( v3 && tip2::details::shared_data<0,0,0>::is_running(v3 + 8) )
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete(v1);
  __abi_winrt_ptr_assign((_QWORD *)this + 26, 0LL);
  v4 = (__int64 *)*((_QWORD *)this + 40);
  v5 = (__int64 *)*((_QWORD *)this + 41);
  if ( v4 != v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(v4, v5);
    *((_QWORD *)this + 41) = *((_QWORD *)this + 40);
  }
}
