/*
 * XREFs of ?OnKeyUp@WindowArrangementView@@UEAAJK@Z @ 0x18052A5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x180528E58 (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 */

__int64 __fastcall WindowArrangementView::OnKeyUp(WindowArrangementView *this)
{
  WindowArrangementView *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (WindowArrangementView *)((char *)this - 32);
  if ( *((_BYTE *)v1 + 314) )
    return 0LL;
  v2 = WindowArrangementView::EndDrag(v1, 0);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x197,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
