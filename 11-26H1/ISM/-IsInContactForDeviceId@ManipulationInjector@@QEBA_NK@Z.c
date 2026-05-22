/*
 * XREFs of ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x180115314
 * Callers:
 *     ?IsInjecting@MPCGestureHandler@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1FB8 (-IsInjecting@MPCGestureHandler@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 *     ?DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD624 (-DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD6A4 (-DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD734 (-DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD810 (-DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD918 (-DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BDC74 (-DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x180113CF8 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x180114C00 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180114D44 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x180115110 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x18011576C (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ManipulationInjector::IsInContactForDeviceId(ManipulationInjector *this, int a2)
{
  __int64 i; // r8

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
  {
    if ( *((_DWORD *)this + i + 178) == a2
      && ((*((_DWORD *)this + 38 * (unsigned int)i + 31) - 65542) & 0xFFFEFFFF) == 0 )
    {
      return 1;
    }
  }
  return 0;
}
