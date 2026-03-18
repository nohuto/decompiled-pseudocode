/*
 * XREFs of ??_ECReconstructableDrawListEntry_UVxN@@UEAAPEAXI@Z @ 0x18009D730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x18009D77C (--1CReconstructableDrawListEntry@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CReconstructableDrawListEntry_UVxN *__fastcall CReconstructableDrawListEntry_UVxN::`vector deleting destructor'(
        CReconstructableDrawListEntry_UVxN *this,
        char a2)
{
  CReconstructableDrawListEntry::~CReconstructableDrawListEntry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 104LL);
    else
      operator delete(this);
  }
  return this;
}
