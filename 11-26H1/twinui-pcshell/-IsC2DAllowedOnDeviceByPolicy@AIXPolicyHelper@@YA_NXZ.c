/*
 * XREFs of ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180592050
 * Callers:
 *     ??0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA@AEBUShellAnimationCoordinator@23456@@Z @ 0x1802079E0 (--0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x180267D60 (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     _lambda_31a0a1389f2a17342555b3fdd039100d_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058E764 (_lambda_31a0a1389f2a17342555b3fdd039100d_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     _lambda_9d63f5b83c4626ea321dd6f3d651c13d_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058E868 (_lambda_9d63f5b83c4626ea321dd6f3d651c13d_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     _lambda_f0f0704f501388b5535c1eee59b56383_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058EA44 (_lambda_f0f0704f501388b5535c1eee59b56383_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 * Callees:
 *     ??$IsC2DAllowedByPolicy@_N_NAEA_NAEB_NAEB_N@AIXTelemetry@@SAX$$QEA_N0AEA_NAEB_N2@Z @ 0x18058ECD0 (--$IsC2DAllowedByPolicy@_N_NAEA_NAEB_NAEB_N@AIXTelemetry@@SAX$$QEA_N0AEA_NAEB_N2@Z.c)
 *     ??$call_factory@UEnterpriseFeatureControl@Update@Management@WindowsUdk@winrt@@UIEnterpriseFeatureControlStatics@2345@V_lambda_d87b56c9fee8963e2cb1aea67b29a52d_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d87b56c9fee8963e2cb1aea67b29a52d_@@@Z @ 0x18058FE34 (--$call_factory@UEnterpriseFeatureControl@Update@Management@WindowsUdk@winrt@@UIEnterpriseFeatur.c)
 *     ??$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics2@2345@V_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_@@@impl@winrt@@YA?A_P$$QEAV_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_@@@Z @ 0x18058FEC4 (--$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsSta.c)
 *     ??$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics@2345@V_lambda_7268e45c73438b7c97da070512f3e575_@@@impl@winrt@@YA?A_P$$QEAV_lambda_7268e45c73438b7c97da070512f3e575_@@@Z @ 0x18058FF5C (--$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRe_ea_18058FF5C.c)
 *     ?IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180591DEC (-IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ.c)
 *     ?IsWipUser@AIXPolicyHelper@@YA_NXZ @ 0x1805921D4 (-IsWipUser@AIXPolicyHelper@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52926939@@@details@wil@@QEAA_NXZ @ 0x1805934DC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52926939@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57666987@@@details@wil@@QEAA_NXZ @ 0x180593590 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57666987@@@details@wil@@QEAA_NX.c)
 */

bool __fastcall AIXPolicyHelper::IsC2DAllowedOnDeviceByPolicy(AIXPolicyHelper *this)
{
  char v1; // r14
  AIXPolicyHelper *v2; // rcx
  char v3; // si
  bool v4; // bl
  char IsC2DAllowedByITPolicy; // di
  AIXPolicyHelper *v6; // rcx
  const char *v7; // r9
  bool result; // al
  char v9[8]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int *v10[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v12; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v13; // [rsp+88h] [rbp+10h] BYREF
  unsigned int **v14; // [rsp+90h] [rbp+18h] BYREF
  char v15; // [rsp+98h] [rbp+20h] BYREF

  v12 = 56114500;
  v13 = (unsigned int *)&v12;
  try
  {
    v1 = winrt::impl::call_factory<winrt::WindowsUdk::Management::Update::EnterpriseFeatureControl,winrt::WindowsUdk::Management::Update::IEnterpriseFeatureControlStatics,_lambda_d87b56c9fee8963e2cb1aea67b29a52d_>(&v13);
    LOBYTE(v12) = v1;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57666987>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID57666987>::GetImpl'::`2'::impl)
      || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_52926939>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_52926939>::GetImpl'::`2'::impl) )
    {
      v4 = 1;
      LODWORD(v14) = 1;
      LODWORD(v13) = 0;
      v10[0] = (unsigned int *)&v13;
      v10[1] = (unsigned int *)&v14;
      v3 = winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2,_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_>(v10);
    }
    else
    {
      LODWORD(v13) = 0;
      v14 = &v13;
      v3 = winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics,_lambda_7268e45c73438b7c97da070512f3e575_>((unsigned int **)&v14);
      v4 = 1;
    }
    LOBYTE(v14) = v3;
    IsC2DAllowedByITPolicy = AIXPolicyHelper::IsC2DAllowedByITPolicy(v2);
    LOBYTE(v13) = IsC2DAllowedByITPolicy;
    v15 = 1;
    v9[0] = AIXPolicyHelper::IsWipUser(v6);
    AIXTelemetry::IsC2DAllowedByPolicy<bool,bool,bool &,bool const &,bool const &>(
      v9,
      &v15,
      (char *)&v14,
      (char *)&v13,
      (char *)&v12);
    if ( !v3 || !v1 || !IsC2DAllowedByITPolicy )
      v4 = 0;
    result = v4;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4EC,
      (int)"shellcommon\\internal\\shell\\inc\\aixpolicyhelper.h",
      v7);
    return 0;
  }
  return result;
}
