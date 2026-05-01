/*
 * XREFs of ?wnf_is_published_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18033367C
 * Callers:
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x18045B19C (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$14 @ 0x1806E206D (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E206D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_is_published_nothrow(
        wil *this,
        const struct _WNF_STATE_NAME *a2,
        bool *a3,
        struct wil::WNF_CHANGE_STAMP_STRUCT *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+54h] [rbp+1Ch]

  v10 = HIDWORD(a3);
  LOBYTE(a2->Data[0]) = 0;
  v9 = 0;
  v5 = NtQueryWnfStateData(this, 0LL, 0LL, &v9);
  v6 = v5 | 0x10000000;
  if ( v5 >= 0 || v6 == -805306333 )
  {
    LOBYTE(a2->Data[0]) = v9 != 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28E,
      (int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
      (const char *)v6);
    return v6;
  }
}
