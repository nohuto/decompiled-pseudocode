/*
 * XREFs of ?wnf_is_published_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x180333E0C
 * Callers:
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x18044E708 (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$14 @ 0x1806BAFE1 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BAFE1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_is_published_nothrow(
        wil *this,
        const struct _WNF_STATE_NAME *a2,
        bool *a3,
        struct wil::WNF_CHANGE_STAMP_STRUCT *a4)
{
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+54h] [rbp+1Ch]

  v10 = HIDWORD(a3);
  v8 = 0;
  v9 = 0;
  LOBYTE(a2->Data[0]) = 0;
  v5 = NtQueryWnfStateData(this, 0LL, 0LL, &v9, 0LL, &v8) | 0x10000000;
  if ( (int)(v5 + 0x80000000) < 0 || v5 == -805306333 )
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
      (const char *)v5);
    return v5;
  }
}
