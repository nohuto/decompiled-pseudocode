/*
 * XREFs of ?QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ @ 0x180583730
 * Callers:
 *     ?AppLayoutChanged@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x180583080 (-AppLayoutChanged@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation.c)
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ @ 0x18059894C (-CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ.c)
 */

__int64 __fastcall CSnapAssistControllerBase::QueueSnapAssistDismissal(GuidedSnapAssistControl **this, char a2)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    a2);
  GuidedSnapAssistControl::CancelIfActive(this[36]);
  return 0LL;
}
