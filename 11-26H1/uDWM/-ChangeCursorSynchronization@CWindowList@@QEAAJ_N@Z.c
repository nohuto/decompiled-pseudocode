/*
 * XREFs of ?ChangeCursorSynchronization@CWindowList@@QEAAJ_N@Z @ 0x1800DFEE4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetIsSynchronized@CCursorVisual@@QEAAJ_N@Z @ 0x1800850AC (-SetIsSynchronized@CCursorVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::ChangeCursorSynchronization(CCursorVisualProxy ***this, char a2, __int64 a3)
{
  int IsSynchronized; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  IsSynchronized = CCursorVisual::SetIsSynchronized(this[11], a2, a3);
  v4 = IsSynchronized;
  if ( IsSynchronized >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x209B,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)IsSynchronized);
  return v4;
}
