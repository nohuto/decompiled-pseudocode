/*
 * XREFs of ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x1802850D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@UEAA@XZ @ 0x180284FD0 (--1-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@UEAA@XZ.c)
 */

CTableTransferEffect *__fastcall CTableTransferEffect::`scalar deleting destructor'(
        CTableTransferEffect *this,
        char a2)
{
  CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::~CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
