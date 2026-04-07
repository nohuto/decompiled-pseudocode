/*
 * XREFs of ?UpdateCursorPosition@CWindowList@@QEAAJAEBUtagPOINT@@@Z @ 0x180083668
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?SetPosition@CCursorVisual@@QEAAJHH@Z @ 0x180076F4C (-SetPosition@CCursorVisual@@QEAAJHH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__CWindowList::UpdateCursorPosition_::_2_::_lambda_1___ @ 0x1800DF0F0 (CWindowList--ForEachSoftwareCursorListener__CWindowList--UpdateCursorPosition_--_2_--_lambda_1__.c)
 */

__int64 __fastcall CWindowList::UpdateCursorPosition(CCursorVisualProxy ***this, const struct tagPOINT *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = CCursorVisual::SetPosition(this[11], a2->x, a2->y);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7[0] = this;
    v7[1] = a2;
    CWindowList::ForEachSoftwareCursorListener__CWindowList::UpdateCursorPosition_::_2_::_lambda_1___(this, v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20A3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v4,
      v7[0]);
    return v5;
  }
}
