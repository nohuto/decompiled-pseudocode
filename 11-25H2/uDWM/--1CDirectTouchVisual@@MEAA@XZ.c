/*
 * XREFs of ??1CDirectTouchVisual@@MEAA@XZ @ 0x1800305F0
 * Callers:
 *     ??_GCDirectTouchVisual@@MEAAPEAXI@Z @ 0x1800308C0 (--_GCDirectTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180030650 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 */

void __fastcall CDirectTouchVisual::~CDirectTouchVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *this = (CBaseObject *)&CDirectTouchVisual::`vftable';
  CDirectTouchVisual::Stop((CDirectTouchVisual *)this);
  v2 = this[47];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[46];
  if ( v3 )
    CBaseObject::Release(v3);
  CTouchVisual::~CTouchVisual((CTouchVisual *)this);
}
