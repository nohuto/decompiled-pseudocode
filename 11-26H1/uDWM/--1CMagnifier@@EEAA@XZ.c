/*
 * XREFs of ??1CMagnifier@@EEAA@XZ @ 0x1800B9E00
 * Callers:
 *     ??_GCMagnifier@@EEAAPEAXI@Z @ 0x1800B9E80 (--_GCMagnifier@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CMagnifier::~CMagnifier(CMagnifier *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  *(_QWORD *)this = &CMagnifier::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 4) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 5) = 0LL;
  }
  CBaseObject::~CBaseObject(this);
}
