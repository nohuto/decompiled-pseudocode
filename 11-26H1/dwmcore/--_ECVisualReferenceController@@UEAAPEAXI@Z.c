/*
 * XREFs of ??_ECVisualReferenceController@@UEAAPEAXI@Z @ 0x18013EB80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$CVisualReferenceControllerGeneratedT@VCVisualReferenceController@@VCVisualReference@@@@MEAA@XZ @ 0x18013EBCC (--1-$CVisualReferenceControllerGeneratedT@VCVisualReferenceController@@VCVisualReference@@@@MEAA.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CVisualReferenceController *__fastcall CVisualReferenceController::`vector deleting destructor'(
        CVisualReferenceController *this,
        char a2)
{
  CVisualReferenceControllerGeneratedT<CVisualReferenceController,CVisualReference>::~CVisualReferenceControllerGeneratedT<CVisualReferenceController,CVisualReference>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 80LL);
    else
      operator delete(this);
  }
  return this;
}
