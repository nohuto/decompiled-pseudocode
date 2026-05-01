/*
 * XREFs of ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x18056E5DC
 * Callers:
 *     ?IsC2DAvailableOnDevice@AIXPolicyHelper@@YA_NXZ @ 0x18056E738 (-IsC2DAvailableOnDevice@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ??$IsC2DAllowedByPolicy@_N_NAEA_NAEB_NAEB_NAEB_N@AIXTelemetry@@SAX$$QEA_N0AEA_NAEB_N22@Z @ 0x18056AFA4 (--$IsC2DAllowedByPolicy@_N_NAEA_NAEB_NAEB_NAEB_N@AIXTelemetry@@SAX$$QEA_N0AEA_NAEB_N22@Z.c)
 *     ??$call_factory@UEnterpriseFeatureControl@Update@Management@WindowsUdk@winrt@@UIEnterpriseFeatureControlStatics@2345@V_lambda_d87b56c9fee8963e2cb1aea67b29a52d_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d87b56c9fee8963e2cb1aea67b29a52d_@@@Z @ 0x18056C008 (--$call_factory@UEnterpriseFeatureControl@Update@Management@WindowsUdk@winrt@@UIEnterpriseFeatur.c)
 *     ??$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics2@2345@V_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_@@@impl@winrt@@YA?A_P$$QEAV_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_@@@Z @ 0x18056C094 (--$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsSta.c)
 *     ?IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ @ 0x18056E3CC (-IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ.c)
 *     ?IsWipUser@AIXPolicyHelper@@YA_NXZ @ 0x18056E7A0 (-IsWipUser@AIXPolicyHelper@@YA_NXZ.c)
 *     ?MeetsRequirement@HardwareRequirements@Profile@System@WindowsUdk@winrt@@SA@AEBW4HardwareRequirement@2345@@Z @ 0x18056E844 (-MeetsRequirement@HardwareRequirements@Profile@System@WindowsUdk@winrt@@SA@AEBW4HardwareRequirem.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52926939@@@details@wil@@QEAA_NXZ @ 0x18056FBEC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52926939@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56085006@@@details@wil@@QEAA_NXZ @ 0x18056FC64 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56085006@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57666987@@@details@wil@@QEAA_NXZ @ 0x18056FCDC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57666987@@@details@wil@@QEAA_NX.c)
 */

bool __fastcall AIXPolicyHelper::IsC2DAllowedOnDeviceByPolicy(AIXPolicyHelper *this)
{
  char IsEnabled; // r15
  char v2; // r14
  AIXPolicyHelper *v3; // rcx
  char v4; // di
  bool v5; // bl
  char IsC2DAllowedByITPolicy; // si
  AIXPolicyHelper *v7; // rcx
  const char *v8; // r9
  bool result; // al
  char v10; // [rsp+30h] [rbp-48h] BYREF
  char v11[7]; // [rsp+31h] [rbp-47h] BYREF
  _QWORD v12[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v14; // [rsp+80h] [rbp+8h] BYREF
  char v15; // [rsp+88h] [rbp+10h] BYREF
  unsigned int *v16; // [rsp+90h] [rbp+18h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_56085006>::__private_IsEnabled();
    v15 = IsEnabled;
    v14 = 56114500;
    v16 = (unsigned int *)&v14;
    v2 = winrt::impl::call_factory<winrt::WindowsUdk::Management::Update::EnterpriseFeatureControl,winrt::WindowsUdk::Management::Update::IEnterpriseFeatureControlStatics,_lambda_d87b56c9fee8963e2cb1aea67b29a52d_>(&v16);
    LOBYTE(v14) = v2;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57666987>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID57666987>::GetImpl'::`2'::impl)
      || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_52926939>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_52926939>::GetImpl'::`2'::impl) )
    {
      v5 = 1;
      v17 = 1;
      LODWORD(v16) = 0;
      v12[0] = &v16;
      v12[1] = &v17;
      v4 = winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2,_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_>((__int64)v12);
    }
    else
    {
      LODWORD(v16) = 0;
      v4 = winrt::WindowsUdk::System::Profile::HardwareRequirements::MeetsRequirement((const enum winrt::WindowsUdk::System::Profile::HardwareRequirement *)&v16);
      v5 = 1;
    }
    LOBYTE(v17) = v4;
    IsC2DAllowedByITPolicy = AIXPolicyHelper::IsC2DAllowedByITPolicy(v3);
    LOBYTE(v16) = IsC2DAllowedByITPolicy;
    v10 = 1;
    v11[0] = AIXPolicyHelper::IsWipUser(v7);
    AIXTelemetry::IsC2DAllowedByPolicy<bool,bool,bool &,bool const &,bool const &,bool const &>(
      v11,
      &v10,
      (char *)&v17,
      (char *)&v16,
      &v15,
      (char *)&v14);
    if ( !IsEnabled || !v4 || !v2 || !IsC2DAllowedByITPolicy )
      v5 = 0;
    result = v5;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4B2,
      (int)"shellcommon\\internal\\shell\\inc\\aixpolicyhelper.h",
      v8);
    return 0;
  }
  return result;
}
