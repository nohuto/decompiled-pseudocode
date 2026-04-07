/*
 * XREFs of ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x1800822D8
 * Callers:
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180077B70 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::~CDesktopThumbnailCVIVisual(CDesktopThumbnailCVIVisual *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CDesktopThumbnailCVIVisual::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 26);
  if ( v2 )
    CBaseObject::Release(v2);
  CContainerVisual::RemoveAllChildren(this);
  CVisualBrush::~CVisualBrush((CDesktopThumbnailCVIVisual *)((char *)this + 224));
  CRectangleVisual::~CRectangleVisual((CBaseObject **)this);
}
