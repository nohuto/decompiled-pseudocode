/*
 * XREFs of ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A66B4
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CCaptureManager@@UEAAJXZ @ 0x180078240 (-UpdateCaptureControllerPropertiesFromDisplays@CCaptureManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180084FD8 (-_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCon.c)
 *     ?_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3EA8 (-_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3FBC (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 *     ?_RemoveVisuals@CCaptureManager@@AEAAXAEAV?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A5554 (-_RemoveVisuals@CCaptureManager@@AEAAXAEAV-$vector@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Micr.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A5F04 (-_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCap.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A6294 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A6490 (-_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCapture.c)
 */

__int64 __fastcall CCaptureManager::_UpdateDisplayCaptureControllerProperties(
        CCaptureManager *this,
        struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *a2)
{
  HMONITOR v3; // rdx
  CCaptureManager *v4; // rcx
  int updated; // edi
  __int64 v6; // rdx
  CCaptureManager *v8; // rcx
  CCaptureManager *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)a2 + 49) )
  {
    CCaptureManager::_RemoveVisuals((__int64)this, (struct CVisual ***)a2 + 3);
    if ( *((_BYTE *)a2 + 48) )
    {
      v3 = (HMONITOR)*((_QWORD *)a2 + 2);
      if ( v3 )
        CCaptureManager::_AddProjectionBorderForDisplay(this, v3, a2);
      else
        CCaptureManager::_AddProjectionBorderForAllDisplays(this, a2);
    }
  }
  updated = CCaptureManager::_UpdateCaptureControllerTransformFromDisplay(
              this,
              *((HMONITOR *)a2 + 2),
              *((struct CCaptureControllerProxy **)a2 + 1));
  if ( updated < 0 )
  {
    v6 = 2259LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CCaptureManager::_UpdateCaptureControllerContentOffsetFromDisplay(
              v4,
              *((HMONITOR *)a2 + 2),
              *((struct CCaptureControllerProxy **)a2 + 1));
  if ( updated < 0 )
  {
    v6 = 2262LL;
    goto LABEL_8;
  }
  updated = CCaptureManager::_SendBoundsToCaptureControllerFromDisplay(
              v8,
              *((HMONITOR *)a2 + 2),
              *((struct CCaptureControllerProxy **)a2 + 1));
  if ( updated < 0 )
  {
    v6 = 2263LL;
    goto LABEL_8;
  }
  v10 = CCaptureManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(
          v9,
          *((HMONITOR *)a2 + 2),
          *((struct CCaptureControllerProxy **)a2 + 1));
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8DA,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
