/*
 * XREFs of ??1CImage@@EEAA@XZ @ 0x180079ADC
 * Callers:
 *     ??_GCImage@@EEAAPEAXI@Z @ 0x180079A90 (--_GCImage@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CImage::~CImage(CImage *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CImage::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 30);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 30) = 0LL;
  }
  CRenderDataVisual::~CRenderDataVisual((void **)this);
}
