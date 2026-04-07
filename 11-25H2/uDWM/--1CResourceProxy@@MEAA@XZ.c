/*
 * XREFs of ??1CResourceProxy@@MEAA@XZ @ 0x180008674
 * Callers:
 *     ??_ECRotateTransformProxy@@UEAAPEAXI@Z @ 0x180007400 (--_ECRotateTransformProxy@@UEAAPEAXI@Z.c)
 *     ??1CVisualProxy@@UEAA@XZ @ 0x18006969C (--1CVisualProxy@@UEAA@XZ.c)
 *     ??1CImageLegacyMilBrushProxy@@MEAA@XZ @ 0x18006C20C (--1CImageLegacyMilBrushProxy@@MEAA@XZ.c)
 *     ??_ECBaseTransformProxy@@UEAAPEAXI@Z @ 0x1800A9DE0 (--_ECBaseTransformProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CResourceProxy::~CResourceProxy(CResourceProxy *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CTransform3dGroupProxy::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
    CBaseObject::Release(v2);
  CBaseObject::~CBaseObject(this);
}
