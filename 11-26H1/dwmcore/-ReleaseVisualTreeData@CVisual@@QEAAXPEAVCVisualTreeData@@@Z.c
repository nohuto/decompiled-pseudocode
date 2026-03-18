/*
 * XREFs of ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800AD8A8
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800ADA94 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800ADAF0 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x1800ADD08 (--1CTreeData@@UEAA@XZ.c)
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800ADF18 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18014E22C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ??$_Find@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x1801BD3FC (--$_Find@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProject.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEBVCVisualTree@@@Z @ 0x18026415C (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 */

void __fastcall CVisual::ReleaseVisualTreeData(CVisual *this, struct CVisualTreeData *a2)
{
  _QWORD *v2; // rsi
  __int64 ProjectedShadowCasters; // rax
  __int64 *v6; // r14
  __int64 *i; // rdi
  unsigned int Slot; // eax
  _QWORD *v9; // r10
  __int64 v10; // r11
  __int64 v11; // r15
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 224);
  if ( (**((_DWORD **)this + 28) & 0x100000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
    v6 = *(__int64 **)(ProjectedShadowCasters + 8);
    for ( i = *(__int64 **)ProjectedShadowCasters; i != v6; ++i )
    {
      v11 = *i;
      v12 = *((_QWORD *)a2 + 48);
      if ( std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
             v11 + 88,
             &v12) != *(_QWORD *)(v11 + 88) )
        std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
          v11 + 88,
          &v12);
    }
  }
  CTreeData::Clear(a2);
  *((_QWORD *)a2 + 48) = 0LL;
  if ( CVisual::GetUnusedTreeData(this) )
  {
    *(_QWORD *)a2 = &CVisualTreeData::`vftable';
    CTreeData::~CTreeData(a2);
    operator delete(a2, 0x188uLL);
  }
  else if ( (*(_DWORD *)*v2 & 0x10000000) != 0 )
  {
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v2, 4LL);
    if ( Slot < *(_DWORD *)(v10 + 4) )
      v9 = (_QWORD *)(v10 + ((*(unsigned int *)(v10 + 4) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * Slot);
    *v9 = a2;
  }
  else
  {
    *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 4LL) = a2;
  }
}
