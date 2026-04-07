/*
 * XREFs of ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18001A86C
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A2DC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4430 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18001A8AC (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowData::ForceDisconnectClientNode(CWindowData *this)
{
  CTopLevelWindow *v2; // rcx
  CBaseObject *v3; // rcx

  v2 = (CTopLevelWindow *)*((_QWORD *)this + 55);
  if ( v2 )
    CTopLevelWindow::ForceDisconnectClientArea(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 18) = 0LL;
  }
}
