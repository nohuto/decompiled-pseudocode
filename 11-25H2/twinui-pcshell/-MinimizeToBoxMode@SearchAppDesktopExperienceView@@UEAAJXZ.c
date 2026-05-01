/*
 * XREFs of ?MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803C0CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C4B84 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$Start@$$V@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x1803BDA68 (--$Start@$$V@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@SA-AV01@XZ.c)
 *     ??1CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1803BDF48 (--1CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803BF9A0 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1803C2DDC (-Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1803C34A0 (-SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C4E98 (-UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchAppDesktopExperienceView::MinimizeToBoxMode(SearchAppDesktopExperienceView *this)
{
  char *v2; // rdi
  int v3; // eax
  int ActivateArgs; // eax
  unsigned int v5; // ebx
  int v6; // eax
  DWORD v7; // edx
  HSTRING string; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-C0h]
  volatile signed __int32 *v12[42]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss *)v12);
  *((_BYTE *)this + 173) = 1;
  v2 = (char *)this - 24;
  v3 = SearchAppDesktopExperienceView::SetZBand((char *)this - 24);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x22F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  SearchAppDesktopExperienceView::UnregisterGlobalBackButton((SearchAppDesktopExperienceView *)((char *)this - 24));
  WindowsDeleteString(0LL);
  string = 0LL;
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"StartMode=QFSearchBox&QuerySource=StartLightDismiss&Positioner=desktop",
    0x47u,
    0x46u);
  ActivateArgs = SearchAppDesktopExperienceView::GetActivateArgs(
                   (SearchAppDesktopExperienceView *)((char *)this - 24),
                   string1,
                   &string);
  v5 = ActivateArgs;
  if ( ActivateArgs >= 0 )
  {
    v6 = SearchAppDesktopExperienceView::Relaunch(v2, string, 0LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x236,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v6);
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v12,
      v7);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x235,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs);
  }
  WindowsDeleteString(string);
  string = 0LL;
  CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::~CortanaExperienceManager_Dismiss(v12);
  return v5;
}
