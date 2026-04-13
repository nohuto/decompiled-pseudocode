/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@wil@@SA_NXZ @ 0x180091D50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180091E08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@details@wil@@QEAAX_N.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CortanaOnSpotlight>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
