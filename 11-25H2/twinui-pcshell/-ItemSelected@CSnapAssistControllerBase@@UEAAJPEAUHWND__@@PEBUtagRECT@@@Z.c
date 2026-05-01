/*
 * XREFs of ?ItemSelected@CSnapAssistControllerBase@@UEAAJPEAUHWND__@@PEBUtagRECT@@@Z @ 0x180583400
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn CSnapAssistControllerBase::ItemSelected(
        CSnapAssistControllerBase *this,
        HWND a2,
        const struct tagRECT *a3)
{
  const char *v3; // r9
  const char *v4; // r9
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
      `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      (char)a2);
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1BF,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      v3);
  }
  catch ( ... )
  {
    *(_DWORD *)(v5 + 32) = wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x1E4,
                             (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                             v4);
  }
}
