/*
 * XREFs of ?TryInvokeBack@WindowArrangementView@@UEAAJXZ @ 0x180509DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x180506520 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 */

__int64 __fastcall WindowArrangementView::TryInvokeBack(WindowArrangementView *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = WindowArrangementView::CancelPlacement((WindowArrangementView *)((char *)this - 8), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A6,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
