/*
 * XREFs of ??_ECVisualBitmap@@MEAAPEAXI@Z @ 0x180247000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CVisualBitmap@@MEAA@XZ @ 0x1802680DC (--1CVisualBitmap@@MEAA@XZ.c)
 */

CVisualBitmap *__fastcall CVisualBitmap::`vector deleting destructor'(CVisualBitmap *this, char a2)
{
  CVisualBitmap::~CVisualBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
