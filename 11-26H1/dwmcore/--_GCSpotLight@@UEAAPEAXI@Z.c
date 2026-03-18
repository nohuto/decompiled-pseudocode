/*
 * XREFs of ??_GCSpotLight@@UEAAPEAXI@Z @ 0x180246E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSpotLight@@UEAA@XZ @ 0x1802461A0 (--1CSpotLight@@UEAA@XZ.c)
 */

CSpotLight *__fastcall CSpotLight::`scalar deleting destructor'(CSpotLight *this, char a2)
{
  CSpotLight::~CSpotLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
