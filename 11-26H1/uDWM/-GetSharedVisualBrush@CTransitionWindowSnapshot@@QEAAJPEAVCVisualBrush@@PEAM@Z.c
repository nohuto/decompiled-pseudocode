/*
 * XREFs of ?GetSharedVisualBrush@CTransitionWindowSnapshot@@QEAAJPEAVCVisualBrush@@PEAM@Z @ 0x1800D03F4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800BF560 (-GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4CVisualBrush@@QEAAAEAV0@AEBV0@@Z @ 0x180095DA0 (--4CVisualBrush@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::GetSharedVisualBrush(
        CTransitionWindowSnapshot *this,
        struct CVisualBrush *a2,
        float *a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 27) )
  {
    CVisualBrush::operator=((__int64 *)a2, (__int64 *)this + 27);
    *a3 = *((float *)this + 68);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0,
      (int)"clientcore\\windows\\dwm\\udwm\\transitionwindowsnapshot.cpp",
      (const char *)0x88982F04LL);
    return 2291674884LL;
  }
}
