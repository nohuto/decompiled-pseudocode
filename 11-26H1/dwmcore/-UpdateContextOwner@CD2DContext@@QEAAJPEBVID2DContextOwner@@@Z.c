/*
 * XREFs of ?UpdateContextOwner@CD2DContext@@QEAAJPEBVID2DContextOwner@@@Z @ 0x1800AE194
 * Callers:
 *     ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x1800AE3B4 (-Initialize@CSubDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ @ 0x1800AE1E0 (-Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ.c)
 */

__int64 __fastcall CD2DContext::UpdateContextOwner(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  struct CD2DTarget *v2; // rax
  __int64 v3; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CD2DTargetStack::Top((CD2DContext *)((char *)this + 320));
  if ( v2 )
  {
    *(_QWORD *)v2 = v3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
      (const char *)0x88982F04LL);
    return 2291674884LL;
  }
}
