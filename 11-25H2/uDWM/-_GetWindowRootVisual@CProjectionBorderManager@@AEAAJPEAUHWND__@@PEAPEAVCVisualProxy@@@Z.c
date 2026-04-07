/*
 * XREFs of ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x1800C4204
 * Callers:
 *     ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800BDD80 (-AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAP.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800C3F00 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@QEAA_NXZ @ 0x1800C5144 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scope.c)
 *     ?GetWindowBorderVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x1800D0188 (-GetWindowBorderVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_GetWindowRootVisual(
        CProjectionBorderManager *this,
        HWND a2,
        struct CVisualProxy **a3)
{
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  struct CWindowData *v8; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = this;
  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  *a3 = 0LL;
  v8 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, &v8);
  v6 = v8;
  if ( v8 && *((_QWORD *)v8 + 55) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::GetImpl'::`2'::impl) )
      *a3 = *(struct CVisualProxy **)(*((_QWORD *)v6 + 55) + 16LL);
    else
      *a3 = CTopLevelWindow::GetWindowBorderVisualProxy(*((CTopLevelWindow **)v6 + 55));
  }
  if ( !*a3 )
    v5 = -2147467261;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v5;
}
