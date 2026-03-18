/*
 * XREFs of ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x18001F980 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18001FD44 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800211E0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x180023C38 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180024E5C (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x180024F84 (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x180078C80 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800A9624 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 *     ?SetEffect@CVisual@@IEAAXPEAVCEffect@@@Z @ 0x1800AFCE8 (-SetEffect@CVisual@@IEAAXPEAVCEffect@@@Z.c)
 *     ?GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z @ 0x1800CB0D0 (-GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1800D4488 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?OnSourceModificationsChanged@CWindowNode@@AEAAXXZ @ 0x1800DF778 (-OnSourceModificationsChanged@CWindowNode@@AEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E4D30 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x1801105B8 (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGET.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180110FA0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18011165C (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z @ 0x180111824 (-ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180112540 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?DirtyOnNewData@CVisual@@QEAAXXZ @ 0x180125EE4 (-DirtyOnNewData@CVisual@@QEAAXXZ.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18014B0F4 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x18014B244 (-ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x18014BF4C (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x18014C0CC (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 *     ?SetFlipExSurfaceClip@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x180152AE0 (-SetFlipExSurfaceClip@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?ProcessStateChanges@CCursorVisual@@QEAAX_K@Z @ 0x18018A088 (-ProcessStateChanges@CCursorVisual@@QEAAX_K@Z.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x18018BAE0 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?SetClip@CVisual@@QEAAXPEAVCGeometry@@@Z @ 0x18018BD20 (-SetClip@CVisual@@QEAAXPEAVCGeometry@@@Z.c)
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801973A0 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x1801AC608 (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS.c)
 *     ?SetTransform@CVisual@@QEAAXPEAVCTransform3D@@@Z @ 0x1801B0288 (-SetTransform@CVisual@@QEAAXPEAVCTransform3D@@@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1801B32D0 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1801B7C58 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSpriteClip@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCRegionGeometry@@@Z @ 0x1801BCB64 (-SetSpriteClip@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCRegionGeometry@@@Z.c)
 *     ?SetAlphaMargins@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z @ 0x1801BF918 (-SetAlphaMargins@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z.c)
 *     ?ResetEffectiveGdiSpriteClip@CWindowNode@@AEAAXXZ @ 0x1801C6784 (-ResetEffectiveGdiSpriteClip@CWindowNode@@AEAAXXZ.c)
 *     ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x1801CB834 (-ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTR.c)
 *     ?OnMonitorTargetsChanged@CGlobalComposition@@UEAAXXZ @ 0x1801CE160 (-OnMonitorTargetsChanged@CGlobalComposition@@UEAAXXZ.c)
 *     ?SetMaximizedClipMargins@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z @ 0x1801CEC4C (-SetMaximizedClipMargins@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z.c)
 *     ?ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT@@@Z @ 0x1801DE61C (-ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SE.c)
 *     ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z @ 0x1801E1728 (-ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLU.c)
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1801E4FF0 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1801E5470 (-DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z @ 0x180206DB0 (-Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x18020C8AC (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x18020E974 (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFO.c)
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x180211BC4 (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 *     ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x18021BD60 (-ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGI.c)
 *     ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z @ 0x18021C03C (-ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x18021D0BC (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180260580 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180261068 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z @ 0x180261184 (-SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::PropagateFlags(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // r14
  _QWORD *v5; // rcx
  BOOL v6; // r13d
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // r12
  __int64 i; // rsi
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = a2 | 0x10;
  v4 = a1;
  if ( (a2 & 1) == 0 )
    v3 = a2;
  v5 = (_QWORD *)(a1 + 32);
  v6 = !(a2 & 1);
  if ( (v2 & 3) != 0 )
  {
    if ( (v2 & 3) == 1 )
    {
      v7 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
      goto LABEL_7;
    }
    if ( (v2 & 3) == 2 )
    {
      v7 = 0LL;
      goto LABEL_7;
    }
    if ( (v2 & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v7 = v5;
LABEL_7:
  v8 = detail::pointer_buffer_impl<CResource *,0>::last(v5);
  while ( v7 != (_QWORD *)v8 )
  {
    if ( *v7 != *(_QWORD *)(v4 + 88) )
      (*(void (__fastcall **)(_QWORD, BOOL, __int64))(*(_QWORD *)*v7 + 80LL))(*v7, v6, v4);
    ++v7;
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 160LL))(v4);
  *(_BYTE *)(v4 + 96) |= v3;
  v10 = result;
  if ( (v3 & 0xC) != 0 )
  {
    v3 = v3 & 0xFFFFFF73 | 0x80;
    if ( result )
      ++*(_DWORD *)(result + 28);
  }
  if ( (v3 & 2) != 0 )
    v3 = v3 & 0xFFFFFFBD | 0x40;
  for ( i = *(_QWORD *)(v4 + 88); (*(_BYTE *)(v4 + 102) & 0x20) != 0; i = *(_QWORD *)(i + 88) )
  {
    if ( !i )
      break;
    result = v3 & *(char *)(i + 96);
    if ( (_DWORD)result == v3 )
      break;
    *(_BYTE *)(i + 96) |= v3;
    if ( (*(_QWORD *)(i + 32) & 3) == 0 )
      goto LABEL_30;
    switch ( *(_QWORD *)(i + 32) & 3LL )
    {
      case 1LL:
        v12 = (_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFFCuLL);
        break;
      case 2LL:
        v12 = 0LL;
        break;
      case 3LL:
LABEL_30:
        v12 = (_QWORD *)(i + 32);
        break;
      default:
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v13 = detail::pointer_buffer_impl<CResource *,0>::last(i + 32);
    while ( v12 != (_QWORD *)v13 )
    {
      if ( *v12 != *(_QWORD *)(i + 88) )
        (*(void (__fastcall **)(_QWORD, BOOL, __int64))(*(_QWORD *)*v12 + 80LL))(*v12, v6, i);
      ++v12;
    }
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)i + 160LL))(i);
    if ( result && v10 != result )
    {
      if ( (v3 & 0x80u) != 0 )
        ++*(_DWORD *)(result + 24);
      v10 = result;
    }
    v4 = i;
  }
  return result;
}
