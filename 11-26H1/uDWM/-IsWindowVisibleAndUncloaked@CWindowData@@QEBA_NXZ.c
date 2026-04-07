/*
 * XREFs of ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18003AC08
 * Callers:
 *     ?TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z @ 0x1800146B0 (-TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z.c)
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18002E220 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18003A3B8 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z @ 0x18003A5F0 (-ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18003A69C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x18006590C (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z @ 0x18009C488 (-DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C6170 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C6370 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowData::IsWindowVisibleAndUncloaked(CWindowData *this)
{
  bool result; // al

  result = 1;
  if ( (*((_BYTE *)this + 736) & 1) == 0 || (*((_BYTE *)this + 740) & 1) != 0 )
    return 0;
  return result;
}
