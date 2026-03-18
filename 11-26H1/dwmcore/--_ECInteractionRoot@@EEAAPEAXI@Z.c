/*
 * XREFs of ??_ECInteractionRoot@@EEAAPEAXI@Z @ 0x1800A79E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CInteractionRoot@@EEAA@XZ @ 0x1800A7A2C (--1CInteractionRoot@@EEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CInteractionRoot *__fastcall CInteractionRoot::`vector deleting destructor'(CInteractionRoot *this, char a2)
{
  CInteractionRoot::~CInteractionRoot(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 1384LL);
    else
      operator delete(this);
  }
  return this;
}
