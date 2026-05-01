/*
 * XREFs of ?OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1803D5A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1803D3B98 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D5AF0 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D5B64 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnWorkAreaChanged(CortanaDesktopExperienceView *this)
{
  CortanaDesktopExperienceView *v1; // rdi
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CortanaDesktopExperienceView *)((char *)this - 16);
  if ( CortanaDesktopExperienceView::IsViewVisible((CortanaDesktopExperienceView *)((char *)this - 16))
    && *((_BYTE *)this + 223) )
  {
    v3 = CortanaDesktopExperienceView::PositionAlongsideStart(v1);
    if ( v3 < 0 )
    {
      v4 = 626LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v3 = CortanaDesktopExperienceView::PositionCortanaWindow(v1, 1, 0);
    if ( v3 < 0 )
    {
      v4 = 627LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
