/*
 * XREFs of ?IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ @ 0x1802A077C
 * Callers:
 *     ?OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x180583440 (-OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowMan.c)
 *     ?get_IsGuidedSnapAssistActive@CSnapAssistControllerBase@@UEAAJPEAE@Z @ 0x1805859C0 (-get_IsGuidedSnapAssistActive@CSnapAssistControllerBase@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?IsVisible@GuidedSnapAssistControl@@QEAA_NXZ @ 0x1802A07F8 (-IsVisible@GuidedSnapAssistControl@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CSnapAssistControllerBase::IsGuidedSnapAssistActive(CSnapAssistControllerBase *this)
{
  RTL_SRWLOCK *v2; // rdi
  char v3; // dl
  bool v4; // bl

  v2 = (RTL_SRWLOCK *)((char *)this + 168);
  AcquireSRWLockShared((PSRWLOCK)this + 21);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    v3);
  v4 = GuidedSnapAssistControl::IsVisible(*((GuidedSnapAssistControl **)this + 36)) || *((_QWORD *)this + 26);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v4;
}
