/*
 * XREFs of ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800C66B4
 * Callers:
 *     ??_ECAppArrangementImmediate@@UEAAPEAXI@Z @ 0x1800C6910 (--_ECAppArrangementImmediate@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAppArrangementImmediate::~CAppArrangementImmediate(CAppArrangementImmediate *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  v2 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v2 )
    CBaseObject::Release(v2);
  CAppArrangementBase::~CAppArrangementBase((void **)this);
}
