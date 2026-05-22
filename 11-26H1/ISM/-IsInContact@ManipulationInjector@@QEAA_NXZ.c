/*
 * XREFs of ?IsInContact@ManipulationInjector@@QEAA_NXZ @ 0x1800B1F9C
 * Callers:
 *     ?ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z @ 0x1800B21F8 (-ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ?DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD810 (-DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BDA84 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 *     ?DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BDC74 (-DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x1800C3680 (-OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x180114C00 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x180114CA0 (-InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z @ 0x1801153D4 (-SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x18011576C (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ManipulationInjector::IsInContact(ManipulationInjector *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 22) )
    return *((_DWORD *)this + 22) != 128;
  return result;
}
