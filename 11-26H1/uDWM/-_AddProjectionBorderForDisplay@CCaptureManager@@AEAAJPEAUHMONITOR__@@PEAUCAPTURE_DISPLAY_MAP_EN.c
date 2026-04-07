/*
 * XREFs of ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3FBC
 * Callers:
 *     ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1DD0 (-StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1F90 (-StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800A3490 (-UpdateDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?UpdateFilteredDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800A3580 (-UpdateFilteredDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3EA8 (-_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A66B4 (-_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1.c)
 * Callees:
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180013990 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50 (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18007D428 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18009D388 (--$_Emplace_reallocate@AEBV-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x18009EBC0 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800BEBC8 (-UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::_AddProjectionBorderForDisplay(
        CCaptureManager *this,
        HMONITOR a2,
        struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *a3)
{
  int DisplayRect; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  CBaseObject *v10; // rbx
  CContainerVisual *OverlayRootVisualForDesktop; // rax
  int inserted; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  CBaseObject **v15; // rdx
  CBaseObject *v17[2]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v20; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *(_OWORD *)v17 = 0LL;
  DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, v17);
  v6 = DisplayRect;
  if ( DisplayRect < 0 )
  {
    v7 = (unsigned int)DisplayRect;
    v8 = 1915LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)v7);
    goto LABEL_19;
  }
  v20 = *(struct tagRECT *)v17;
  v18 = 0LL;
  if ( !(unsigned int)GetDesktopID(1LL, &v18) )
  {
    v6 = -2147467259;
    v7 = 2147500037LL;
    v8 = 1924LL;
    goto LABEL_5;
  }
  v17[0] = 0LL;
  v9 = CProjectionBorderVisual::Create(v17);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x787,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v9);
    if ( v17[0] )
      CBaseObject::Release(v17[0]);
    goto LABEL_19;
  }
  v10 = v17[0];
  *((_DWORD *)v17[0] + 55) = 1;
  OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                  v18,
                                  1);
  if ( !OverlayRootVisualForDesktop )
  {
    OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                    v18);
    if ( !OverlayRootVisualForDesktop )
    {
      inserted = -2147467261;
      v13 = 1937LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)inserted);
      CBaseObject::Release(v10);
      v6 = inserted;
      goto LABEL_19;
    }
  }
  inserted = CContainerVisual::InsertChildBefore(OverlayRootVisualForDesktop, (CBaseObject ***)v10, 0LL);
  if ( inserted < 0 )
  {
    v13 = 1938LL;
    goto LABEL_12;
  }
  CProjectionBorderVisual::UpdateRect(v10, &v20);
  CVisual::SetOpacity(v10, 1.0, v14);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v10 + 3) + 48LL))(*((_QWORD *)v10 + 3));
  v15 = (CBaseObject **)*((_QWORD *)a3 + 4);
  if ( v15 == *((CBaseObject ***)a3 + 5) )
  {
    std::vector<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CProjectionBorderVisual> const &>(
      (const char *)a3 + 24,
      (__int64)v15,
      v17);
  }
  else
  {
    *v15 = v10;
    CBaseObject::AddRef(v10);
    *((_QWORD *)a3 + 4) += 8LL;
  }
  CBaseObject::Release(v10);
  v6 = 0;
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return v6;
}
