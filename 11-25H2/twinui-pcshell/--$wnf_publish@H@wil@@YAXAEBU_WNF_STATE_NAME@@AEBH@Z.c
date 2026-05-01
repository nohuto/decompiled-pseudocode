/*
 * XREFs of ??$wnf_publish@H@wil@@YAXAEBU_WNF_STATE_NAME@@AEBH@Z @ 0x1802B4E0C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1 @ 0x180241F90 (winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--InitializeAsync$_ResumeC.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032F7A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032F7A0.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$14 @ 0x1806BAFE1 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BAFE1.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_publish<int>(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  result = (unsigned int)RtlPublishWnfStateData(*a1, 0LL, a2, 4LL, 0LL) | 0x10000000;
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x361,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)result,
      v3);
  return result;
}
