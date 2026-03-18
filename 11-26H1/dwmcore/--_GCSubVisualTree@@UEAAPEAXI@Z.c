/*
 * XREFs of ??_GCSubVisualTree@@UEAAPEAXI@Z @ 0x1801CF1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x1800ACD54 (--1CVisualTree@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CSubVisualTree *__fastcall CSubVisualTree::`scalar deleting destructor'(CSubVisualTree *this, char a2)
{
  --CSubVisualTree::s_cSubTrees;
  *(_QWORD *)this = &CSubVisualTree::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  CVisualTree::~CVisualTree(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
