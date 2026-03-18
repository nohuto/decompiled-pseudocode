/*
 * XREFs of ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x18009CC70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z @ 0x18009D5E4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z.c)
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x18009E7F0 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CColorDrawListBrush *__fastcall CColorDrawListBrush::`vector deleting destructor'(CColorDrawListBrush *this, char a2)
{
  CObjectCache *ObjectCache; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 72LL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(this);
      CObjectCache::Free(ObjectCache, this);
    }
  }
  return this;
}
