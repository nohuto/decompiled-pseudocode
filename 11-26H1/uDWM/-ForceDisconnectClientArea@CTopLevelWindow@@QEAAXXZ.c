/*
 * XREFs of ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18008D3BC
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18001AE6C (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CTopLevelWindow::ForceDisconnectClientArea(CTopLevelWindow *this)
{
  struct CVisual *v1; // rdx
  CContainerVisual *v3; // rcx
  CBaseObject *v4; // rcx

  v1 = (struct CVisual *)*((_QWORD *)this + 58);
  if ( v1 )
  {
    v3 = (CContainerVisual *)*((_QWORD *)v1 + 3);
    if ( v3 )
      CContainerVisual::RemoveChild(v3, v1);
    v4 = (CBaseObject *)*((_QWORD *)this + 58);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      *((_QWORD *)this + 58) = 0LL;
    }
  }
}
