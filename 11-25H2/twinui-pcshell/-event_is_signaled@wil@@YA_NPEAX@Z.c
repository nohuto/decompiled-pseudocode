/*
 * XREFs of ?event_is_signaled@wil@@YA_NPEAX@Z @ 0x1803322B4
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete$_ResumeCoro$1 @ 0x180331270 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180331270.c)
 *     ?Acknowledge@GamingOverlayExperienceManager@@UEAAJI@Z @ 0x180342AE0 (-Acknowledge@GamingOverlayExperienceManager@@UEAAJI@Z.c)
 *     ?ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18034DD40 (-ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@W.c)
 *     ?IsOobeContinuation@@YA_NXZ @ 0x1803B9C5C (-IsOobeContinuation@@YA_NXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall wil::event_is_signaled(HANDLE hHandle, void *a2)
{
  DWORD v3; // eax
  const char *v4; // r9
  DWORD v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = WaitForSingleObjectEx(hHandle, 0, 0);
  v5 = v3;
  if ( v3 != 258 && (v3 || WaitForSingleObjectEx(hHandle, 0, 0)) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xACC,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v4);
  return v5 == 0;
}
