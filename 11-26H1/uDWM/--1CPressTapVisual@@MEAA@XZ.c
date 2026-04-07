/*
 * XREFs of ??1CPressTapVisual@@MEAA@XZ @ 0x1800BC05C
 * Callers:
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x1800BC0C0 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x1800BC6B0 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 */

void __fastcall CPressTapVisual::~CPressTapVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CPressTapVisual::`vftable';
  CPressTapVisual::StopTimer((CPressTapVisual *)this);
  v2 = this[28];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[34];
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = this[35];
  if ( v4 )
    CBaseObject::Release(v4);
  CTouchVisual::~CTouchVisual(this);
}
