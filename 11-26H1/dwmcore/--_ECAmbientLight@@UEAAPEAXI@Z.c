/*
 * XREFs of ??_ECAmbientLight@@UEAAPEAXI@Z @ 0x180246500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CLight@@MEAA@XZ @ 0x180264280 (--1CLight@@MEAA@XZ.c)
 */

CAmbientLight *__fastcall CAmbientLight::`vector deleting destructor'(CAmbientLight *this, char a2)
{
  CLight::~CLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
