/*
 * XREFs of ??_GCDelegatedInkCanvas@@EEAAPEAXI@Z @ 0x18026C650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CDelegatedInkCanvas@@EEAA@XZ @ 0x18026C57C (--1CDelegatedInkCanvas@@EEAA@XZ.c)
 */

CDelegatedInkCanvas *__fastcall CDelegatedInkCanvas::`scalar deleting destructor'(CDelegatedInkCanvas *this, char a2)
{
  CDelegatedInkCanvas::~CDelegatedInkCanvas(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
