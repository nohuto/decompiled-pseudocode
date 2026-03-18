/*
 * XREFs of ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@XZ @ 0x180236808
 * Callers:
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180081C40 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ @ 0x180172550 (-RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180234B84 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180260650 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

__int64 __fastcall CVisual::GetDirtyRegionVisualizationData(__int64 a1)
{
  unsigned int Slot; // eax
  __int64 v3; // r10
  unsigned __int64 v4; // rax

  if ( (**(_DWORD **)(a1 + 224) & 0x200000) == 0 )
    return 0LL;
  Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(a1 + 224), 11);
  if ( Slot >= *(_DWORD *)(v3 + 4) )
    v4 = 0LL;
  else
    v4 = v3 + ((*(unsigned int *)(v3 + 4) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * Slot;
  return *(_QWORD *)v4;
}
