/*
 * XREFs of ?IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ @ 0x18029887C
 * Callers:
 *     ?OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1805A7260 (-OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowMan.c)
 *     ?get_IsGuidedSnapAssistActive@CSnapAssistControllerBase@@UEAAJPEAE@Z @ 0x1805A9880 (-get_IsGuidedSnapAssistActive@CSnapAssistControllerBase@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?IsVisible@GuidedSnapAssistControl@@QEAA_NXZ @ 0x180298908 (-IsVisible@GuidedSnapAssistControl@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CSnapAssistControllerBase::IsGuidedSnapAssistActive(CSnapAssistControllerBase *this)
{
  RTL_SRWLOCK *v2; // rbx
  bool v3; // di
  char v4; // r8

  v2 = (RTL_SRWLOCK *)((char *)this + 168);
  AcquireSRWLockShared((PSRWLOCK)this + 21);
  v3 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    v4);
  if ( !GuidedSnapAssistControl::IsVisible(*((GuidedSnapAssistControl **)this + 36)) )
    v3 = *((_QWORD *)this + 26) != 0LL;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
