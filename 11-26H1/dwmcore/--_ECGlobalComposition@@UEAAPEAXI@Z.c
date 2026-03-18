/*
 * XREFs of ??_ECGlobalComposition@@UEAAPEAXI@Z @ 0x180234130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CGlobalComposition@@UEAA@XZ @ 0x1802340D0 (--1CGlobalComposition@@UEAA@XZ.c)
 */

CGlobalComposition *__fastcall CGlobalComposition::`vector deleting destructor'(CGlobalComposition *this, __int64 a2)
{
  char v2; // di

  v2 = a2;
  CGlobalComposition::~CGlobalComposition(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
