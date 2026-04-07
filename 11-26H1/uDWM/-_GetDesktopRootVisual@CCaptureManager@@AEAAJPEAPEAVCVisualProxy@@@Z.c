/*
 * XREFs of ?_GetDesktopRootVisual@CCaptureManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x1800A5270
 * Callers:
 *     ?SetupDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1560 (-SetupDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A16B0 (-SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 */

__int64 __fastcall CCaptureManager::_GetDesktopRootVisual(CCaptureManager *this, struct CVisualProxy **a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  struct CContainerVisual *RootVisualForDesktop; // rax
  struct CVisualProxy *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  if ( !(unsigned int)GetDesktopID(1LL, &v9) )
  {
    v3 = -2147467259;
    v4 = 1848LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)v3);
    return v3;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v9);
  if ( !RootVisualForDesktop )
  {
    v3 = -2147467261;
    v4 = 1850LL;
    goto LABEL_3;
  }
  v7 = (struct CVisualProxy *)*((_QWORD *)RootVisualForDesktop + 2);
  *a2 = v7;
  if ( !v7 )
  {
    v3 = -2147467261;
    v4 = 1852LL;
    goto LABEL_3;
  }
  return 0LL;
}
