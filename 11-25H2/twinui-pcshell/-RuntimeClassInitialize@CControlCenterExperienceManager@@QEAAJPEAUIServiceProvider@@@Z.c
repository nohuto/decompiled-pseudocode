/*
 * XREFs of ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803671AC
 * Callers:
 *     ??$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18020235C (--$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A7950 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind.c)
 */

__int64 __fastcall CControlCenterExperienceManager::RuntimeClassInitialize(
        CControlCenterExperienceManager *this,
        struct IServiceProvider *a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CCW>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CCW>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return 2147500033LL;
}
