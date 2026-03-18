/*
 * XREFs of ??_ECRemoteAppRenderTarget@@MEAAPEAXI@Z @ 0x180246B50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x180246038 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 */

CRemoteAppRenderTarget *__fastcall CRemoteAppRenderTarget::`vector deleting destructor'(
        CRemoteAppRenderTarget *this,
        char a2)
{
  CRemoteAppRenderTarget::~CRemoteAppRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
