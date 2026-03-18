/*
 * XREFs of ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x180254BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180134878 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

COffScreenRenderTarget *__fastcall COffScreenRenderTarget::`vector deleting destructor'(
        COffScreenRenderTarget *this,
        char a2)
{
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
