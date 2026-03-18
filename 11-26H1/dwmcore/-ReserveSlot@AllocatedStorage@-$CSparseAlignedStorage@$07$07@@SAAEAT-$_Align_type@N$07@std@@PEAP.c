/*
 * XREFs of ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800ADF18
 * Callers:
 *     ?SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z @ 0x180078ACC (-SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z.c)
 *     ?Link@CVisualTreeData@@MEAAXXZ @ 0x1800AD6D0 (-Link@CVisualTreeData@@MEAAXXZ.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800AD8A8 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800AD990 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x1800AE310 (-SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800AEE58 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x1800AEEF0 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 *     ?SetSharedChildChannelNoRef@CVisual@@QEAAXPEAVCChannelContext@@@Z @ 0x18010B7D4 (-SetSharedChildChannelNoRef@CVisual@@QEAAXPEAVCChannelContext@@@Z.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18014AFD0 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18014BEB0 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x18019E228 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x1801D0614 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z @ 0x1801D6BA4 (-SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z.c)
 *     ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x1801E07C8 (-SetProjectedShadowCasters@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@P.c)
 *     ?SetProjectedShadowReceivers@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@@Z @ 0x1802164E8 (-SetProjectedShadowReceivers@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocat.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@@Z @ 0x1802610F0 (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 * Callees:
 *     ?Allocate@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z @ 0x1800AE028 (-Allocate@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

unsigned __int64 __fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(char **a1, char a2)
{
  char *v2; // r14
  __int64 v3; // rdi
  char *v6; // rbx
  unsigned int v7; // ecx
  _BYTE *v8; // rax
  char *v10; // rbp
  HANDLE ProcessHeap; // rax

  v2 = *a1;
  v3 = 0LL;
  v6 = *a1;
  v7 = *((_DWORD *)*a1 + 1);
  if ( v7 )
  {
    v8 = v2 + 8;
    while ( *v8 )
    {
      v3 = (unsigned int)(v3 + 1);
      ++v8;
      if ( (unsigned int)v3 >= v7 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    if ( (_DWORD)v3 == v7 )
    {
      v10 = v6;
      v6 = (char *)CSparseAlignedStorage<8,8>::AllocatedStorage::Allocate(v7 + 4);
      *a1 = v6;
      if ( v10 != (char *)&CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage )
      {
        *(_DWORD *)v6 = *(_DWORD *)v2;
        memcpy_0(v6 + 8, v2 + 8, *((unsigned int *)v2 + 1));
        memcpy_0(
          &v6[(*((unsigned int *)v6 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL],
          &v10[(*((unsigned int *)v2 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL],
          8LL * *((unsigned int *)v2 + 1));
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v10);
      }
    }
  }
  *(_DWORD *)v6 |= __ROR4__(1, a2);
  v6[v3 + 8] = a2;
  return (unsigned __int64)&v6[8 * v3 + ((*((unsigned int *)v6 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL)];
}
