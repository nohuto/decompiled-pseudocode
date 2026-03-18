/*
 * XREFs of ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800AD990
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x1800ACD54 (--1CVisualTree@@UEAA@XZ.c)
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

void __fastcall CVisualTree::ReleaseTreeDatas(CVisualTree *this)
{
  _QWORD *v1; // r14
  _QWORD *v2; // rbx
  _DWORD **v3; // rbp
  CTreeData *v4; // rbx
  _QWORD *v5; // rsi
  __int64 ProjectedShadowCasters; // rax
  __int64 *v7; // r15
  __int64 *i; // rdi
  unsigned int Slot; // eax
  __int64 v10; // r10
  CTreeData **v11; // rdx
  __int64 v12; // r12
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 2608);
  while ( 1 )
  {
    v2 = (_QWORD *)*v1;
    if ( (_QWORD *)*v1 == v1 )
      break;
    v3 = (_DWORD **)*(v2 - 15);
    v4 = (CTreeData *)(v2 - 46);
    v5 = v3 + 28;
    if ( (*v3[28] & 0x100000) != 0 )
    {
      ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(v3);
      v7 = *(__int64 **)(ProjectedShadowCasters + 8);
      for ( i = *(__int64 **)ProjectedShadowCasters; i != v7; ++i )
      {
        v12 = *i;
        v13 = *((_QWORD *)v4 + 48);
        if ( std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
               v12 + 88,
               &v13) != *(_QWORD *)(v12 + 88) )
          std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
            v12 + 88,
            &v13);
      }
    }
    CTreeData::Clear(v4);
    *((_QWORD *)v4 + 48) = 0LL;
    if ( CVisual::GetUnusedTreeData((CVisual *)v3) )
    {
      *(_QWORD *)v4 = &CVisualTreeData::`vftable';
      CTreeData::~CTreeData(v4);
      operator delete(v4, 0x188uLL);
    }
    else if ( (*(_DWORD *)*v5 & 0x10000000) != 0 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v5, 4LL);
      if ( Slot >= *(_DWORD *)(v10 + 4) )
        v11 = 0LL;
      else
        v11 = (CTreeData **)(v10 + ((*(unsigned int *)(v10 + 4) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * Slot);
      *v11 = v4;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v3 + 28, 4LL) = v4;
    }
  }
}
