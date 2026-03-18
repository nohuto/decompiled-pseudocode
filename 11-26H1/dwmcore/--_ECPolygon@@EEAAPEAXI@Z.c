/*
 * XREFs of ??_ECPolygon@@EEAAPEAXI@Z @ 0x180150EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CPolygon@@EEAA@XZ @ 0x180150F3C (--1CPolygon@@EEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CPolygon *__fastcall CPolygon::`vector deleting destructor'(CPolygon *this, char a2)
{
  CPolygon::~CPolygon(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 272LL);
    else
      operator delete(this);
  }
  return this;
}
