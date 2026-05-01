/*
 * XREFs of ?QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ @ 0x1805A7560
 * Callers:
 *     ?AppLayoutChanged@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1805A6EA0 (-AppLayoutChanged@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ @ 0x1805BCBD0 (-CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ.c)
 */

__int64 __fastcall CSnapAssistControllerBase::QueueSnapAssistDismissal(
        GuidedSnapAssistControl **this,
        __int64 a2,
        char a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3);
  GuidedSnapAssistControl::CancelIfActive(this[36]);
  return 0LL;
}
