/*
 * XREFs of ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@@Z @ 0x1802610F0
 * Callers:
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180081C40 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ @ 0x180172550 (-RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180260650 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800ADF18 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

unsigned __int64 __fastcall CVisual::SetDirtyRegionVisualizationData(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r10
  unsigned __int64 result; // rax
  __int64 v5; // r10
  char v6; // r11
  __int64 v7; // r10
  _QWORD *v8; // r11
  __int64 v9; // rcx

  v2 = *(_DWORD **)(a1 + 224);
  result = *v2 & 0x200000;
  if ( a2 )
  {
    if ( (_DWORD)result )
    {
      result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v2, 11);
      if ( (unsigned int)result < *(_DWORD *)(v7 + 4) )
      {
        v9 = (unsigned int)result;
        result = v7 + ((*(unsigned int *)(v7 + 4) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL);
        v8 = (_QWORD *)(result + 8 * v9);
      }
      *v8 = a2;
    }
    else
    {
      result = CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((char **)(a1 + 224), 11);
      *(_QWORD *)result = a2;
    }
  }
  else if ( (_DWORD)result )
  {
    *v2 &= ~0x200000u;
    result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v2, 11);
    if ( (unsigned int)result < *(_DWORD *)(v5 + 4) )
    {
      result = (unsigned int)result;
      *(_BYTE *)((unsigned int)result + v5 + 8) = v6;
    }
  }
  return result;
}
