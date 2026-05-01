/*
 * XREFs of ?IsC2DAvailableOnDevice@AIXPolicyHelper@@YA_NXZ @ 0x18056E738
 * Callers:
 *     ??0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA@AEBUShellAnimationCoordinator@23456@@Z @ 0x1802158D0 (--0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x18026FD5C (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     _lambda_20c45cccf234445ae58f04cca16f301c_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18056AA60 (_lambda_20c45cccf234445ae58f04cca16f301c_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     _lambda_21db7767322f1ff1c886f131a6440c5a_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18056AB5C (_lambda_21db7767322f1ff1c886f131a6440c5a_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     _lambda_a6b4bd61808e145dfc62d4568902935b_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18056AD30 (_lambda_a6b4bd61808e145dfc62d4568902935b_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_52511504@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18056F14C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_52511504@@@details@wil@@QEAAX_NW4Reportin.c)
 */

bool __fastcall AIXPolicyHelper::IsC2DAvailableOnDevice(AIXPolicyHelper *this, __int64 a2, __int64 a3)
{
  AIXPolicyHelper *v3; // rcx

  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_52511504>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_52511504>::GetImpl'::`2'::impl,
    a2,
    a3);
  return AIXPolicyHelper::IsC2DAllowedOnDeviceByPolicy(v3);
}
