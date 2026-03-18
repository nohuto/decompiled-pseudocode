/*
 * XREFs of ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1800ABDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x1800ACD54 (--1CVisualTree@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CVisualTree *__fastcall CVisualTree::`vector deleting destructor'(CVisualTree *this, char a2)
{
  CVisualTree::~CVisualTree(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 2632LL);
    else
      operator delete(this);
  }
  return this;
}
