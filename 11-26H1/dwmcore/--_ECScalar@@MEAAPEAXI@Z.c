/*
 * XREFs of ??_ECScalar@@MEAAPEAXI@Z @ 0x180246C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CScalar@@MEAA@XZ @ 0x18027F408 (--1CScalar@@MEAA@XZ.c)
 */

CScalar *__fastcall CScalar::`vector deleting destructor'(CScalar *this, char a2)
{
  CScalar::~CScalar(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
