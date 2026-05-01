/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@wil@@SA_NXZ @ 0x1800725D0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800727FC (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApp.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::IsEnabled()
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl);
  return 1;
}
