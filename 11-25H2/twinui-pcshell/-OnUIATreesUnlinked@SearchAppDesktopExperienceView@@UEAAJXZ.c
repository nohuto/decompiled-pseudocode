/*
 * XREFs of ?OnUIATreesUnlinked@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803C17B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803C13EC (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Win.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnUIATreesUnlinked(SearchAppDesktopExperienceView *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = SearchAppDesktopExperienceView::NotifyView(
         (SearchAppDesktopExperienceView *)((char *)this - 16),
         L"NotifyUIATreesUnlinked",
         0LL);
  v2 = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x868,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v1);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DC,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)v2);
  }
  return v2;
}
