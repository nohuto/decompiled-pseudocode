/*
 * XREFs of ??_GCMagnifierRenderTarget@@EEAAPEAXI@Z @ 0x180258480
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x180258414 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 */

CMagnifierRenderTarget *__fastcall CMagnifierRenderTarget::`scalar deleting destructor'(
        CMagnifierRenderTarget *this,
        char a2)
{
  CMagnifierRenderTarget::~CMagnifierRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
