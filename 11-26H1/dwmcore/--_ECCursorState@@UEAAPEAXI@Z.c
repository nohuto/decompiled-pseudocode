/*
 * XREFs of ??_ECCursorState@@UEAAPEAXI@Z @ 0x180290C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCursorState@@UEAA@XZ @ 0x18029096C (--1CCursorState@@UEAA@XZ.c)
 */

CCursorState *__fastcall CCursorState::`vector deleting destructor'(CCursorState *this, char a2)
{
  CCursorState::~CCursorState(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
