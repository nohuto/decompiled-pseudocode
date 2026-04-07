/*
 * XREFs of ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180016AA8
 * Callers:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180015D40 (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180016474 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MouseLeave@CVisual@@QEAAXXZ @ 0x180082CFC (-MouseLeave@CVisual@@QEAAXXZ.c)
 *     ?MouseEnter@CVisual@@QEAAXXZ @ 0x1800853D4 (-MouseEnter@CVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::ChangeMouseOver(CTopLevelWindow *this, struct CVisual *a2)
{
  CVisual *v2; // rbx
  CVisual *v4; // rcx

  v2 = (CVisual *)*((_QWORD *)this + 91);
  if ( a2 != v2 )
  {
    *((_QWORD *)this + 91) = a2;
    if ( a2 )
      CMILRefCountBase::AddRef(a2);
    if ( v2 )
      CVisual::MouseLeave(v2);
    v4 = (CVisual *)*((_QWORD *)this + 91);
    if ( v4 )
      CVisual::MouseEnter(v4);
    if ( v2 )
      CBaseObject::Release(v2);
  }
}
