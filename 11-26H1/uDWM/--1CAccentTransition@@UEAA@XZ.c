/*
 * XREFs of ??1CAccentTransition@@UEAA@XZ @ 0x180095030
 * Callers:
 *     ??_ECAccentTransition@@UEAAPEAXI@Z @ 0x1800950A0 (--_ECAccentTransition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAccentTransition::~CAccentTransition(CAccentTransition *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CAccentTransition::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 1) = &CAccentTransition::`vftable'{for `CBaseObject'};
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
  CBaseObject::~CBaseObject((CAccentTransition *)((char *)this + 8));
}
