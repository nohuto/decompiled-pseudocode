/*
 * XREFs of ??_GCRemoteRenderTarget@@UEAAPEAXI@Z @ 0x180246BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CRemoteRenderTarget@@UEAA@XZ @ 0x1802460B8 (--1CRemoteRenderTarget@@UEAA@XZ.c)
 */

CRemoteRenderTarget *__fastcall CRemoteRenderTarget::`scalar deleting destructor'(CRemoteRenderTarget *this, char a2)
{
  CRemoteRenderTarget::~CRemoteRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
