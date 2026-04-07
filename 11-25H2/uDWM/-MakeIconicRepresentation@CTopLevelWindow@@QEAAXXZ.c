/*
 * XREFs of ?MakeIconicRepresentation@CTopLevelWindow@@QEAAXXZ @ 0x180054C98
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800548B4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::MakeIconicRepresentation(CTopLevelWindow *this)
{
  *((_BYTE *)this + 200) |= 0x20u;
}
