/*
 * XREFs of ?GetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x18057E1D4
 * Callers:
 *     ?GetTabTearOutSupportedForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x18057E1A0 (-GetTabTearOutSupportedForWindow@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9B04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetTabTearOutSupportedForWindow(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        unsigned __int64 a2,
        char a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
    1u,
    a3);
  return winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetTabTearOutSupportedIfWindowExists(this, a2);
}
