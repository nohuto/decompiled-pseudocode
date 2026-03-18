/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14005B3F8
 * Callers:
 *     GreWindowLayoutComplete @ 0x140023DA8 (GreWindowLayoutComplete.c)
 *     GreCreateSprite @ 0x14005ADD0 (GreCreateSprite.c)
 *     GreDeleteSprite @ 0x14005AEC4 (GreDeleteSprite.c)
 *     GreOnCURSINFODestroy @ 0x14007A94C (GreOnCURSINFODestroy.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1401178F4 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140122EA8 (GreRemoveDisplayDriverRealizations.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x14015EFA0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1401C80D0 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreIsWindowResizeInProgress @ 0x1401D46C0 (GreIsWindowResizeInProgress.c)
 *     bSetDevPreviewRect @ 0x1401E068C (bSetDevPreviewRect.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1401E7590 (bMoveDevPreviewRect.c)
 *     GreWindowBeginLayoutUpdate @ 0x1401E9744 (GreWindowBeginLayoutUpdate.c)
 *     bMoveDevDragRect @ 0x1401EDDDC (bMoveDevDragRect.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     GreWindowResizeComplete @ 0x1401F855C (GreWindowResizeComplete.c)
 *     GreEnableWindowResizeOptimization @ 0x1401F8A0C (GreEnableWindowResizeOptimization.c)
 *     GreWindowResizeStarted @ 0x1401F9E2C (GreWindowResizeStarted.c)
 *     GreDrvDisconnect @ 0x140265948 (GreDrvDisconnect.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14001B280 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  a1(a2);
  return GrepAcquireLockValidate<2>();
}
