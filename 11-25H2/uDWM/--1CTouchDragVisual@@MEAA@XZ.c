/*
 * XREFs of ??1CTouchDragVisual@@MEAA@XZ @ 0x18008069C
 * Callers:
 *     ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x180080650 (--_GCTouchDragVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x180080730 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchDragVisual::~CTouchDragVisual(void **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = &CTouchDragVisual::`vftable';
  CTouchDragVisual::Stop((CTouchDragVisual *)this);
  v2 = (CBaseObject *)this[43];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[43] = 0LL;
  }
  v3 = (CBaseObject *)this[48];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[48] = 0LL;
  }
  v4 = (CBaseObject *)this[49];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[49] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 39);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 35);
  CTouchVisual::~CTouchVisual((CTouchVisual *)this);
}
