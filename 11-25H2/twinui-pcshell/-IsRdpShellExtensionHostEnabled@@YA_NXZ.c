/*
 * XREFs of ?IsRdpShellExtensionHostEnabled@@YA_NXZ @ 0x1803DC430
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RdpShellExtension@@@details@wil@@QEAA_NXZ @ 0x18064ED20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RdpShellExtension@@@details@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 IsRdpShellExtensionHostEnabled(void)
{
  return wil::details::FeatureImpl<__WilFeatureTraits_Feature_RdpShellExtension>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RdpShellExtension>::GetImpl'::`2'::impl);
}
