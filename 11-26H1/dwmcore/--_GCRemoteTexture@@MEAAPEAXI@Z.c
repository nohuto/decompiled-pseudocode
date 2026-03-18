/*
 * XREFs of ??_GCRemoteTexture@@MEAAPEAXI@Z @ 0x18027F2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CRemoteTexture@@MEAA@XZ @ 0x18027F2A4 (--1CRemoteTexture@@MEAA@XZ.c)
 */

CRemoteTexture *__fastcall CRemoteTexture::`scalar deleting destructor'(CRemoteTexture *this, char a2)
{
  CRemoteTexture::~CRemoteTexture(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
