/*
 * XREFs of ?SetPosition@CCursorVisual@@QEAAJHH@Z @ 0x180076F4C
 * Callers:
 *     ?UpdateCursorPosition@CWindowList@@QEAAJAEBUtagPOINT@@@Z @ 0x180083668 (-UpdateCursorPosition@CWindowList@@QEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?SetPosition@CCursorVisualProxy@@QEAAJHH@Z @ 0x180076F90 (-SetPosition@CCursorVisualProxy@@QEAAJHH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCursorVisual::SetPosition(CCursorVisualProxy **this, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CCursorVisualProxy::SetPosition(this[2], a2, a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x46,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\cursorvisual.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
