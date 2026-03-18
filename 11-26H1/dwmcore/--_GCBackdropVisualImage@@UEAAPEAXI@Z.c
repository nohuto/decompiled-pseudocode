/*
 * XREFs of ??_GCBackdropVisualImage@@UEAAPEAXI@Z @ 0x1801AF2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x1801AF2EC (--1CBackdropVisualImage@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CBackdropVisualImage *__fastcall CBackdropVisualImage::`scalar deleting destructor'(
        CBackdropVisualImage *this,
        char a2)
{
  CBackdropVisualImage::~CBackdropVisualImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 1792LL);
    else
      operator delete(this);
  }
  return this;
}
