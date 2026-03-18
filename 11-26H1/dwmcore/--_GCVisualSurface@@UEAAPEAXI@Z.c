/*
 * XREFs of ??_GCVisualSurface@@UEAAPEAXI@Z @ 0x18009B2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CVisualSurface@@UEAA@XZ @ 0x18009B33C (--1CVisualSurface@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CVisualSurface *__fastcall CVisualSurface::`scalar deleting destructor'(CVisualSurface *this, char a2)
{
  CVisualSurface::~CVisualSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 208LL);
    else
      operator delete(this);
  }
  return this;
}
