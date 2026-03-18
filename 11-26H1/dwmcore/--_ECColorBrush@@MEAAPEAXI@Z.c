/*
 * XREFs of ??_ECColorBrush@@MEAAPEAXI@Z @ 0x1800ACE90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CBrush@@MEAA@XZ @ 0x1800AD2A8 (--1CBrush@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CColorBrush *__fastcall CColorBrush::`vector deleting destructor'(CColorBrush *this, char a2)
{
  CBrush::~CBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 120LL);
    else
      operator delete(this);
  }
  return this;
}
