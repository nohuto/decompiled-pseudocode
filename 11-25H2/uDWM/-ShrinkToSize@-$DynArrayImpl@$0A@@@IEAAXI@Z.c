/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800079C0
 * Callers:
 *     ?Reset@AtlasedRects@@QEAAXXZ @ 0x18000545C (-Reset@AtlasedRects@@QEAAXXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAXXZ @ 0x180008544 (-RemoveAll@VisualCollection@@QEAAXXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800085F8 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x1800103F8 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?DestroyPendingSprites@CWindowList@@QEAAXXZ @ 0x180019400 (-DestroyPendingSprites@CWindowList@@QEAAXXZ.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18001AAFC (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18002DAF8 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UD2D_POINT_3F@@$0A@@@PEAV?$DynArray@UD2D_POINT_2F@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x18002E8B0 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?Reset@Mesh2D@@QEAAXXZ @ 0x18002F438 (-Reset@Mesh2D@@QEAAXXZ.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x180033AC0 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18003750C (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x1800375BC (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18003769C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x1800377E8 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x1800666E0 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18006B984 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z @ 0x180078170 (-OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z.c)
 *     ?Reset@CAnimationResource@@UEAAJXZ @ 0x180088500 (-Reset@CAnimationResource@@UEAAJXZ.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x18008D5BC (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800924C0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ??1CapturedWindowRepresentation@@MEAA@XZ @ 0x1800A8D40 (--1CapturedWindowRepresentation@@MEAA@XZ.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800CA348 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1800E9790 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EB118 (memcpy_0.c)
 */

void __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v3; // rcx
  unsigned __int64 v4; // r8
  int v5; // eax
  void *v6; // rax

  v3 = *(void **)(a1 + 8);
  if ( *(void **)a1 != v3 )
  {
    v4 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v3, *(const void **)a1, (unsigned int)v4);
        DefaultHeap::Free(*(void **)a1);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v5 = *(_DWORD *)(a1 + 16);
LABEL_6:
        *(_DWORD *)(a1 + 20) = v5;
        return;
      }
      v6 = DefaultHeap::Realloc(*(void **)a1, (unsigned int)v4);
      if ( v6 )
      {
        *(_QWORD *)a1 = v6;
        v5 = *(_DWORD *)(a1 + 24);
        goto LABEL_6;
      }
    }
  }
}
