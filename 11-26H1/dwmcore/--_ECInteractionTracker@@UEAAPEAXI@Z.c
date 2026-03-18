/*
 * XREFs of ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x18013CC40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18013CCDC (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::`vector deleting destructor'(CInteractionTracker *this, char a2)
{
  CInteractionTracker::~CInteractionTracker(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 608LL);
    else
      operator delete(this);
  }
  return this;
}
