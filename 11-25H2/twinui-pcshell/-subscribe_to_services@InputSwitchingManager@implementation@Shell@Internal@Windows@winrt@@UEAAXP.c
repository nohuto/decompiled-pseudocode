/*
 * XREFs of ?subscribe_to_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180614B60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XIIS_Test@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F0928 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XIIS_Test@@@details@wil@@QEAAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        struct IServiceProvider *a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XIIS_Test>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_XIIS_Test>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
}
