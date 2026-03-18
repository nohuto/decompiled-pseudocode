/*
 * XREFs of ??_ECReconstructableDrawListEntry@@UEAAPEAXI@Z @ 0x18025DA10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x18009D77C (--1CReconstructableDrawListEntry@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z @ 0x18018C2A8 (-Free@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CReconstructableDrawListEntry *__fastcall CReconstructableDrawListEntry::`vector deleting destructor'(
        CReconstructableDrawListEntry *this,
        char a2)
{
  CReconstructableDrawListEntry::~CReconstructableDrawListEntry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Free(this);
  }
  return this;
}
