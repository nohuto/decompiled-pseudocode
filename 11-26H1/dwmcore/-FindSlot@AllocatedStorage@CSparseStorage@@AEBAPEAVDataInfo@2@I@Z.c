/*
 * XREFs of ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x1800C88D0
 * Callers:
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x1800737B0 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800C6AD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800D2EB0 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x180177DE4 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x18017840C (-GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ.c)
 *     ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x18018D190 (-GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801975CC (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x18021C74C (-GetHeatMapProperties@CVisual@@QEBA-AUHeatMapProperty@1@XZ.c)
 * Callees:
 *     <none>
 */

struct CSparseStorage::DataInfo *__fastcall CSparseStorage::AllocatedStorage::FindSlot(
        CSparseStorage::AllocatedStorage *this,
        int a2)
{
  unsigned int v2; // r8d
  struct CSparseStorage::DataInfo *result; // rax

  v2 = *((_DWORD *)this + 3);
  result = (CSparseStorage::AllocatedStorage *)((char *)this + 12);
  if ( (HIBYTE(v2) & 0x7F) != a2 )
  {
    do
    {
      result = (struct CSparseStorage::DataInfo *)((char *)result + (v2 & 0xFFFFFF) + 4);
      v2 = *(_DWORD *)result;
    }
    while ( (HIBYTE(*(_DWORD *)result) & 0x7F) != a2 );
  }
  return result;
}
