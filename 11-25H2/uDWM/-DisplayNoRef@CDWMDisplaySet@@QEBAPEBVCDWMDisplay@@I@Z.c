/*
 * XREFs of ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z @ 0x180068368
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800661A8 (-IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x1800666E0 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800682D4 (-GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV-$vector@PEBVCDWM.c)
 *     ?CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800AF1B8 (-CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV-$vector@V-.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B282C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?GetDisplayFromFinalPosition@CDisplayModeChangeAnimationHelper@@CAPEBVCDWMDisplay@@PEBVCDWMDisplaySet@@AEBUD2D_POINT_2F@@@Z @ 0x1800B3894 (-GetDisplayFromFinalPosition@CDisplayModeChangeAnimationHelper@@CAPEBVCDWMDisplay@@PEBVCDWMDispl.c)
 * Callees:
 *     <none>
 */

const struct CDWMDisplay *__fastcall CDWMDisplaySet::DisplayNoRef(CDWMDisplaySet *this, unsigned int a2)
{
  return *(const struct CDWMDisplay **)(*((_QWORD *)this + 5) + 8LL * a2);
}
