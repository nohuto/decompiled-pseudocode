/*
 * XREFs of ?GetSubscriptionAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@78@@Z @ 0x18008C890
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800640B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetSubscriptionAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  *a4 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentAPI>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl,
    1u,
    a3);
  return 2147500033LL;
}
