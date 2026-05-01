/*
 * XREFs of ?IsShellSourceForBam@@YA_NXZ @ 0x1803DC450
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NTUserQoSSupportEx@@@details@wil@@QEAA_NXZ @ 0x1803DCA20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_NTUserQoSSupportEx@@@details@wil@.c)
 */

bool IsShellSourceForBam(void)
{
  return wil::details::FeatureImpl<__WilFeatureTraits_Feature_NTUserQoSSupportEx>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_NTUserQoSSupportEx>::GetImpl'::`2'::impl) ^ 1;
}
