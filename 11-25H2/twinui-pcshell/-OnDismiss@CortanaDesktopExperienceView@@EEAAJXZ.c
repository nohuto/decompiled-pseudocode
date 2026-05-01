/*
 * XREFs of ?OnDismiss@CortanaDesktopExperienceView@@EEAAJXZ @ 0x1803CA870
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803C88EC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnDismiss(CortanaDesktopExperienceView *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)((char *)this - 32));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x349,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v1);
  return 0LL;
}
