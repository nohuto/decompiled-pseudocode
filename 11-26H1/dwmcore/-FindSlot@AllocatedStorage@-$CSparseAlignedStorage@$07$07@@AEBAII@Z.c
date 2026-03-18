/*
 * XREFs of ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290
 * Callers:
 *     ?SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z @ 0x180078ACC (-SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z.c)
 *     ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z @ 0x18007FD70 (-PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x1800ACD54 (--1CVisualTree@@UEAA@XZ.c)
 *     ?Link@CVisualTreeData@@MEAAXXZ @ 0x1800AD6D0 (-Link@CVisualTreeData@@MEAAXXZ.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800AD8A8 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800AD990 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x1800ADD80 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x1800AE310 (-SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z.c)
 *     ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x1800AEE04 (-GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800AEE58 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x1800AEEF0 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x1800AF084 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ @ 0x1800D35C8 (-GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ.c)
 *     ?SetSharedChildChannelNoRef@CVisual@@QEAAXPEAVCChannelContext@@@Z @ 0x18010B7D4 (-SetSharedChildChannelNoRef@CVisual@@QEAAXPEAVCChannelContext@@@Z.c)
 *     ?ClearSharedChildChannelNoRef@CVisual@@QEAAXXZ @ 0x18010BCF0 (-ClearSharedChildChannelNoRef@CVisual@@QEAAXXZ.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18014AFD0 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18014BEB0 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18014E22C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x18019E228 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x1801D0614 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z @ 0x1801D6BA4 (-SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z.c)
 *     ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x1801E07C8 (-SetProjectedShadowCasters@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@P.c)
 *     ?SetProjectedShadowReceivers@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@@Z @ 0x1802164E8 (-SetProjectedShadowReceivers@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocat.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@XZ @ 0x180236808 (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@@Z @ 0x1802610F0 (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  unsigned __int8 *v3; // r8
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 8);
  for ( result = 0LL; (unsigned int)result < v2; ++v3 )
  {
    if ( *v3 == a2 )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
