/*
 * XREFs of ?OnUIATreesUnlinked@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1803D4D30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D426C (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnUIATreesUnlinked(CortanaDesktopExperienceView *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CortanaDesktopExperienceView::NotifyView(
         (CortanaDesktopExperienceView *)((char *)this - 16),
         L"NotifyUIATreesUnlinked",
         0LL);
  v2 = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA98,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v1);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27B,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)v2);
  }
  return v2;
}
