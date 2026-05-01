/*
 * XREFs of ?OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803CA7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180375D90 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ??$Start@$$V@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x1803C6BEC (--$Start@$$V@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@SA-AV01.c)
 *     ??1CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1803C7068 (--1CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CA238 (-NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803CB6B4 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::OnPearlRectChanged(SearchAppDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5[42]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged *)v5);
  SearchAppDesktopExperienceView::NotifyTaskbarSearchBoxChanged((SearchAppDesktopExperienceView *)((char *)this - 16));
  v2 = SearchAppDesktopExperienceView::PositionCortanaWindow(
         (SearchAppDesktopExperienceView *)((char *)this - 16),
         1,
         0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::~CortanaExperienceManager_PearlRectMayHaveChanged((CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged *)v5);
  return v3;
}
