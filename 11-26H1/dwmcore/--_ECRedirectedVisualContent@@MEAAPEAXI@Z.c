/*
 * XREFs of ??_ECRedirectedVisualContent@@MEAAPEAXI@Z @ 0x18009CBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CRedirectedVisualContent@@MEAA@XZ @ 0x18009CC1C (--1CRedirectedVisualContent@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CRedirectedVisualContent *__fastcall CRedirectedVisualContent::`vector deleting destructor'(
        CRedirectedVisualContent *this,
        char a2)
{
  CRedirectedVisualContent::~CRedirectedVisualContent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 112LL);
    else
      operator delete(this);
  }
  return this;
}
