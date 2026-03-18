/*
 * XREFs of ??_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z @ 0x180246A00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CLegacyStereoRenderTarget@@UEAA@XZ @ 0x180246010 (--1CLegacyStereoRenderTarget@@UEAA@XZ.c)
 */

CLegacyStereoRenderTarget *__fastcall CLegacyStereoRenderTarget::`vector deleting destructor'(
        CLegacyStereoRenderTarget *this,
        char a2)
{
  CLegacyStereoRenderTarget::~CLegacyStereoRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
