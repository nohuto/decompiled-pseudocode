/*
 * XREFs of ??_GCSharedSectionWrapper@@MEAAPEAXI@Z @ 0x180281C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSharedSectionWrapper@@MEAA@XZ @ 0x180281C0C (--1CSharedSectionWrapper@@MEAA@XZ.c)
 */

CResource **__fastcall CSharedSectionWrapper::`scalar deleting destructor'(CResource **this, char a2)
{
  CSharedSectionWrapper::~CSharedSectionWrapper(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
