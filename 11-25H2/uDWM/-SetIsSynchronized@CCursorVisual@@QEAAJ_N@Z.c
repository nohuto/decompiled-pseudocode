/*
 * XREFs of ?SetIsSynchronized@CCursorVisual@@QEAAJ_N@Z @ 0x1800938E4
 * Callers:
 *     ?ChangeCursorSynchronization@CWindowList@@QEAAJ_N@Z @ 0x1800E3374 (-ChangeCursorSynchronization@CWindowList@@QEAAJ_N@Z.c)
 * Callees:
 *     ?SetIsSynchronized@CCursorVisualProxy@@QEAAJ_N@Z @ 0x18008A144 (-SetIsSynchronized@CCursorVisualProxy@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCursorVisual::SetIsSynchronized(CCursorVisualProxy **this, char a2)
{
  int IsSynchronized; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  IsSynchronized = CCursorVisualProxy::SetIsSynchronized(this[2], a2);
  v3 = IsSynchronized;
  if ( IsSynchronized >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\cursorvisual.cpp",
    (const char *)(unsigned int)IsSynchronized,
    v5);
  return v3;
}
