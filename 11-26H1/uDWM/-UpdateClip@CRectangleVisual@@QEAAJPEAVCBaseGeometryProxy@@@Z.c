/*
 * XREFs of ?UpdateClip@CRectangleVisual@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800BF2B4
 * Callers:
 *     ?InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800500A0 (-InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180065E90 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CRectangleVisual::UpdateClip(CRectangleVisual *this, struct CBaseGeometryProxy *a2)
{
  CBaseObject *v4; // rdx

  v4 = (CBaseObject *)*((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = a2;
  if ( a2 )
    CBaseObject::AddRef(a2);
  if ( v4 )
    CBaseObject::Release(v4);
  return CVisualProxy::SetClip(*((CVisualProxy **)this + 2), a2);
}
