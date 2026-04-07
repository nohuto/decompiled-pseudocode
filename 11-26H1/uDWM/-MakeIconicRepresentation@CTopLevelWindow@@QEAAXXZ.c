/*
 * XREFs of ?MakeIconicRepresentation@CTopLevelWindow@@QEAAXXZ @ 0x180038A2C
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::MakeIconicRepresentation(CTopLevelWindow *this)
{
  *((_BYTE *)this + 184) |= 0x20u;
}
