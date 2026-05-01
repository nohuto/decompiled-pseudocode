/*
 * XREFs of _lambda_bf5d83fa803ad7d3f77024964d972d50_::operator() @ 0x18047B908
 * Callers:
 *     wil::details::ScopeExitFn__lambda_bf5d83fa803ad7d3f77024964d972d50___::_ScopeExitFn__lambda_bf5d83fa803ad7d3f77024964d972d50___ @ 0x18047B1D8 (wil--details--ScopeExitFn__lambda_bf5d83fa803ad7d3f77024964d972d50___--_ScopeExitFn__lambda_bf5d.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18047D0FC (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180289BA0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x18029419C (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18047B248 (--1-$test_data_control@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@1@XZ @ 0x18047B4B8 (--C-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA-AV-.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_LaunchTip@@@details@wil@@QEAA_NXZ @ 0x18047E184 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_Lau_ea_18047E184.c)
 */

__int64 __fastcall lambda_bf5d83fa803ad7d3f77024964d972d50_::operator()(__int64 a1)
{
  __int64 result; // rax
  void *v3; // [rsp+38h] [rbp+10h] BYREF

  result = wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_LaunchTip>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_LaunchTip>::GetImpl'::`2'::impl);
  if ( (_BYTE)result )
  {
    result = tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool((__int64 *)(*(_QWORD *)a1 + 416LL));
    if ( (_BYTE)result )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::operator->(
                    *(_QWORD *)a1 + 416LL,
                    (__int64 *)&v3)
               + 265) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::~test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>(&v3);
      return tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)(*(_QWORD *)a1 + 416LL));
    }
  }
  return result;
}
