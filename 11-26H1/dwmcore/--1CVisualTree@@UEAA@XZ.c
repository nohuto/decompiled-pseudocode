/*
 * XREFs of ??1CVisualTree@@UEAA@XZ @ 0x1800ACD54
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1800ABDE0 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ??_GCSubVisualTree@@UEAAPEAXI@Z @ 0x1801CF1E0 (--_GCSubVisualTree@@UEAAPEAXI@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18025FE94 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800AD410 (--1-$vector_facade@PEAVIVisualTreeClient@@V-$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_e.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800AD990 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ @ 0x1800AE200 (--1-$unique_ptr@VCPreComputeContext@@U-$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ.c)
 *     ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800AE230 (-ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisualTree::~CVisualTree(CVisualTree *this)
{
  __int64 v1; // r10
  _DWORD *v3; // r10
  unsigned int Slot; // eax
  __int64 v5; // r10

  v1 = *((_QWORD *)this + 9);
  *(_QWORD *)this = &CVisualTree::`vftable';
  if ( v1 )
  {
    v3 = *(_DWORD **)(v1 + 224);
    if ( (*v3 & 0x8000000) != 0 )
    {
      *v3 &= ~0x8000000u;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v3, 5LL);
      if ( Slot < *(_DWORD *)(v5 + 4) )
        *(_BYTE *)(Slot + v5 + 8) = 0;
    }
  }
  CVisualTree::ReleaseTreeDatas(this);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 315);
  detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::~vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>((char *)this + 2448);
  CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers((CVisualTree *)((char *)this + 712));
  std::unique_ptr<CPreComputeContext>::~unique_ptr<CPreComputeContext>((char *)this + 104);
  CResource::~CResource(this);
}
