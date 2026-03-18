/*
 * XREFs of ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x18009E2F0
 * Callers:
 *     ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18009CDF0 (-GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGen.c)
 * Callees:
 *     ??1CPrimitiveGroupDrawListBrush@@UEAA@XZ @ 0x18009E344 (--1CPrimitiveGroupDrawListBrush@@UEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x18009E7AC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x18009E7F0 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CPrimitiveGroupDrawListBrush *__fastcall CPrimitiveGroupDrawListBrush::`vector deleting destructor'(
        CPrimitiveGroupDrawListBrush *this,
        char a2)
{
  struct CPrimitiveGroupDrawListBrush *v4; // rcx
  CObjectCache *ObjectCache; // rax

  CPrimitiveGroupDrawListBrush::~CPrimitiveGroupDrawListBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 88LL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      CObjectCache::Free(ObjectCache, this);
    }
  }
  return this;
}
