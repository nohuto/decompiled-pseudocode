/*
 * XREFs of ?OnPointerCancel@WindowArrangementView@@UEAAJXZ @ 0x180508210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x180506ADC (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 */

__int64 __fastcall WindowArrangementView::OnPointerCancel(WindowArrangementView *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 282) )
    return 0LL;
  v1 = WindowArrangementView::EndDrag((WindowArrangementView *)((char *)this - 32), 0);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x183,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
