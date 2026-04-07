/*
 * XREFs of ?_RemoveVisuals@CCaptureManager@@AEAAXAEAV?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A5554
 * Callers:
 *     ?StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800763C0 (-StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A2E90 (-StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800A3490 (-UpdateDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?UpdateFilteredDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800A3580 (-UpdateFilteredDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A66B4 (-_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x1800357D0 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@0@@Z @ 0x18009D09C (--$_Destroy_range@V-$allocator@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@Y.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCaptureManager::_RemoveVisuals(__int64 a1, struct CVisual ***a2)
{
  struct CVisual **v3; // rsi
  struct CVisual **i; // rbx
  CContainerVisual *v5; // rcx
  CBaseObject **v6; // rdx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = a2[1];
  for ( i = *a2; i != v3; ++i )
  {
    if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(i) )
    {
      v5 = (CContainerVisual *)*((_QWORD *)*i + 3);
      if ( v5 )
        CContainerVisual::RemoveChild(v5, *i);
    }
  }
  v6 = a2[1];
  if ( *a2 != v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>>(*a2, v6);
    a2[1] = *a2;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
}
