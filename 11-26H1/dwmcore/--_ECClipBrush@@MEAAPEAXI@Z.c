/*
 * XREFs of ??_ECClipBrush@@MEAAPEAXI@Z @ 0x1802891C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x180289178 (--1CClipBrush@@MEAA@XZ.c)
 */

CClipBrush *__fastcall CClipBrush::`vector deleting destructor'(CClipBrush *this, char a2)
{
  CClipBrush::~CClipBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
