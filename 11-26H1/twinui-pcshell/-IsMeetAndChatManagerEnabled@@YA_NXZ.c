/*
 * XREFs of ?IsMeetAndChatManagerEnabled@@YA_NXZ @ 0x1803E5230
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801E3F0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 */

char IsMeetAndChatManagerEnabled(void)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
    1u,
    3u);
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_1807A5290);
}
