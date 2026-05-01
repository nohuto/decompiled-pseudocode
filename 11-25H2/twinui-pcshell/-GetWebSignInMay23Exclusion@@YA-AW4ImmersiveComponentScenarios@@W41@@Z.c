/*
 * XREFs of ?GetWebSignInMay23Exclusion@@YA?AW4ImmersiveComponentScenarios@@W41@@Z @ 0x1801F1DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FederatedSignInPerfMay23@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F1E18 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FederatedSignInPerfMay23@@@details@wil@@Q.c)
 */

__int64 __fastcall GetWebSignInMay23Exclusion(char a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FederatedSignInPerfMay23>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_FederatedSignInPerfMay23>::GetImpl'::`2'::impl,
    a2);
  return a1 & 1;
}
