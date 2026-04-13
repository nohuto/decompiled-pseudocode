/*
 * XREFs of _lambda_0393c5b27ed823b959df79843d2c59df_::_lambda_invoker_cdecl_ @ 0x180091650
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180057038 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@QEAAX_NW4.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800570C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAAX_.c)
 */

char __fastcall lambda_0393c5b27ed823b959df79843d2c59df_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlight>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlight>::GetImpl'::`2'::impl,
    1u,
    a3);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::GetImpl'::`2'::impl,
    1u,
    v3);
  return 0;
}
