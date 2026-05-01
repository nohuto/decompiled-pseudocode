/*
 * XREFs of ?Hide@CMultitaskingViewFrame@@UEAAJXZ @ 0x1804A90F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CloakWindow@CMultitaskingViewFrame@@AEAAJ_N@Z @ 0x1804AA034 (-_CloakWindow@CMultitaskingViewFrame@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrame::Hide(CMultitaskingViewFrame *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CMultitaskingViewFrame::_CloakWindow(this, 1);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x211,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
