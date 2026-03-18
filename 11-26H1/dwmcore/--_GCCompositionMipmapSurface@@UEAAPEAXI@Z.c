/*
 * XREFs of ??_GCCompositionMipmapSurface@@UEAAPEAXI@Z @ 0x18026AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x18026AD80 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 */

CCompositionMipmapSurface *__fastcall CCompositionMipmapSurface::`scalar deleting destructor'(
        CCompositionMipmapSurface *this,
        char a2)
{
  CCompositionMipmapSurface::~CCompositionMipmapSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
