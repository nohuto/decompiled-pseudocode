/*
 * XREFs of ?HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804747A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x18016C288 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028C844 (--0-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@IEAA@AE.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18045C620 (--1-$com_ptr_t@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTe.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18045C6FC (--1-$test_data_control@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHost.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardButtonToShowTest@@@details@wil@@QEAA_NXZ @ 0x180468A78 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardButtonToShowTest@@@d.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180468D1C (-close@-$test_data_control@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@Keyboard.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180468E68 (-ensure_data@-$tip_test@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHos.c)
 *     ??$HandleInvocationBySystemButton@AEB_NAEB_NAEAU?$atomic@_N@std@@AEAU12@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N0AEAU?$atomic@_N@std@@1AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804731AC (--$HandleInvocationBySystemButton@AEB_NAEB_NAEAU-$atomic@_N@std@@AEAU12@AEAW4ShellRequestType@Te.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@0@XZ @ 0x18047393C (--$open@V-$tip_test@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHosting.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInvocationBySystemButton(
        KeyboardHosting::TabTipAdapterPolicy *this,
        enum Windows::Internal::Shell::Text::ShellRequestType *a2)
{
  __int64 *v4; // rax
  char v6; // [rsp+60h] [rbp+28h] BYREF
  char IsViewShownInternal; // [rsp+68h] [rbp+30h] BYREF
  _BYTE *v8; // [rsp+70h] [rbp+38h] BYREF
  void *v9; // [rsp+78h] [rbp+40h] BYREF

  *(_DWORD *)a2 = 0;
  IsViewShownInternal = KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(
                          (RTL_SRWLOCK *)this,
                          *((_DWORD *)this + 164));
  v6 = *((_BYTE *)this + 660);
  *((_BYTE *)this + 660) = 1;
  if ( *((_BYTE *)this + 661) && !*((_BYTE *)this + 625) )
    *(_DWORD *)a2 = 1;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardButtonToShowTest>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardButtonToShowTest>::GetImpl'::`2'::impl)
    && !*(_DWORD *)a2 )
  {
    tip2::open<tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>>(&v9);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v9) )
    {
      v4 = (__int64 *)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::ensure_data(&v9);
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(
        (__int64 *)&v8,
        v4);
      v8[274] = *((_BYTE *)this + 661) == 0;
      v8[275] = *((_BYTE *)this + 625);
      tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::close((__int64 *)&v8);
      tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>((void **)&v8);
    }
    wil::com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>,wil::err_returncode_policy>(&v9);
  }
  TouchKeyboardExperienceTelemetryLogger::HandleInvocationBySystemButton<bool const &,bool const &,std::atomic<bool> &,std::atomic<bool> &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    (__int64)&IsViewShownInternal,
    (__int64)&v6,
    (__int64)this + 625,
    (__int64)this + 661);
  return 0LL;
}
