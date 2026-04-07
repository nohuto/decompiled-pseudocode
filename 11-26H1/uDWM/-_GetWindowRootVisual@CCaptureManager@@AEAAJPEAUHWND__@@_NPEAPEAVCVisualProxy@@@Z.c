/*
 * XREFs of ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800A545C
 * Callers:
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18009E6A0 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 *     ?BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18009E9D0 (-BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV-$vector@PEAUHWND__@@V-$all.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A41D0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 *     ?_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800A50CC (-_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCaptur.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@QEAA_NXZ @ 0x1800A6858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scope.c)
 *     ?GetCanvasClientTransformRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x1800CB54C (-GetCanvasClientTransformRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ.c)
 *     ?GetWindowBorderVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x1800CB6B8 (-GetWindowBorderVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_GetWindowRootVisual(
        CCaptureManager *this,
        HWND a2,
        char a3,
        struct CVisualProxy **a4)
{
  unsigned int v7; // edi
  struct CWindowData *v8; // rbx
  CTopLevelWindow *v9; // rcx
  struct CVisualProxy *WindowBorderVisualProxy; // rax
  struct CWindowData *v12; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = this;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = 0;
  *a4 = 0LL;
  v12 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, &v12);
  v8 = v12;
  if ( v12 )
  {
    v9 = (CTopLevelWindow *)*((_QWORD *)v12 + 55);
    if ( v9 )
    {
      if ( a3 )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::GetImpl'::`2'::impl) )
          WindowBorderVisualProxy = *(struct CVisualProxy **)(*((_QWORD *)v8 + 55) + 16LL);
        else
          WindowBorderVisualProxy = CTopLevelWindow::GetWindowBorderVisualProxy(*((CTopLevelWindow **)v8 + 55));
      }
      else
      {
        WindowBorderVisualProxy = CTopLevelWindow::GetCanvasClientTransformRootVisualProxy(v9);
      }
      *a4 = WindowBorderVisualProxy;
    }
  }
  if ( !*a4 )
    v7 = -2147467261;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v7;
}
