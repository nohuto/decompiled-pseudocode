/*
 * XREFs of ??_GCSpriteVectorShape@@UEAAPEAXI@Z @ 0x1800ABEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CSpriteVectorShape@@UEAA@XZ @ 0x1800ABF0C (--1CSpriteVectorShape@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CSpriteVectorShape *__fastcall CSpriteVectorShape::`scalar deleting destructor'(CSpriteVectorShape *this, char a2)
{
  CSpriteVectorShape::~CSpriteVectorShape(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 224LL);
    else
      operator delete(this);
  }
  return this;
}
