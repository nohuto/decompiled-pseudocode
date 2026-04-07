/*
 * XREFs of ??1CFullScreenMagnifier@@EEAA@XZ @ 0x1800B55BC
 * Callers:
 *     ??_ECFullScreenMagnifier@@EEAAPEAXI@Z @ 0x1800B5600 (--_ECFullScreenMagnifier@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CFullScreenMagnifier::~CFullScreenMagnifier(CFullScreenMagnifier *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CFullScreenMagnifier::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  CBaseObject::~CBaseObject(this);
}
