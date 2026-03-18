/*
 * XREFs of ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0
 * Callers:
 *     GreZorderSprite @ 0x14001DFD4 (GreZorderSprite.c)
 *     GreOnCURSINFODestroy @ 0x140029974 (GreOnCURSINFODestroy.c)
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x14006B94C (-vSynchronizeDriver@@YAXK@Z.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006BCA0 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E588 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x14009AEF8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     bSetDevPreviewRect @ 0x14009B814 (bSetDevPreviewRect.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x14009C140 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     GreDeleteSprite @ 0x14009CAE8 (GreDeleteSprite.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreCreateSprite @ 0x1400A33C0 (GreCreateSprite.c)
 *     vCleanupUMWindowlessSprite @ 0x1400A4F50 (vCleanupUMWindowlessSprite.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1400A67DC (GreDwmNotifySpriteMonitorChange.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1401D78A0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1401F5C28 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreWindowLayoutComplete @ 0x1401F77A0 (GreWindowLayoutComplete.c)
 *     GreIsWindowResizeInProgress @ 0x1402036EC (GreIsWindowResizeInProgress.c)
 *     GreWindowBeginLayoutUpdate @ 0x14021874C (GreWindowBeginLayoutUpdate.c)
 *     bMoveDevDragRect @ 0x14021935C (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x140219C58 (bMoveDevPreviewRect.c)
 *     GreWindowResizeComplete @ 0x1402259FC (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x14022FFF0 (GreWindowResizeStarted.c)
 *     GreEnableWindowResizeOptimization @ 0x140231D1C (GreEnableWindowResizeOptimization.c)
 *     GreDrvDisconnect @ 0x140287F5C (GreDrvDisconnect.c)
 *     GreDisableMirrorRendering @ 0x14028B728 (GreDisableMirrorRendering.c)
 *     GreEnableMirrorRendering @ 0x14028B8E4 (GreEnableMirrorRendering.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *GrepAcquireLockValidate<2>()
{
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v2; // rbx
  __int64 v3; // r8
  int v4; // edx
  int v5; // eax

  result = GreGetCurrentThreadCrossSessionCheck();
  v2 = result;
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFFFFFFCuLL) != 0 && (v3 & 4) == 0 )
    {
      v4 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v5 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v3) == 0 )
          v5 = v4;
        v4 = v5;
      }
      if ( v5 > 2 && v5 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v5);
    }
    LOBYTE(i) = *((_BYTE *)v2 + 10);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v2 + 10) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v2 |= 4uLL;
  }
  return result;
}
