/*
 * XREFs of ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x18009E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEmptyRegionDrawListBrush@@UEAA@XZ @ 0x18009E424 (--1CEmptyRegionDrawListBrush@@UEAA@XZ.c)
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x18009E7F0 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x18009E880 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CEmptyRegionDrawListBrush *__fastcall CEmptyRegionDrawListBrush::`scalar deleting destructor'(
        CEmptyRegionDrawListBrush *this,
        char a2)
{
  struct CEmptyRegionDrawListBrush *v4; // rcx
  CObjectCache *ObjectCache; // rax

  CEmptyRegionDrawListBrush::~CEmptyRegionDrawListBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 160LL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      CObjectCache::Free(ObjectCache, this);
    }
  }
  return this;
}
