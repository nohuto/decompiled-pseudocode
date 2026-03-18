/*
 * XREFs of ??_GCProjectedShadowCaster@@MEAAPEAXI@Z @ 0x180263E60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x180263DD0 (--1CProjectedShadowCaster@@MEAA@XZ.c)
 */

CProjectedShadowCaster *__fastcall CProjectedShadowCaster::`scalar deleting destructor'(
        CProjectedShadowCaster *this,
        char a2)
{
  CProjectedShadowCaster::~CProjectedShadowCaster(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
