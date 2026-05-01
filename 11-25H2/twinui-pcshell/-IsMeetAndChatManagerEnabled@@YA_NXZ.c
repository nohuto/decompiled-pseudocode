/*
 * XREFs of ?IsMeetAndChatManagerEnabled@@YA_NXZ @ 0x1803DC3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EEEDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 */

char __fastcall IsMeetAndChatManagerEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_180779B60);
}
