/*
 * XREFs of ?IsDashboardTaskbarButtonSettingsManagerEnabled@@YA_NXZ @ 0x1803DC370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 IsDashboardTaskbarButtonSettingsManagerEnabled(void)
{
  return wil::details::FeatureImpl<__WilFeatureTraits_Feature_57840822>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57840822>::GetImpl'::`2'::impl);
}
