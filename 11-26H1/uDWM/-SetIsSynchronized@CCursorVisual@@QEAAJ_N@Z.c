/*
 * XREFs of ?SetIsSynchronized@CCursorVisual@@QEAAJ_N@Z @ 0x1800850AC
 * Callers:
 *     ?ChangeCursorSynchronization@CWindowList@@QEAAJ_N@Z @ 0x1800DFEE4 (-ChangeCursorSynchronization@CWindowList@@QEAAJ_N@Z.c)
 * Callees:
 *     ?SetIsSynchronized@CCursorVisualProxy@@QEAAJ_N@Z @ 0x180079478 (-SetIsSynchronized@CCursorVisualProxy@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCursorVisual::SetIsSynchronized(CCursorVisualProxy **this, char a2, __int64 a3)
{
  int IsSynchronized; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  IsSynchronized = CCursorVisualProxy::SetIsSynchronized(this[2], a2, a3);
  v4 = IsSynchronized;
  if ( IsSynchronized >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3F,
    (int)"clientcore\\windows\\dwm\\udwm\\cursorvisual.cpp",
    (const char *)(unsigned int)IsSynchronized);
  return v4;
}
