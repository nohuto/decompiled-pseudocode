/*
 * XREFs of ??1CDirectTouchVisual@@MEAA@XZ @ 0x180005D1C
 * Callers:
 *     ??_GCDirectTouchVisual@@MEAAPEAXI@Z @ 0x180005CD0 (--_GCDirectTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180005D70 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDirectTouchVisual::~CDirectTouchVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *this = (CBaseObject *)&CDirectTouchVisual::`vftable';
  CDirectTouchVisual::Stop((CDirectTouchVisual *)this);
  v2 = this[43];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[42];
  if ( v3 )
    CBaseObject::Release(v3);
  CTouchVisual::~CTouchVisual((CTouchVisual *)this);
}
