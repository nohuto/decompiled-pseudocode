/*
 * XREFs of ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18001A8AC
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18001A86C (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18000F940 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CTopLevelWindow::ForceDisconnectClientArea(CBaseObject **this)
{
  struct CVisual *v2; // rdx
  CContainerVisual *v3; // rcx
  CBaseObject *v4; // rcx

  if ( (*((_BYTE *)this + 201) & 2) != 0 )
    CTopLevelWindow::ReleaseHolographicSlate((CTopLevelWindow *)this);
  v2 = this[60];
  if ( v2 )
  {
    v3 = (CContainerVisual *)*((_QWORD *)v2 + 3);
    if ( v3 )
      CContainerVisual::RemoveChild(v3, v2);
    v4 = this[60];
    if ( v4 )
    {
      CBaseObject::Release(v4);
      this[60] = 0LL;
    }
  }
}
