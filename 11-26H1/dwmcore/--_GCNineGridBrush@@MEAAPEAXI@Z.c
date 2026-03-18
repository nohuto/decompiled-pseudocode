/*
 * XREFs of ??_GCNineGridBrush@@MEAAPEAXI@Z @ 0x1800ACC60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1800ACCAC (--1CNineGridBrush@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CNineGridBrush *__fastcall CNineGridBrush::`scalar deleting destructor'(CNineGridBrush *this, char a2)
{
  CNineGridBrush::~CNineGridBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 184LL);
    else
      operator delete(this);
  }
  return this;
}
