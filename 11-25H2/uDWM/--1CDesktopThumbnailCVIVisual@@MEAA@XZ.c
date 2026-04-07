/*
 * XREFs of ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x18008302C
 * Callers:
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180082FE0 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180014114 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::~CDesktopThumbnailCVIVisual(CDesktopThumbnailCVIVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CDesktopThumbnailCVIVisual::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 30);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 32);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 33);
  if ( v4 )
    CBaseObject::Release(v4);
  CContainerVisual::RemoveAllChildren(this);
  CRenderDataVisual::~CRenderDataVisual((void **)this);
}
