/*
 * XREFs of ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180014B90
 * Callers:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180014AB0 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180014F5C (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MouseLeave@CVisual@@QEAAXXZ @ 0x180074340 (-MouseLeave@CVisual@@QEAAXXZ.c)
 *     ?MouseEnter@CVisual@@QEAAXXZ @ 0x180075B0C (-MouseEnter@CVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::ChangeMouseOver(CTopLevelWindow *this, struct CVisual *a2)
{
  CVisual *v2; // rbx
  CVisual *v4; // rcx

  v2 = (CVisual *)*((_QWORD *)this + 89);
  if ( a2 != v2 )
  {
    *((_QWORD *)this + 89) = a2;
    if ( a2 )
      CBaseObject::AddRef(a2);
    if ( v2 )
      CVisual::MouseLeave(v2);
    v4 = (CVisual *)*((_QWORD *)this + 89);
    if ( v4 )
      CVisual::MouseEnter(v4);
    if ( v2 )
      CBaseObject::Release(v2);
  }
}
